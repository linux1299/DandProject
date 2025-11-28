package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._
import MyUtils._
import BundleImplicit._


// Commit 2 instructions/cycle
case class Commit() extends Component{

  // =================== IO ===================
  val flush     = out Bool()
  val change_flow = in Bool()
  val wbc_src   = Vec(slave(Stream(ExeDst())), 5) // wbc stage
  val dis_valid = Vec(in Bool(), 2)
  val dis_fire  = Vec(in Bool(), 2)
  val dis_onehot= Vec(in Bits(5 bits), 2)
  val dis_pc    = Vec(in UInt(32 bits), 2)
  val wbc_dst   = Vec(master(Stream(ExeDst())), 2) // ret stage
  val commit_fifo_ready = out Bool()
  val tail_adr_older = out UInt(3 bits)
  val tail_adr_newer = out UInt(3 bits)
  val head_adr_out   = out UInt(3 bits)


  // =============== Entries of Commit =================
  val head_ptr      = Reg(UInt(4 bits)) init(0)
  val tail_ptr      = Reg(UInt(4 bits)) init(0)
  val head_ptr_next = UInt(4 bits)
  val tail_ptr_next = UInt(4 bits)
  val head_ptr_last = UInt(4 bits)
  val tail_ptr_last = UInt(4 bits)
  val head_adr      = head_ptr(2 downto 0)
  val tail_adr      = tail_ptr(2 downto 0)
  val head_adr_last = head_ptr_last(2 downto 0)
  val tail_adr_last = tail_ptr_last(2 downto 0)
  val entry         = new Area{
    val onehot      = Vec(Reg(Bits(5 bits)) init(0), 8)
    val pc          = Vec(Reg(UInt(32 bits)) init(0), 8)
  }
  val entry_cnt        = Reg(UInt(4 bits)) init(0)
  val dis_fire_num     = UInt(2 bits)
  val wbc_fire_num     = UInt(2 bits)
  val head_entry_older = Bits(5 bits)
  val head_entry_newer = Bits(5 bits)
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
  dis_fire_num := CountOne(dis_fire)
  wbc_fire_num := wbc_stream(0).fire.asUInt.resize(2 bits) + wbc_stream(1).fire.asUInt.resize(2 bits)

  // =============== Update head ptr =================
  when(flush){
    head_ptr := U(0)
  }
  .otherwise{
    head_ptr := head_ptr_next
  }

  head_ptr_next := head_ptr + wbc_fire_num
  head_ptr_last := head_ptr + 1

  // =============== Update tail ptr =================
  when(flush){
    tail_ptr := U(0)
  }
  .otherwise{
    tail_ptr := tail_ptr_next
  }

  tail_ptr_next := tail_ptr + dis_fire_num
  tail_ptr_last := tail_ptr + 1

  // =============== Update Entry =================
  for(i <- 0 until 8){
    when(flush){
      entry.onehot(i) := B(0)
      entry.pc(i)     := U(0)
    }
    .elsewhen(dis_fire_num===U(2) && tail_adr_last===U(i)){ // dispatch 2 instr, write to tail_adr_last
      entry.onehot(i) := dis_onehot(1)
      entry.pc(i)     := dis_pc(1)
    }
    .elsewhen(dis_fire_num===U(2) && tail_adr===U(i)){ // dispatch 2 instr, write to tail_adr
      entry.onehot(i) := dis_onehot(0)
      entry.pc(i)     := dis_pc(0)
    }
    .elsewhen(dis_fire_num===U(1) && tail_adr===U(i) && dis_valid(0)){ // dispatch 1 instr, from older, write tail_adr
      entry.onehot(i) := dis_onehot(0)
      entry.pc(i)     := dis_pc(0)
    }
    .elsewhen(dis_fire_num===U(1) && tail_adr===U(i) && dis_valid(1)){ // dispatch 1 instr, from newer, write tail_adr
      entry.onehot(i) := dis_onehot(1)
      entry.pc(i)     := dis_pc(1)
    }

    when((wbc_stream(0).fire && wbc_stream(1).fire) && head_adr_last===U(i)){ // pop 2 instr, head_adr_last
      entry.onehot(i) := B(0)
      entry.pc(i)     := U(0)
    }
    .elsewhen((wbc_stream(0).fire || wbc_stream(1).fire) && head_adr===U(i)){ // pop 1 instr, head_adr
      entry.onehot(i) := B(0)
      entry.pc(i)     := U(0)
    }
  }

  head_entry_older := entry.onehot(head_adr)
  head_entry_newer := entry.onehot(head_adr_last)

  when(flush){
    entry_cnt := U(0)
  }
  .otherwise{
    entry_cnt := entry_cnt + dis_fire_num - wbc_fire_num
  }


  // =================== Output ===================
  val flush_reg = RegInit(False)
  when(change_flow && head_entry_older(0)){ // when BJU's instruction is at head, flush next cycle
    flush_reg := True
  }
  .elsewhen(flush){
    flush_reg := False
  }
  flush := flush_reg && wbc_src(0).fire

  for(i <- 0 until 5){
    wbc_src_valid(i) := wbc_src(i).valid
    wbc_src(i).ready := (head_entry_older(i) && wbc_stream(0).fire) || (head_entry_newer(i) && wbc_stream(1).fire)
  }

  wbc_stream(0).valid   := (head_entry_older & wbc_src_valid).orR
  wbc_stream(1).valid   := (head_entry_newer & wbc_src_valid).orR && wbc_stream(0).fire
  wbc_stream(0).rd_data := dataMux(head_entry_older, wbc_src_rd_data)
  wbc_stream(1).rd_data := dataMux(head_entry_newer, wbc_src_rd_data)
  wbc_stream(0).rd_addr := dataMux(head_entry_older, wbc_src_rd_addr).asUInt
  wbc_stream(1).rd_addr := dataMux(head_entry_newer, wbc_src_rd_addr).asUInt
  wbc_stream(0).rd_wen  := dataMux(head_entry_older, wbc_src_rd_wen).asBool
  wbc_stream(1).rd_wen  := dataMux(head_entry_newer, wbc_src_rd_wen).asBool
  wbc_stream(0).pc      := dataMux(head_entry_older, wbc_src_pc).asUInt
  wbc_stream(1).pc      := dataMux(head_entry_newer, wbc_src_pc).asUInt
  wbc_stream(0).instr   := dataMux(head_entry_older, wbc_src_instr)
  wbc_stream(1).instr   := dataMux(head_entry_newer, wbc_src_instr)

  wbc_stream(0) >-> wbc_dst(0)
  wbc_stream(1) >-> wbc_dst(1)

  tail_adr_older := tail_adr
  tail_adr_newer := tail_adr_last
  head_adr_out   := head_adr
  commit_fifo_ready := (entry_cnt <= U(6))

  StreamRenameUtil(this)
}


object GenCommit extends App{
  GenConfig.spinal.generateVerilog(Commit())
}
