package dandriscv.tulip

import spinal.core._
import spinal.lib.bus.amba4.axi._
import spinal.lib._
import spinal.lib.misc._

case class Tulip() extends Component {
  import CpuConfig._

  

  // ================= Config ===============
  val icache_config = ICacheConfig(
    cacheSize = 16*1024, // 16 KB
    wayCount = 2
  )
  val dcache_config = DCacheConfig(
    cacheSize = 16*1024, // 16 KB
    wayCount = 2,
    bypassAddrLow0  = 0x10000000l,
    bypassAddrHigh0 = 0x3fffffffl,
    bypassAddrLow1  = 0x10001000l,
    bypassAddrHigh1 = 0x10001fffl,
    bypassAddrLow2  = 0x10001000l,
    bypassAddrHigh2 = 0x10001fffl
  )
  val icache_axi_config = Axi4Config(
    addressWidth=32, 
    dataWidth=64, 
    idWidth=2,
    useId=true, 
    useLast=true, 
    useRegion=false, 
    useBurst=true, 
    useLock=false, 
    useCache=false, 
    useSize=true, 
    useQos=false,
    useLen=true, 
    useResp=true, 
    useProt=false, 
    useStrb=false
  )
  val dcache_axi_config = Axi4Config(
    addressWidth=32, 
    dataWidth=64, 
    idWidth=2,
    useId=true, 
    useLast=true, 
    useRegion=false, 
    useBurst=true, 
    useLock=false, 
    useCache=false, 
    useSize=true, 
    useQos=false,
    useLen=true, 
    useResp=true, 
    useProt=false, 
    useStrb=true
  )
  val gshare_config = PredictorConfig(
    RAS_ENTRIES = 4, 
    BTB_ENTRIES = 4, 
    PHT_ENTRIES = 32
  )


  // ================= IO ===============
  // for Test
  val retire_ready_0 = in Bool()
  val retire_ready_1 = in Bool()
  // icache next level AXI ports/ direct ports
  val icacheReader = master(Axi4ReadOnly(icache_axi_config)).setName("icache")
  // dcache next level AXI ports/ or direct ports
  val dcacheReader = master(Axi4ReadOnly(dcache_axi_config)).setName("dcache")
  val dcacheWriter = master(Axi4WriteOnly(dcache_axi_config)).setName("dcache")


  // ================= Instance ===============
  val fetch  = new Fetch(0x80000000l)
  val icache = new ICacheTop(itcm_en=true, icache_config, icache_axi_config)
  val bpu    = new gshare_predictor(gshare_config)
  val decode = new Decode()
  val issue  = new Issue()
  val dispat = new Dispatch()
  val regfile= new Regfile()
  val commit = new Commit()
  val bju_0  = new BJU()
  val alu_1  = new ALU()
  val alu_2  = new ALU()
  val div_3  = new DIV()
  val lsu_4  = new LSU()
  // val dcache = new DCacheTop(dcache_config, dcache_axi_config)
  val dcache = new BIUTop(dcache_config, dcache_axi_config)

  // ================= Top Signals ===============
  val change_flow  = bju_0.interrupt_valid || bju_0.redirect_valid
  val branch_valid = bju_0.branch_valid

  // ================= Fetch ===============
  fetch.flush             := change_flow
  fetch.interrupt_vld     := bju_0.interrupt_valid
  fetch.interrupt_pc      := bju_0.interrupt_pc
  fetch.redirect_vld      := bju_0.redirect_valid
  fetch.redirect_pc       := bju_0.redirect_pc
  fetch.icache_ports.rsp  << icache.icache_src.rsp
  
  fetch.branch_taken      := bpu.predict_taken
  fetch.branch_pc         := bpu.target_pc

  // ================= ICache ===============
  icache.flush           := False
  icache.icache_src.cmd  << fetch.icache_ports.cmd
  
  // ================= BPU ===============
  bpu.predict_pc         := fetch.predict_pc
  bpu.predict_valid      := fetch.predict_valid
  bpu.train_valid        := bju_0.train_valid
  bpu.train_taken        := bju_0.train_taken
  bpu.train_mispredicted := bju_0.train_mispred
  bpu.train_history      := bju_0.train_history
  bpu.train_pc           := bju_0.train_pc
  bpu.train_pc_next      := bju_0.train_pc_next
  bpu.train_is_call      := bju_0.train_is_call
  bpu.train_is_ret       := bju_0.train_is_ret
  bpu.train_is_jmp       := bju_0.train_is_jmp

  // ================= Decode ===============
  decode.dec_src(0)      << fetch.fch_dst(0).throwWhen(change_flow)
  decode.dec_src(1)      << fetch.fch_dst(1).throwWhen(change_flow)

  // ================= ISSUE ===============
  issue.flush      := change_flow
  issue.iss_src(0) << decode.dec_dst(0)
  issue.iss_src(1) << decode.dec_dst(1)

  // ================= Dispatch ===============
  dispat.flush               := change_flow
  dispat.commit_fifo_ready   := commit.commit_fifo_ready
  dispat.tail_adr_older      := commit.tail_adr_older
  dispat.tail_adr_newer      := commit.tail_adr_newer
  dispat.dis_src(0) << issue.iss_dst(0).throwWhen(change_flow).haltWhen(commit.dis_stall)
  dispat.dis_src(1) << issue.iss_dst(1).throwWhen(change_flow || branch_valid).haltWhen(commit.dis_stall || (issue.iss_dst(0).valid && issue.iss_dst(0).iss_pkg.exe_sel===ExeSelEnum.BJU))

  dispat.wbc_rd_wen(0) := bju_0.bju_dst.fire && bju_0.bju_dst.rd_wen
  dispat.wbc_rd_wen(1) := alu_1.alu_dst.fire && alu_1.alu_dst.rd_wen && !commit.flush_al1
  dispat.wbc_rd_wen(2) := alu_2.alu_dst.fire && alu_2.alu_dst.rd_wen && !commit.flush_al2
  dispat.wbc_rd_wen(3) := div_3.div_dst.fire && div_3.div_dst.rd_wen && !commit.flush_div
  dispat.wbc_rd_wen(4) := lsu_4.lsu_dst.fire && lsu_4.lsu_dst.rd_wen

  dispat.wbc_rd_addr(0) := bju_0.bju_dst.rd_addr
  dispat.wbc_rd_addr(1) := alu_1.alu_dst.rd_addr
  dispat.wbc_rd_addr(2) := alu_2.alu_dst.rd_addr
  dispat.wbc_rd_addr(3) := div_3.div_dst.rd_addr
  dispat.wbc_rd_addr(4) := lsu_4.lsu_dst.rd_addr

  dispat.wbc_rd_data(0) := bju_0.bju_dst.rd_data
  dispat.wbc_rd_data(1) := alu_1.alu_dst.rd_data
  dispat.wbc_rd_data(2) := alu_2.alu_dst.rd_data
  dispat.wbc_rd_data(3) := div_3.div_dst.rd_data
  dispat.wbc_rd_data(4) := lsu_4.lsu_dst.rd_data

  dispat.ret_rd_wen(0) := commit.wbc_dst(0).fire && commit.wbc_dst(0).rd_wen
  dispat.ret_rd_wen(1) := commit.wbc_dst(1).fire && commit.wbc_dst(1).rd_wen

  dispat.ret_rd_addr(0) := commit.wbc_dst(0).rd_addr
  dispat.ret_rd_addr(1) := commit.wbc_dst(1).rd_addr

  dispat.ret_rd_data(0) := commit.wbc_dst(0).rd_data
  dispat.ret_rd_data(1) := commit.wbc_dst(1).rd_data



  // =============== regfile ===============
  regfile.read_0 <> dispat.read_regfile(0)
  regfile.read_1 <> dispat.read_regfile(1)
  regfile.write_0.rd_wen  := commit.wbc_dst(0).fire && commit.wbc_dst(0).rd_wen
  regfile.write_1.rd_wen  := commit.wbc_dst(1).fire && commit.wbc_dst(1).rd_wen
  regfile.write_0.rd_addr := commit.wbc_dst(0).rd_addr
  regfile.write_1.rd_addr := commit.wbc_dst(1).rd_addr
  regfile.write_0.rd_data := commit.wbc_dst(0).rd_data
  regfile.write_1.rd_data := commit.wbc_dst(1).rd_data


  // ================= BJU ===============
  val bju_to_head_distance = bju_0.bju_src.tail_adr - commit.head_adr_out
  bju_0.bju_src        << dispat.dis_to_bju
  bju_0.timer_int      := lsu_4.timer_int

  // ================= ALU 1 ===============
  val al1_to_head_distance = alu_1.alu_src.tail_adr - commit.head_adr_out
  val al1_branch_flush     = branch_valid && (al1_to_head_distance > bju_to_head_distance)
  val al1_flush            = commit.flush || al1_branch_flush
  alu_1.alu_src   << dispat.dis_to_al1.throwWhen(al1_flush)

  // ================= ALU 2 ===============
  val al2_to_head_distance = alu_2.alu_src.tail_adr - commit.head_adr_out
  val al2_branch_flush     = branch_valid && (al2_to_head_distance > bju_to_head_distance)
  val al2_flush            = commit.flush || al2_branch_flush
  alu_2.alu_src   << dispat.dis_to_al2.throwWhen(al2_flush)

  // ================= DIV ===============
  val div_to_head_distance = div_3.div_src.tail_adr - commit.head_adr_out
  val div_branch_flush     = branch_valid && (div_to_head_distance > bju_to_head_distance)
  div_3.flush     := commit.flush || div_branch_flush
  div_3.div_src   << dispat.dis_to_div.throwWhen(div_3.flush)

  // ================= LSU ===============
  val lsu_to_head_distance = lsu_4.lsu_src.tail_adr - commit.head_adr_out
  lsu_4.lsu_src          << dispat.dis_to_lsu.throwWhen((change_flow || branch_valid) && (lsu_to_head_distance > bju_to_head_distance)).haltWhen(dispat.dis_to_bju.valid && ((lsu_to_head_distance > bju_to_head_distance)))
  lsu_4.dcache_ports.rsp << dcache.dcache_src.rsp

  dispat.al1_flush := al1_flush
  dispat.al2_flush := al2_flush
  dispat.div_flush := div_3.flush

  // ================= Commit ===============
  commit.change_flow     := (change_flow || branch_valid)
  commit.change_flow_adr := bju_0.bju_src.tail_adr
  commit.wbc_src(0) << bju_0.bju_dst
  commit.wbc_src(1) << alu_1.alu_dst.throwWhen(commit.flush_al1)
  commit.wbc_src(2) << alu_2.alu_dst.throwWhen(commit.flush_al2)
  commit.wbc_src(3) << div_3.div_dst.throwWhen(commit.flush_div)
  commit.wbc_src(4) << lsu_4.lsu_dst.throwWhen(commit.flush)

  commit.dis_valid(0) := dispat.dis_src(0).valid
  commit.dis_valid(1) := dispat.dis_src(1).valid
  commit.dis_fire(0)  := dispat.dis_src(0).fire
  commit.dis_fire(1)  := dispat.dis_src(1).fire
  commit.dis_onehot(0):= dispat.dis_src(0).exe_sel_oh
  commit.dis_onehot(1):= dispat.dis_src(1).exe_sel_oh
  commit.dis_pc(0)    := dispat.dis_src(0).iss_pkg.pc
  commit.dis_pc(1)    := dispat.dis_src(1).iss_pkg.pc

  commit.wbc_dst(0).ready := retire_ready_0
  commit.wbc_dst(1).ready := retire_ready_1


  // ================= DCache ===============
  dcache.flush            := commit.flush
  dcache.dcache_src.cmd   << lsu_4.dcache_ports.cmd
  

  // ================= Top AXI IF ===============
  icacheReader.ar << icache.icacheReader.ar
  icacheReader.r  >> icache.icacheReader.r

  dcacheReader.ar << dcache.dcacheReader.ar
  dcacheReader.r  >> dcache.dcacheReader.r
  dcacheWriter.aw << dcache.dcacheWriter.aw
  dcacheWriter.w  << dcache.dcacheWriter.w
  dcacheWriter.b  >> dcache.dcacheWriter.b
  
}


object GenTulip extends App {
  GenConfig.spinal.generateVerilog(Tulip())
}

object GenTulipWithMemoryInit{
  def main(args: Array[String]) {
    GenConfig.spinal.generateVerilog({
      val toplevel = new Tulip()
      BinTools.initRam(toplevel.icache.sram.mem, "/home/lin/DandProject/dv/bin/mytests/benchmarks/coremark/coremark-riscv64-nemu.bin", false)
      toplevel
    })
  }
}
