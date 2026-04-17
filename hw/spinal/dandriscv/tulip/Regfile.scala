package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._


// ============================================================================
// ===================Arch Register File===================
// ============================================================================
case class Regfile() extends Component{
  // =================== IO ===================
  val read_0  = slave(ReadRegfile())
  val read_1  = slave(ReadRegfile())
  val write_0 = slave(WriteRegfile())
  val write_1 = slave(WriteRegfile())

  // =================== Internal ===================
  val reg   = Vec(Reg(Bits(64 bits)) init(0), 32)
  val wen_0 = Vec(Bool(), 32)
  val wen_1 = Vec(Bool(), 32)

  wen_0(0) := False
  wen_1(0) := False

  reg(0) := B(64 bits, default -> False) // x0 is always zero
  for(i <- 1 until 32){
    wen_0(i) := (write_0.rd_wen && write_0.rd_addr===U(i))
    wen_1(i) := (write_1.rd_wen && write_1.rd_addr===U(i))

    when(wen_1(i)){
      reg(i) := write_1.rd_data
    }
    .elsewhen(wen_0(i)){
      reg(i) := write_0.rd_data
    }
  }

  // =================== output ===================
  read_0.rs1_data := reg(read_0.rs1_addr)
  read_0.rs2_data := reg(read_0.rs2_addr)
  read_1.rs1_data := reg(read_1.rs1_addr)
  read_1.rs2_data := reg(read_1.rs2_addr)
}