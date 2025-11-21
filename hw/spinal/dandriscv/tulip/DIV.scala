package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._

import scala.util.Random


case class DIV() extends Component {
  import AluCtrlEnum._
  import MyUtils._

  // =================== IO ===================
  val flush = in Bool()
  val div_src = slave(Stream(ExeSrc("ALU")))
  val div_dst = master(Stream(ExeDst()))

  // =================== signals ===================
  val src1        = div_src.src1_data
  val src2        = div_src.src2_data
  val alu_ctrl_op = div_src.uop_alu.alu_ctrl_op
  val alu_is_word = div_src.uop_alu.alu_is_word
  val src_stream  = div_src.throwWhen(flush)
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

  // ================= caclulate div =====================
  val divider = Divider()
  val div_start = src_stream.fire && (
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
  val div_op_is_word_reg   = RegNextWhen(div_op_is_word, src_stream.fire)
  val div_op_is_signed_reg = RegNextWhen(div_op_is_signed, src_stream.fire)
  val div_src1_reg         = RegNextWhen(src1, src_stream.fire)
  val div_src2_reg         = RegNextWhen(src2, src_stream.fire)

  divider.io.flush        := flush
  divider.io.start        := div_start
  divider.io.done_ready   := dst_stream.ready
  divider.io.op_is_word   := div_start ? div_op_is_word | div_op_is_word_reg
  divider.io.op_is_signed := div_start ? div_op_is_signed | div_op_is_signed_reg
  divider.io.dividend     := div_start ? src1 | div_src1_reg
  divider.io.divisor      := div_start ? src2 | div_src2_reg
  val div_result_quotient  = divider.io.quotient
  val div_result_remainder = divider.io.remainder

  // ================= stream control =====================
  val rd_wen_reg     = RegNextWhen(src_stream.uop_com.rd_wen, src_stream.fire) init(false)
  val rd_addr_reg    = RegNextWhen(src_stream.rd_addr, src_stream.fire) init(0)
  val older_reg      = RegNextWhen(src_stream.older, src_stream.fire) init(false)
  val pc_reg         = RegNextWhen(src_stream.pc, src_stream.fire) init(0)
  val instr_reg      = RegNextWhen(src_stream.instr, src_stream.fire) init(0)
  val alu_is_quo_reg = RegNextWhen(alu_is_quo, src_stream.fire) init(false)
  val alu_is_rem_reg = RegNextWhen(alu_is_rem, src_stream.fire) init(false)

  // ================= stream control =====================
  src_stream.ready    := dst_stream.ready
  dst_stream.valid    := divider.io.done_valid
  dst_stream.rd_wen   := rd_wen_reg
  dst_stream.rd_addr  := rd_addr_reg
  dst_stream.rd_data  := alu_is_quo_reg ? div_result_quotient | div_result_remainder
  dst_stream.pc       := pc_reg
  dst_stream.instr    := instr_reg
  dst_stream.older    := older_reg

  dst_stream >-> div_dst

  StreamRenameUtil(this)

}

object GenDIV extends App {
  GenConfig.spinal.generateVerilog(DIV())
}
