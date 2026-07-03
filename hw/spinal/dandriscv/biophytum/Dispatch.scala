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

  // =================== IO ===================
  val dis_src = Vec(slave(Stream(InstrPkg())), 2) // read ibuffer
  val dis_dst = Vec(master(Stream(IssuePkg())), 5) // into issue queue
  // ROB
  val rob_is_ready   = in Bool() // if rob is full, stall
  val tail_adr_older = in UInt(ROB_ADR_W bits)
  val tail_adr_newer = in UInt(ROB_ADR_W bits)
  // forward
  val iss_forward = Vec(slave(Flow(Foward("Ctrl"))), 5)
  val exe_forward = Vec(slave(Flow(Foward("Ctrl"))), 5) // BJU + 2ALU / DIV + LSU
  val wbc_forward = Vec(slave(Flow(Foward("Ctrl"))), 5)
  val ret_forward = Vec(slave(Flow(Foward("Ctrl"))), 2)
  // read regfile
  val rd_regfile  = Vec(master(ReadRegfile()), 2)
  // read state from iq
  val head_rd_state_nxt = Vec(slave(ReadState()), 5)
  val skid_rd_state_nxt = Vec(slave(ReadState()), 5)
  // BJU
  val bju_change_flow = in Bool()
  val bju_exe_valid   = in Bool()
  val bju_rob_adr     = in UInt(ROB_ADR_W bits)
  // to commit
  val dis_is_after_bju = Vec(out Bool(), 2)

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
  val rs1_addr              = Vec(UInt(5 bits), 2)
  val rs2_addr              = Vec(UInt(5 bits), 2)
  val rd_addr               = Vec(UInt(5 bits), 2)

  // =================== ScoreBaord ===================
  val scb = new Area{
    // current
    val state     = Vec(Reg(ScoreBoardEnum()) init(ARF), 32)
    val exe_oh    = Vec(Reg(Bits(5 bits)) init(0), 32)
    val rob_adr   = Vec(Reg(UInt(ROB_ADR_W bits)) init(0), 32)
    val after_bju = Vec(RegInit(False), 32)
    val is_in_rob = Vec(RegInit(False), 32)
    // next
    val is_in_rob_nxt = Vec(Bool(), 32)
    val state_nxt     = Vec(ScoreBoardEnum(), 32)
    val exe_oh_nxt    = Vec(Bits(5 bits), 32)
    val rob_adr_nxt   = Vec(UInt(ROB_ADR_W bits), 32)
    val after_bju_nxt = Vec(Bool(), 32)
    // comb logic
    val dis_fire = Vec(Bool(), 32)
    val iss_fire = Vec(Bool(), 32)
    val exe_fire = Vec(Bool(), 32)
    val exe_done = Vec(Bool(), 32)
    val wbc_fire = Vec(Bool(), 32)
    val ret_fire = Vec(Bool(), 32)
  }

  // =================== Record After BJU state ===================
  val is_after_bju      = RegInit(False)
  val bju_rob_adr_r     = Reg(UInt(ROB_ADR_W bits)) init(0)
  val is_after_bju_clr  = is_after_bju && bju_exe_valid && bju_rob_adr===bju_rob_adr_r
  val is_after_bju_en   = dis_src(0).fire && dis_src(0).exe_sel===BJU
  val is_after_bju_vld  = is_after_bju && !is_after_bju_clr

  when(is_after_bju_clr){
    is_after_bju := False
  }
  .elsewhen(is_after_bju_en){
    is_after_bju  := True
    bju_rob_adr_r := tail_adr_older
  }

  // =================== ScoreBaord FSM ===================
  scb.state(0)        := scb.state_nxt(0)
  scb.exe_oh(0)       := scb.exe_oh_nxt(0)
  scb.rob_adr(0)      := scb.rob_adr_nxt(0)
  scb.after_bju(0)    := scb.after_bju_nxt(0)
  scb.is_in_rob(0)    := scb.is_in_rob_nxt(0)
  scb.state_nxt(0)    := ARF
  scb.is_in_rob_nxt   := False
  scb.exe_oh_nxt(0)   := B(0, 5 bits)
  scb.rob_adr_nxt(0)  := U(0, ROB_ADR_W bits)
  scb.after_bju_nxt(0):= False
  scb.dis_fire(0)     := False
  scb.iss_fire(0)     := False
  scb.exe_fire(0)     := False
  scb.exe_done(0)     := False
  scb.wbc_fire(0)     := False
  scb.ret_fire(0)     := False
  dis_src_fire_scb(0)(0) := False
  dis_src_fire_scb(1)(0) := False

  for(i <- 1 until 32){
    dis_src_fire_scb(0)(i) := dis_src(0).fire && dis_src(0).micro_op.uop_com.rd_wen && dis_src(0).rd_addr===U(i)
    dis_src_fire_scb(1)(i) := dis_src(1).fire && dis_src(1).micro_op.uop_com.rd_wen && dis_src(1).rd_addr===U(i)

    scb.dis_fire(i) := dis_src_fire_scb(0)(i) || dis_src_fire_scb(1)(i)
                       
    scb.iss_fire(i) := iss_forward(0).valid && iss_forward(0).addr===U(i) && iss_forward(0).rob_adr===scb.rob_adr(i) ||
                       iss_forward(1).valid && iss_forward(1).addr===U(i) && iss_forward(1).rob_adr===scb.rob_adr(i) ||
                       iss_forward(2).valid && iss_forward(2).addr===U(i) && iss_forward(2).rob_adr===scb.rob_adr(i) ||
                       iss_forward(3).valid && iss_forward(3).addr===U(i) && iss_forward(3).rob_adr===scb.rob_adr(i) ||
                       iss_forward(4).valid && iss_forward(4).addr===U(i) && iss_forward(4).rob_adr===scb.rob_adr(i)

    scb.exe_fire(i) := exe_forward(0).valid && exe_forward(0).addr===U(i) && exe_forward(0).rob_adr===scb.rob_adr(i) || 
                       exe_forward(1).valid && exe_forward(1).addr===U(i) && exe_forward(1).rob_adr===scb.rob_adr(i) || 
                       exe_forward(2).valid && exe_forward(2).addr===U(i) && exe_forward(2).rob_adr===scb.rob_adr(i)

    scb.exe_done(i) := exe_forward(3).valid && exe_forward(3).addr===U(i) && exe_forward(3).rob_adr===scb.rob_adr(i) || 
                       exe_forward(4).valid && exe_forward(4).addr===U(i) && exe_forward(4).rob_adr===scb.rob_adr(i)

    scb.wbc_fire(i) := wbc_forward(0).valid && wbc_forward(0).addr===U(i) && wbc_forward(0).rob_adr===scb.rob_adr(i) ||
                       wbc_forward(1).valid && wbc_forward(1).addr===U(i) && wbc_forward(1).rob_adr===scb.rob_adr(i) ||
                       wbc_forward(2).valid && wbc_forward(2).addr===U(i) && wbc_forward(2).rob_adr===scb.rob_adr(i) ||
                       wbc_forward(3).valid && wbc_forward(3).addr===U(i) && wbc_forward(3).rob_adr===scb.rob_adr(i) ||
                       wbc_forward(4).valid && wbc_forward(4).addr===U(i) && wbc_forward(4).rob_adr===scb.rob_adr(i)

    scb.ret_fire(i) := ret_forward(0).valid && ret_forward(0).addr===U(i) && ret_forward(0).rob_adr===scb.rob_adr(i) || 
                       ret_forward(1).valid && ret_forward(1).addr===U(i) && ret_forward(1).rob_adr===scb.rob_adr(i)

    scb.state(i)    := scb.state_nxt(i)
    scb.exe_oh(i)   := scb.exe_oh_nxt(i)
    scb.rob_adr(i)  := scb.rob_adr_nxt(i)
    scb.after_bju(i):= scb.after_bju_nxt(i)
    scb.is_in_rob(i):= scb.is_in_rob_nxt(i)

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

    when(bju_change_flow && scb.after_bju(i)){
      scb.after_bju_nxt(i) := False
    }
    .elsewhen(dis_src_fire_scb(0)(i)){
      scb.after_bju_nxt(i) := is_after_bju_vld
    }
    .elsewhen(dis_src_fire_scb(1)(i)){
      scb.after_bju_nxt(i) := is_after_bju_en || is_after_bju_vld
    }
    .otherwise{
      scb.after_bju_nxt(i) := scb.after_bju(i)
    }

    scb.state_nxt(i) := scb.state(i)
    switch(scb.state(i)){
      is(ARF){
        when(scb.dis_fire(i)){
          scb.state_nxt(i) := ISS
        }
      }
      is(ISS){
        when(scb.dis_fire(i)){
          scb.state_nxt(i) := ISS
        }
        .elsewhen(scb.iss_fire(i) && ((scb.exe_oh(i)===B"5'b000001") || (scb.exe_oh(i)===B"5'b000010") || (scb.exe_oh(i)===B"5'b000100"))){
          scb.state_nxt(i) := EXE // BJU / ALU
        }
        .elsewhen(scb.iss_fire(i) && ((scb.exe_oh(i)===B"5'b01000") || (scb.exe_oh(i)===B"5'b10000"))){
          scb.state_nxt(i) := DLY // DIV / LSU
        }
      }
      is(EXE){
        when(scb.dis_fire(i)){
          scb.state_nxt(i) := ISS
        }
        .elsewhen(scb.exe_fire(i)){
          scb.state_nxt(i) := WBC
        }
      }
      is(DLY){
        when(scb.dis_fire(i)){
          scb.state_nxt(i) := ISS
        }
        .elsewhen(scb.exe_done(i)){
          scb.state_nxt(i) := WBC
        }
      }
      is(WBC){
        when(scb.dis_fire(i)){
          scb.state_nxt(i) := ISS
        }
        .elsewhen(scb.wbc_fire(i)){
          scb.state_nxt(i) := ROB
        }
      }
      is(ROB){
        when(scb.dis_fire(i)){
          scb.state_nxt(i) := ISS
        }
        .elsewhen(scb.ret_fire(i)){
          scb.state_nxt(i) := ARF
        }
      }
    }

    // recovery state to ARF
    when(bju_change_flow && scb.after_bju(i)){
      scb.state_nxt(i) := ARF
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

  

  dis_src1_valid(0) := scb.state_nxt(rs1_addr(0))===ARF || // if instr rs1==rd (a1=a1+a1) , rs1 should be valid
                      (scb.state(rs1_addr(0))===ARF && dis_src_fire_scb(0).asBools(rs1_addr(0))) ||
                      (scb.state(rs1_addr(0))===ARF && dis_src_fire_scb(1).asBools(rs1_addr(0)))

  dis_src1_valid(1) := scb.state_nxt(rs1_addr(1))===ARF || 
                      (scb.state(rs1_addr(1))===ARF && dis_src_fire_scb(1).asBools(rs1_addr(1)))

  dis_src2_valid(0) := scb.state_nxt(rs2_addr(0))===ARF || // if instr rs2==rd (a1=a1+a1) , rs2 should be valid
                      (scb.state(rs2_addr(0))===ARF && dis_src_fire_scb(0).asBools(rs2_addr(0))) ||
                      (scb.state(rs2_addr(0))===ARF && dis_src_fire_scb(1).asBools(rs2_addr(0))) ||
                      (dis_src_is_store(0) ? False | dis_src_src2_is_imm(0))

  dis_src2_valid(1) := scb.state_nxt(rs2_addr(1))===ARF || 
                      (scb.state(rs2_addr(1))===ARF && dis_src_fire_scb(1).asBools(rs2_addr(1))) ||
                      (dis_src_is_store(1) ? False | dis_src_src2_is_imm(1))

  // =================== output ===================
  val dis_stream = Vec(Stream(IssuePkg()), 5)
  val dis_dst_src1_state_r = Vec(Reg(ScoreBoardEnum()) init(ARF), 5)
  val dis_dst_src2_state_r = Vec(Reg(ScoreBoardEnum()) init(ARF), 5)

  for(id <- 0 until 5){ // id from 0 to 4
    dis_src_to_dst_valid(0)(id) := dis_src(0).valid && dis_src_to_dst_id(0)===U(id) && rob_is_ready
    dis_src_to_dst_valid(1)(id) := dis_src(1).valid && dis_src_to_dst_id(1)===U(id) && rob_is_ready && (dis_src(0).fire || !dis_src(0).valid)

    dis_stream(id).valid        := dis_src_to_dst_valid(0)(id) || dis_src_to_dst_valid(1)(id)
    dis_stream(id).instr_pkg    := dis_src_to_dst_valid(0)(id) ? dis_src(0).payload         | dis_src(1).payload
    dis_stream(id).src1_valid   := dis_src_to_dst_valid(0)(id) ? dis_src1_valid(0)          | dis_src1_valid(1)
    dis_stream(id).src1_data    := dis_src_to_dst_valid(0)(id) ? rd_regfile(0).rs1_data     | rd_regfile(1).rs1_data
    dis_stream(id).src2_valid   := dis_src_to_dst_valid(0)(id) ? dis_src2_valid(0)          | dis_src2_valid(1)
    dis_stream(id).src2_data    := dis_src_to_dst_valid(0)(id) ? ((dis_src_src2_is_imm(0) && !dis_src_is_store(0)) ? dis_src(0).imm | rd_regfile(0).rs2_data) | 
                                                                 ((dis_src_src2_is_imm(1) && !dis_src_is_store(1)) ? dis_src(1).imm | rd_regfile(1).rs2_data)
    dis_stream(id).src1_state   := dis_src_to_dst_valid(0)(id) ? scb.state_nxt(rs1_addr(0)) | scb.state_nxt(rs1_addr(1))
    dis_stream(id).src2_state   := dis_src_to_dst_valid(0)(id) ? scb.state_nxt(rs2_addr(0)) | scb.state_nxt(rs2_addr(1))
    dis_stream(id).src1_exe_oh  := dis_src_to_dst_valid(0)(id) ? scb.exe_oh(rs1_addr(0)) | scb.exe_oh(rs1_addr(1))
    dis_stream(id).src2_exe_oh  := dis_src_to_dst_valid(0)(id) ? scb.exe_oh(rs2_addr(0)) | scb.exe_oh(rs2_addr(1))
    dis_stream(id).src1_rob_adr := dis_src_to_dst_valid(0)(id) ? scb.rob_adr_nxt(rs1_addr(0)) | scb.rob_adr_nxt(rs1_addr(1))
    dis_stream(id).src2_rob_adr := dis_src_to_dst_valid(0)(id) ? scb.rob_adr_nxt(rs2_addr(0)) | scb.rob_adr_nxt(rs2_addr(1))
    dis_stream(id).rd_rob_adr   := (dis_src(0).fire && dis_src(1).fire && dis_src_to_dst_valid(1)(id)) ? tail_adr_newer | tail_adr_older
    dis_stream(id).after_bju    := dis_src_to_dst_valid(0)(id) ? is_after_bju_vld           | (is_after_bju_en || is_after_bju_vld)
    dis_stream(id).bju_rob_adr  := bju_rob_adr_r
    dis_stream(id) >-> dis_dst(id)
    dis_dst(id).src1_state.removeAssignments()
    dis_dst(id).src2_state.removeAssignments()
    dis_dst_src1_state_r(id) := dis_stream(id).src1_state
    dis_dst_src2_state_r(id) := dis_stream(id).src2_state
    dis_dst(id).src1_state   := dis_dst_src1_state_r(id)
    dis_dst(id).src2_state   := dis_dst_src2_state_r(id)
    
    head_rd_state_nxt(id).rs1_state := scb.state_nxt(head_rd_state_nxt(id).rs1_addr)
    head_rd_state_nxt(id).rs2_state := scb.state_nxt(head_rd_state_nxt(id).rs2_addr)
    skid_rd_state_nxt(id).rs1_state := scb.state_nxt(skid_rd_state_nxt(id).rs1_addr)
    skid_rd_state_nxt(id).rs2_state := scb.state_nxt(skid_rd_state_nxt(id).rs2_addr)
  }

  rd_regfile(0).rs1_addr := dis_src(0).rs1_addr
  rd_regfile(0).rs2_addr := dis_src(0).rs2_addr
  rd_regfile(1).rs1_addr := dis_src(1).rs1_addr
  rd_regfile(1).rs2_addr := dis_src(1).rs2_addr

  dis_src(0).ready := dis_stream(dis_src_to_dst_id(0)).ready
  dis_src(1).ready := dis_stream(dis_src_to_dst_id(1)).ready

  dis_is_after_bju(0) := dis_src(0).fire && is_after_bju_vld
  dis_is_after_bju(1) := dis_src(1).fire && (is_after_bju_en || is_after_bju_vld)

  StreamRenameUtil(this)
}

object GenDispatch extends App{
  GenConfig.spinal.generateVerilog(Dispatch())
}
