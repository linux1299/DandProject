package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._

case class BJU_kernel() extends Component {
  import CpuConfig._
  import BjuCtrlEnum._
  import ExpCtrlEnum._

  // =================== IO ===================
  val in_valid = in Bool()
  val uop_bju  = in(MicroOpBju())
  val uop_com  = in(MicroOpCommon())
  val pc       = in UInt(32 bits)
  val imm      = in Bits(64 bits)
  val rs1_data = in Bits(64 bits)
  val rs2_data = in Bits(64 bits)
  val rd_data  = out Bits(64 bits)
  val branch_taken   = in Bool()
  val branch_pc      = in UInt(32 bits)
  val redirect_valid = out Bool()
  val redirect_pc    = out UInt(32 bits)
  val branch_valid   = out Bool()
  // for BPU train
  val train_valid   = out Bool()
  val train_pc      = out UInt(32 bits)
  val train_taken   = out Bool()
  val train_mispred = out Bool()
  val train_history = out UInt(BPU_HISTORY_LEN bits)
  val train_pc_next = out UInt(32 bits)
  val train_is_call = out Bool()
  val train_is_ret  = out Bool()
  val train_is_jmp  = out Bool()
  // int
  val interrupt_valid = out Bool()
  val interrupt_pc = out UInt(32 bits)
  val timer_int = in Bool()

  // ======================== inst ===================
  val csr_regfile = new CsrRegfile(64)
  val clint       = new Clint(64, 32)
  val csr_rdata   = Bits(64 bits)

  // --------------branch/jump related signals--------------
  val pc_next = UInt(32 bits)
  val auipc   = (uop_bju.bju_ctrl_op===AUIPC)
  val jal     = (uop_bju.bju_ctrl_op===JAL)
  val jalr    = (uop_bju.bju_ctrl_op===JALR)
  val beq     = (uop_bju.bju_ctrl_op===BEQ)
  val bne     = (uop_bju.bju_ctrl_op===BNE)
  val blt     = (uop_bju.bju_ctrl_op===BLT)
  val bge     = (uop_bju.bju_ctrl_op===BGE)
  val bltu    = (uop_bju.bju_ctrl_op===BLTU)
  val bgeu    = (uop_bju.bju_ctrl_op===BGEU) 
  val csr     = (uop_bju.bju_ctrl_op===CSR) 
  val branch_or_jalr = jalr || beq || bne || blt || bge || bltu || bgeu
  val branch_or_jump = branch_or_jalr || jal
  val branch_src1    = rs1_data
  val branch_src2    = rs2_data
  val rd_eq_rs1      = uop_bju.bju_rd_eq_rs1
  val rd_is_link     = uop_bju.bju_rd_is_link
  val rs1_is_link    = uop_bju.bju_rs1_is_link
  val src2_is_imm    = uop_com.src2_is_imm
  val is_call= False
  val is_ret = False
  val is_jmp = False
  
  // ================ for branch and jump ======================
  // decide if should branch or jump
  val beq_result     = beq && (branch_src1===branch_src2)
  val bne_result     = bne && (branch_src1=/=branch_src2)
  val blt_result     = blt && (branch_src1.asSInt < branch_src2.asSInt)
  val bge_result     = bge && (branch_src1.asSInt >=branch_src2.asSInt)
  val bltu_result    = bltu && (branch_src1.asUInt <  branch_src2.asUInt)
  val bgeu_result    = bgeu && (branch_src1.asUInt >= branch_src2.asUInt)
  val real_taken     = beq_result || bne_result || blt_result || bge_result || bltu_result || bgeu_result || jal || jalr
  val branch_history = RegInit(U(0, BPU_HISTORY_LEN bits))
  // real branch history
  when(in_valid){
    branch_history := (branch_history(BPU_HISTORY_LEN-2 downto 0).asBits ## real_taken).asUInt
  }
  // calculate pc_next
  when(jalr){
    pc_next := (((branch_src1.asSInt + imm.asSInt) & ~S(1, 64 bits)).asUInt).resized // jalr
  }.otherwise{
    pc_next := ((pc.asSInt + imm.asSInt).asUInt).resized // jal or branch
  }

  // redirect if predict wrong
  redirect_valid := False
  redirect_pc := 0
  when(branch_or_jump){
    when(real_taken){ // real: branch taken; predict: not taken or taken wrong pc
      when(!branch_taken || (branch_pc=/=pc_next)){
        redirect_valid := in_valid
        redirect_pc := pc_next
      }
    }
    .otherwise{ // real: not taken; predict: taken
      when(branch_taken){
        redirect_valid := in_valid
        redirect_pc := pc + 4
      }
    }
  }

  // predict correct, branch taken
  branch_valid := in_valid && real_taken && branch_taken && (branch_pc===pc_next)

  // call or return
  when(jal){
    when(rd_is_link){
      is_call := True // A JAL instruction should push the return address onto a return-address stack (RAS) only when rd=x1/x5
      is_ret  := False
      is_jmp  := False
    }.otherwise{
      is_call := False
      is_ret  := False
      is_jmp  := True
    }
  }
  .elsewhen(jalr){
  /* JALR instructions should push/pop a RAS as shown in the Table
  -------------------------------------------------
      rd    |   rs1    | rs1=rd  |   RAS action
  (1) !link |   !link  | -       |   none
  (2) !link |   link   | -       |   pop
  (3) link  |   !link  | -       |   push
  (4) link  |   link   | 0       |   push and pop
  (5) link  |   link   | 1       |   push
  ------------------------------------------------- */
    when(rd_is_link){
      when(rs1_is_link){
        when(rd_eq_rs1){
          is_call := True // (5)
        }.otherwise{
          is_call := True // (4)
          is_ret  := True
        }
      }.otherwise{
        is_call := True // (3)
      }
    }.otherwise{
      when(rs1_is_link){
        is_ret := True // (2)
      }.otherwise{
        is_jmp := True // (1)
      }
    }
  }

  // ================ for rd value ======================
  val src1 = pc
  val src2 = (jal || jalr) ? U(4, 64 bits) | rs2_data.asUInt
  rd_data := csr ? csr_rdata | (src1 + src2).asBits

  // ================= for BPU ==================
  train_valid   := in_valid && branch_or_jump
  train_pc      := pc
  train_taken   := real_taken
  train_mispred := redirect_valid
  train_history := branch_history
  train_pc_next := redirect_pc
  train_is_call := is_call
  train_is_ret  := is_ret
  train_is_jmp  := is_jmp

  // ================= for exception ==================
  clint.csr_ports <> csr_regfile.clint_ports
  csr_regfile.timer_int       := timer_int
  clint.timer_int             := timer_int
  csr_rdata                   := csr_regfile.cpu_ports.rdata
  csr_regfile.cpu_ports.raddr := uop_bju.exp_csr_addr
  clint.pc                    := pc
  clint.ecall                 := in_valid && (uop_bju.exp_ctrl_op===ECALL)
  clint.ebreak                := in_valid && (uop_bju.exp_ctrl_op===EBREAK)
  clint.mret                  := in_valid && (uop_bju.exp_ctrl_op===MRET)
  val csr_wdata    = Bits(64 bits)
  val csrrw_wdata  = rs1_data
  val csrrs_wdata  = rs1_data | csr_rdata
  val csrrc_wdata  = ~rs1_data & csr_rdata
  val csrrwi_wdata = imm
  val csrrsi_wdata = imm | csr_rdata
  val csrrci_wdata = ~imm & csr_rdata
  val csr_wen      = in_valid && uop_bju.exp_csr_wen

  switch(uop_bju.exp_ctrl_op){
    is(CSRRW){
      csr_wdata := csrrw_wdata
    }
    is(CSRRS){
      csr_wdata := csrrs_wdata
    }
    is(CSRRC){
      csr_wdata := csrrc_wdata
    }
    is(CSRRWI){
      csr_wdata := csrrwi_wdata
    }
    is(CSRRSI){
      csr_wdata := csrrsi_wdata
    }
    is(CSRRCI){
      csr_wdata := csrrci_wdata
    }
    default{
      csr_wdata := 0
    }
  }

  csr_regfile.cpu_ports.wdata := RegNext(csr_wdata)
  csr_regfile.cpu_ports.wen   := RegNext(csr_wen)
  csr_regfile.cpu_ports.waddr := RegNext(uop_bju.exp_csr_addr)

  clint.pc_next   := redirect_pc
  interrupt_valid := clint.int_en
  interrupt_pc    := clint.int_pc
}

case class BJU() extends Component {
  import CpuConfig._
  import BjuCtrlEnum._
  import ExpCtrlEnum._

  // =================== IO ===================
  val bju_src        = slave(Stream(ExeSrc("BJU")))
  val bju_dst        = master(Stream(ExeDst()))
  val redirect_valid = out Bool()
  val redirect_pc    = out UInt(32 bits)
  val branch_valid   = out Bool()
  // for BPU train
  val train_valid    = out Bool()
  val train_pc       = out UInt(32 bits)
  val train_taken    = out Bool()
  val train_mispred  = out Bool()
  val train_history  = out UInt(BPU_HISTORY_LEN bits)
  val train_pc_next  = out UInt(32 bits)
  val train_is_call  = out Bool()
  val train_is_ret   = out Bool()
  val train_is_jmp   = out Bool()
  // int
  val interrupt_valid = out Bool()
  val interrupt_pc    = out UInt(32 bits)
  val timer_int       = in Bool()

  // =================== Stream ===================
  val dst_stream = Stream(ExeDst())
  val trap_or_print = (DIFFTEST) generate ((bju_src.instr===B"32'h6b" || bju_src.instr===B"32'h7b"))

  val bju_kernel = new BJU_kernel()
  bju_kernel.in_valid     := bju_src.fire && !trap_or_print
  bju_kernel.uop_bju      := bju_src.uop_bju
  bju_kernel.pc           := bju_src.pc
  bju_kernel.imm          := bju_src.imm
  bju_kernel.rs1_data     := bju_src.src1_data
  bju_kernel.rs2_data     := bju_src.src2_data
  bju_kernel.branch_taken := bju_src.branch_taken
  bju_kernel.branch_pc    := bju_src.branch_pc
  redirect_valid          := bju_kernel.redirect_valid
  redirect_pc             := bju_kernel.redirect_pc
  train_valid             := bju_kernel.train_valid
  train_pc                := bju_kernel.train_pc
  train_taken             := bju_kernel.train_taken
  train_mispred           := bju_kernel.train_mispred
  train_history           := bju_kernel.train_history
  train_pc_next           := bju_kernel.train_pc_next
  train_is_call           := bju_kernel.train_is_call
  train_is_ret            := bju_kernel.train_is_ret
  train_is_jmp            := bju_kernel.train_is_jmp
  interrupt_valid         := bju_kernel.interrupt_valid
  interrupt_pc            := bju_kernel.interrupt_pc
  bju_kernel.timer_int    := timer_int
  branch_valid            := bju_kernel.branch_valid

  // =================== output ===================
  bju_src.ready        := dst_stream.ready
  dst_stream.valid     := bju_src.valid
  dst_stream.rd_data   := bju_kernel.rd_data
  dst_stream.rd_addr   := bju_src.rd_addr
  dst_stream.rd_wen    := bju_src.uop_com.rd_wen
  dst_stream.pc        := bju_src.pc
  dst_stream.instr     := bju_src.instr
  dst_stream.entry_adr := bju_src.entry_adr

  dst_stream >-> bju_dst

  StreamRenameUtil(this)
}

object GenBJU extends App {
  GenConfig.spinal.generateVerilog(BJU())
}