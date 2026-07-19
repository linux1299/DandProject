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
  val src1_state   = ScoreBoardEnum()
  val src1_exe_oh  = Reg(Bits(5 bits)) init(0)

  val src1_valid_nxt = Bool()
  val src1_data_nxt  = Bits(64 bits)
  // src2
  val src2_valid   = RegInit(False)
  val src2_data    = Reg(Bits(64 bits)) init(0)
  val src2_rob_adr = Reg(UInt(ROB_ADR_W bits)) init(0)
  val src2_state   = ScoreBoardEnum()
  val src2_exe_oh  = Reg(Bits(5 bits)) init(0)

  val src2_valid_nxt = Bool()
  val src2_data_nxt  = Bits(64 bits)

  val src_all_valid= RegInit(False)

  val rd_rob_adr   = Reg(UInt(ROB_ADR_W bits)) init(0)
  val to_head_distance = UInt(ROB_ADR_W bits)
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
  val exe_forward = Vec(slave(Flow(Forward("WithData"))), 3) // BJU + 2ALU
  val wbc_forward = Vec(slave(Flow(Forward("WithData"))), 5)
  val rob_forward = Vec(slave(Flow(Forward("WithData"))), ROB_DEPTH)
  val iss_forward = master(Flow(Forward("Ctrl")))
  // state nxt
  val head_rd_state = master(ReadState())
  val skid_rd_state = master(ReadState())

  val rob_head_adr = in UInt(ROB_ADR_W bits)
  val bju_to_head_distance = in UInt(ROB_ADR_W bits)



  // =============== Entries of Issue =================
  val head = new IssueEntry()
  val skid = new IssueEntry()
  val head_flush_valid = Bool()
  val skid_flush_valid = Bool()

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

  val skid_src1_exe_valid = skid_src1_exe_sel.asBits.orR
  val skid_src1_wbc_valid = skid_src1_wbc_sel.asBits.orR
  val skid_src1_rob_valid = skid_src1_rob_sel.asBits.orR
  val skid_src2_exe_valid = skid_src2_exe_sel.asBits.orR
  val skid_src2_wbc_valid = skid_src2_wbc_sel.asBits.orR
  val skid_src2_rob_valid = skid_src2_rob_sel.asBits.orR

  val iss_src1_exe_valid = iss_src1_exe_sel.asBits.orR
  val iss_src1_wbc_valid = iss_src1_wbc_sel.asBits.orR
  val iss_src1_rob_valid = iss_src1_rob_sel.asBits.orR
  val iss_src2_exe_valid = iss_src2_exe_sel.asBits.orR
  val iss_src2_wbc_valid = iss_src2_wbc_sel.asBits.orR
  val iss_src2_rob_valid = iss_src2_rob_sel.asBits.orR

  val skid_src1_forward_data = Bits(64 bits)
  val skid_src2_forward_data = Bits(64 bits)
  val iss_src1_forward_data = Bits(64 bits)
  val iss_src2_forward_data = Bits(64 bits)

  when(skid_src1_exe_valid){
    skid_src1_forward_data := skid_src1_exe_data
  }
  .elsewhen(skid_src1_wbc_valid){
    skid_src1_forward_data := skid_src1_wbc_data
  }
  .elsewhen(skid_src1_rob_valid){
    skid_src1_forward_data := skid_src1_rob_data
  }
  .otherwise{
    skid_src1_forward_data := B(0)
  }

  when(skid_src2_exe_valid){
    skid_src2_forward_data := skid_src2_exe_data
  }
  .elsewhen(skid_src2_wbc_valid){
    skid_src2_forward_data := skid_src2_wbc_data
  }
  .elsewhen(skid_src2_rob_valid){
    skid_src2_forward_data := skid_src2_rob_data
  }
  .otherwise{
    skid_src2_forward_data := B(0)
  }

  when(iss_src1_exe_valid){
    iss_src1_forward_data := iss_src1_exe_data
  }
  .elsewhen(iss_src1_wbc_valid){
    iss_src1_forward_data := iss_src1_wbc_data
  }
  .elsewhen(iss_src1_rob_valid){
    iss_src1_forward_data := iss_src1_rob_data
  }
  .otherwise{
    iss_src1_forward_data := B(0)
  }

  when(iss_src2_exe_valid){
    iss_src2_forward_data := iss_src2_exe_data
  }
  .elsewhen(iss_src2_wbc_valid){
    iss_src2_forward_data := iss_src2_wbc_data
  }
  .elsewhen(iss_src2_rob_valid){
    iss_src2_forward_data := iss_src2_rob_data
  }
  .otherwise{
    iss_src2_forward_data := B(0)
  }


  // =============== Update Head entry valid =================
  head_flush_valid := flush && ((bju_to_head_distance < head.to_head_distance) || (head.ready && skid.valid && (bju_to_head_distance < skid.to_head_distance) ) )
  when(head_flush_valid){
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
  head.src1_valid_nxt := head.src1_valid
  head.src1_data_nxt  := head.src1_data
  head.src2_valid_nxt := head.src2_valid
  head.src2_data_nxt  := head.src2_data

  head_rd_state.rs1_rob_adr := head.src1_rob_adr
  head_rd_state.rs2_rob_adr := head.src2_rob_adr
  head.src1_state     := head_rd_state.rs1_state
  head.src2_state     := head_rd_state.rs2_state
  head.to_head_distance := head.rd_rob_adr - rob_head_adr

  when(head.ready){
    when(skid.valid){ // from skid buffer
      head.instr_pkg      := skid.instr_pkg
      head.rd_rob_adr     := skid.rd_rob_adr

      // ============= src1 =============
      head.src1_valid_nxt :=  skid_src1_exe_valid ||
                              skid_src1_wbc_valid ||
                              skid_src1_rob_valid ||
                              skid.src1_valid
      head.src1_valid     := head.src1_valid_nxt

      head.src1_data_nxt  := skid.src1_valid ? skid.src1_data | skid_src1_forward_data
      head.src1_data      := head.src1_data_nxt
      head.src1_rob_adr   := skid.src1_rob_adr
      head.src1_exe_oh    := skid.src1_exe_oh 
      
      // ============= src2 =============
      head.src2_valid_nxt :=  skid_src2_exe_valid ||
                              skid_src2_wbc_valid ||
                              skid_src2_rob_valid ||
                              skid.src2_valid
      head.src2_valid     := head.src2_valid_nxt

      head.src2_data_nxt  := skid.src2_valid ? skid.src2_data | skid_src2_forward_data
      head.src2_data      := head.src2_data_nxt
      head.src2_rob_adr   := skid.src2_rob_adr
      head.src2_exe_oh    := skid.src2_exe_oh 
    }
    .elsewhen(iss_src.valid){ // from issue input

      head.instr_pkg      := iss_src.instr_pkg
      head.rd_rob_adr     := iss_src.rd_rob_adr
      
      // ============= src1 =============
      head.src1_valid_nxt := iss_src.src1_valid  || 
                             iss_src1_exe_valid  ||
                             iss_src1_wbc_valid  ||
                             iss_src1_rob_valid  ||
                             head.src1_state===ARF
      
      when(iss_src.src1_valid){
        head.src1_data_nxt  := iss_src.src1_data
      }
      .elsewhen(head.src1_state===EXE){
        head.src1_data_nxt  := iss_src1_exe_data
      }
      .elsewhen(head.src1_state===WBC){
        head.src1_data_nxt  := iss_src1_wbc_data
      }
      .elsewhen(head.src1_state===ROB){
        head.src1_data_nxt  := iss_src1_rob_data
      }
      .elsewhen(head.src1_state===ARF){
        head.src1_data_nxt  := iss_src.src1_data
      }
      .otherwise{
        head.src1_data_nxt  := B(0)
      }

      head_rd_state.rs1_rob_adr := iss_src.src1_rob_adr

      head.src1_valid     := head.src1_valid_nxt
      head.src1_data      := head.src1_data_nxt
      
      head.src1_rob_adr   := iss_src.src1_rob_adr
      head.src1_exe_oh    := iss_src.src1_exe_oh 

      // ============= src2 =============
      head.src2_valid_nxt := iss_src.src2_valid  || 
                             iss_src2_exe_valid  || 
                             iss_src2_wbc_valid  ||
                             iss_src2_rob_valid  ||
                             head.src2_state===ARF
      
      when(iss_src.src2_valid){
        head.src2_data_nxt  := iss_src.src2_data
      }
      .elsewhen(head.src2_state===EXE){
        head.src2_data_nxt  := iss_src2_exe_data
      }
      .elsewhen(head.src2_state===WBC){
        head.src2_data_nxt  := iss_src2_wbc_data
      }
      .elsewhen(head.src2_state===ROB){
        head.src2_data_nxt  := iss_src2_rob_data
      }
      .elsewhen(head.src2_state===ARF){
        head.src2_data_nxt  := iss_src.src2_data
      }
      .otherwise{
        head.src2_data_nxt  := B(0)
      }

      head_rd_state.rs2_rob_adr := iss_src.src2_rob_adr

      head.src2_valid     := head.src2_valid_nxt
      head.src2_data      := head.src2_data_nxt

      head.src2_rob_adr   := iss_src.src2_rob_adr
      head.src2_exe_oh    := iss_src.src2_exe_oh 
    }
  }
  .otherwise{

    // ============= src1 =============
    when(head.valid && !head.src1_valid){
      head.src1_valid_nxt   := ((head.src1_state===EXE) && head_src1_exe_sel.asBits.orR) ||
                               ((head.src1_state===WBC) && head_src1_wbc_sel.asBits.orR) ||
                               ((head.src1_state===ROB) && head_src1_rob_sel.asBits.orR)
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
    }
    head.src1_valid := head.src1_valid_nxt
    head.src1_data  := head.src1_data_nxt  

    // ============= src2 =============
    when(head.valid && !head.src2_valid){
      head.src2_valid_nxt   := ((head.src2_state===EXE) && head_src2_exe_sel.asBits.orR) ||
                               ((head.src2_state===WBC) && head_src2_wbc_sel.asBits.orR) ||
                               ((head.src2_state===ROB) && head_src2_rob_sel.asBits.orR)
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
    }
    head.src2_valid := head.src2_valid_nxt
    head.src2_data  := head.src2_data_nxt  
  }

  head.src_all_valid := head_flush_valid ? False | (head.src1_valid_nxt && head.src2_valid_nxt)


  // =============== Update Skid entry =================
  skid_flush_valid := flush && (bju_to_head_distance < skid.to_head_distance)
  when(skid_flush_valid){
    skid.valid := False
  }
  .elsewhen(!head.ready || (head.ready && skid.valid)){
    skid.valid := skid.ready ? iss_src.valid | skid.valid
  }

  skid.ready  := !skid.valid || head.ready

  // skid buffer update
  skid.src1_valid_nxt := skid.src1_valid
  skid.src1_data_nxt  := skid.src1_data
  skid.src2_valid_nxt := skid.src2_valid
  skid.src2_data_nxt  := skid.src2_data

  skid_rd_state.rs1_rob_adr := skid.src1_rob_adr
  skid_rd_state.rs2_rob_adr := skid.src2_rob_adr
  skid.src1_state     := skid_rd_state.rs1_state
  skid.src2_state     := skid_rd_state.rs2_state
  skid.to_head_distance := skid.rd_rob_adr - rob_head_adr

  when(skid.ready){
    when(iss_src.valid){ // from issue input

      skid.instr_pkg      := iss_src.instr_pkg
      skid.rd_rob_adr     := iss_src.rd_rob_adr
      
      // ============= src1 =============
      skid.src1_valid_nxt := iss_src.src1_valid           || 
                             iss_src1_exe_sel.asBits.orR  ||
                             iss_src1_wbc_sel.asBits.orR  ||
                             iss_src1_rob_sel.asBits.orR  ||
                             skid.src1_state===ARF
      
      when(iss_src.src1_valid){
        skid.src1_data_nxt  := iss_src.src1_data
      }
      .elsewhen(skid.src1_state===EXE){
        skid.src1_data_nxt  := iss_src1_exe_data
      }
      .elsewhen(skid.src1_state===WBC){
        skid.src1_data_nxt  := iss_src1_wbc_data
      }
      .elsewhen(skid.src1_state===ROB){
        skid.src1_data_nxt  := iss_src1_rob_data
      }
      .elsewhen(skid.src1_state===ARF){
        skid.src1_data_nxt  := iss_src.src1_data
      }
      .otherwise{
        skid.src1_data_nxt  := B(0)
      }

      skid_rd_state.rs1_rob_adr := iss_src.src1_rob_adr

      skid.src1_valid     := skid.src1_valid_nxt
      skid.src1_data      := skid.src1_data_nxt
      
      skid.src1_rob_adr   := iss_src.src1_rob_adr
      skid.src1_exe_oh    := iss_src.src1_exe_oh 

      // ============= src2 =============
      skid.src2_valid_nxt := iss_src.src2_valid           || 
                             iss_src2_exe_sel.asBits.orR  ||
                             iss_src2_wbc_sel.asBits.orR  ||
                             iss_src2_rob_sel.asBits.orR  ||
                             skid.src2_state===ARF
      
      when(iss_src.src2_valid){
        skid.src2_data_nxt  := iss_src.src2_data
      }
      .elsewhen(skid.src2_state===EXE){
        skid.src2_data_nxt  := iss_src2_exe_data
      }
      .elsewhen(skid.src2_state===WBC){
        skid.src2_data_nxt  := iss_src2_wbc_data
      }
      .elsewhen(skid.src2_state===ROB){
        skid.src2_data_nxt  := iss_src2_rob_data
      }
      .elsewhen(skid.src2_state===ARF){
        skid.src2_data_nxt  := iss_src.src2_data
      }
      .otherwise{
        skid.src2_data_nxt  := B(0)
      }

      skid_rd_state.rs2_rob_adr := iss_src.src2_rob_adr

      skid.src2_valid     := skid.src2_valid_nxt
      skid.src2_data      := skid.src2_data_nxt

      skid.src2_rob_adr   := iss_src.src2_rob_adr
      skid.src2_exe_oh    := iss_src.src2_exe_oh
    }
  }
  .otherwise{

    // ============= src1 =============
    when(skid.valid && !skid.src1_valid){
      skid.src1_valid_nxt   := ((skid.src1_state===EXE) && skid_src1_exe_sel.asBits.orR) ||
                               ((skid.src1_state===WBC) && skid_src1_wbc_sel.asBits.orR) ||
                               ((skid.src1_state===ROB) && skid_src1_rob_sel.asBits.orR)
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
    }
    skid.src1_valid := skid.src1_valid_nxt
    skid.src1_data  := skid.src1_data_nxt  

    // ============= src2 =============
    when(skid.valid && !skid.src2_valid){
      skid.src2_valid_nxt   := ((skid.src2_state===EXE) && skid_src2_exe_sel.asBits.orR) ||
                               ((skid.src2_state===WBC) && skid_src2_wbc_sel.asBits.orR) ||
                               ((skid.src2_state===ROB) && skid_src2_rob_sel.asBits.orR)
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
    }
    skid.src2_valid := skid.src2_valid_nxt
    skid.src2_data  := skid.src2_data_nxt  
  }

  skid.src_all_valid := skid_flush_valid ? False | (skid.src1_valid_nxt && skid.src2_valid_nxt)

 
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

  iss_forward.valid := iss_src.fire && iss_src.instr_pkg.micro_op.uop_com.rd_wen
  iss_forward.addr  := iss_src.instr_pkg.rd_addr
  iss_forward.rob_adr := iss_src.rd_rob_adr

  StreamRenameUtil(this)
}



object GenIssue extends App{
  GenConfig.spinal.generateVerilog(IssueQueue("LSU"))
}