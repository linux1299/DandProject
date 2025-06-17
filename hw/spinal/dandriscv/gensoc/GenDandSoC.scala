
package dandriscv.gensoc
import dandriscv.plugin_simple._
import dandriscv.super_scalar_1issue._
import dandriscv.ip._
import dandriscv.{plugin_simple, DandRiscvSimple, DandRiscvSimpleConfig}
import spinal.lib.misc._

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba3.apb._
import spinal.lib.bus.amba4.axi._
import spinal.lib.com.jtag.Jtag
import spinal.lib.com.jtag.sim.JtagTcp
import spinal.lib.com.uart.sim.{UartDecoder, UartEncoder}
import spinal.lib.com.uart.{Apb3UartCtrl, Uart, UartCtrlGenerics, UartCtrlMemoryMappedConfig}
import spinal.lib.graphic.RgbConfig
import spinal.lib.graphic.vga.{Axi4VgaCtrl, Axi4VgaCtrlGenerics, Vga}
import spinal.lib.io.TriStateArray
import spinal.lib.memory.sdram.SdramGeneration.SDR
import spinal.lib.memory.sdram._
import spinal.lib.memory.sdram.sdr.sim.SdramModel
import spinal.lib.memory.sdram.sdr.{Axi4SharedSdramCtrl, IS42x320D, SdramInterface, SdramTimings}
import spinal.lib.misc.HexTools
import spinal.lib.soc.pinsec.{PinsecTimerCtrl, PinsecTimerCtrlExternal}
import spinal.lib.system.debugger.{JtagAxi4SharedDebugger, JtagBridge, SystemDebugger, SystemDebuggerConfig}

import scala.collection.mutable.ArrayBuffer
import scala.collection.Seq


class DandSoc(val config: DandConfig) extends Component{

  // ================================ Config ===============================
  val masterAxi4Cfg64 = Axi4Config(
    addressWidth = 32,
    dataWidth = 64,
    idWidth = 4
  )
  val slaveAxi4Cfg32 = masterAxi4Cfg64.copy(
    idWidth = 4, 
    dataWidth = 32
  )

  val io = new Bundle{
    val asyncResetn = in Bool()
    val axiClk      = in Bool()
    val uart        = master(Uart())
    val axi_frame_buff = master(Axi4(slaveAxi4Cfg32))
  }

  val resetCtrlClockDomain = ClockDomain(
    clock = io.axiClk,
    reset = io.asyncResetn,
    config = ClockDomainConfig(
      clockEdge        = RISING,
      resetKind        = ASYNC,
      resetActiveLevel = LOW
    )
  )

  val resetCtrl = new ClockingArea(resetCtrlClockDomain) {
    val systemResetUnbuffered  = False
    //Implement an counter to keep the reset axiResetOrder high 64 cycles
    // Also this counter will automaticly do a reset when the system boot.
    val systemResetCounter = Reg(UInt(6 bits)) init(0)
    when(systemResetCounter =/= U(systemResetCounter.range -> true)){
      systemResetCounter := systemResetCounter + 1
      systemResetUnbuffered := True
    }
    when(BufferCC(!io.asyncResetn)){
      systemResetCounter := 0
    }

    //Create all reset used later in the design
    val axiReset     = RegNext(systemResetUnbuffered).addAttribute("MAX_FANOUT=32")
  }

  val axiClockDomain = ClockDomain(
    clock = io.axiClk,
    reset = resetCtrl.axiReset,
    frequency = FixedFrequency(50 MHz)
  )

