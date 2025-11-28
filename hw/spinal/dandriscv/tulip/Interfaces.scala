package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._

import MyUtils._
import CpuConfig._

object AluCtrlEnum extends SpinalEnum(binarySequential){
  val IDLE, ADD, SUB, SLT, SLTU, XOR, SLL, SRL, SRA, AND, OR, LUI,
      MUL, MULH, MULHSU, MULHU, DIV, DIVU, REM, REMU, MULW, DIVW, DIVUW, REMW, REMUW = newElement()
}

object BjuCtrlEnum extends SpinalEnum(binarySequential){
  val IDLE, AUIPC, JAL, JALR, BEQ, BNE, BLT, BGE, BLTU, BGEU, CSR = newElement()
}

object LsuCtrlEnum extends SpinalEnum(binarySequential){
  val IDLE, LB, LBU, LH, LHU, LW, LWU, LD, SB, SH, SW, SD = newElement()
}

object ExpCtrlEnum extends SpinalEnum(binarySequential){
  val IDLE, ECALL, EBREAK, MRET, CSRRW, CSRRS, CSRRC, CSRRWI, CSRRSI, CSRRCI = newElement()
}

object ExceptionEnum extends SpinalEnum(binarySequential){
  val IDLE, ECALL, EBREAK, MRET, TIME = newElement()
}

object ExeSelEnum extends SpinalEnum(binarySequential){
  val IDLE, ALU, BJU, LSU, DIV = newElement()
}

// ========================= Fetch =======================
case class FchDst() extends Bundle {
  val pc           = UInt(32 bits)
  val branch_pc    = UInt(32 bits)
  val branch_taken = Bool()
  val instr        = Bits(64 bits)
}

// ========================= Fetch <-> Decode =======================
case class DecSrc() extends Bundle {
  val pc           = UInt(32 bits)
  val branch_pc    = UInt(32 bits)
  val branch_taken = Bool()
  val instr        = Bits(32 bits)
}

// ========================= Micro Op =======================
case class MicroOp() extends Bundle {
  // common
  val uop_com  = MicroOpCommon()
  // alu
  val uop_alu  = MicroOpAlu()
  // bju
  val uop_bju  = MicroOpBju()
  // lsu
  val uop_lsu  = MicroOpLsu()
}

case class MicroOpCommon() extends Bundle {
  // common
  val rd_wen          = Bool()
  val src2_is_imm     = Bool()
}

case class MicroOpAlu() extends Bundle {
  // alu
  val alu_ctrl_op     = AluCtrlEnum()
  val alu_is_word     = Bool()
}

case class MicroOpBju() extends Bundle {
  // bju
  val bju_ctrl_op     = BjuCtrlEnum()
  val bju_rd_eq_rs1   = Bool()
  val bju_rd_is_link  = Bool()
  val bju_rs1_is_link = Bool()
  val exp_ctrl_op     = ExpCtrlEnum()
  val exp_csr_addr    = UInt(12 bits)
  val exp_csr_wen     = Bool()
}

case class MicroOpLsu() extends Bundle {
  // lsu
  val lsu_ctrl_op     = LsuCtrlEnum()
  val lsu_is_load     = Bool()
  val lsu_is_store    = Bool()
}

// ========================= Issue <-> Dispatch =======================
case class IssueSrc() extends Bundle {
  val micro_op     = MicroOp()
  val exe_sel      = ExeSelEnum()
  val rs1_addr     = UInt(5 bits)
  val rs2_addr     = UInt(5 bits)
  val rd_addr      = UInt(5 bits)
  val imm          = Bits(64 bits)
  val pc           = UInt(32 bits)
  val branch_pc    = UInt(32 bits)
  val branch_taken = Bool()
  val instr        = Bits(32 bits)
}

case class IssueDst() extends Bundle {
  val iss_pkg    = IssueSrc()
  val exe_sel_oh = Bits(5 bits)
}

// ========================= Dispatch <-> Exe =======================
case class ExeSrc(Type: String) extends Bundle {
  val uop_com      = MicroOpCommon()
  val src1_data    = Bits(64 bits)
  val src2_data    = Bits(64 bits)
  val rd_addr      = UInt(5 bits)
  val pc           = UInt(32 bits)
  val instr        = Bits(32 bits)
  val tail_adr     = UInt(3 bits)
  // alu
  val uop_alu      = (Type=="ALU" || Type=="ALL") generate MicroOpAlu()
  // bju
  val imm          = (Type!="ALU" || Type=="ALL") generate Bits(64 bits)
  val uop_bju      = (Type=="BJU" || Type=="ALL") generate MicroOpBju()
  val branch_pc    = (Type=="BJU" || Type=="ALL") generate UInt(32 bits)
  val branch_taken = (Type=="BJU" || Type=="ALL") generate Bool()
  // lsu
  val uop_lsu      = (Type=="LSU" || Type=="ALL") generate MicroOpLsu()
}

case class ExeDst() extends Bundle {
  val rd_data     = Bits(64 bits)
  val rd_addr     = UInt(5 bits)
  val rd_wen      = Bool()
  val pc          = UInt(32 bits)
  val instr       = Bits(32 bits)
  val tail_adr    = UInt(3 bits)
}

// ====================== reg file ports ====================
case class ReadRegfile() extends Bundle with IMasterSlave{
  val rs1_data = Bits(64 bits)
  val rs2_data = Bits(64 bits)
  val rs1_addr = UInt(5 bits)
  val rs2_addr = UInt(5 bits)

  override def asMaster(): Unit = {
    out(rs1_addr, rs2_addr)
    in(rs1_data, rs2_data)
  }
}
case class WriteRegfile() extends Bundle with IMasterSlave{
  val rd_data = Bits(64 bits)
  val rd_addr = UInt(5 bits)
  val rd_wen  = Bool()

  override def asMaster(): Unit = {
    out(rd_addr, rd_wen, rd_data)
  }
}

