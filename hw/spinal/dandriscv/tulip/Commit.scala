package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._
import MyUtils._
import BundleImplicit._


// Commit 2 instructions/cycle
case class Commit() extends Component{

  // =================== IO ===================
  // wbc stage, write to entry
  val wbc_src   = Vec(slave(Stream(ExeDst())), 5)

  // ret stage, write to ARF
  val wbc_dst   = Vec(master(Stream(ExeDst())), 2) 

  // dispatch stage, write entry
  val dis_fire       = Vec(in Bool(), 2)
  val dis_pc         = Vec(in UInt(32 bits), 2)

  // control info
  val commit_fifo_ready = out Bool()
  val tail_adr_older    = out UInt(3 bits)
  val tail_adr_newer    = out UInt(3 bits)
  val head_adr_out      = out UInt(3 bits)

  // =============== Entries of Commit =================
  val head_ptr_curr = Reg(UInt(4 bits)) init(0)
  val tail_ptr_curr = Reg(UInt(4 bits)) init(0)
  val head_ptr_next = UInt(4 bits)
  val tail_ptr_next = UInt(4 bits)
  val head_ptr_plus = UInt(4 bits)
  val tail_ptr_plus = UInt(4 bits)
  val head_adr_curr = head_ptr_curr(2 downto 0)
  val tail_adr_curr = tail_ptr_curr(2 downto 0)
  val head_adr_plus = head_ptr_plus(2 downto 0)
  val tail_adr_plus = tail_ptr_plus(2 downto 0)
  val entry         = new Area{
    val pc          = Vec(Reg(UInt(32 bits)) init(0), 8)
    val valid       = Vec(RegInit(False), 8)
  }
  val entry_cnt        = Reg(UInt(4 bits)) init(0)
  val dis_fire_num     = UInt(2 bits)
  val wbc_fire_num     = UInt(2 bits)
  val head_pc_older    = UInt(32 bits)
  val head_pc_newer    = UInt(32 bits)
  val wbc_eq_head_older = Bits(5 bits)
  val wbc_eq_head_newer = Bits(5 bits)
  val wbc_src_valid    = Bits(5 bits)
  val wbc_src_rd_data = wbc_src(4).rd_data ##
                        wbc_src(3).rd_data ##
                        wbc_src(2).rd_data ##
                        wbc_src(1).rd_data ##
                        wbc_src(0).rd_data
  val wbc_src_rd_addr = wbc_src(4).rd_addr ##
                        wbc_src(3).rd_addr ##
                        wbc_src(2).rd_addr ##
                        wbc_src(1).rd_addr ##
                        wbc_src(0).rd_addr
  val wbc_src_rd_wen  = wbc_src(4).rd_wen ##
                        wbc_src(3).rd_wen ##
                        wbc_src(2).rd_wen ##
                        wbc_src(1).rd_wen ##
                        wbc_src(0).rd_wen
  val wbc_src_pc      = wbc_src(4).pc ##
                        wbc_src(3).pc ##
                        wbc_src(2).pc ##
                        wbc_src(1).pc ##
                        wbc_src(0).pc
  val wbc_src_instr   = wbc_src(4).instr ##
                        wbc_src(3).instr ##
                        wbc_src(2).instr ##
                        wbc_src(1).instr ##
                        wbc_src(0).instr

  // =============== Stream =================
  val wbc_stream = Vec(Stream(ExeDst()), 2) // wbc stage
  
  val wbc_src_fire_num = UInt(3 bits)
  wbc_src_fire_num := (wbc_src(0).fire && (wbc_src(0).entry_adr===head_adr_curr || wbc_src(0).entry_adr===head_adr_plus)).asUInt.resize(3 bits) + 
                      (wbc_src(1).fire && (wbc_src(1).entry_adr===head_adr_curr || wbc_src(1).entry_adr===head_adr_plus)).asUInt.resize(3 bits) + 
                      (wbc_src(2).fire && (wbc_src(2).entry_adr===head_adr_curr || wbc_src(2).entry_adr===head_adr_plus)).asUInt.resize(3 bits) + 
                      (wbc_src(3).fire && (wbc_src(3).entry_adr===head_adr_curr || wbc_src(3).entry_adr===head_adr_plus)).asUInt.resize(3 bits) + 
                      (wbc_src(4).fire && (wbc_src(4).entry_adr===head_adr_curr || wbc_src(4).entry_adr===head_adr_plus)).asUInt.resize(3 bits)
  wbc_fire_num := wbc_src_fire_num.resize(2 bits)

  // =============== Update head ptr =================
  head_ptr_curr := head_ptr_next

  head_ptr_next := head_ptr_curr + wbc_fire_num
  head_ptr_plus := head_ptr_curr + 1

  // =============== Update tail ptr =================
  tail_ptr_curr := tail_ptr_next
  dis_fire_num  := CountOne(dis_fire)
  tail_ptr_next := tail_ptr_curr + dis_fire_num
  tail_ptr_plus := tail_ptr_curr + 1

  // =============== Update Entry =================
  for(i <- 0 until 8){
    when(dis_fire_num===U(2) && tail_adr_plus===U(i)){ // dispatch 2 instr, write to tail_adr_plus
      entry.pc(i)     := dis_pc(1)
      entry.valid(i)  := True
    }
    .elsewhen(dis_fire_num===U(2) && tail_adr_curr===U(i)){ // dispatch 2 instr, write to tail_adr_curr
      entry.pc(i)     := dis_pc(0)
      entry.valid(i)  := True
    }
    .elsewhen(dis_fire_num===U(1) && tail_adr_curr===U(i) && dis_fire(0)){ // dispatch 1 instr, from older, write tail_adr_curr
      entry.pc(i)     := dis_pc(0)
      entry.valid(i)  := True
    }
    .elsewhen(dis_fire_num===U(1) && tail_adr_curr===U(i) && dis_fire(1)){ // dispatch 1 instr, from newer, write tail_adr_curr
      entry.pc(i)     := dis_pc(1)
      entry.valid(i)  := True
    }

    when((wbc_stream(0).fire && wbc_stream(1).fire) && head_adr_plus===U(i)){ // pop 2 instr, head_adr_plus
      entry.pc(i)     := U(0)
      entry.valid(i)  := False
    }
    .elsewhen((wbc_stream(0).fire || wbc_stream(1).fire) && head_adr_curr===U(i)){ // pop 1 instr, head_adr_curr
      entry.pc(i)     := U(0)
      entry.valid(i)  := False
    }

  }

  head_pc_older := entry.pc(head_adr_curr)
  head_pc_newer := entry.pc(head_adr_plus)

  entry_cnt := entry_cnt + dis_fire_num - wbc_fire_num


  // =================== Output ===================

  // return ready to wbc_src
  for(i <- 0 until 5){
    wbc_src_valid(i) := wbc_src(i).valid && entry.valid(wbc_src(i).entry_adr)

    wbc_eq_head_older(i) := (head_adr_curr===wbc_src(i).entry_adr) && wbc_src_valid(i)
    wbc_eq_head_newer(i) := (head_adr_plus===wbc_src(i).entry_adr) && wbc_src_valid(i)

    wbc_src(i).ready := (wbc_stream(0).fire && wbc_eq_head_older(i)) || 
                        (wbc_stream(1).fire && wbc_eq_head_newer(i))

    
  } 

  // prepare data to retire stage
  wbc_stream(0).valid   := (wbc_eq_head_older & wbc_src_valid).orR
  wbc_stream(1).valid   := (wbc_eq_head_newer & wbc_src_valid).orR && wbc_stream(0).fire
  wbc_stream(0).rd_data := dataMux(wbc_eq_head_older, wbc_src_rd_data)
  wbc_stream(1).rd_data := dataMux(wbc_eq_head_newer, wbc_src_rd_data)
  wbc_stream(0).rd_addr := dataMux(wbc_eq_head_older, wbc_src_rd_addr).asUInt
  wbc_stream(1).rd_addr := dataMux(wbc_eq_head_newer, wbc_src_rd_addr).asUInt
  wbc_stream(0).rd_wen  := dataMux(wbc_eq_head_older, wbc_src_rd_wen).asBool
  wbc_stream(1).rd_wen  := dataMux(wbc_eq_head_newer, wbc_src_rd_wen).asBool
  wbc_stream(0).pc      := dataMux(wbc_eq_head_older, wbc_src_pc).asUInt
  wbc_stream(1).pc      := dataMux(wbc_eq_head_newer, wbc_src_pc).asUInt
  wbc_stream(0).instr   := dataMux(wbc_eq_head_older, wbc_src_instr)
  wbc_stream(1).instr   := dataMux(wbc_eq_head_newer, wbc_src_instr)

  wbc_stream(0) >-> wbc_dst(0)
  wbc_stream(1) >-> wbc_dst(1)

  // control info
  tail_adr_older := tail_adr_curr
  tail_adr_newer := tail_adr_plus
  head_adr_out   := head_adr_curr
  commit_fifo_ready := (entry_cnt <= U(6))

  StreamRenameUtil(this)
}


object GenCommit extends App{
  GenConfig.spinal.generateVerilog(Commit())
}
