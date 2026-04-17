package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._
import MyUtils._
import BundleImplicit._


// Commit 2 instructions/cycle
case class Commit() extends Component{
  import CpuConfig._

  // =================== IO ===================
  // dispatch stage, write rob
  val dis_fire       = Vec(in Bool(), 2)
  val dis_pc         = Vec(in UInt(32 bits), 2)
  val dis_rd_addr    = Vec(in UInt(5 bits), 2)
  val dis_rd_wen     = Vec(in Bool(), 2)
  val dis_instr      = Vec(in Bits(32 bits), 2)

  // wbc stage, write to rob
  val wbc_src   = Vec(slave(Stream(ExeDst())), 5)

  // complete stage, read from rob
  val complete    = Vec(Stream(ExeDst()), 2)
  val cpl_rd_wen  = Vec(out Bool(), 2)
  val cpl_rd_addr = Vec(out UInt(5 bits), 2)
  val cpl_rob_adr = Vec(out UInt(ROB_ADR_W bits), 2)

  // forwar rob data to dispath
  val rob_rs1_addr = Vec(in UInt(ROB_ADR_W bits), 2)
  val rob_rs2_addr = Vec(in UInt(ROB_ADR_W bits), 2)
  val rob_rs1_data = Vec(out Bits(64 bits), 2)
  val rob_rs2_data = Vec(out Bits(64 bits), 2)

  // ret stage, write to ARF
  val retire   = Vec(master(Stream(ExeDst())), 2) 

  // control info output
  val rob_is_ready   = out Bool()
  val tail_adr_older = out UInt(ROB_ADR_W bits)
  val tail_adr_newer = out UInt(ROB_ADR_W bits)
  val head_adr_out   = out UInt(ROB_ADR_W bits)

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

    //-------------- complete -----------------
    when((complete(0).fire && complete(1).fire) && head_adr_plus===U(i)){ // complete 2 instr, clear head +1
      rob.rd_vld(i) := False
      rob.rd_data(i):= B(0, 64 bits)
      rob.pc(i)     := U(0)
      rob.valid(i)  := False
    }
    .elsewhen((complete(0).fire || complete(1).fire) && head_adr_curr===U(i)){ // complete 1 instr, clear head
      rob.rd_vld(i) := False
      rob.rd_data(i):= B(0, 64 bits)
      rob.pc(i)     := U(0)
      rob.valid(i)  := False
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

  // control info
  tail_adr_older := tail_adr_curr
  tail_adr_newer := tail_adr_plus
  head_adr_out   := head_adr_curr
  entry_cnt      := entry_cnt + dis_fire_num - cpl_fire_num
  rob_is_ready   := entry_cnt <= (ROB_DEPTH - 2)
  for(i <- 0 until 2){
    cpl_rd_wen(i)   := complete(i).fire && complete(i).rd_wen
    cpl_rd_addr(i)  := complete(i).rd_addr
    cpl_rob_adr(i)  := complete(i).rob_adr
    rob_rs1_data(i) := rob.rd_data(rob_rs1_addr(i))
    rob_rs2_data(i) := rob.rd_data(rob_rs2_addr(i))
  }

  StreamRenameUtil(this)
}


object GenCommit extends App{
  GenConfig.spinal.generateVerilog(Commit())
}