// ====================== csr reg file ports ====================
case class CsrCpuPorts(MXLEN : Int = 64) extends Bundle with IMasterSlave{
  val waddr = UInt(12 bits)
  val wen   = Bool()
  val wdata = Bits(MXLEN bits)
  val raddr = UInt(12 bits)
  val rdata = Bits(MXLEN bits)

  override def asMaster(): Unit = {
    in(rdata)
    out(waddr, wen, wdata, raddr)
  }
}
case class CsrClintPorts(MXLEN : Int = 64) extends Bundle with IMasterSlave{
  val mepc_wen = Bool()
  val mepc_wdata = Bits(MXLEN bits)
  val mcause_wen = Bool()
  val mcause_wdata = Bits(MXLEN bits)
  val mstatus_wen = Bool()
  val mstatus_wdata = Bits(MXLEN bits)
  val mtvec = Bits(MXLEN bits)
  val mepc  = Bits(MXLEN bits)
  val mstatus = Bits(MXLEN bits)
  val global_int_en = Bool()
  val mtime_int_en = Bool()
  val mtime_int_pend = Bool()

  override def asMaster(): Unit = {
    in(mtvec, mepc, mstatus, global_int_en, mtime_int_en, mtime_int_pend)
    out(mepc_wen, mepc_wdata, mcause_wen, mcause_wdata, mstatus_wen, mstatus_wdata)
  }
}

// ================ cpu and dcache ports ===============
case class DCacheCmd(AW: Int, DW: Int) extends Bundle {
  val addr = UInt(AW bits)
  val wen  = Bool()
  val wdata= Bits(DW bits)
  val wstrb= Bits(DW/8 bits)
  val size = UInt(3 bits)
}
case class DCacheRsp(DW: Int) extends Bundle {
  val data = Bits(DW bits)
}
case class DCachePorts(AW: Int, DW: Int) extends Bundle with IMasterSlave{
  val cmd = Stream(DCacheCmd(AW, DW))
  val rsp = Flow(DCacheRsp(DW))
  val stall = Bool()
  override def asMaster(): Unit = {
    master(cmd)
    slave(rsp)
  }
  override def asSlave(): Unit = {
    slave(cmd)
    master(rsp)
  }
}
// ================ next level ports as master ==============
case class DCacheNextLevelCmd(AW: Int, DW: Int) extends Bundle{
  val addr = UInt(AW bits)
  val len  = UInt(4 bits)
  val size = UInt(3 bits)
  val wen  = Bool()
  val wdata= Bits(DW bits)
  val wstrb= Bits(DW/8 bits)
}
case class DCacheNextLevelRsp(DW: Int) extends Bundle{
  val data = Bits(DW bits)
  val bresp= Bits(2 bits)
  val rvalid = Bool()
}
case class DCacheNextLevelPorts(AW: Int, DW: Int) extends Bundle with IMasterSlave{
  val cmd = Stream(DCacheNextLevelCmd(AW, DW))
  val rsp = Flow(DCacheNextLevelRsp(DW))

  override def asMaster(): Unit = {
    master(cmd)
    slave(rsp)
  }
}

// ================ ICache ===============
// cpu and icache ports
case class ICacheCmd(AW: Int) extends Bundle {
  val addr = UInt(AW bits)
}
case class ICacheRsp(DW: Int) extends Bundle {
  val data = Bits(DW bits)
}
case class ICachePorts(AW: Int, DW: Int) extends Bundle with IMasterSlave{
  val cmd = Stream(ICacheCmd(AW))
  val rsp = Flow(ICacheRsp(DW))
  override def asMaster(): Unit = {
    master(cmd)
    slave(rsp)
  }
  override def asSlave(): Unit = {
    slave(cmd)
    master(rsp)
  }
}
// next level ports as master
case class ICacheNextLevelCmd(AW: Int) extends Bundle{
  val addr = UInt(AW bits)
  val len  = UInt(4 bits)
  val size = UInt(3 bits)
}
case class ICacheNextLevelRsp(DW: Int) extends Bundle{
  val data = Bits(DW bits)
}
case class ICacheNextLevelPorts(AW: Int, DW: Int) extends Bundle with IMasterSlave{
  val cmd = Stream(ICacheNextLevelCmd(AW))
  val rsp = Flow(ICacheNextLevelRsp(DW))

  override def asMaster(): Unit = {
    master(cmd)
    slave(rsp)
  }
}
// sram ports as master
case class SramCmd(bankDepthBits : Int, bankWidth : Int) extends Bundle{
  val addr = UInt(bankDepthBits bits)
  val wen = Bool()
  val wdata = Bits(bankWidth bits)
  val wstrb = Bits(bankWidth/8 bits)
}
case class SramRsp(bankWidth : Int) extends Bundle{
  val data = Bits(bankWidth bits)
}
case class SramPorts(bankDepthBits : Int, bankWidth : Int) extends Bundle with IMasterSlave{
  val cmd = Flow(SramCmd(bankDepthBits, bankWidth))
  val rsp = Flow(SramRsp(bankWidth))

  override def asMaster(): Unit = {
    master(cmd)
    slave(rsp)
  }

  override def asSlave(): Unit = {
    master(rsp)
    slave(cmd)
  }
}