package dandriscv.biophytum

import spinal.core._
import spinal.lib._
import math._

import scala.util.Random


case class DIV() extends Component {
  import AluCtrlEnum._
  import MyUtils._

  // =================== IO ===================
  val div_src = slave(Stream(ExeSrc("ALU")))
  val div_dst = master(Stream(ExeDst()))
  val div_wbc_forward = master(Flow(Foward("WithData")))
  val div_done= out Bool()

  // =================== signals ===================
  val src1        = div_src.src1_data
  val src2        = div_src.src2_data
  val alu_ctrl_op = div_src.uop_alu.alu_ctrl_op
  val alu_is_word = div_src.uop_alu.alu_is_word
  val dst_stream  = Stream(ExeDst())

  val alu_is_quo =
    (alu_ctrl_op === AluCtrlEnum.DIV) ||
    (alu_ctrl_op === DIVU) ||
    (alu_ctrl_op === DIVW) ||
    (alu_ctrl_op === DIVUW)

  val alu_is_rem =
    (alu_ctrl_op === REM) ||
    (alu_ctrl_op === REMU) ||
    (alu_ctrl_op === REMW) ||
    (alu_ctrl_op === REMUW)

  val alu_is_div = alu_is_quo || alu_is_rem

  val mul_type_mul    = (alu_ctrl_op === MUL)
  val mul_type_mulh   = (alu_ctrl_op === MULH)
  val mul_type_mulhsu = (alu_ctrl_op === MULHSU)
  val mul_type_mulhu  = (alu_ctrl_op === MULHU)
  val mul_type_mulw   = (alu_ctrl_op === MULW)

  val alu_is_mul =
    mul_type_mul    ||
    mul_type_mulh   ||
    mul_type_mulhsu ||
    mul_type_mulhu  ||
    mul_type_mulw

  // ================= caclulate div =====================
  val divider = Divider()
  val div_start = div_src.fire && (
    (alu_ctrl_op === AluCtrlEnum.DIV)   ||
    (alu_ctrl_op === DIVU)  ||
    (alu_ctrl_op === REM)   ||
    (alu_ctrl_op === REMU)  ||
    (alu_ctrl_op === DIVW)  ||
    (alu_ctrl_op === DIVUW) ||
    (alu_ctrl_op === REMW)  ||
    (alu_ctrl_op === REMUW) )
  val div_op_is_word = alu_is_word
  val div_op_is_signed = 
    (alu_ctrl_op === AluCtrlEnum.DIV)  ||
    (alu_ctrl_op === REM)  ||
    (alu_ctrl_op === DIVW) ||
    (alu_ctrl_op === REMW)
  val div_op_is_word_reg   = RegNextWhen(div_op_is_word, div_src.fire)
  val div_op_is_signed_reg = RegNextWhen(div_op_is_signed, div_src.fire)
  val div_src1_reg         = RegNextWhen(src1, div_src.fire)
  val div_src2_reg         = RegNextWhen(src2, div_src.fire)

  divider.io.flush        := False
  divider.io.start        := div_start
  divider.io.done_ready   := dst_stream.ready
  divider.io.op_is_word   := div_start ? div_op_is_word | div_op_is_word_reg
  divider.io.op_is_signed := div_start ? div_op_is_signed | div_op_is_signed_reg
  divider.io.dividend     := div_start ? src1 | div_src1_reg
  divider.io.divisor      := div_start ? src2 | div_src2_reg
  val div_result_quotient  = divider.io.quotient
  val div_result_remainder = divider.io.remainder

  // ================= caclulate multiply =====================
  val mul_src1_is_u   = mul_type_mul || mul_type_mulhu || mul_type_mulw
  val mul_src2_is_u   = mul_type_mulhu || mul_type_mulw
  val mulhsu_src2     = B(0, 1 bits) ## src2
  val mul_src2        = mul_type_mulhsu ? mulhsu_src2.asSInt | src2.asSInt
  val mul_temp_u      = src1.asUInt * src2.asUInt
  val mul_temp_s      = src1.asSInt * mul_src2
  val mul_temp_u_high = mul_temp_u(127 downto 64)
  val mul_temp_u_low  = mul_temp_u(63 downto 0)
  val mul_temp_s_high = mul_temp_s(127 downto 64)
  val mul_temp_s_low  = mul_temp_s(63 downto 0)
  val mulw_result     = B((31 downto 0) -> mul_temp_u_low(31)) ## mul_temp_u_low(31 downto 0)
  val mul_sel         = mul_type_mul   ## mul_type_mulh   ## mul_type_mulhsu ## mul_type_mulhu ## mul_type_mulw
  val mul_data        = mul_temp_u_low ## mul_temp_s_high ## mul_temp_s_high ## mul_temp_u_low ## mulw_result
  val mul_result      = dataMux(mul_sel, mul_data)
  val mul_result_r    = RegNextWhen(mul_result, div_src.fire) init(0)

  // ================= stream control =====================
  val rd_wen_reg     = RegNextWhen(div_src.uop_com.rd_wen, div_src.fire) init(false)
  val rd_addr_reg    = RegNextWhen(div_src.rd_addr, div_src.fire) init(0)
  val pc_reg         = RegNextWhen(div_src.pc, div_src.fire) init(0)
  val instr_reg      = RegNextWhen(div_src.instr, div_src.fire) init(0)
  val tail_adr_reg   = RegNextWhen(div_src.rob_adr, div_src.fire) init(0)
  val alu_is_quo_reg = RegNextWhen(alu_is_quo, div_src.fire) init(false)
  val alu_is_mul_reg = RegNextWhen(alu_is_mul, div_src.fire) init(false)
  val div_mul_is_busy= RegInit(False)
  val mul_result_vld = RegInit(False)

  when(div_src.fire){
    div_mul_is_busy := True
  }
  .elsewhen(dst_stream.fire){
    div_mul_is_busy := False
  }

  when(alu_is_mul_reg && dst_stream.fire){
    mul_result_vld := False
  }
  .elsewhen(alu_is_mul && div_src.fire){
    mul_result_vld := True
  }

  // ================= stream control =====================
  div_src.ready       := dst_stream.ready && !div_mul_is_busy
  dst_stream.valid    := divider.io.done_valid || mul_result_vld
  dst_stream.rd_wen   := rd_wen_reg
  dst_stream.rd_addr  := rd_addr_reg
  dst_stream.rd_data  := alu_is_mul_reg ? mul_result_r |
                        (alu_is_quo_reg ? div_result_quotient | div_result_remainder)
  dst_stream.pc       := pc_reg
  dst_stream.instr    := instr_reg
  dst_stream.rob_adr  := tail_adr_reg

  dst_stream >-> div_dst
  div_done := dst_stream.valid

  div_wbc_forward.valid   := div_dst.fire && div_dst.rd_wen
  div_wbc_forward.rob_adr := div_dst.rob_adr
  div_wbc_forward.data    := div_dst.rd_data
  div_wbc_forward.addr    := div_dst.rd_addr

  StreamRenameUtil(this)

}

object GenDIV extends App {
  GenConfig.spinal.generateVerilog(DIV())
}
