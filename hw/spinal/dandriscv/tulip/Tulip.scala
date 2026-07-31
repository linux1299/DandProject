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
    // DCache.scala implements one active MSHR.  Keep the integration
    // configuration honest until multi-entry allocation is implemented.
    mshrEntries = 1,
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
  val tage_config = TageConfig()


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
  val bpu    = new Predictor(gshare_config, tage_config)
  val decode = new Decode()
  val pre_disp = new PreDispatchBuffer()
  val dispat = new Dispatch()
  val regfile= new Regfile()
  val commit = new Commit()
  val bju_0  = new BJU()
  val alu_1  = new ALU()
  val alu_2  = new ALU()
  val div_3  = new DIV()
  val lsu_4  = new LSU()
  val dcache = new DCacheTop(dcache_config, dcache_axi_config)
  // val dcache = new BIUTop(dcache_config, dcache_axi_config)

  // ================= Top Signals ===============
  val change_flow   = bju_0.interrupt_valid || bju_0.redirect_valid
  val branch_valid  = bju_0.branch_valid

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
  // ---- TAGE / dynamic predictor ----
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
  // ---- static predictor ----
  bpu.static_predict_pc     := fetch.static_predict_pc
  bpu.static_predict_valid  := fetch.static_predict_valid
  bpu.static_predict_imm    := fetch.predict_imm(31 downto 0)
  bpu.static_predict_jal    := fetch.predict_jal
  bpu.static_predict_branch := fetch.predict_branch

  // ================= Decode ===============
  decode.dec_src(0)      << fetch.fch_dst(0).throwWhen(change_flow)
  decode.dec_src(1)      << fetch.fch_dst(1).throwWhen(change_flow)

  // ================= ISSUE ===============
  pre_disp.flush      := change_flow
  pre_disp.iss_src(0) << decode.dec_dst(0)
  pre_disp.iss_src(1) << decode.dec_dst(1)

  // ================= Dispatch ===============
  dispat.rob_is_ready   := commit.rob_is_ready
  dispat.tail_adr_older := commit.tail_adr_older
  dispat.tail_adr_newer := commit.tail_adr_newer

  val issue0_dst_is_bju = pre_disp.iss_dst(0).valid && pre_disp.iss_dst(0).iss_pkg.exe_sel===ExeSelEnum.BJU
  val issue0_dst_stall  = dispat.dis_to_bju.isStall
  val issue1_dst_stall  = issue0_dst_is_bju || dispat.dis_to_bju.isStall
  
  dispat.dis_src(0) << pre_disp.iss_dst(0).throwWhen(change_flow).haltWhen(issue0_dst_stall)
  // dispat.dis_src(1) << pre_disp.iss_dst(1).throwWhen(change_flow || branch_valid).haltWhen(issue1_dst_stall)
  val issue0_is_branch_taken =  issue0_dst_is_bju &&
                                pre_disp.iss_dst(0).iss_pkg.branch_taken && 
                                (pre_disp.iss_dst(0).iss_pkg.instr=/=B"32'h6b") && 
                                (pre_disp.iss_dst(0).iss_pkg.instr=/=B"32'h7b")
  dispat.dis_src(1) << pre_disp.iss_dst(1).throwWhen(change_flow || issue0_is_branch_taken).haltWhen(issue1_dst_stall)

  dispat.exe_rd_wen(0)  := bju_0.bju_exe_rd_wen
  dispat.exe_rd_data(0) := bju_0.bju_exe_rd_data
  dispat.exe_rd_addr(0) := bju_0.bju_exe_rd_addr
  dispat.exe_rob_adr(0) := bju_0.bju_exe_rob_adr
  dispat.exe_rob_order(0) := bju_0.bju_exe_rob_adr - commit.head_adr_out
  dispat.exe_rd_wen(1)  := alu_1.alu_exe_rd_wen
  dispat.exe_rd_data(1) := alu_1.alu_exe_rd_data
  dispat.exe_rd_addr(1) := alu_1.alu_exe_rd_addr
  dispat.exe_rob_order(1) := alu_1.alu_exe_rob_adr - commit.head_adr_out
  dispat.exe_rob_adr(1) := alu_1.alu_exe_rob_adr
  dispat.exe_rd_wen(2)  := alu_2.alu_exe_rd_wen
  dispat.exe_rd_data(2) := alu_2.alu_exe_rd_data
  dispat.exe_rd_addr(2) := alu_2.alu_exe_rd_addr
  dispat.exe_rob_order(2) := alu_2.alu_exe_rob_adr - commit.head_adr_out
  dispat.exe_rob_adr(2) := alu_2.alu_exe_rob_adr

  dispat.wbc_rd_wen(0) := bju_0.bju_dst.fire && bju_0.bju_dst.rd_wen
  dispat.wbc_rd_wen(1) := alu_1.alu_dst.fire && alu_1.alu_dst.rd_wen
  dispat.wbc_rd_wen(2) := alu_2.alu_dst.fire && alu_2.alu_dst.rd_wen
  dispat.wbc_rd_wen(3) := div_3.div_dst.fire && div_3.div_dst.rd_wen
  dispat.wbc_rd_wen(4) := lsu_4.lsu_dst.fire && lsu_4.lsu_dst.rd_wen

  dispat.wbc_rd_addr(0) := bju_0.bju_dst.rd_addr
  dispat.wbc_rd_addr(1) := alu_1.alu_dst.rd_addr
  dispat.wbc_rd_addr(2) := alu_2.alu_dst.rd_addr
  dispat.wbc_rd_addr(3) := div_3.div_dst.rd_addr
  dispat.wbc_rd_addr(4) := lsu_4.lsu_dst.rd_addr

  dispat.wbc_rob_adr(0) := bju_0.bju_dst.rob_adr
  dispat.wbc_rob_adr(1) := alu_1.alu_dst.rob_adr
  dispat.wbc_rob_adr(2) := alu_2.alu_dst.rob_adr
  dispat.wbc_rob_adr(3) := div_3.div_dst.rob_adr
  dispat.wbc_rob_adr(4) := lsu_4.lsu_dst.rob_adr

  dispat.wbc_rd_data(0) := bju_0.bju_dst.rd_data
  dispat.wbc_rd_data(1) := alu_1.alu_dst.rd_data
  dispat.wbc_rd_data(2) := alu_2.alu_dst.rd_data
  dispat.wbc_rd_data(3) := div_3.div_dst.rd_data
  dispat.wbc_rd_data(4) := lsu_4.lsu_dst.rd_data

  dispat.cpl_rd_wen(0)  := commit.cpl_rd_wen(0) 
  dispat.cpl_rd_wen(1)  := commit.cpl_rd_wen(1) 
  dispat.cpl_rd_addr(0) := commit.cpl_rd_addr(0)
  dispat.cpl_rd_addr(1) := commit.cpl_rd_addr(1)
  dispat.cpl_rob_adr(0) := commit.cpl_rob_adr(0)
  dispat.cpl_rob_adr(1) := commit.cpl_rob_adr(1)
  dispat.rob_rs1_data(0) := commit.rob_rs1_data(0)
  dispat.rob_rs1_data(1) := commit.rob_rs1_data(1)
  dispat.rob_rs2_data(0) := commit.rob_rs2_data(0)
  dispat.rob_rs2_data(1) := commit.rob_rs2_data(1)

  dispat.ret_rd_wen(0)  := commit.retire(0).fire && commit.retire(0).rd_wen
  dispat.ret_rd_wen(1)  := commit.retire(1).fire && commit.retire(1).rd_wen
  dispat.ret_rd_addr(0) := commit.retire(0).rd_addr
  dispat.ret_rd_addr(1) := commit.retire(1).rd_addr
  dispat.ret_rob_adr(0) := commit.retire(0).rob_adr
  dispat.ret_rob_adr(1) := commit.retire(1).rob_adr
  dispat.ret_rd_data(0) := commit.retire(0).rd_data
  dispat.ret_rd_data(1) := commit.retire(1).rd_data



  // =============== regfile ===============
  regfile.read_0 <> pre_disp.read_regfile(0)
  regfile.read_1 <> pre_disp.read_regfile(1)
  regfile.write_0.rd_wen  := commit.retire(0).fire && commit.retire(0).rd_wen
  regfile.write_1.rd_wen  := commit.retire(1).fire && commit.retire(1).rd_wen
  regfile.write_0.rd_addr := commit.retire(0).rd_addr
  regfile.write_1.rd_addr := commit.retire(1).rd_addr
  regfile.write_0.rd_data := commit.retire(0).rd_data
  regfile.write_1.rd_data := commit.retire(1).rd_data

  // =============== retire forward to PreDispatchBuffer ===============
  pre_disp.ret_rd_wen(0)  := commit.retire(0).fire && commit.retire(0).rd_wen
  pre_disp.ret_rd_wen(1)  := commit.retire(1).fire && commit.retire(1).rd_wen
  pre_disp.ret_rd_addr(0) := commit.retire(0).rd_addr
  pre_disp.ret_rd_addr(1) := commit.retire(1).rd_addr
  pre_disp.ret_rd_data(0) := commit.retire(0).rd_data
  pre_disp.ret_rd_data(1) := commit.retire(1).rd_data


  // ================= BJU ===============
  bju_0.bju_src   << dispat.dis_to_bju
  bju_0.timer_int := lsu_4.timer_int

  // ================= ALU 1 ===============
  alu_1.alu_src   << dispat.dis_to_al1

  // ================= ALU 2 ===============
  alu_2.alu_src   << dispat.dis_to_al2

  // ================= DIV ===============
  div_3.div_src   << dispat.dis_to_div
  div_3.flush     := False

  // ================= LSU ===============
  lsu_4.lsu_src          << dispat.dis_to_lsu
  lsu_4.dcache_ports.rsp << dcache.dcache_src.rsp

  // ================= Commit ===============
  commit.wbc_src(0) << bju_0.bju_dst
  commit.wbc_src(1) << alu_1.alu_dst
  commit.wbc_src(2) << alu_2.alu_dst
  commit.wbc_src(3) << div_3.div_dst
  commit.wbc_src(4) << lsu_4.lsu_dst

  for(i <- 0 until 2){
    commit.dis_fire(i)    := dispat.dis_src(i).fire
    commit.dis_pc(i)      := dispat.dis_src(i).iss_pkg.pc
    commit.dis_rd_addr(i) := dispat.dis_src(i).iss_pkg.rd_addr
    commit.dis_rd_wen(i)  := dispat.dis_src(i).iss_pkg.micro_op.uop_com.rd_wen
    commit.dis_instr(i)   := dispat.dis_src(i).iss_pkg.instr
    commit.rob_rs1_addr(i):= dispat.rob_rs1_addr(i)
    commit.rob_rs2_addr(i):= dispat.rob_rs2_addr(i)
  }

  commit.retire(0).ready := retire_ready_0
  commit.retire(1).ready := retire_ready_1


  // ================= DCache ===============
  dcache.flush            := False
  dcache.dcache_src.cmd   << lsu_4.dcache_ports.cmd
  

  // ================= Top AXI IF ===============
  icacheReader.ar << icache.icacheReader.ar
  icacheReader.r  >> icache.icacheReader.r

  dcacheReader.ar << dcache.dcacheReader.ar
  dcacheReader.r  >> dcache.dcacheReader.r
  dcacheWriter.aw << dcache.dcacheWriter.aw
  dcacheWriter.w  << dcache.dcacheWriter.w
  dcacheWriter.b  >> dcache.dcacheWriter.b
  
  // ================= perf cnt ===============
  val cycle_cnt = Reg(UInt(32 bits)) init(0)
  val instr_cnt = Reg(UInt(32 bits)) init(0)

  val change_flow_cnt = Reg(UInt(32 bits)) init(0)
  val issue1_stall_of_bju_cnt = Reg(UInt(32 bits)) init(0)
  val bju_instr_cnt = Reg(UInt(32 bits)) init(0)

  val fetch_dst0_valid_duty_cycle = Reg(UInt(32 bits)) init(0)
  val fetch_dst1_valid_duty_cycle = Reg(UInt(32 bits)) init(0)
  val fetch_dst0_ready_duty_cycle = Reg(UInt(32 bits)) init(0)
  val fetch_dst1_ready_duty_cycle = Reg(UInt(32 bits)) init(0)
  val fetch_dst0_fire_duty_cycle = Reg(UInt(32 bits)) init(0)
  val fetch_dst1_fire_duty_cycle = Reg(UInt(32 bits)) init(0)
  val issue_dst0_valid_duty_cycle = Reg(UInt(32 bits)) init(0)
  val issue_dst1_valid_duty_cycle = Reg(UInt(32 bits)) init(0)
  val issue_dst0_ready_duty_cycle = Reg(UInt(32 bits)) init(0)
  val issue_dst1_ready_duty_cycle = Reg(UInt(32 bits)) init(0)
  val issue_dst0_fire_duty_cycle = Reg(UInt(32 bits)) init(0)
  val issue_dst1_fire_duty_cycle = Reg(UInt(32 bits)) init(0)

  val dispatch_src0_valid_duty_cycle = Reg(UInt(32 bits)) init(0)
  val dispatch_src1_valid_duty_cycle = Reg(UInt(32 bits)) init(0)
  val dispatch_src0_ready_duty_cycle = Reg(UInt(32 bits)) init(0)
  val dispatch_src1_ready_duty_cycle = Reg(UInt(32 bits)) init(0)
  val dispatch_src0_fire_duty_cycle = Reg(UInt(32 bits)) init(0)
  val dispatch_src1_fire_duty_cycle = Reg(UInt(32 bits)) init(0)

  val bju_0_dst_stall_cnt = Reg(UInt(32 bits)) init(0)
  val alu_1_dst_stall_cnt = Reg(UInt(32 bits)) init(0)
  val alu_2_dst_stall_cnt = Reg(UInt(32 bits)) init(0)
  val div_3_dst_stall_cnt = Reg(UInt(32 bits)) init(0)
  val lsu_4_dst_stall_cnt = Reg(UInt(32 bits)) init(0)
  val exe_dst_stall_cnt = Reg(UInt(32 bits)) init(0)
  

  cycle_cnt := cycle_cnt + 1
  instr_cnt := instr_cnt + commit.retire(0).fire.asUInt + commit.retire(1).fire.asUInt

  when(change_flow) {change_flow_cnt := change_flow_cnt + 1}
  when(issue0_dst_is_bju) {issue1_stall_of_bju_cnt := issue1_stall_of_bju_cnt + 1}
  when(bju_0.bju_dst.fire) {bju_instr_cnt := bju_instr_cnt + 1}

  when(fetch.fch_dst(0).valid) {fetch_dst0_valid_duty_cycle := fetch_dst0_valid_duty_cycle + 1}
  when(fetch.fch_dst(1).valid) {fetch_dst1_valid_duty_cycle := fetch_dst1_valid_duty_cycle + 1}
  when(fetch.fch_dst(0).ready) {fetch_dst0_ready_duty_cycle := fetch_dst0_ready_duty_cycle + 1}
  when(fetch.fch_dst(1).ready) {fetch_dst1_ready_duty_cycle := fetch_dst1_ready_duty_cycle + 1}
  when(fetch.fch_dst(0).fire) {fetch_dst0_fire_duty_cycle := fetch_dst0_fire_duty_cycle + 1}
  when(fetch.fch_dst(1).fire) {fetch_dst1_fire_duty_cycle := fetch_dst1_fire_duty_cycle + 1}

  when(pre_disp.iss_dst(0).valid) {issue_dst0_valid_duty_cycle := issue_dst0_valid_duty_cycle + 1}
  when(pre_disp.iss_dst(1).valid) {issue_dst1_valid_duty_cycle := issue_dst1_valid_duty_cycle + 1}
  when(pre_disp.iss_dst(0).ready) {issue_dst0_ready_duty_cycle := issue_dst0_ready_duty_cycle + 1}
  when(pre_disp.iss_dst(1).ready) {issue_dst1_ready_duty_cycle := issue_dst1_ready_duty_cycle + 1}
  when(pre_disp.iss_dst(0).fire) {issue_dst0_fire_duty_cycle := issue_dst0_fire_duty_cycle + 1}
  when(pre_disp.iss_dst(1).fire) {issue_dst1_fire_duty_cycle := issue_dst1_fire_duty_cycle + 1}

  when(dispat.dis_src(0).valid) {dispatch_src0_valid_duty_cycle := dispatch_src0_valid_duty_cycle + 1}
  when(dispat.dis_src(1).valid) {dispatch_src1_valid_duty_cycle := dispatch_src1_valid_duty_cycle + 1}
  when(dispat.dis_src(0).ready) {dispatch_src0_ready_duty_cycle := dispatch_src0_ready_duty_cycle + 1}
  when(dispat.dis_src(1).ready) {dispatch_src1_ready_duty_cycle := dispatch_src1_ready_duty_cycle + 1}
  when(dispat.dis_src(0).fire) {dispatch_src0_fire_duty_cycle := dispatch_src0_fire_duty_cycle + 1}
  when(dispat.dis_src(1).fire) {dispatch_src1_fire_duty_cycle := dispatch_src1_fire_duty_cycle + 1}

  when(bju_0.bju_dst.isStall) {bju_0_dst_stall_cnt := bju_0_dst_stall_cnt + 1}
  when(alu_1.alu_dst.isStall) {alu_1_dst_stall_cnt := alu_1_dst_stall_cnt + 1}
  when(alu_2.alu_dst.isStall) {alu_2_dst_stall_cnt := alu_2_dst_stall_cnt + 1}
  when(div_3.div_dst.isStall) {div_3_dst_stall_cnt := div_3_dst_stall_cnt + 1}
  when(lsu_4.lsu_dst.isStall) {lsu_4_dst_stall_cnt := lsu_4_dst_stall_cnt + 1}
  when(bju_0.bju_dst.isStall || alu_1.alu_dst.isStall || alu_2.alu_dst.isStall || div_3.div_dst.isStall || lsu_4.lsu_dst.isStall) {exe_dst_stall_cnt := exe_dst_stall_cnt + 1}
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
