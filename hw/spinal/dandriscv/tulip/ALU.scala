package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._

import scala.util.Random


case class ALU() extends Component {
  import AluCtrlEnum._
  import MyUtils._

  // =================== IO ===================
  val flush = in Bool()
  val alu_src = slave(Stream(ExeSrc("ALU")))
  val alu_dst = master(Stream(ExeDst()))

  // =================== signals ===================
  val src1        = alu_src.src1_data
  val src2        = alu_src.src2_data
  val src1_word   = src1(31 downto 0)
  val src2_word   = src2(31 downto 0)
  val shift_bits  = src2(5 downto 0).asUInt
  val add_result  = src1.asSInt + src2.asSInt //SInt(64 bits)
  val sub_result  = src1.asSInt - src2.asSInt //SInt(64 bits)
  val slt_result  = src1.asSInt < src2.asSInt //Bool()
  val sltu_result = src1.asUInt < src2.asUInt //Bool()
  val xor_result  = src1 ^ src2 //Bits(64 bits)
  val sll_result  = src1 |<< shift_bits //Bits(64 bits)
  val srl_result  = src1 |>> shift_bits //Bits(64 bits)
  val sra_result  = src1.asSInt |>> shift_bits //SInt(64 bits)
  val and_result  = src1 & src2 //Bits(64 bits)
  val or_result   = src1 | src2 //Bits(64 bits)
  val addw_result = B((31 downto 0) -> add_result(31)) ## add_result(31 downto 0)
  val subw_result = B((31 downto 0) -> sub_result(31)) ## sub_result(31 downto 0)
  val sllw_temp   = src1_word |<< shift_bits(4 downto 0)
  val sllw_result = B((31 downto 0) -> sllw_temp(31)) ## sllw_temp
  val srlw_temp   = src1_word |>> shift_bits(4 downto 0)
  val srlw_result = B((31 downto 0) -> srlw_temp(31)) ## srlw_temp
  val sraw_temp   = src1_word.asSInt |>> shift_bits(4 downto 0)
  val sraw_result = B((31 downto 0) -> sraw_temp(31)) ## sraw_temp
  val alu_result  = Bits(64 bits)

  val alu_ctrl_op     = alu_src.uop_alu.alu_ctrl_op
  val alu_is_word     = alu_src.uop_alu.alu_is_word
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

  val src_stream = alu_src.throwWhen(flush)
  val dst_stream = Stream(ExeDst())

  // ================= caclulate alu result =====================
  switch(alu_ctrl_op) {
    is(ADD) {
      when(alu_is_word) {
        alu_result := addw_result
      }.otherwise {
        alu_result := add_result.asBits
      }
    }
    is(SUB) {
      when(alu_is_word) {
        alu_result := subw_result
      }.otherwise {
        alu_result := sub_result.asBits
      }
    }
    is(SLT) {
      alu_result := B(64 - 1 bits, (64 - 2 downto 0) -> false) ## slt_result
    }
    is(SLTU) {
      alu_result := B(64 - 1 bits, (64 - 2 downto 0) -> false) ## sltu_result
    }
    is(XOR) {
      alu_result := xor_result
    }
    is(SLL) {
      when(alu_is_word) {
        alu_result := sllw_result
      }.otherwise {
        alu_result := sll_result
      }
    }
    is(SRL) {
      when(alu_is_word) {
        alu_result := srlw_result
      }.otherwise {
        alu_result := srl_result
      }
    }
    is(SRA) {
      when(alu_is_word) {
        alu_result := sraw_result
      }.otherwise {
        alu_result := sra_result.asBits
      }
    }
    is(AND) {
      alu_result := and_result
    }
    is(OR) {
      alu_result := or_result
    }
    is(LUI) {
      alu_result := src2
    }
    default {
      alu_result := B(0)
    }
  }

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

  // ================= stream control =====================
  src_stream.ready    := dst_stream.ready
  dst_stream.valid    := src_stream.valid
  dst_stream.rd_wen   := src_stream.uop_com.rd_wen
  dst_stream.rd_addr  := src_stream.rd_addr
  dst_stream.rd_data  := alu_is_mul ? mul_result | alu_result
  dst_stream.pc       := src_stream.pc
  dst_stream.instr    := src_stream.instr
  dst_stream.older    := src_stream.older

  dst_stream >-> alu_dst

  StreamRenameUtil(this)

}

object GenALU extends App {
  GenConfig.spinal.generateVerilog(ALU())
}
