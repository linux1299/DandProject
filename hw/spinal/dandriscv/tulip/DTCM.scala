package dandriscv.tulip

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi._

// ===============================================
// DTCM Top Module
// ===============================================
case class DTCM(val config : DCacheConfig, val axiConfig : Axi4Config) extends Component {

  import config._
  // ============================= IO =============================
  val stall = out Bool()
  val flush = in Bool()
  val dcache_src = slave(DCachePorts(32, 64))
  val dcacheReader = master(Axi4ReadOnly(axiConfig)).setName("dcache")
  val dcacheWriter = master(Axi4WriteOnly(axiConfig)).setName("dcache")

  // connect biu and cpu ports
  val biu = new BIU(config)
  dcache_src.cmd <> biu.cpu.cmd
  dcache_src.rsp <> biu.cpu.rsp
  biu.flush := flush
  dcache_src.stall <> biu.stall

  // data ram
  val sram = new Sram(64, 12) // 8 byte * 2^12 = 32KB
  sram.ports.cmd.valid := biu.cpu_bypass.cmd.valid
  sram.ports.cmd.addr  := biu.cpu_bypass.cmd.addr(14 downto 3)
  sram.ports.cmd.wen   := biu.cpu_bypass.cmd.wen
  sram.ports.cmd.wdata := biu.cpu_bypass.cmd.wdata
  sram.ports.cmd.wstrb := biu.cpu_bypass.cmd.wstrb

  // ar channel
  dcacheReader.ar.valid := False
  dcacheReader.ar.id := 0
  dcacheReader.ar.len := 0
  dcacheReader.ar.size := 0
  dcacheReader.ar.burst := 0
  dcacheReader.ar.addr := 0
  // r channel
  dcacheReader.r.ready := True
  // aw channel
  dcacheWriter.aw.valid := False
  dcacheWriter.aw.id := 0
  dcacheWriter.aw.len := 0
  dcacheWriter.aw.size := 0
  dcacheWriter.aw.burst := 0
  dcacheWriter.aw.addr := 0
  // w channel
  dcacheWriter.w.valid := False
  dcacheWriter.w.data := 0
  dcacheWriter.w.strb := 0
  dcacheWriter.w.last := False
  // b channel
  dcacheWriter.b.ready := True

  // to biu signal
  biu.cpu_bypass.cmd.ready := True
  biu.cpu_bypass.rsp.valid := sram.ports.cmd.valid
  biu.cpu_bypass.rsp.data  := sram.ports.rsp.data
  // Sideband pipelined through DTCM (1-cycle SRAM latency)
  val dtcm_sb_rd_wen   = RegNextWhen(biu.cpu_bypass.cmd.rd_wen,   biu.cpu_bypass.cmd.fire) init(False)
  val dtcm_sb_rd_addr  = RegNextWhen(biu.cpu_bypass.cmd.rd_addr,  biu.cpu_bypass.cmd.fire) init(0)
  val dtcm_sb_pc       = RegNextWhen(biu.cpu_bypass.cmd.pc,       biu.cpu_bypass.cmd.fire) init(0)
  val dtcm_sb_instr    = RegNextWhen(biu.cpu_bypass.cmd.instr,    biu.cpu_bypass.cmd.fire) init(0)
  val dtcm_sb_rob_adr  = RegNextWhen(biu.cpu_bypass.cmd.rob_adr,  biu.cpu_bypass.cmd.fire) init(0)
  val dtcm_sb_lsu_ctrl = RegNextWhen(biu.cpu_bypass.cmd.lsu_ctrl, biu.cpu_bypass.cmd.fire) init(0)
  val dtcm_sb_addr_off = RegNextWhen(biu.cpu_bypass.cmd.addr_off, biu.cpu_bypass.cmd.fire) init(0)
  val dtcm_sb_is_timer = RegNextWhen(biu.cpu_bypass.cmd.is_timer, biu.cpu_bypass.cmd.fire) init(False)
  biu.cpu_bypass.rsp.rd_wen   := dtcm_sb_rd_wen
  biu.cpu_bypass.rsp.rd_addr  := dtcm_sb_rd_addr
  biu.cpu_bypass.rsp.pc       := dtcm_sb_pc
  biu.cpu_bypass.rsp.instr    := dtcm_sb_instr
  biu.cpu_bypass.rsp.rob_adr  := dtcm_sb_rob_adr
  biu.cpu_bypass.rsp.lsu_ctrl := dtcm_sb_lsu_ctrl
  biu.cpu_bypass.rsp.addr_off := dtcm_sb_addr_off
  biu.cpu_bypass.rsp.is_timer := dtcm_sb_is_timer
}
