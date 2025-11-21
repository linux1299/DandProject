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
  val exe_fire  = Vec(in Bool(), 5)
  val exe_older = Vec(in Bool(), 5)
  val ret_dst   = Vec(master(Stream(ExeDst())), 2) // ret stage
  

  // =============== Entries of Commit =================
  val head_ptr      = Reg(UInt(3 bits)) init(0)
  val tail_ptr      = Reg(UInt(3 bits)) init(0)
  val head_ptr_next = UInt(3 bits)
  val tail_ptr_next = UInt(3 bits)
  val head_ptr_end  = UInt(3 bits)
  val tail_ptr_end  = UInt(3 bits)
  val entry         = new Area{
    val exe_onehot  = Vec(Reg(Bits(5 bits)) init(0), 5)
  }
  val exe_fire_num      = UInt(3 bits)
  val exe_onehot_head_a = Bits(5 bits)
  val exe_onehot_head_b = Bits(5 bits)
  val wbc_src_valid     = Bits(5 bits)
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
  val wbc_src_older   = wbc_src(4).older ##
                        wbc_src(3).older ##
                        wbc_src(2).older ##
                        wbc_src(1).older ##
                        wbc_src(0).older

  // =============== Stream =================
  val ret_stream = Vec(Stream(ExeDst()), 2) // wbc stage
  val ret_stream_fire = Vec(Bool(), 2)
  for(i <- 0 until 2){
    ret_stream_fire(i) := ret_stream(i).fire
  }

  // =============== Update head ptr =================
  when(flush){
    head_ptr := U(0)
  }
  .otherwise{
    head_ptr := head_ptr_next
  }

  switch(head_ptr){
    is(U(4, 3 bits)){
      when(ret_stream_fire(0) && ret_stream_fire(1)){
        head_ptr_next := U(1, 3 bits)
      }
      .elsewhen(ret_stream_fire(0) || ret_stream_fire(1)){
        head_ptr_next := U(0, 3 bits)
      }
      .otherwise{
        head_ptr_next := U(4, 3 bits)
      }
      head_ptr_end := U(0, 3 bits)
    }
    is(U(3, 3 bits)){
      when(ret_stream_fire(0) && ret_stream_fire(1)){
        head_ptr_next := U(0, 3 bits)
      }
      .elsewhen(ret_stream_fire(0) || ret_stream_fire(1)){
        head_ptr_next := U(4, 3 bits)
      }
      .otherwise{
        head_ptr_next := U(3, 3 bits)
      }
      head_ptr_end := U(4, 3 bits)
    }
    default{
      when(ret_stream_fire(0) && ret_stream_fire(1)){
        head_ptr_next := head_ptr + 2
      }
      .elsewhen(ret_stream_fire(0) || ret_stream_fire(1)){
        head_ptr_next := head_ptr + 1
      }
      .otherwise{
        head_ptr_next := head_ptr
      }
      head_ptr_end := head_ptr + 1
    }
  }

  // =============== Update tail ptr =================
  when(flush){
    tail_ptr := U(0)
  }
  .otherwise{
    tail_ptr := tail_ptr_next
  }

  exe_fire_num := CountOne(exe_fire)

  switch(tail_ptr){
    is(U(4, 3 bits)){
      when(exe_fire_num===U(2)){
        tail_ptr_next := U(1, 3 bits)
      }
      .elsewhen(exe_fire_num===U(1)){
        tail_ptr_next := U(0, 3 bits)
      }
      .otherwise{
        tail_ptr_next := U(4, 3 bits)
      }
      tail_ptr_end := U(0, 3 bits)
    }
    is(U(3, 3 bits)){
      when(exe_fire_num===U(2)){
        tail_ptr_next := U(0, 3 bits)
      }
      .elsewhen(exe_fire_num===U(1)){
        tail_ptr_next := U(4, 3 bits)
      }
      .otherwise{
        tail_ptr_next := U(3, 3 bits)
      }
      tail_ptr_end := U(4, 3 bits)
    }
    default{
      when(exe_fire_num===U(2)){
        tail_ptr_next := tail_ptr + 2
      }
      .elsewhen(exe_fire_num===U(1)){
        tail_ptr_next := tail_ptr + 1
      }
      .otherwise{
        tail_ptr_next := tail_ptr
      }
      tail_ptr_end := tail_ptr + 1
    }
  }

  // =============== Update Entry =================
  for(i <- 0 until 5){
    when(flush){
      entry.exe_onehot(i) := B(0)
    }
    .elsewhen(exe_fire_num===U(2) && tail_ptr_end===U(i)){
      entry.exe_onehot(i) := (exe_fire(4) && !exe_older(4)) ##
                             (exe_fire(3) && !exe_older(3)) ##
                             (exe_fire(2) && !exe_older(2)) ##
                             (exe_fire(1) && !exe_older(1)) ##
                             (exe_fire(0) && !exe_older(0))
    }
    .elsewhen(tail_ptr===U(i)){
      entry.exe_onehot(i) := (exe_fire(4) && exe_older(4)) ##
                             (exe_fire(3) && exe_older(3)) ##
                             (exe_fire(2) && exe_older(2)) ##
                             (exe_fire(1) && exe_older(1)) ##
                             (exe_fire(0) && exe_older(0))
    }
    .elsewhen((ret_stream_fire(0) && ret_stream_fire(1)) && head_ptr_end===U(i)){
      entry.exe_onehot(i) := B(0)
    }
    .elsewhen((ret_stream_fire(0) || ret_stream_fire(1)) && head_ptr===U(i)){
      entry.exe_onehot(i) := B(0)
    }
  }

  exe_onehot_head_a := entry.exe_onehot(head_ptr)
  exe_onehot_head_b := entry.exe_onehot(head_ptr_end)


  // =================== Output ===================
  val flush_reg = RegInit(False)
  when(change_flow){
    flush_reg := True
  }
  .elsewhen(flush){
    flush_reg := False
  }
  flush := flush_reg && wbc_src(0).fire

  for(i <- 0 until 5){
    wbc_src_valid(i) := wbc_src(i).valid
    if(i==0)
      wbc_src(i).ready := exe_onehot_head_a(i) || (ret_stream_fire(0) && exe_onehot_head_b(i))
    else
      wbc_src(i).ready := exe_onehot_head_a(i) || (ret_stream_fire(0) && exe_onehot_head_b(i)) || flush
  }

  ret_stream(0).valid   := (exe_onehot_head_a & wbc_src_valid).orR
  ret_stream(1).valid   := (exe_onehot_head_b & wbc_src_valid).orR && ret_stream(0).fire
  ret_stream(0).rd_data := dataMux(exe_onehot_head_a, wbc_src_rd_data)
  ret_stream(1).rd_data := dataMux(exe_onehot_head_b, wbc_src_rd_data)
  ret_stream(0).rd_addr := dataMux(exe_onehot_head_a, wbc_src_rd_addr).asUInt
  ret_stream(1).rd_addr := dataMux(exe_onehot_head_b, wbc_src_rd_addr).asUInt
  ret_stream(0).rd_wen  := dataMux(exe_onehot_head_a, wbc_src_rd_wen).asBool
  ret_stream(1).rd_wen  := dataMux(exe_onehot_head_b, wbc_src_rd_wen).asBool
  ret_stream(0).pc      := dataMux(exe_onehot_head_a, wbc_src_pc).asUInt
  ret_stream(1).pc      := dataMux(exe_onehot_head_b, wbc_src_pc).asUInt
  ret_stream(0).instr   := dataMux(exe_onehot_head_a, wbc_src_instr)
  ret_stream(1).instr   := dataMux(exe_onehot_head_b, wbc_src_instr)
  ret_stream(0).older   := dataMux(exe_onehot_head_a, wbc_src_older).asBool
  ret_stream(1).older   := dataMux(exe_onehot_head_b, wbc_src_older).asBool

  ret_stream(0) >-> ret_dst(0)
  ret_stream(1) >-> ret_dst(1)

  StreamRenameUtil(this)
}


object GenCommit extends App{
  GenConfig.spinal.generateVerilog(Commit())
}