  val axi = new ClockingArea(axiClockDomain) {

    
    val downsizer = Axi4Downsizer(masterAxi4Cfg64, slaveAxi4Cfg32)

    // ================================ IP ===============================
    val ram = Axi4SharedOnChipRam(
      dataWidth = 64,
      byteCount = 2 MB,
      idWidth = 4
    )
    
    val apbBridge = Axi4SharedToApb3Bridge(
      addressWidth = 20,
      dataWidth    = 32,
      idWidth      = 4
    )

    val cpu = new DandMaxFreq()

    val uartCtrl = Apb3Uart()
    uartCtrl.io.apb.addAttribute(Verilator.public)
    uartCtrl.io.clock := axiClockDomain.clock
    uartCtrl.io.resetn := ~axiClockDomain.reset

    val timer = new Apb3Timer()

    // val frame_buff = Axi4SharedOnChipRam(
    //   dataWidth = 32,
    //   byteCount = 512 kB,
    //   idWidth = 4
    // )
    
    // ================================ Crossbar 64 ===============================
    val axiCrossbar64 = Axi4CrossbarFactory()
    axiCrossbar64.addSlaves(
      ram.io.axi         -> (0x80000000L,   2 GB),   // DRAM sim 0x8000_0000 ~ 0xffff_ffff
      downsizer.io.input -> (0x10000000L,   768 MB) // 0x1000_0000 ~ 0x3fff_ffff
    )
    axiCrossbar64.addConnections(
      cpu.icacheReader  -> List(ram.io.axi, downsizer.io.input),
      cpu.dcacheReader  -> List(ram.io.axi, downsizer.io.input),
      cpu.dcacheWriter  -> List(ram.io.axi, downsizer.io.input)
    )
    

    // ================================ Crossbar 32 ===============================
    val axiCrossbar32 = Axi4CrossbarFactory()
    axiCrossbar32.addSlaves(
      apbBridge.io.axi -> (0x10000000L,   128 Byte), // 0x1000_0000 ~ 0x1000_007f
      // frame_buff.io.axi -> (0x11000000L,  2 MB) // 0x1100_0000 ~ 0x111f_ffff
      io.axi_frame_buff -> (0x11000000L,  2 MB) // 0x1100_0000 ~ 0x111f_ffff
    )
    axiCrossbar32.addConnections(
      // downsizer.io.output -> List(apbBridge.io.axi, frame_buff.io.axi)
      downsizer.io.output -> List(apbBridge.io.axi, io.axi_frame_buff)
    )
    
    axiCrossbar64.build()
    axiCrossbar32.build()

    // ================================ APB ===============================
    val apbDecoder = Apb3Decoder(
      master = apbBridge.io.apb,
      slaves = List(
        uartCtrl.io.apb  -> (0x0, 64),
        timer.io.apb     -> (0x40, 64)
      )
    )
  }

  // ================================ IO ===============================
  io.uart           <> axi.uartCtrl.io.uart
}


//Artix7-SoC with memory init
object DandSocWithMemoryInit{
  def main(args: Array[String]) {
    GenDandSocSimpleConfig.spinal.generateVerilog({
      val toplevel = new DandSoc(DandConfig.default)
      // BinTools.initRam(toplevel.axi.ram.ram, "/home/lin/SpinalProjects/DandRiscvSoC/ysyx-workbench/am-kernels/benchmarks/coremark/build/coremark-riscv64-nemu.bin", false)
      // BinTools.initRam(toplevel.axi.ram.ram, "/home/lin/SpinalProjects/DandRiscvSoC/ysyx-workbench/am-kernels/kernels/vga_test/build/vga_test-riscv64-nemu.bin", false)
      // BinTools.initRam(toplevel.axi.ram.ram, "/home/lin/SpinalProjects/DandRiscvSoC/ysyx-workbench/am-kernels/kernels/snake/build/snake-riscv64-nemu.bin", false)
      // BinTools.initRam(toplevel.axi.ram.ram, "/home/lin/SpinalProjects/DandRiscvSoC/ysyx-workbench/am-kernels/kernels/kbd_test/build/typing-game-riscv64-nemu.bin", false)
      BinTools.initRam(toplevel.axi.ram.ram, "/home/lin/SpinalProjects/DandRiscvSoC/ysyx-workbench/am-kernels/kernels/litenes/build/litenes-riscv64-nemu.bin", false)
      toplevel
    })
  }
}