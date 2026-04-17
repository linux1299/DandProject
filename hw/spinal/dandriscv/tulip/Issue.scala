package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._
import MyUtils._
import BundleImplicit._

// issue 2 instructions/cycle in FIFO order
case class Issue() extends Component{
  import CpuConfig._
  import ExeSelEnum._

  // =================== IO ===================
  val flush   = in Bool()
  val iss_src = Vec(slave(Stream(IssueSrc())), 2)
  val iss_dst = Vec(master(Stream(IssueDst())), 2)

  // =============== Entries of Issue =================
  val entry = Array.fill(2)(new IssueEntry())
  val trap_or_print = Bits(2 bits)

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

  }
  // =================== perf ===================
  val issue0_stall_of_entry1_not_ready = iss_src(0).isStall && !entry(1).ready
  val issue0_stall_of_entry1_not_ready_cnt = Reg(UInt(32 bits)) init(0)
  when(issue0_stall_of_entry1_not_ready) {issue0_stall_of_entry1_not_ready_cnt := issue0_stall_of_entry1_not_ready_cnt+1}

  StreamRenameUtil(this)
}


case class IssueEntry() extends Area{
  val valid   = RegInit(False)
  val ready   = Bool()
  val update  = Bool()
  val iss_pkg = Reg(IssueSrc())
  val exe_oh  = Reg(Bits(5 bits)) init(0)
}


object GenIssue extends App{
  GenConfig.spinal.generateVerilog(Issue())
}
