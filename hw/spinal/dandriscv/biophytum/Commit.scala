package dandriscv.biophytum

import spinal.core._
import spinal.lib._
import math._
import MyUtils._
import BundleImplicit._


// Commit 2 instructions/cycle
case class Commit() extends Component{
  import CpuConfig._
  import ScoreBoardEnum._

  // =================== IO ===================
  // dispatch stage, write rob
  val dis_fire       = Vec(in Bool(), 2)
  val dis_pc         = Vec(in UInt(32 bits), 2)
  val dis_rd_addr    = Vec(in UInt(5 bits), 2)
  val dis_rd_wen     = Vec(in Bool(), 2)
  val dis_instr      = Vec(in Bits(32 bits), 2)

  // wbc stage, write to rob
  val wbc_src   = Vec(slave(Stream(ExeDst())), 5)

  // forward
  val iss_forward = Vec(slave(Flow(Forward("Ctrl"))), 5)
  val exe_forward = Vec(slave(Flow(Forward("Ctrl"))), 5) // BJU + 2ALU / DIV + LSU
  val wbc_forward = Vec(slave(Flow(Forward("Ctrl"))), 5)
  val ret_forward = Vec(slave(Flow(Forward("Ctrl"))), 2)

  // read state from iq
  val head_rd_state = Vec(slave(ReadState()), 5)
  val skid_rd_state = Vec(slave(ReadState()), 5)

  // ret stage, write to ARF
  val retire   = Vec(master(Stream(ExeDst())), 2) 

  // control info output
  val rob_is_ready   = out Bool()
  val tail_adr_older = out UInt(ROB_ADR_W bits)
  val tail_adr_newer = out UInt(ROB_ADR_W bits)
  val head_adr_out   = out UInt(ROB_ADR_W bits)
  val bju_change_flow= in Bool()
  val bju_rob_adr = in UInt(ROB_ADR_W bits)

  val rob_forward = Vec(master(Flow(Forward("WithData"))), ROB_DEPTH)
  // =================== IO ===================


  // complete stage, read from rob
  val complete    = Vec(Stream(ExeDst()), 2)

  // =============== Entries of Commit =================
  val head_ptr_curr = Reg(UInt(ROB_ADR_W+1 bits)) init(0)
  val tail_ptr_curr = Reg(UInt(ROB_ADR_W+1 bits)) init(0)
  val head_ptr_next = UInt(ROB_ADR_W+1 bits)
  val tail_ptr_next = UInt(ROB_ADR_W+1 bits)
  val head_ptr_plus = UInt(ROB_ADR_W+1 bits)
  val tail_ptr_plus = UInt(ROB_ADR_W+1 bits)
  val head_adr_curr = head_ptr_curr(ROB_ADR_W-1 downto 0)
  val tail_adr_curr = tail_ptr_curr(ROB_ADR_W-1 downto 0)
  val head_adr_plus = head_ptr_plus(ROB_ADR_W-1 downto 0)
  val tail_adr_plus = tail_ptr_plus(ROB_ADR_W-1 downto 0)
  val rob         = new Area{
    val pc          = Vec(Reg(UInt(32 bits)) init(0), ROB_DEPTH)
    val instr       = Vec(Reg(Bits(32 bits)) init(0), ROB_DEPTH)
    val valid       = Vec(RegInit(False), ROB_DEPTH)
    val rd_data     = Vec(Reg(Bits(64 bits)) init(0), ROB_DEPTH)
    val rd_vld      = Vec(RegInit(False), ROB_DEPTH)
    val rd_addr     = Vec(Reg(UInt(5 bits)) init(0), ROB_DEPTH)
    val rd_wen      = Vec(RegInit(False), ROB_DEPTH)
    val state       = Vec(Reg(ScoreBoardEnum()) init(ARF), ROB_DEPTH)
    val state_nxt   = Vec(ScoreBoardEnum(), 32)
  }
  val entry_cnt        = Reg(UInt(ROB_ADR_W+1 bits)) init(0)
  val dis_fire_num     = UInt(2 bits)
  val cpl_fire_num     = UInt(2 bits)
  val wbc_src_fire     = Bits(5 bits)

  // =============== Update head ptr =================
  head_ptr_curr := head_ptr_next
  cpl_fire_num  := (complete(0).fire && complete(1).fire) ? U(2, 2 bits) | 
                   ((complete(0).fire || complete(1).fire)? U(1, 2 bits) | U(0, 2 bits))
  head_ptr_next := head_ptr_curr + cpl_fire_num
  head_ptr_plus := head_ptr_curr + 1

  // =============== Update tail ptr =================
  tail_ptr_curr := tail_ptr_next
  dis_fire_num  := CountOne(dis_fire)
  tail_ptr_next := tail_ptr_curr + dis_fire_num
  tail_ptr_plus := tail_ptr_curr + 1

  // =============== write back to rob(ROB) ===============
  for(i <- 0 until 5){
    wbc_src(i).ready := True // ensure write back has an rob match
    wbc_src_fire(i)  := wbc_src(i).fire && rob.valid(wbc_src(i).rob_adr)
  } 

  // =============== Update Entry =================
  for(i <- 0 until ROB_DEPTH){
    //-------------- clear entry when retire-----------------
    when((retire(0).fire && retire(0).rob_adr===U(i)) || (retire(1).fire && retire(1).rob_adr===U(i))){
      rob.rd_vld(i) := False
      rob.rd_data(i):= B(0, 64 bits)
      rob.pc(i)     := U(0)
      rob.valid(i)  := False
    }

    //-------------- dispatch -----------------
    when(dis_fire_num===U(2) && tail_adr_plus===U(i)){ // dispatch 2 instr, write to tail_adr_plus
      rob.pc(i)     := dis_pc(1)
      rob.instr(i)  := dis_instr(1)
      rob.rd_addr(i):= dis_rd_addr(1)
      rob.rd_wen(i) := dis_rd_wen(1)
      rob.valid(i)  := True
    }
    .elsewhen(dis_fire_num===U(2) && tail_adr_curr===U(i)){ // dispatch 2 instr, write to tail_adr_curr
      rob.pc(i)     := dis_pc(0)
      rob.instr(i)  := dis_instr(0)
      rob.rd_addr(i):= dis_rd_addr(0)
      rob.rd_wen(i) := dis_rd_wen(0)
      rob.valid(i)  := True
    }
    .elsewhen(dis_fire_num===U(1) && tail_adr_curr===U(i) && dis_fire(0)){ // dispatch 1 instr, from older, write tail_adr_curr
      rob.pc(i)     := dis_pc(0)
      rob.instr(i)  := dis_instr(0)
      rob.rd_addr(i):= dis_rd_addr(0)
      rob.rd_wen(i) := dis_rd_wen(0)
      rob.valid(i)  := True
    }
    .elsewhen(dis_fire_num===U(1) && tail_adr_curr===U(i) && dis_fire(1)){ // dispatch 1 instr, from newer, write tail_adr_curr
      rob.pc(i)     := dis_pc(1)
      rob.instr(i)  := dis_instr(1)
      rob.rd_addr(i):= dis_rd_addr(1)
      rob.rd_wen(i) := dis_rd_wen(1)
      rob.valid(i)  := True
    }

    //-------------- writeback -----------------
    when(wbc_src_fire(0) && wbc_src(0).rob_adr===U(i)){
      rob.rd_vld(i) := True
      rob.rd_data(i):= wbc_src(0).rd_data
    }
    .elsewhen(wbc_src_fire(1) && wbc_src(1).rob_adr===U(i)){
      rob.rd_vld(i) := True
      rob.rd_data(i):= wbc_src(1).rd_data
    }
    .elsewhen(wbc_src_fire(2) && wbc_src(2).rob_adr===U(i)){
      rob.rd_vld(i) := True
      rob.rd_data(i):= wbc_src(2).rd_data
    }
    .elsewhen(wbc_src_fire(3) && wbc_src(3).rob_adr===U(i)){
      rob.rd_vld(i) := True
      rob.rd_data(i):= wbc_src(3).rd_data
    }
    .elsewhen(wbc_src_fire(4) && wbc_src(4).rob_adr===U(i)){
      rob.rd_vld(i) := True
      rob.rd_data(i):= wbc_src(4).rd_data
    }


    //-------------- forward data -----------------
    rob_forward(i).valid := rob.valid(i) && rob.rd_vld(i)
    rob_forward(i).addr  := rob.rd_addr(i)
    rob_forward(i).rob_adr := U(i)
    rob_forward(i).data := rob.rd_data(i)

  }

  val rob_fsm = new Area {
    // Aggregate fire signals per ROB entry (matched by rob_adr only)
    val dis_fire = Vec(Bool(), ROB_DEPTH)
    val iss_fire = Vec(Bool(), ROB_DEPTH)
    val exe_fire = Vec(Bool(), ROB_DEPTH)
    val exe_done = Vec(Bool(), ROB_DEPTH)
    val wbc_fire = Vec(Bool(), ROB_DEPTH)
    val ret_fire = Vec(Bool(), ROB_DEPTH)
    val dis_fire_of_0 = Vec(Bool(), ROB_DEPTH)
    val dis_fire_of_1 = Vec(Bool(), ROB_DEPTH)
    val iss_fire_short = Vec(Bool(), ROB_DEPTH)  // 新增：端口 0-2 (BJU/ALU)
    val iss_fire_long  = Vec(Bool(), ROB_DEPTH)  // 新增：端口 3-4 (DIV/LSU)
    
    for (i <- 0 until ROB_DEPTH) {
      // ---- Fire signal generation (rob_adr match only) ----
      iss_fire(i) := (0 until 5).map(j =>
        iss_forward(j).valid && iss_forward(j).rob_adr === U(i)
      ).reduce(_ || _)

      iss_fire_short(i) := (0 until 3).map(j =>
        iss_forward(j).valid && iss_forward(j).rob_adr === U(i)
      ).reduce(_ || _)

      iss_fire_long(i) := (3 until 5).map(j =>
        iss_forward(j).valid && iss_forward(j).rob_adr === U(i)
      ).reduce(_ || _)

      exe_fire(i) := (0 until 3).map(j =>
        exe_forward(j).valid && exe_forward(j).rob_adr === U(i)
      ).reduce(_ || _)

      exe_done(i) := (3 until 5).map(j =>
        exe_forward(j).valid && exe_forward(j).rob_adr === U(i)
      ).reduce(_ || _)

      wbc_fire(i) := (0 until 5).map(j =>
        wbc_forward(j).valid && wbc_forward(j).rob_adr === U(i)
      ).reduce(_ || _)

      ret_fire(i) := (0 until 2).map(j =>
        ret_forward(j).valid && ret_forward(j).rob_adr === U(i)
      ).reduce(_ || _)

      // Dispatch fire: ROB entry is being written by dispatch
      dis_fire_of_0(i) := (dis_fire_num === U(2) && tail_adr_curr === U(i) && dis_rd_wen(0)) ||
                          (dis_fire_num === U(1) && tail_adr_curr === U(i) && dis_rd_wen(0))
      dis_fire_of_1(i) := (dis_fire_num === U(2) && tail_adr_plus === U(i) && dis_rd_wen(1))
      dis_fire(i) := dis_fire_of_0(i) || dis_fire_of_1(i)

      // ---- State FSM ----
      rob.state_nxt(i) := rob.state(i)
      switch(rob.state(i)) {
        is(ARF) {
          // stays ARF until dispatched
          when(dis_fire(i)){
            rob.state_nxt(i) := ISS
          }
        }
        is(ISS) {
          when(dis_fire(i)) {
            rob.state_nxt(i) := ISS  // overwritten by newer dispatch to same entry (unlikely but safe)
          }
          .elsewhen(iss_fire_short(i)) {
            rob.state_nxt(i) := EXE   // BJU / ALU → single-cycle execute
          }
          .elsewhen(iss_fire_long(i)) {
            rob.state_nxt(i) := DLY   // DIV / LSU → multi-cycle
          }
        }
        is(EXE) {
          when(dis_fire(i)) {
            rob.state_nxt(i) := ISS   // new instruction writing same rd, allocated same ROB entry
          }
          .elsewhen(exe_fire(i)) {
            rob.state_nxt(i) := WBC
          }
        }
        is(DLY) {
          when(dis_fire(i)) {
            rob.state_nxt(i) := ISS
          }
          .elsewhen(exe_done(i)) {
            rob.state_nxt(i) := WBC
          }
        }
        is(WBC) {
          when(dis_fire(i)) {
            rob.state_nxt(i) := ISS
          }
          .elsewhen(wbc_fire(i)) {
            rob.state_nxt(i) := ROB
          }
        }
        is(ROB) {
          when(dis_fire(i)) {
            rob.state_nxt(i) := ISS
          }
          .elsewhen(ret_fire(i)) {
            rob.state_nxt(i) := ARF
          }
        }
      }

      rob.state(i) := rob.state_nxt(i)
    }
  }

  // =================== Output ===================
  // compelte
  complete(0).valid   := rob.valid(head_adr_curr) && rob.rd_vld(head_adr_curr)
  complete(0).rd_data := rob.rd_data(head_adr_curr)
  complete(0).rd_addr := rob.rd_addr(head_adr_curr)
  complete(0).rd_wen  := rob.rd_wen(head_adr_curr)
  complete(0).pc      := rob.pc(head_adr_curr)
  complete(0).instr   := rob.instr(head_adr_curr)
  complete(0).rob_adr := head_adr_curr

  complete(1).valid   := complete(0).valid && rob.valid(head_adr_plus) && rob.rd_vld(head_adr_plus)
  complete(1).rd_data := rob.rd_data(head_adr_plus)
  complete(1).rd_addr := rob.rd_addr(head_adr_plus)
  complete(1).rd_wen  := rob.rd_wen(head_adr_plus)
  complete(1).pc      := rob.pc(head_adr_plus)
  complete(1).instr   := rob.instr(head_adr_plus)
  complete(1).rob_adr := head_adr_plus

  // complete to retire
  complete(0) >-> retire(0)
  complete(1) >-> retire(1)

  // read state from issue queue/ issue stage
  for(id <- 0 until 5){ // issue queue id from 0 to 4
    head_rd_state(id).rs1_state := rob.state(head_rd_state(id).rs1_rob_adr)
    head_rd_state(id).rs2_state := rob.state(head_rd_state(id).rs2_rob_adr)
    skid_rd_state(id).rs1_state := rob.state(skid_rd_state(id).rs1_rob_adr)
    skid_rd_state(id).rs2_state := rob.state(skid_rd_state(id).rs2_rob_adr)
  }

  // control info
  tail_adr_older := tail_adr_curr
  tail_adr_newer := tail_adr_plus
  head_adr_out   := head_adr_curr
  entry_cnt      := entry_cnt + dis_fire_num - cpl_fire_num
  rob_is_ready   := entry_cnt <= (ROB_DEPTH - 2)

  StreamRenameUtil(this)
}


object GenCommit extends App{
  GenConfig.spinal.generateVerilog(Commit())
}
