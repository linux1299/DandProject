
package dandriscv.gensoc
import dandriscv.plugin_simple._
import dandriscv.super_scalar_1issue._
import dandriscv.tulip._
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


class DandSocV2(val config: DandConfig) extends Component{

  // ================================ Config ===============================
  val Axi4Cfg64_id2 = Axi4Config(
    addressWidth = 32,
    dataWidth = 64,
    idWidth = 2
  )
  val Axi4Cfg64_id4 = Axi4Config(
    addressWidth = 32,
    dataWidth = 64,
    idWidth = 4
  )

  val Axi4Cfg32_id4 = Axi4Config(
    addressWidth = 32,
    idWidth = 4, 
    dataWidth = 32
  )
  val Axi4Cfg32_id2 = Axi4Config(
    addressWidth = 32,
    idWidth = 2, 
    dataWidth = 32
  )

  val io = new Bundle{
    val asyncResetn = in Bool()
    val axiClk      = in Bool()
    val uart        = master(Uart())
    val axi_frame_buff = master(Axi4(Axi4Cfg32_id4))
    val axi_ddr = master(Axi4(Axi4Cfg32_id4))
    val axi_usb = slave(Axi4(Axi4Cfg32_id2))
    val usb_done = in Bool()
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
    reset = !io.asyncResetn,
    frequency = FixedFrequency(50 MHz)
  )

  val cpu_rst = resetCtrl.axiReset || !io.usb_done

  val cpuClockDomain = ClockDomain(
    clock = io.axiClk,
    reset = cpu_rst,
    frequency = FixedFrequency(50 MHz)
  )

  val axi = new ClockingArea(axiClockDomain) {

    
    val downsizer = Axi4Downsizer(Axi4Cfg64_id4, Axi4Cfg32_id4)
    val upsizer = Axi4Upsizer(Axi4Cfg32_id2, Axi4Cfg64_id2, 4)

    // ================================ IP ===============================

    
    val apbBridge = Axi4SharedToApb3Bridge(
      addressWidth = 20,
      dataWidth    = 32,
      idWidth      = 4
    )

    val cpu_area = new ClockingArea(cpuClockDomain){
      // val cpu = new DandMaxFreq()
      val cpu = new Tulip()
      cpu.retire_ready_0 := True
      cpu.retire_ready_1 := True
    }

    val uartCtrl = Apb3Uart()
    uartCtrl.io.apb.addAttribute(Verilator.public)
    uartCtrl.io.clock := axiClockDomain.clock
    uartCtrl.io.resetn := ~axiClockDomain.reset

    val timer = new Apb3Timer()

    upsizer.io.input <> io.axi_usb
    
    // ================================ Crossbar 64 ===============================
    val axiCrossbar64 = Axi4CrossbarFactory()
    axiCrossbar64.addSlaves(
      downsizer.io.input -> (0x00000000L,   4 GB),   // all to downsizer
    )
    axiCrossbar64.addConnections(
      cpu_area.cpu.icacheReader  -> List(downsizer.io.input),
      cpu_area.cpu.dcacheReader  -> List(downsizer.io.input),
      cpu_area.cpu.dcacheWriter  -> List(downsizer.io.input),
      upsizer.io.output -> List(downsizer.io.input),
    )
    
    // ================================ Crossbar 32 ===============================
    val axiCrossbar32 = Axi4CrossbarFactory()
    axiCrossbar32.addSlaves(
      apbBridge.io.axi  -> (0x10000000L,  128 Byte), // 0x1000_0000 ~ 0x1000_007f
      io.axi_frame_buff -> (0x11000000L,  2 MB), // 0x1100_0000 ~ 0x111f_ffff
      io.axi_ddr        -> (0x80000000L,  256 MB) // 0x8000_0000 ~ 0x8fff_ffff
    )
    axiCrossbar32.addConnections(
      downsizer.io.output -> List(apbBridge.io.axi, io.axi_frame_buff, io.axi_ddr)
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
object DandSocV2WithMemoryInit{
  def main(args: Array[String]) {
    GenDandSocSimpleConfig.spinal.generateVerilog({
      val toplevel = new DandSocV2(DandConfig.default)
      // ====================== for tulip ======================
      BinTools.initRam(toplevel.axi.cpu_area.cpu.icache.sram.mem, "/home/lin/DandProject/sw/am-kernels/benchmarks/coremark/build/coremark-riscv64-nemu.bin", false)
      // BinTools.initRam(toplevel.axi.cpu_area.cpu.icache.sram.mem, "/home/lin/DandProject/sw/am-kernels/kernels/vga_test/build/vga_test-riscv64-nemu.bin", false)
      
      toplevel
    })
  }
}