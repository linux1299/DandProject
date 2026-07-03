package dandriscv.biophytum

import spinal.core._
import spinal.lib._
import math._


// ============================================================================
// ===================Arch Register File===================
// ============================================================================
case class Regfile() extends Component{
  // =================== IO ===================
  val read  = Vec(slave(ReadRegfile()),2)
  val write = Vec(slave(WriteRegfile()),2)

  // =================== Internal ===================
  val reg   = Vec(Reg(Bits(64 bits)) init(0), 32)
  val wen   = Vec(Bits(32 bits), 2)

  wen(0)(0) := False // x0 write enable is always zero
  wen(1)(0) := False // x0 write enable is always zero

  reg(0) := B(64 bits, default -> False) // x0 is always zero

  for(i <- 1 until 32){
    wen(0)(i) := (write(0).rd_wen && write(0).rd_addr===U(i))
    wen(1)(i) := (write(1).rd_wen && write(1).rd_addr===U(i))

    when(wen(1)(i)){
      reg(i) := write(1).rd_data // newer instruction has prior
    }
    .elsewhen(wen(0)(i)){
      reg(i) := write(0).rd_data
    }
  }

  // =================== output ===================
  for(i <- 0 until 2){
    read(i).rs1_data := reg(read(i).rs1_addr)
    read(i).rs2_data := reg(read(i).rs2_addr)
  }
}