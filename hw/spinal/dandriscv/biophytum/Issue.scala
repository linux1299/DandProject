package dandriscv.biophytum

import spinal.core._
import spinal.lib._
import math._
import MyUtils._
import BundleImplicit._

import CpuConfig._
import ExeSelEnum._
import ScoreBoardEnum._

case class IssueEntry() extends Area{
  val valid        = RegInit(False)
  val ready        = Bool()
  val instr_pkg    = Reg(InstrPkg())
  // src1
  val src1_valid   = RegInit(False)
  val src1_data    = Reg(Bits(64 bits)) init(0)
  val src1_rob_adr = Reg(UInt(ROB_ADR_W bits)) init(0)
  val src1_state   = Reg(ScoreBoardEnum()) init(ARF)
  val src1_exe_oh  = Reg(Bits(5 bits)) init(0)

  val src1_valid_nxt = Bool()
  val src1_data_nxt  = Bits(64 bits)
  val src1_state_nxt = ScoreBoardEnum()
  // src2
  val src2_valid   = RegInit(False)
  val src2_data    = Reg(Bits(64 bits)) init(0)
  val src2_rob_adr = Reg(UInt(ROB_ADR_W bits)) init(0)
  val src2_state   = Reg(ScoreBoardEnum()) init(ARF)
  val src2_exe_oh  = Reg(Bits(5 bits)) init(0)

  val src2_valid_nxt = Bool()
  val src2_data_nxt  = Bits(64 bits)
  val src2_state_nxt = ScoreBoardEnum()

  val src_all_valid= RegInit(False)

  val rd_rob_adr   = Reg(UInt(ROB_ADR_W bits)) init(0)
  val after_bju    = RegInit(False)
  val after_bju_nxt= Bool()
  val bju_rob_adr  = Reg(UInt(ROB_ADR_W bits)) init(0)

  val flush_valid  = Bool()
}

