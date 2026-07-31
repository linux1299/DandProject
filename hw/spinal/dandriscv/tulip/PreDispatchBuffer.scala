package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._
import MyUtils._
import BundleImplicit._

// issue 2 instructions/cycle in FIFO order
case class PreDispatchBuffer() extends Component{
  import CpuConfig._
  import ExeSelEnum._

  // =================== IO ===================
  val flush        = in Bool()
  val iss_src      = Vec(slave(Stream(IssueSrc())), 2)
  val iss_dst      = Vec(master(Stream(IssueDst())), 2)
  val read_regfile = Vec(master(ReadRegfile()), 2)
  val ret_rd_wen   = Vec(in Bool(), 2)
  val ret_rd_addr  = Vec(in UInt(5 bits), 2)
  val ret_rd_data  = Vec(in Bits(64 bits), 2)

  // =============== Entries of PreDispatchBuffer =================
  val entry = Array.fill(2)(new PreDispatchEntry())
  val trap_or_print = Bits(2 bits)

  // ============ forard ==============
  val rs1_forward_when_fire_from_ret0 = Vec(Bool(), 2)
  val rs2_forward_when_fire_from_ret0 = Vec(Bool(), 2)
  val rs1_forward_when_stall_from_ret0 = Vec(Bool(), 2)
  val rs2_forward_when_stall_from_ret0 = Vec(Bool(), 2)
  val rs1_forward_when_fire_from_ret1 = Vec(Bool(), 2)
  val rs2_forward_when_fire_from_ret1 = Vec(Bool(), 2)
  val rs1_forward_when_stall_from_ret1 = Vec(Bool(), 2)
  val rs2_forward_when_stall_from_ret1 = Vec(Bool(), 2)

  // =============== Update Head entry =================
  for(i <- 0 until 2){
    when(flush){
      entry(i).valid := False
    }
    .otherwise{ // if both ready, accept src, otherwise if dst fire , clear valid
      entry(i).valid := entry(i).update ? iss_src(i).valid | (iss_dst(i).fire ? False | entry(i).valid)
    }

    entry(i).ready   := !entry(i).valid || iss_dst(i).ready
    entry(i).update  :=  entry(0).ready && entry(1).ready

    trap_or_print(i) := (iss_src(i).instr===B"32'h6b" || iss_src(i).instr===B"32'h7b")

    // =================== Drive regfile read ===================
    read_regfile(i).rs1_addr := iss_dst(i).isStall ? iss_dst(i).iss_pkg.rs1_addr | iss_src(i).rs1_addr
    read_regfile(i).rs2_addr := iss_dst(i).isStall ? iss_dst(i).iss_pkg.rs2_addr | iss_src(i).rs2_addr

    rs1_forward_when_fire_from_ret0(i) := (ret_rd_wen(0) && iss_src(i).fire   && iss_src(i).rs1_addr===ret_rd_addr(0) && iss_src(i).rs1_addr=/=U(0))
    rs1_forward_when_fire_from_ret1(i) := (ret_rd_wen(1) && iss_src(i).fire   && iss_src(i).rs1_addr===ret_rd_addr(1) && iss_src(i).rs1_addr=/=U(0))

    rs1_forward_when_stall_from_ret0(i) := (ret_rd_wen(0) && iss_dst(i).isStall && iss_dst(i).iss_pkg.rs1_addr===ret_rd_addr(0) && iss_dst(i).iss_pkg.rs1_addr=/=U(0))
    rs1_forward_when_stall_from_ret1(i) := (ret_rd_wen(1) && iss_dst(i).isStall && iss_dst(i).iss_pkg.rs1_addr===ret_rd_addr(1) && iss_dst(i).iss_pkg.rs1_addr=/=U(0))

    rs2_forward_when_fire_from_ret0(i) := (ret_rd_wen(0) && iss_src(i).fire   && iss_src(i).rs2_addr===ret_rd_addr(0) && iss_src(i).rs2_addr=/=U(0))
    rs2_forward_when_fire_from_ret1(i) := (ret_rd_wen(1) && iss_src(i).fire   && iss_src(i).rs2_addr===ret_rd_addr(1) && iss_src(i).rs2_addr=/=U(0))

    rs2_forward_when_stall_from_ret0(i) := (ret_rd_wen(0) && iss_dst(i).isStall && iss_dst(i).iss_pkg.rs2_addr===ret_rd_addr(0) && iss_dst(i).iss_pkg.rs2_addr=/=U(0))
    rs2_forward_when_stall_from_ret1(i) := (ret_rd_wen(1) && iss_dst(i).isStall && iss_dst(i).iss_pkg.rs2_addr===ret_rd_addr(1) && iss_dst(i).iss_pkg.rs2_addr=/=U(0))

    // Read regfile with retire forwarding for rs1
    when(rs1_forward_when_fire_from_ret1(i) || rs1_forward_when_stall_from_ret1(i)){
      entry(i).rs1_data := ret_rd_data(1)
    }
    .elsewhen(rs1_forward_when_fire_from_ret0(i) || rs1_forward_when_stall_from_ret0(i)){
      entry(i).rs1_data := ret_rd_data(0)
    }
    .otherwise{
      entry(i).rs1_data := read_regfile(i).rs1_data
    }

    // Read regfile with retire forwarding for rs2
    when(rs2_forward_when_fire_from_ret1(i) || rs2_forward_when_stall_from_ret1(i)){
      entry(i).rs2_data := ret_rd_data(1)
    }
    .elsewhen(rs2_forward_when_fire_from_ret0(i) || rs2_forward_when_stall_from_ret0(i)){
      entry(i).rs2_data := ret_rd_data(0)
    }
    .otherwise{
      entry(i).rs2_data := read_regfile(i).rs2_data
    }

    // update entry
    when(entry(i).update && iss_src(i).valid){
      entry(i).iss_pkg := iss_src(i).payload

      when(iss_src(i).exe_sel===BJU || trap_or_print(i)){
        entry(i).exe_oh := B"00001"
      }
      .elsewhen(iss_src(i).exe_sel===ALU){
        if(i==0)
          entry(i).exe_oh := B"00010"
        else
          entry(i).exe_oh := B"00100"
      }
      .elsewhen(iss_src(i).exe_sel===DIV){
        entry(i).exe_oh := B"01000"
      }
      .elsewhen(iss_src(i).exe_sel===LSU){
        entry(i).exe_oh := B"10000"
      }
    }
 
    // =================== Output ===================
    iss_src(i).ready := entry(i).update
    iss_dst(i).valid := entry(i).valid

    iss_dst(i).iss_pkg := entry(i).iss_pkg
    iss_dst(i).exe_oh  := entry(i).exe_oh
    iss_dst(i).rs1_data := entry(i).rs1_data
    iss_dst(i).rs2_data := entry(i).rs2_data

  }
  // =================== perf ===================
  val issue0_stall_of_entry1_not_ready = iss_src(0).isStall && !entry(1).ready
  val issue0_stall_of_entry1_not_ready_cnt = Reg(UInt(32 bits)) init(0)
  when(issue0_stall_of_entry1_not_ready) {issue0_stall_of_entry1_not_ready_cnt := issue0_stall_of_entry1_not_ready_cnt+1}

  StreamRenameUtil(this)
}


case class PreDispatchEntry() extends Area{
  val valid   = RegInit(False)
  val ready   = Bool()
  val update  = Bool()
  val iss_pkg = Reg(IssueSrc())
  val exe_oh  = Reg(Bits(5 bits)) init(0)
  val rs1_data = Reg(Bits(64 bits))
  val rs2_data = Reg(Bits(64 bits))
}


object GenPreDispatchBuffer extends App{
  GenConfig.spinal.generateVerilog(PreDispatchBuffer())
}
