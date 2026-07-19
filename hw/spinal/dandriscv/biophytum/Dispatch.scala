package dandriscv.biophytum

import spinal.core._
import spinal.lib._
import math._
import MyUtils._
import BundleImplicit._


case class Dispatch() extends Component{
  import CpuConfig._
  import ExeSelEnum._
  import ScoreBoardEnum._
  import BjuCtrlEnum._

  // =================== IO ===================
  val dis_src = Vec(slave(Stream(InstrPkg())), 2) // read ibuffer
  val dis_dst = Vec(master(Stream(IssuePkg())), 5) // into issue queue
  // ROB
  val rob_is_ready   = in Bool() // if rob is full, stall
  val tail_adr_older = in UInt(ROB_ADR_W bits)
  val tail_adr_newer = in UInt(ROB_ADR_W bits)

  // read regfile
  val rd_regfile  = Vec(master(ReadRegfile()), 2)

  // BJU
  val bju_change_flow = in Bool()
  val bju_exe_valid   = in Bool()
  val bju_rob_adr     = in UInt(ROB_ADR_W bits)
  val branch_valid    = in Bool()
  // retire valid to clear
  val ret_forward = Vec(slave(Flow(Forward("WithData"))), 2)

  // =================== Signals ===================
  val dis_src_fire_scb      = Vec(Bits(32 bits), 2)
  val dis_src_to_dst_id     = Vec(UInt(3 bits), 2)
  val dis_src_exe_oh        = Vec(Bits(5 bits), 2)
  val dis_src_to_dst_valid  = Vec(Bits(5 bits), 2)
  val dis_src_src2_is_imm   = Vec(Bool(), 2)
  val dis_src_is_store      = Vec(Bool(), 2)
  val dis_src_trap_or_print = Bits(2 bits)
  val dis_src1_valid        = Bits(2 bits)
  val dis_src2_valid        = Bits(2 bits)
  val dis_src1_data         = Vec(Bits(64 bits), 2)
  val dis_src2_data         = Vec(Bits(64 bits), 2)
  val rs1_addr              = Vec(UInt(5 bits), 2)
  val rs2_addr              = Vec(UInt(5 bits), 2)
  val rd_addr               = Vec(UInt(5 bits), 2)
  val dis_rs1_addr          = Vec(UInt(5 bits), 5)
  val dis_rs2_addr          = Vec(UInt(5 bits), 5)
  val dis_rs1_rob_adr       = Vec(UInt(ROB_ADR_W bits), 5)
  val dis_rs2_rob_adr       = Vec(UInt(ROB_ADR_W bits), 5)
  val dis_rs1_stall_forward = Vec(Bool(), 5)
  val dis_rs2_stall_forward = Vec(Bool(), 5)
  val dis_rs1_stall_forward_data = Vec(Bits(64 bits), 5)
  val dis_rs2_stall_forward_data = Vec(Bits(64 bits), 5)

  // =================== ScoreBaord ===================
  val scb = new Area{
    // current
    val exe_oh    = Vec(Reg(Bits(5 bits)) init(0), 32)
    val rob_adr   = Vec(Reg(UInt(ROB_ADR_W bits)) init(0), 32)
    val is_in_rob = Vec(RegInit(False), 32)
    // next
    val is_in_rob_nxt = Vec(Bool(), 32)
    val exe_oh_nxt    = Vec(Bits(5 bits), 32)
    val rob_adr_nxt   = Vec(UInt(ROB_ADR_W bits), 32)

    val ret_fire0 = Vec(Bool(), 32)
    val ret_fire1 = Vec(Bool(), 32)
    val ret_fire  = Vec(Bool(), 32)
  }

  // =================== BJU Stall Logic ===================
  // After a BJU instruction is dispatched, stall subsequent dispatch
  // until the BJU executes (bju_exe_valid) or a change-of-flow occurs.
  val dis0_is_bju   = dis_src(0).fire && dis_src(0).exe_sel===BJU && !(dis_src(0).micro_op.uop_bju.bju_ctrl_op===AUIPC)
  val dis1_is_bju   = dis_src(1).fire && dis_src(1).exe_sel===BJU && !(dis_src(1).micro_op.uop_bju.bju_ctrl_op===AUIPC)
  val dis0_is_bju_comb = dis_src(0).valid && dis_src(0).exe_sel===BJU && !(dis_src(0).micro_op.uop_bju.bju_ctrl_op===AUIPC)

  // val dis0_is_bju   = dis_src(0).fire && dis_src(0).exe_sel===BJU
  // val dis1_is_bju   = dis_src(1).fire && dis_src(1).exe_sel===BJU
  

  val bju_pending = RegInit(False)
  when(dis0_is_bju || dis1_is_bju){
    bju_pending := True
  }
  .elsewhen((bju_exe_valid || bju_change_flow) && bju_pending){
    bju_pending := False
  }

  // retire forward to issue stall
  val ret0_forward_to_issue_rs1 = Vec(Bool(), 5)
  val ret1_forward_to_issue_rs1 = Vec(Bool(), 5)
  val ret0_forward_to_issue_rs2 = Vec(Bool(), 5)
  val ret1_forward_to_issue_rs2 = Vec(Bool(), 5)

  // ============== bypass older rd to rs1/rs2 ==============
  val dis1_rs1_from_dis0_rd = dis_src(0).fire && (dis_src(0).rd_addr===dis_src(1).rs1_addr) && dis_src(0).micro_op.uop_com.rd_wen
  val dis1_rs2_from_dis0_rd = dis_src(0).fire && (dis_src(0).rd_addr===dis_src(1).rs2_addr) && dis_src(0).micro_op.uop_com.rd_wen

  val dis0_src1_rob_adr = UInt(ROB_ADR_W bits)
  val dis0_src2_rob_adr = UInt(ROB_ADR_W bits)
  val dis1_src1_rob_adr = UInt(ROB_ADR_W bits)
  val dis1_src2_rob_adr = UInt(ROB_ADR_W bits)

  dis0_src1_rob_adr := scb.rob_adr(rs1_addr(0))
  dis0_src2_rob_adr := scb.rob_adr(rs2_addr(0))
  dis1_src1_rob_adr := dis1_rs1_from_dis0_rd ? tail_adr_older | scb.rob_adr(rs1_addr(1))
  dis1_src2_rob_adr := dis1_rs2_from_dis0_rd ? tail_adr_older | scb.rob_adr(rs2_addr(1))

  // ============== src2 use imm ==============
  val dis0_src2_use_imm = (dis_src_is_store(0) ? False | dis_src_src2_is_imm(0))
  val dis1_src2_use_imm = (dis_src_is_store(1) ? False | dis_src_src2_is_imm(1))

  // =================== ScoreBaord FSM ===================
  scb.exe_oh(0)       := scb.exe_oh_nxt(0)
  scb.rob_adr(0)      := scb.rob_adr_nxt(0)
  scb.is_in_rob(0)    := scb.is_in_rob_nxt(0)
  scb.is_in_rob_nxt(0):= False
  scb.exe_oh_nxt(0)   := B(0, 5 bits)
  scb.rob_adr_nxt(0)  := U(0, ROB_ADR_W bits)
  dis_src_fire_scb(0)(0) := False
  dis_src_fire_scb(1)(0) := False
  scb.ret_fire(0)     := False
  scb.ret_fire0(0)    := False
  scb.ret_fire1(0)    := False

  for(i <- 1 until 32){
    dis_src_fire_scb(0)(i) := dis_src(0).fire && dis_src(0).micro_op.uop_com.rd_wen && dis_src(0).rd_addr===U(i)
    dis_src_fire_scb(1)(i) := dis_src(1).fire && dis_src(1).micro_op.uop_com.rd_wen && dis_src(1).rd_addr===U(i)

    scb.exe_oh(i)   := scb.exe_oh_nxt(i)
    scb.rob_adr(i)  := scb.rob_adr_nxt(i)
    scb.is_in_rob(i):= scb.is_in_rob_nxt(i)

    scb.ret_fire0(i):= ret_forward(0).valid && ret_forward(0).addr===U(i) && ret_forward(0).rob_adr===scb.rob_adr(i)
    scb.ret_fire1(i):= ret_forward(1).valid && ret_forward(1).addr===U(i) && ret_forward(1).rob_adr===scb.rob_adr(i)
    scb.ret_fire(i) := scb.ret_fire0(i) || scb.ret_fire1(i)

    when(dis_src_fire_scb(1)(i)){
      scb.exe_oh_nxt(i)    := dis_src_exe_oh(1)
      scb.rob_adr_nxt(i)   := tail_adr_newer
      scb.is_in_rob_nxt(i) := True
    }
    .elsewhen(dis_src_fire_scb(0)(i)){
      scb.exe_oh_nxt(i)    := dis_src_exe_oh(0)
      scb.rob_adr_nxt(i)   := tail_adr_older
      scb.is_in_rob_nxt(i) := True
    }
    .otherwise{
      scb.exe_oh_nxt(i)    := scb.exe_oh(i)
      scb.rob_adr_nxt(i)   := scb.rob_adr(i)
      scb.is_in_rob_nxt(i) := scb.ret_fire(i) ? False | scb.is_in_rob(i)
    }
  }

  // =================== dispatch to issue queue ===================
  for(i <- 0 until 2){
    dis_src_trap_or_print(i) := dis_src(i).instr===B"32'h6b" || dis_src(i).instr===B"32'h7b"
    rs1_addr(i)   := dis_src(i).rs1_addr
    rs2_addr(i)   := dis_src(i).rs2_addr
    rd_addr(i)    := dis_src(i).rd_addr
    dis_src_src2_is_imm(i) := dis_src(i).micro_op.uop_com.src2_is_imm
    dis_src_is_store(i) := dis_src(i).micro_op.uop_lsu.lsu_is_store
    
    when(dis_src(i).exe_sel===BJU || dis_src_trap_or_print(i)){
      dis_src_to_dst_id(i) := U(0, 3 bits)
      dis_src_exe_oh(i)    := B"00001"
    }
    .elsewhen(dis_src(i).exe_sel===ALU){
      if(i==0){
        dis_src_to_dst_id(0) := dis_dst(1).ready ? U(1, 3 bits) | U(2, 3 bits)
        dis_src_exe_oh(0)    := dis_dst(1).ready ? B"00010" | B"00100"
      }
      else{
        dis_src_to_dst_id(1) := (dis_src_to_dst_id(0)===U(1)) ? U(2, 3 bits) | U(1, 3 bits)
        dis_src_exe_oh(1)    := (dis_src_to_dst_id(0)===U(1)) ? B"00100" | B"00010"
      }
    }
    .elsewhen(dis_src(i).exe_sel===DIV){
      dis_src_to_dst_id(i) := U(3, 3 bits)
      dis_src_exe_oh(i)    := B"01000"
    }
    .elsewhen(dis_src(i).exe_sel===LSU){
      dis_src_to_dst_id(i) := U(4, 3 bits)
      dis_src_exe_oh(i)    := B"10000"
    }
    .otherwise{
      dis_src_to_dst_id(i) := U(7, 3 bits)
      dis_src_exe_oh(i)    := B"00000"
    }
  }

  

  dis_src1_valid(0) :=  scb.ret_fire0(rs1_addr(0)) ||
                        scb.ret_fire1(rs1_addr(0)) ||
                        !scb.is_in_rob(rs1_addr(0))

  dis_src1_valid(1) :=  (scb.ret_fire0(rs1_addr(1)) ||
                         scb.ret_fire1(rs1_addr(1)) ||
                        !scb.is_in_rob(rs1_addr(1))  ) &&
                        !dis1_rs1_from_dis0_rd

  dis_src2_valid(0) :=   scb.ret_fire0(rs2_addr(0)) ||
                         scb.ret_fire1(rs2_addr(0)) ||
                        !scb.is_in_rob(rs2_addr(0)) ||
                         dis0_src2_use_imm

  dis_src2_valid(1) :=  ((scb.ret_fire0(rs2_addr(1)) ||
                          scb.ret_fire1(rs2_addr(1)) ||
                         !scb.is_in_rob(rs2_addr(1)) ) && !dis1_rs2_from_dis0_rd) || dis1_src2_use_imm

  dis_src1_data(0)  := scb.ret_fire1(rs1_addr(0)) ? ret_forward(1).data |
                      (scb.ret_fire0(rs1_addr(0)) ? ret_forward(0).data | rd_regfile(0).rs1_data)

  dis_src1_data(1)  := scb.ret_fire1(rs1_addr(1)) ? ret_forward(1).data |
                      (scb.ret_fire0(rs1_addr(1)) ? ret_forward(0).data | rd_regfile(1).rs1_data)

  dis_src2_data(0)  := dis0_src2_use_imm ? dis_src(0).imm |
                      (scb.ret_fire1(rs2_addr(0)) ? ret_forward(1).data |
                      (scb.ret_fire0(rs2_addr(0)) ? ret_forward(0).data | rd_regfile(0).rs2_data))

  dis_src2_data(1)  := dis1_src2_use_imm ? dis_src(1).imm |
                      (scb.ret_fire1(rs2_addr(1)) ? ret_forward(1).data |
                      (scb.ret_fire0(rs2_addr(1)) ? ret_forward(0).data | rd_regfile(1).rs2_data))

  // =================== output ===================
  val dis_stream = Vec(Stream(IssuePkg()), 5)

  for(id <- 0 until 5){ // id from 0 to 4
    dis_src_to_dst_valid(0)(id) := dis_src(0).valid && dis_src_to_dst_id(0)===U(id) && rob_is_ready && !bju_pending
    dis_src_to_dst_valid(1)(id) := dis_src(1).valid && dis_src_to_dst_id(1)===U(id) && rob_is_ready && (dis_src(0).fire || !dis_src(0).valid) && !(dis_src(0).valid && dis_src_to_dst_id(1)===dis_src_to_dst_id(0)) && !bju_pending && !dis0_is_bju_comb

    dis_stream(id).valid        := dis_src_to_dst_valid(0)(id) || dis_src_to_dst_valid(1)(id)
    dis_stream(id).instr_pkg    := dis_src_to_dst_valid(0)(id) ? dis_src(0).payload | dis_src(1).payload
    dis_stream(id).src1_valid   := dis_src_to_dst_valid(0)(id) ? dis_src1_valid(0)  | dis_src1_valid(1)
    dis_stream(id).src1_data    := dis_src_to_dst_valid(0)(id) ? dis_src1_data(0)   | dis_src1_data(1)
    dis_stream(id).src2_valid   := dis_src_to_dst_valid(0)(id) ? dis_src2_valid(0)  | dis_src2_valid(1)
    dis_stream(id).src2_data    := dis_src_to_dst_valid(0)(id) ? dis_src2_data(0)   | dis_src2_data(1)
                                                                 
    dis_stream(id).src1_exe_oh  := dis_src_to_dst_valid(0)(id) ? scb.exe_oh(rs1_addr(0)) | scb.exe_oh(rs1_addr(1))
    dis_stream(id).src2_exe_oh  := dis_src_to_dst_valid(0)(id) ? scb.exe_oh(rs2_addr(0)) | scb.exe_oh(rs2_addr(1))
    dis_stream(id).src1_rob_adr := dis_src_to_dst_valid(0)(id) ? dis0_src1_rob_adr | dis1_src1_rob_adr
    dis_stream(id).src2_rob_adr := dis_src_to_dst_valid(0)(id) ? dis0_src2_rob_adr | dis1_src2_rob_adr
    dis_stream(id).rd_rob_adr   := (dis_src(0).fire && dis_src(1).fire && dis_src_to_dst_valid(1)(id)) ? tail_adr_newer | tail_adr_older
    dis_stream(id) >-> dis_dst(id)


    // when stall and instr retire, forward that
    dis_rs1_addr(id) := dis_dst(id).instr_pkg.rs1_addr
    dis_rs2_addr(id) := dis_dst(id).instr_pkg.rs2_addr
    dis_rs1_rob_adr(id) := dis_dst(id).src1_rob_adr
    dis_rs2_rob_adr(id) := dis_dst(id).src2_rob_adr

    ret0_forward_to_issue_rs1(id) := ret_forward(0).valid && ret_forward(0).addr===dis_rs1_addr(id) && ret_forward(0).rob_adr===dis_rs1_rob_adr(id)
    ret0_forward_to_issue_rs2(id) := ret_forward(0).valid && ret_forward(0).addr===dis_rs2_addr(id) && ret_forward(0).rob_adr===dis_rs2_rob_adr(id)
    ret1_forward_to_issue_rs1(id) := ret_forward(1).valid && ret_forward(1).addr===dis_rs1_addr(id) && ret_forward(1).rob_adr===dis_rs1_rob_adr(id)
    ret1_forward_to_issue_rs2(id) := ret_forward(1).valid && ret_forward(1).addr===dis_rs2_addr(id) && ret_forward(1).rob_adr===dis_rs2_rob_adr(id)

    dis_rs1_stall_forward(id) := (ret0_forward_to_issue_rs1(id) || ret1_forward_to_issue_rs1(id)) && !dis_dst(id).src1_valid && dis_dst(id).isStall
    dis_rs2_stall_forward(id) := (ret0_forward_to_issue_rs2(id) || ret1_forward_to_issue_rs2(id)) && !dis_dst(id).src2_valid && dis_dst(id).isStall
    dis_rs1_stall_forward_data(id) := ret1_forward_to_issue_rs1(id) ? ret_forward(1).data | ret_forward(0).data
    dis_rs2_stall_forward_data(id) := ret1_forward_to_issue_rs2(id) ? ret_forward(1).data | ret_forward(0).data

    dis_dst(id).src1_valid.removeAssignments()
    dis_dst(id).src1_data.removeAssignments()
    dis_dst(id).src1_valid.setAsReg() init(False)
    dis_dst(id).src1_data.setAsReg() init(0)
    when(dis_rs1_stall_forward(id)){
      dis_dst(id).src1_valid := True
      dis_dst(id).src1_data  := dis_rs1_stall_forward_data(id)
    }
    .elsewhen(dis_stream(id).fire){
      dis_dst(id).src1_valid := dis_stream(id).src1_valid
      dis_dst(id).src1_data  := dis_stream(id).src1_data
    }


    dis_dst(id).src2_valid.removeAssignments()
    dis_dst(id).src2_data.removeAssignments()
    dis_dst(id).src2_valid.setAsReg() init(False)
    dis_dst(id).src2_data.setAsReg() init(0)
    when(dis_rs2_stall_forward(id)){
      dis_dst(id).src2_valid := True
      dis_dst(id).src2_data  := dis_rs2_stall_forward_data(id)
    }
    .elsewhen(dis_stream(id).fire){
      dis_dst(id).src2_valid := dis_stream(id).src2_valid
      dis_dst(id).src2_data  := dis_stream(id).src2_data
    }
  }

  rd_regfile(0).rs1_addr := rs1_addr(0)
  rd_regfile(0).rs2_addr := rs2_addr(0)
  rd_regfile(1).rs1_addr := rs1_addr(1)
  rd_regfile(1).rs2_addr := rs2_addr(1)

  dis_src(0).ready := dis_stream(dis_src_to_dst_id(0)).ready && rob_is_ready && !bju_pending
  dis_src(1).ready := dis_stream(dis_src_to_dst_id(1)).ready && rob_is_ready && !(dis_src(0).valid && dis_src_to_dst_id(1)===dis_src_to_dst_id(0)) && dis_src(0).ready && !dis0_is_bju_comb

  StreamRenameUtil(this)
}

object GenDispatch extends App{
  GenConfig.spinal.generateVerilog(Dispatch())
}
