package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._

import scala.util.Random


case class ALU() extends Component {
  import AluCtrlEnum._
  import MyUtils._
  import CpuConfig._

  // =================== IO ===================
  val alu_src = slave(Stream(ExeSrc("ALU")))
  val alu_dst = master(Stream(ExeDst()))
  val alu_exe_rd_wen  = out Bool()
  val alu_exe_rd_data = out Bits(64 bits)
  val alu_exe_rd_addr = out UInt(5 bits)
  val alu_exe_rob_adr = out UInt(ROB_ADR_W bits)

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

  // ================= stream control =====================
  alu_src.ready        := dst_stream.ready
  dst_stream.valid     := alu_src.valid
  dst_stream.rd_wen    := alu_src.uop_com.rd_wen
  dst_stream.rd_addr   := alu_src.rd_addr
  dst_stream.rd_data   := alu_result
  dst_stream.pc        := alu_src.pc
  dst_stream.instr     := alu_src.instr
  dst_stream.rob_adr   := alu_src.rob_adr

  dst_stream >-> alu_dst

  alu_exe_rd_wen  := dst_stream.fire && dst_stream.rd_wen
  alu_exe_rd_data := dst_stream.rd_data
  alu_exe_rd_addr := dst_stream.rd_addr
  alu_exe_rob_adr := dst_stream.rob_adr

  StreamRenameUtil(this)

}

object GenALU extends App {
  GenConfig.spinal.generateVerilog(ALU())
}
