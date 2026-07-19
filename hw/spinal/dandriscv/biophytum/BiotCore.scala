package dandriscv.biophytum

import spinal.core._
import spinal.lib.bus.amba4.axi._
import spinal.lib._
import spinal.lib.misc._

case class BiotCore() extends Component {
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
  val ibuffer= new IBuffer()
  val iq_bju_0  = new IssueQueue("BJU")
  val iq_alu_1  = new IssueQueue("ALU")
  val iq_alu_2  = new IssueQueue("ALU")
  val iq_div_3  = new IssueQueue("ALU")
  val iq_lsu_4  = new IssueQueue("LSU")
  val dispat = new Dispatch()
  val regfile= new Regfile()
  val commit = new Commit()
  val bju_0  = new BJU()
  val alu_1  = new ALU()
  val alu_2  = new ALU()
  val div_3  = new DIV()
  val lsu_4  = new LSU()
  // val dcache = new DCacheTop(dcache_config, dcache_axi_config)
  // val dcache = new BIUTop(dcache_config, dcache_axi_config)
  val dcache = new DTCM(dcache_config, dcache_axi_config)

  // ================= Top Signals ===============
  val change_flow   = bju_0.interrupt_valid || bju_0.redirect_valid
  val branch_valid  = bju_0.branch_valid
  val bju_to_head_distance = bju_0.bju_src.rob_adr - commit.head_adr_out

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

  // ================= Ibuffer ===============
  ibuffer.flush          := change_flow
  ibuffer.ibf_src(0)     << decode.dec_dst(0)
  ibuffer.ibf_src(1)     << decode.dec_dst(1).throwWhen(decode.dec_dst(0).fire && decode.dec_dst(0).branch_taken)

  // ================= Dispatch ===============
  dispat.bju_change_flow := change_flow
  dispat.bju_exe_valid   := bju_0.bju_src.fire
  dispat.bju_rob_adr     := bju_0.bju_src.rob_adr
  dispat.branch_valid    := branch_valid
  dispat.dis_src(0)      << ibuffer.ibf_dst(0).throwWhen(change_flow)
  dispat.dis_src(1)      << ibuffer.ibf_dst(1).throwWhen(change_flow)
  dispat.rob_is_ready   := commit.rob_is_ready
  dispat.tail_adr_older := commit.tail_adr_older
  dispat.tail_adr_newer := commit.tail_adr_newer

  dispat.ret_forward(0).valid   := commit.retire(0).fire && commit.retire(0).rd_wen
  dispat.ret_forward(0).addr    := commit.retire(0).rd_addr
  dispat.ret_forward(0).rob_adr := commit.retire(0).rob_adr
  dispat.ret_forward(0).data    := commit.retire(0).rd_data
  dispat.ret_forward(1).valid   := commit.retire(1).fire && commit.retire(1).rd_wen
  dispat.ret_forward(1).addr    := commit.retire(1).rd_addr
  dispat.ret_forward(1).rob_adr := commit.retire(1).rob_adr
  dispat.ret_forward(1).data    := commit.retire(1).rd_data

  // =============== regfile ===============
  regfile.read(0) <> dispat.rd_regfile(0)
  regfile.read(1) <> dispat.rd_regfile(1)
  regfile.write(0).rd_wen  := commit.retire(0).fire && commit.retire(0).rd_wen
  regfile.write(1).rd_wen  := commit.retire(1).fire && commit.retire(1).rd_wen
  regfile.write(0).rd_addr := commit.retire(0).rd_addr
  regfile.write(1).rd_addr := commit.retire(1).rd_addr
  regfile.write(0).rd_data := commit.retire(0).rd_data
  regfile.write(1).rd_data := commit.retire(1).rd_data

  // ================= ISSUE ===============
  val iq0_src_flush = change_flow && (bju_to_head_distance < (dispat.dis_dst(0).rd_rob_adr - commit.head_adr_out))
  val iq1_src_flush = change_flow && (bju_to_head_distance < (dispat.dis_dst(1).rd_rob_adr - commit.head_adr_out))
  val iq2_src_flush = change_flow && (bju_to_head_distance < (dispat.dis_dst(2).rd_rob_adr - commit.head_adr_out))
  val iq3_src_flush = change_flow && (bju_to_head_distance < (dispat.dis_dst(3).rd_rob_adr - commit.head_adr_out))
  val iq4_src_flush = change_flow && (bju_to_head_distance < (dispat.dis_dst(4).rd_rob_adr - commit.head_adr_out))

  iq_bju_0.iss_src << dispat.dis_dst(0).throwWhen(iq0_src_flush)
  iq_alu_1.iss_src << dispat.dis_dst(1).throwWhen(iq1_src_flush)
  iq_alu_2.iss_src << dispat.dis_dst(2).throwWhen(iq2_src_flush)
  iq_div_3.iss_src << dispat.dis_dst(3).throwWhen(iq3_src_flush)
  iq_lsu_4.iss_src << dispat.dis_dst(4).throwWhen(iq4_src_flush)
  val iq = Seq(iq_bju_0, iq_alu_1, iq_alu_2, iq_div_3, iq_lsu_4)
  for(q <- iq){
    q.flush      := change_flow
    q.bju_to_head_distance := bju_to_head_distance
    q.rob_head_adr := commit.head_adr_out
    q.exe_forward(0) << bju_0.exe_forward
    q.exe_forward(1) << alu_1.exe_forward
    q.exe_forward(2) << alu_2.exe_forward

    q.wbc_forward(0) << bju_0.wbc_forward
    q.wbc_forward(1) << alu_1.wbc_forward
    q.wbc_forward(2) << alu_2.wbc_forward
    q.wbc_forward(3) << div_3.wbc_forward
    q.wbc_forward(4) << lsu_4.wbc_forward

    for(i <- 0 until ROB_DEPTH){
      q.rob_forward(i) << commit.rob_forward(i)
    }
  }


  // ================= BJU ===============
  bju_0.bju_src   << iq_bju_0.iss_dst
  bju_0.timer_int := lsu_4.timer_int

  // ================= ALU 1 ===============
  alu_1.alu_src   << iq_alu_1.iss_dst

  // ================= ALU 2 ===============
  alu_2.alu_src   << iq_alu_2.iss_dst

  // ================= DIV ===============
  div_3.div_src   << iq_div_3.iss_dst

  // ================= LSU ===============
  lsu_4.lsu_src          << iq_lsu_4.iss_dst
  lsu_4.dcache_ports.rsp << dcache.dcache_src.rsp

  // ================= Commit ===============
  commit.wbc_src(0) << bju_0.bju_dst
  commit.wbc_src(1) << alu_1.alu_dst
  commit.wbc_src(2) << alu_2.alu_dst
  commit.wbc_src(3) << div_3.div_dst
  commit.wbc_src(4) << lsu_4.lsu_dst

  for(i <- 0 until 2){
    commit.dis_fire(i)      := dispat.dis_src(i).fire
    commit.dis_pc(i)        := dispat.dis_src(i).pc
    commit.dis_rd_addr(i)   := dispat.dis_src(i).rd_addr
    commit.dis_rd_wen(i)    := dispat.dis_src(i).micro_op.uop_com.rd_wen
    commit.dis_instr(i)     := dispat.dis_src(i).instr
  }

  commit.retire(0).ready := retire_ready_0
  commit.retire(1).ready := retire_ready_1

  commit.iss_forward(0) << iq_bju_0.iss_forward
  commit.iss_forward(1) << iq_alu_1.iss_forward
  commit.iss_forward(2) << iq_alu_2.iss_forward
  commit.iss_forward(3) << iq_div_3.iss_forward
  commit.iss_forward(4) << iq_lsu_4.iss_forward

  commit.exe_forward(0) << bju_0.exe_forward
  commit.exe_forward(1) << alu_1.exe_forward
  commit.exe_forward(2) << alu_2.exe_forward
  commit.exe_forward(3) << div_3.exe_forward
  commit.exe_forward(4) << lsu_4.exe_forward

  commit.wbc_forward(0) << bju_0.wbc_forward
  commit.wbc_forward(1) << alu_1.wbc_forward
  commit.wbc_forward(2) << alu_2.wbc_forward
  commit.wbc_forward(3) << div_3.wbc_forward
  commit.wbc_forward(4) << lsu_4.wbc_forward

  commit.ret_forward(0).valid   := commit.retire(0).fire && commit.retire(0).rd_wen
  commit.ret_forward(0).addr    := commit.retire(0).rd_addr
  commit.ret_forward(0).rob_adr := commit.retire(0).rob_adr
  commit.ret_forward(1).valid   := commit.retire(1).fire && commit.retire(1).rd_wen
  commit.ret_forward(1).addr    := commit.retire(1).rd_addr
  commit.ret_forward(1).rob_adr := commit.retire(1).rob_adr

  commit.head_rd_state(0) <> iq_bju_0.head_rd_state
  commit.skid_rd_state(0) <> iq_bju_0.skid_rd_state
  commit.head_rd_state(1) <> iq_alu_1.head_rd_state
  commit.skid_rd_state(1) <> iq_alu_1.skid_rd_state
  commit.head_rd_state(2) <> iq_alu_2.head_rd_state
  commit.skid_rd_state(2) <> iq_alu_2.skid_rd_state
  commit.head_rd_state(3) <> iq_div_3.head_rd_state
  commit.skid_rd_state(3) <> iq_div_3.skid_rd_state
  commit.head_rd_state(4) <> iq_lsu_4.head_rd_state
  commit.skid_rd_state(4) <> iq_lsu_4.skid_rd_state

  commit.bju_change_flow := change_flow
  commit.bju_rob_adr := bju_0.bju_src.rob_adr


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
  val bju_instr_cnt = Reg(UInt(32 bits)) init(0)

  val fetch_dst0_valid_duty_cycle = Reg(UInt(32 bits)) init(0)
  val fetch_dst1_valid_duty_cycle = Reg(UInt(32 bits)) init(0)
  val fetch_dst0_ready_duty_cycle = Reg(UInt(32 bits)) init(0)
  val fetch_dst1_ready_duty_cycle = Reg(UInt(32 bits)) init(0)
  val fetch_dst0_fire_duty_cycle = Reg(UInt(32 bits)) init(0)
  val fetch_dst1_fire_duty_cycle = Reg(UInt(32 bits)) init(0)

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
  when(bju_0.bju_dst.fire) {bju_instr_cnt := bju_instr_cnt + 1}

  when(fetch.fch_dst(0).valid) {fetch_dst0_valid_duty_cycle := fetch_dst0_valid_duty_cycle + 1}
  when(fetch.fch_dst(1).valid) {fetch_dst1_valid_duty_cycle := fetch_dst1_valid_duty_cycle + 1}
  when(fetch.fch_dst(0).ready) {fetch_dst0_ready_duty_cycle := fetch_dst0_ready_duty_cycle + 1}
  when(fetch.fch_dst(1).ready) {fetch_dst1_ready_duty_cycle := fetch_dst1_ready_duty_cycle + 1}
  when(fetch.fch_dst(0).fire) {fetch_dst0_fire_duty_cycle := fetch_dst0_fire_duty_cycle + 1}
  when(fetch.fch_dst(1).fire) {fetch_dst1_fire_duty_cycle := fetch_dst1_fire_duty_cycle + 1}

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


object GenBiotCore extends App {
  GenConfig.spinal.generateVerilog(BiotCore())
}

object GenBiotCoreWithMemoryInit{
  def main(args: Array[String]) {
    GenConfig.spinal.generateVerilog({
      val toplevel = new BiotCore()
      BinTools.initRam(toplevel.icache.sram.mem, "/home/lin/DandProject/dv/bin/mytests/benchmarks/coremark/coremark-riscv64-nemu.bin", false)
      BinTools.initRam(toplevel.dcache.sram.mem, "/home/lin/DandProject/dv/bin/mytests/benchmarks/coremark/coremark-riscv64-nemu.bin", false)
      toplevel
    })
  }
}