// staging max 2 instr; in FIFO order
case class IssueQueue(Type: String) extends Component{
  import CpuConfig._
  import ExeSelEnum._

  // =================== IO ===================
  val flush   = in Bool()
  val iss_src = slave(Stream(IssuePkg()))
  val iss_dst = master(Stream(ExeSrc(Type: String)))
  // forward
  val exe_forward = Vec(slave(Flow(Foward("WithData"))), 3) // BJU + 2ALU
  val wbc_forward = Vec(slave(Flow(Foward("WithData"))), 5)
  val rob_forward = Vec(slave(Flow(Foward("WithData"))), ROB_DEPTH)
  // state nxt
  val head_rd_state_nxt = master(ReadState())
  val skid_rd_state_nxt = master(ReadState())
  // BJU
  val bju_change_flow = in Bool()
  val bju_exe_valid   = in Bool()
  val bju_rob_adr     = in UInt(ROB_ADR_W bits)



  // =============== Entries of Issue =================
  val head = new IssueEntry()
  val skid = new IssueEntry()

  // val head_trap_or_print = (DIFFTEST) generate ((iss_src.instr===B"32'h6b" || iss_src.instr===B"32'h7b"))
  // val skid_trap_or_print = (DIFFTEST) generate ((skid.instr_pkg.instr===B"32'h6b" || skid.instr_pkg.instr===B"32'h7b"))
  
  // =============== Forward Data =================
  val exe_data  = Vec(Bits(64 bits), 3)
  val wbc_data  = Vec(Bits(64 bits), 5)
  val rob_data  = Vec(Bits(64 bits), ROB_DEPTH)
  val exe_rob_adr  = Vec(UInt(ROB_ADR_W bits), 3)
  val wbc_rob_adr  = Vec(UInt(ROB_ADR_W bits), 5)
  val rob_rob_adr  = Vec(UInt(ROB_ADR_W bits), ROB_DEPTH)
  val exe_valid = Vec(Bool(), 3)
  val wbc_valid = Vec(Bool(), 5)
  val rob_valid = Vec(Bool(), ROB_DEPTH)

  val iss_src1_exe_sel  = Bits(3 bits)
  val iss_src1_exe_data = Bits(64 bits)
  val iss_src2_exe_sel  = Bits(3 bits)
  val iss_src2_exe_data = Bits(64 bits)
  val iss_src1_wbc_sel  = Bits(5 bits)
  val iss_src1_wbc_data = Bits(64 bits)
  val iss_src2_wbc_sel  = Bits(5 bits)
  val iss_src2_wbc_data = Bits(64 bits)
  val iss_src1_rob_sel  = Bits(ROB_DEPTH bits)
  val iss_src1_rob_data = Bits(64 bits)
  val iss_src2_rob_sel  = Bits(ROB_DEPTH bits)
  val iss_src2_rob_data = Bits(64 bits)
  
  val head_src1_exe_sel  = Bits(3 bits)
  val head_src1_exe_data = Bits(64 bits)
  val head_src2_exe_sel  = Bits(3 bits)
  val head_src2_exe_data = Bits(64 bits)
  val head_src1_wbc_sel  = Bits(5 bits)
  val head_src1_wbc_data = Bits(64 bits)
  val head_src2_wbc_sel  = Bits(5 bits)
  val head_src2_wbc_data = Bits(64 bits)
  val head_src1_rob_sel  = Bits(ROB_DEPTH bits)
  val head_src1_rob_data = Bits(64 bits)
  val head_src2_rob_sel  = Bits(ROB_DEPTH bits)
  val head_src2_rob_data = Bits(64 bits)

  val skid_src1_exe_sel  = Bits(3 bits)
  val skid_src1_exe_data = Bits(64 bits)
  val skid_src2_exe_sel  = Bits(3 bits)
  val skid_src2_exe_data = Bits(64 bits)
  val skid_src1_wbc_sel  = Bits(5 bits)
  val skid_src1_wbc_data = Bits(64 bits)
  val skid_src2_wbc_sel  = Bits(5 bits)
  val skid_src2_wbc_data = Bits(64 bits)
  val skid_src1_rob_sel  = Bits(ROB_DEPTH bits)
  val skid_src1_rob_data = Bits(64 bits)
  val skid_src2_rob_sel  = Bits(ROB_DEPTH bits)
  val skid_src2_rob_data = Bits(64 bits)

  for(i <- 0 until 3){ // for exe forward
    exe_data(i)    := exe_forward(i).data
    exe_rob_adr(i) := exe_forward(i).rob_adr
    exe_valid(i)   := exe_forward(i).valid
    iss_src1_exe_sel(i) := iss_src.src1_exe_oh(i) && exe_valid(i) && (exe_rob_adr(i)===iss_src.src1_rob_adr) && iss_src.valid
    iss_src2_exe_sel(i) := iss_src.src2_exe_oh(i) && exe_valid(i) && (exe_rob_adr(i)===iss_src.src2_rob_adr) && iss_src.valid
    head_src1_exe_sel(i) := head.src1_exe_oh(i)   && exe_valid(i) && (exe_rob_adr(i)===head.src1_rob_adr)    && head.valid
    head_src2_exe_sel(i) := head.src2_exe_oh(i)   && exe_valid(i) && (exe_rob_adr(i)===head.src2_rob_adr)    && head.valid
    skid_src1_exe_sel(i) := skid.src1_exe_oh(i)   && exe_valid(i) && (exe_rob_adr(i)===skid.src1_rob_adr)    && skid.valid
    skid_src2_exe_sel(i) := skid.src2_exe_oh(i)   && exe_valid(i) && (exe_rob_adr(i)===skid.src2_rob_adr)    && skid.valid
  }

  for(i <- 0 until 5){ // for wbc forward
    wbc_data(i)    := wbc_forward(i).data
    wbc_rob_adr(i) := wbc_forward(i).rob_adr
    wbc_valid(i)   := wbc_forward(i).valid
    iss_src1_wbc_sel(i) := iss_src.src1_exe_oh(i) && wbc_valid(i) && (wbc_rob_adr(i)===iss_src.src1_rob_adr) && iss_src.valid
    iss_src2_wbc_sel(i) := iss_src.src2_exe_oh(i) && wbc_valid(i) && (wbc_rob_adr(i)===iss_src.src2_rob_adr) && iss_src.valid
    head_src1_wbc_sel(i) := head.src1_exe_oh(i)   && wbc_valid(i) && (wbc_rob_adr(i)===head.src1_rob_adr)    && head.valid
    head_src2_wbc_sel(i) := head.src2_exe_oh(i)   && wbc_valid(i) && (wbc_rob_adr(i)===head.src2_rob_adr)    && head.valid
    skid_src1_wbc_sel(i) := skid.src1_exe_oh(i)   && wbc_valid(i) && (wbc_rob_adr(i)===skid.src1_rob_adr)    && skid.valid
    skid_src2_wbc_sel(i) := skid.src2_exe_oh(i)   && wbc_valid(i) && (wbc_rob_adr(i)===skid.src2_rob_adr)    && skid.valid
  }

  for(i <- 0 until ROB_DEPTH){ // for rob forward
    rob_data(i)    := rob_forward(i).data
    rob_rob_adr(i) := rob_forward(i).rob_adr
    rob_valid(i)   := rob_forward(i).valid
    iss_src1_rob_sel(i) := iss_src.src1_rob_adr===U(i) && rob_valid(i) && (rob_rob_adr(i)===iss_src.src1_rob_adr) && iss_src.valid
    iss_src2_rob_sel(i) := iss_src.src2_rob_adr===U(i) && rob_valid(i) && (rob_rob_adr(i)===iss_src.src2_rob_adr) && iss_src.valid
    head_src1_rob_sel(i) := head.src1_rob_adr===U(i)   && rob_valid(i) && (rob_rob_adr(i)===head.src1_rob_adr)    && head.valid
    head_src2_rob_sel(i) := head.src2_rob_adr===U(i)   && rob_valid(i) && (rob_rob_adr(i)===head.src2_rob_adr)    && head.valid
    skid_src1_rob_sel(i) := skid.src1_rob_adr===U(i)   && rob_valid(i) && (rob_rob_adr(i)===skid.src1_rob_adr)    && skid.valid
    skid_src2_rob_sel(i) := skid.src2_rob_adr===U(i)   && rob_valid(i) && (rob_rob_adr(i)===skid.src2_rob_adr)    && skid.valid
  }

  iss_src1_exe_data := dataMux(iss_src1_exe_sel, exe_data.asBits)
  iss_src2_exe_data := dataMux(iss_src2_exe_sel, exe_data.asBits)
  head_src1_exe_data := dataMux(head_src1_exe_sel, exe_data.asBits)
  head_src2_exe_data := dataMux(head_src2_exe_sel, exe_data.asBits)
  skid_src1_exe_data := dataMux(skid_src1_exe_sel, exe_data.asBits)
  skid_src2_exe_data := dataMux(skid_src2_exe_sel, exe_data.asBits)

  iss_src1_wbc_data := dataMux(iss_src1_wbc_sel, wbc_data.asBits)
  iss_src2_wbc_data := dataMux(iss_src2_wbc_sel, wbc_data.asBits)
  head_src1_wbc_data := dataMux(head_src1_wbc_sel, wbc_data.asBits)
  head_src2_wbc_data := dataMux(head_src2_wbc_sel, wbc_data.asBits)
  skid_src1_wbc_data := dataMux(skid_src1_wbc_sel, wbc_data.asBits)
  skid_src2_wbc_data := dataMux(skid_src2_wbc_sel, wbc_data.asBits)

  iss_src1_rob_data := dataMux(iss_src1_rob_sel, rob_data.asBits)
  iss_src2_rob_data := dataMux(iss_src2_rob_sel, rob_data.asBits)
  head_src1_rob_data := dataMux(head_src1_rob_sel, rob_data.asBits)
  head_src2_rob_data := dataMux(head_src2_rob_sel, rob_data.asBits)
  skid_src1_rob_data := dataMux(skid_src1_rob_sel, rob_data.asBits)
  skid_src2_rob_data := dataMux(skid_src2_rob_sel, rob_data.asBits)

  // =============== Update Head entry valid =================
  head.flush_valid := flush && head.valid && head.after_bju
  when(head.flush_valid){
    head.valid := False
  }
  .elsewhen(!skid.valid){ // skid is empty, into head
    head.valid := head.ready ? iss_src.valid | (iss_dst.fire ? False | head.valid)
  }
  .otherwise{ // skid is full, move skid to head
    head.valid := head.ready ? skid.valid | (iss_dst.fire ? False | head.valid)
  }

  head.ready := !head.valid || (iss_dst.ready && head.src_all_valid)

  // =============== Update Head entry valid =================
  head_rd_state_nxt.rs1_addr := U(0)
  head_rd_state_nxt.rs2_addr := U(0)
  head.src1_valid_nxt := head.src1_valid
  head.src1_data_nxt  := head.src1_data
  head.src1_state_nxt := head.src1_state
  head.src2_valid_nxt := head.src2_valid
  head.src2_data_nxt  := head.src2_data
  head.src2_state_nxt := head.src2_state
  head.after_bju_nxt  := head.after_bju

  when(head.ready){
    when(skid.valid){ // from skid buffer
      head.instr_pkg      := skid.instr_pkg
      head.after_bju      := skid.after_bju_nxt
      head.bju_rob_adr    := skid.bju_rob_adr
      head.rd_rob_adr     := skid.rd_rob_adr

      // src1
      head.src1_valid     := skid.src1_valid_nxt
      head.src1_data      := skid.src1_data_nxt
      head.src1_state     := skid.src1_state_nxt
      
      head.src1_rob_adr   := skid.src1_rob_adr
      head.src1_exe_oh    := skid.src1_exe_oh 
      // src2
      head.src2_valid     := skid.src2_valid_nxt
      head.src2_data      := skid.src2_data_nxt
      head.src2_state     := skid.src2_state_nxt

      head.src2_rob_adr   := skid.src2_rob_adr
      head.src2_exe_oh    := skid.src2_exe_oh 
    }
    .elsewhen(iss_src.valid){ // from issue input

      head.instr_pkg      := iss_src.instr_pkg
      head.after_bju_nxt  := (iss_src.after_bju && (iss_src.bju_rob_adr===bju_rob_adr) && bju_exe_valid) ? False | iss_src.after_bju
      head.after_bju      := head.after_bju_nxt
      head.rd_rob_adr     := iss_src.rd_rob_adr
      head.bju_rob_adr    := iss_src.bju_rob_adr
      
      // src1
      head.src1_valid_nxt := iss_src.src1_valid || iss_src1_exe_sel.asBits.orR
      when(iss_src.src1_state===ARF){
        head.src1_data_nxt  := iss_src.src1_data
      }
      .elsewhen(iss_src.src1_state===EXE){
        head.src1_data_nxt  := iss_src1_exe_data
      }
      .elsewhen(iss_src.src1_state===WBC){
        head.src1_data_nxt  := iss_src1_wbc_data
      }
      .elsewhen(iss_src.src1_state===ROB){
        head.src1_data_nxt  := iss_src1_rob_data
      }
      .otherwise{
        head.src1_data_nxt  := B(0)
      }
      head.src1_state_nxt := head_rd_state_nxt.rs1_state
      head_rd_state_nxt.rs1_addr := iss_src.instr_pkg.rs1_addr

      head.src1_valid     := head.src1_valid_nxt
      head.src1_data      := head.src1_data_nxt
      head.src1_state     := head.src1_state_nxt
      
      head.src1_rob_adr   := iss_src.src1_rob_adr
      head.src1_exe_oh    := iss_src.src1_exe_oh 
      // src2
      head.src2_valid_nxt := iss_src.src2_valid || iss_src2_exe_sel.asBits.orR
      when(iss_src.src2_state===ARF){
        head.src2_data_nxt  := iss_src.src2_data
      }
      .elsewhen(iss_src.src2_state===EXE){
        head.src2_data_nxt  := iss_src2_exe_data
      }
      .elsewhen(iss_src.src2_state===WBC){
        head.src2_data_nxt  := iss_src2_wbc_data
      }
      .elsewhen(iss_src.src2_state===ROB){
        head.src2_data_nxt  := iss_src2_rob_data
      }
      .otherwise{
        head.src2_data_nxt  := B(0)
      }
      head.src2_state_nxt := head_rd_state_nxt.rs2_state
      head_rd_state_nxt.rs2_addr := iss_src.instr_pkg.rs2_addr

      head.src2_valid     := head.src2_valid_nxt
      head.src2_data      := head.src2_data_nxt
      head.src2_state     := head.src2_state_nxt

      head.src2_rob_adr   := iss_src.src2_rob_adr
      head.src2_exe_oh    := iss_src.src2_exe_oh 
    }
  }
  .otherwise{

    head.after_bju_nxt  := (head.after_bju && (head.bju_rob_adr===bju_rob_adr) && bju_exe_valid) ? False | head.after_bju
    head.after_bju      := head.after_bju_nxt

    // src1
    when(head.valid && !head.src1_valid){
      head.src1_valid_nxt   := ((head.src1_state_nxt===EXE) && head_src1_exe_sel.asBits.orR) ||
                               ((head.src1_state_nxt===WBC) && head_src1_wbc_sel.asBits.orR) ||
                               ((head.src1_state_nxt===ROB) && head_src1_rob_sel.asBits.orR)
      when(head.src1_state===EXE){
        head.src1_data_nxt  := head_src1_exe_data
      }
      .elsewhen(head.src1_state===WBC){
        head.src1_data_nxt  := head_src1_wbc_data
      }
      .elsewhen(head.src1_state===ROB){
        head.src1_data_nxt  := head_src1_rob_data
      }
      .otherwise{
        head.src1_data_nxt  := B(0)
      }
      head.src1_state_nxt   := head_rd_state_nxt.rs1_state
      head_rd_state_nxt.rs1_addr := head.instr_pkg.rs1_addr
    }
    head.src1_valid := head.src1_valid_nxt
    head.src1_data  := head.src1_data_nxt  
    head.src1_state := head.src1_state_nxt

    // src2
    when(head.valid && !head.src2_valid){
      head.src2_valid_nxt   := ((head.src2_state_nxt===EXE) && head_src2_exe_sel.asBits.orR) ||
                               ((head.src2_state_nxt===WBC) && head_src2_wbc_sel.asBits.orR) ||
                               ((head.src2_state_nxt===ROB) && head_src2_rob_sel.asBits.orR)
      when(head.src2_state===EXE){
        head.src2_data_nxt  := head_src2_exe_data
      }
      .elsewhen(head.src2_state===WBC){
        head.src2_data_nxt  := head_src2_wbc_data
      }
      .elsewhen(head.src2_state===ROB){
        head.src2_data_nxt  := head_src2_rob_data
      }
      .otherwise{
        head.src2_data_nxt  := B(0)
      }
      head.src2_state_nxt   := head_rd_state_nxt.rs2_state
      head_rd_state_nxt.rs2_addr := head.instr_pkg.rs2_addr
    }
    head.src2_valid := head.src2_valid_nxt
    head.src2_data  := head.src2_data_nxt  
    head.src2_state := head.src2_state_nxt
  }

  head.src_all_valid := head.flush_valid ? False | (head.src1_valid_nxt && head.src2_valid_nxt && !head.after_bju_nxt)


  // =============== Update Skid entry =================
  skid.flush_valid := flush && skid.valid && skid.after_bju
  when(skid.flush_valid){
    skid.valid := False
  }
  .elsewhen(!head.ready || (head.ready && skid.valid)){
    skid.valid := skid.ready ? iss_src.valid | skid.valid
  }

  skid.ready  := !skid.valid || head.ready

  // skid buffer update
  skid_rd_state_nxt.rs1_addr := U(0)
  skid_rd_state_nxt.rs2_addr := U(0)
  skid.src1_valid_nxt := skid.src1_valid
  skid.src1_data_nxt  := skid.src1_data
  skid.src1_state_nxt := skid.src1_state
  skid.src2_valid_nxt := skid.src2_valid
  skid.src2_data_nxt  := skid.src2_data
  skid.src2_state_nxt := skid.src2_state
  skid.after_bju_nxt  := skid.after_bju

  when(skid.ready){
    when(iss_src.valid){ // from issue input

      skid.instr_pkg      := iss_src.instr_pkg
      skid.after_bju_nxt  := (iss_src.after_bju && (iss_src.bju_rob_adr===bju_rob_adr) && bju_exe_valid) ? False | iss_src.after_bju
      skid.after_bju      := skid.after_bju_nxt
      skid.rd_rob_adr     := iss_src.rd_rob_adr
      skid.bju_rob_adr    := iss_src.bju_rob_adr
      
      // src1
      skid.src1_valid_nxt := iss_src.src1_valid || iss_src1_exe_sel.asBits.orR
      when(iss_src.src1_state===ARF){
        skid.src1_data_nxt  := iss_src.src1_data
      }
      .elsewhen(iss_src.src1_state===EXE){
        skid.src1_data_nxt  := iss_src1_exe_data
      }
      .elsewhen(iss_src.src1_state===WBC){
        skid.src1_data_nxt  := iss_src1_wbc_data
      }
      .elsewhen(iss_src.src1_state===ROB){
        skid.src1_data_nxt  := iss_src1_rob_data
      }
      .otherwise{
        skid.src1_data_nxt  := B(0)
      }
      skid.src1_state_nxt := skid_rd_state_nxt.rs1_state
      skid_rd_state_nxt.rs1_addr := iss_src.instr_pkg.rs1_addr

      skid.src1_valid     := skid.src1_valid_nxt
      skid.src1_data      := skid.src1_data_nxt
      skid.src1_state     := skid.src1_state_nxt
      
      skid.src1_rob_adr   := iss_src.src1_rob_adr
      skid.src1_exe_oh    := iss_src.src1_exe_oh 
      // src2
      skid.src2_valid_nxt := iss_src.src2_valid || iss_src2_exe_sel.asBits.orR
      when(iss_src.src2_state===ARF){
        skid.src2_data_nxt  := iss_src.src2_data
      }
      .elsewhen(iss_src.src2_state===EXE){
        skid.src2_data_nxt  := iss_src2_exe_data
      }
      .elsewhen(iss_src.src2_state===WBC){
        skid.src2_data_nxt  := iss_src2_wbc_data
      }
      .elsewhen(iss_src.src2_state===ROB){
        skid.src2_data_nxt  := iss_src2_rob_data
      }
      .otherwise{
        skid.src2_data_nxt  := B(0)
      }
      skid.src2_state_nxt := skid_rd_state_nxt.rs2_state
      skid_rd_state_nxt.rs2_addr := iss_src.instr_pkg.rs2_addr

      skid.src2_valid     := skid.src2_valid_nxt
      skid.src2_data      := skid.src2_data_nxt
      skid.src2_state     := skid.src2_state_nxt

      skid.src2_rob_adr   := iss_src.src2_rob_adr
      skid.src2_exe_oh    := iss_src.src2_exe_oh 
    }
  }
  .otherwise{

    skid.after_bju_nxt  := (skid.after_bju && (skid.bju_rob_adr===bju_rob_adr) && bju_exe_valid) ? False | skid.after_bju
    skid.after_bju      := skid.after_bju_nxt

    // src1
    when(skid.valid && !skid.src1_valid){
      skid.src1_valid_nxt   := ((skid.src1_state_nxt===EXE) && skid_src1_exe_sel.asBits.orR) ||
                               ((skid.src1_state_nxt===WBC) && skid_src1_wbc_sel.asBits.orR) ||
                               ((skid.src1_state_nxt===ROB) && skid_src1_rob_sel.asBits.orR)
      when(skid.src1_state===EXE){
        skid.src1_data_nxt  := skid_src1_exe_data
      }
      .elsewhen(skid.src1_state===WBC){
        skid.src1_data_nxt  := skid_src1_wbc_data
      }
      .elsewhen(skid.src1_state===ROB){
        skid.src1_data_nxt  := skid_src1_rob_data
      }
      .otherwise{
        skid.src1_data_nxt  := B(0)
      }
      skid.src1_state_nxt   := skid_rd_state_nxt.rs1_state
      skid_rd_state_nxt.rs1_addr := skid.instr_pkg.rs1_addr
    }
    skid.src1_valid := skid.src1_valid_nxt
    skid.src1_data  := skid.src1_data_nxt  
    skid.src1_state := skid.src1_state_nxt

    // src2
    when(skid.valid && !skid.src2_valid){
      skid.src2_valid_nxt   := ((skid.src2_state_nxt===EXE) && skid_src2_exe_sel.asBits.orR) ||
                               ((skid.src2_state_nxt===WBC) && skid_src2_wbc_sel.asBits.orR) ||
                               ((skid.src2_state_nxt===ROB) && skid_src2_rob_sel.asBits.orR)
      when(skid.src2_state===EXE){
        skid.src2_data_nxt  := skid_src2_exe_data
      }
      .elsewhen(skid.src2_state===WBC){
        skid.src2_data_nxt  := skid_src2_wbc_data
      }
      .elsewhen(skid.src2_state===ROB){
        skid.src2_data_nxt  := skid_src2_rob_data
      }
      .otherwise{
        skid.src2_data_nxt  := B(0)
      }
      skid.src2_state_nxt   := skid_rd_state_nxt.rs2_state
      skid_rd_state_nxt.rs2_addr := skid.instr_pkg.rs2_addr
    }
    skid.src2_valid := skid.src2_valid_nxt
    skid.src2_data  := skid.src2_data_nxt  
    skid.src2_state := skid.src2_state_nxt
  }

  skid.src_all_valid := skid.flush_valid ? False | (skid.src1_valid_nxt && skid.src2_valid_nxt && !skid.after_bju_nxt)

 
  // =================== Output ===================
  iss_src.ready     := skid.ready
  iss_dst.valid     := head.valid && head.src_all_valid
  iss_dst.uop_com   := head.instr_pkg.micro_op.uop_com
  iss_dst.src1_data := head.src1_data
  iss_dst.src2_data := head.src2_data
  iss_dst.rd_addr   := head.instr_pkg.rd_addr
  iss_dst.pc        := head.instr_pkg.pc
  iss_dst.instr     := head.instr_pkg.instr
  iss_dst.rob_adr   := head.rd_rob_adr
  if(Type=="ALU"){
    iss_dst.uop_alu := head.instr_pkg.micro_op.uop_alu
  }
  if(Type=="BJU"){
    iss_dst.imm     := head.instr_pkg.imm
    iss_dst.uop_bju := head.instr_pkg.micro_op.uop_bju
    iss_dst.branch_pc := head.instr_pkg.branch_pc
    iss_dst.branch_taken := head.instr_pkg.branch_taken
  }
  if(Type=="LSU"){
    iss_dst.imm     := head.instr_pkg.imm
    iss_dst.uop_lsu := head.instr_pkg.micro_op.uop_lsu
  }

  StreamRenameUtil(this)
}



object GenIssue extends App{
  GenConfig.spinal.generateVerilog(IssueQueue("LSU"))
}