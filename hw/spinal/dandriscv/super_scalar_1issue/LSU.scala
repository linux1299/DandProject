package dandriscv.super_scalar_1issue

import spinal.core._
import spinal.lib._
import math._
import dandriscv.Riscv._

case class LSU(AW:Int=32, DW:Int=64) extends Component {
  import CpuConfig._
  import LsuCtrlEnum._
  import CSR._

  // =================== IO ===================
  val flush = in Bool()
  val stall = in Bool()
  val src_ports = slave(Stream(DeQueue("LSU")))
  val dst_ports = master(Stream(ExeDst()))
  val dcache_ports = master(DCacheAccess(AW, DW))
  val timer_cen = out Bool()
  val timer_wen = out Bool()
  val timer_addr= out UInt(AW bits)
  val timer_wdata = out Bits(64 bits)

  // =========== stream control ================
  val src_stream = src_ports.haltWhen(stall).throwWhen(flush)
  val dst_stream = Stream(ExeDst())
  val dcache_cmd_stream = Stream(DCacheAccessCmd(AW, DW))

  // =================== stage 0 logic ===================
  val src1 = src_ports.src1_data
  val src2 = src_ports.src2_data
  val imm  = src_ports.imm
  val micro_op = src_ports.micro_op
  val lsu_cen = micro_op.lsu_is_load || micro_op.lsu_is_store
  val lsu_addr = src1.asUInt + imm.asUInt
  val lsu_addr_offset = lsu_addr(2 downto 0)
  val lsu_addr_is_timer = (lsu_addr===MTIME) || (lsu_addr===MTIMECMP)
  val lsu_wdata= src2
  val lsu_wdata_byte = B((64-8-1 downto 0) -> lsu_wdata(7)) ## lsu_wdata(7 downto 0)
  val lsu_wdata_half = B((64-16-1 downto 0) -> lsu_wdata(15)) ## lsu_wdata(15 downto 0)
  val lsu_wdata_word = B((64-32-1 downto 0) -> lsu_wdata(31)) ## lsu_wdata(31 downto 0)
  val dcache_cen   = !lsu_addr_is_timer && lsu_cen
  val dcache_addr  = lsu_addr.resized
  val dcache_wdata = Bits(64 bits)
  val dcache_wstrb = Bits(64/8 bits)
  val dcache_wen   = micro_op.lsu_is_store
  val dcache_size  = UInt(3 bits)

  // =================== stage 1 logic ===================
  val lsu_addr_offset_reg = RegNextWhen(lsu_addr_offset, src_ports.fire)
  val dcache_rdata = dcache_ports.rsp.data |>> (lsu_addr_offset_reg << 3) // TODO:
  val dcache_rdata_lb   = B((XLEN-8-1 downto 0) -> dcache_rdata(7)) ## dcache_rdata(7 downto 0)
  val dcache_rdata_lbu  = B((XLEN-8-1 downto 0) -> False) ## dcache_rdata(7 downto 0)
  val dcache_rdata_lh   = B((XLEN-16-1 downto 0) -> dcache_rdata(15)) ## dcache_rdata(15 downto 0)
  val dcache_rdata_lhu  = B((XLEN-16-1 downto 0) -> False) ## dcache_rdata(15 downto 0)
  val dcache_rdata_lw   = B((XLEN-32-1 downto 0) -> dcache_rdata(31)) ## dcache_rdata(31 downto 0)
  val dcache_rdata_lwu  = B((XLEN-32-1 downto 0) -> False) ## dcache_rdata(31 downto 0)
  val lsu_rdata = Bits(64 bits)
  val lsu_ctrl_op_reg   = RegNextWhen(micro_op.lsu_ctrl_op, src_ports.fire)

  // =================== stage 0 access dcache ===================
  dcache_cmd_stream.valid := dcache_cen && src_stream.valid
  dcache_cmd_stream.addr  := dcache_addr
  dcache_cmd_stream.wen   := dcache_wen
  dcache_cmd_stream.wdata := dcache_wdata
  dcache_cmd_stream.wstrb := dcache_wstrb
  dcache_cmd_stream.size  := dcache_size
  dcache_cmd_stream >> dcache_ports.cmd

  switch(micro_op.lsu_ctrl_op){
    is(SB){
      dcache_wdata := lsu_wdata_byte |<< (lsu_addr_offset << 3)
      dcache_wstrb := B(8 bits, 0->true, default -> false) |<< lsu_addr_offset
    }
    is(SH){
      dcache_wdata := lsu_wdata_half |<< (lsu_addr_offset << 3)
      dcache_wstrb := B(8 bits, (1 downto 0)->true, default -> false) |<< lsu_addr_offset
    }
    is(SW){
      dcache_wdata := lsu_wdata_word |<< (lsu_addr_offset << 3)
      dcache_wstrb := B(8 bits, (3 downto 0)->true, default -> false) |<< lsu_addr_offset
    }
    is(SD){
      dcache_wdata := lsu_wdata |<< (lsu_addr_offset << 3)
      dcache_wstrb := B(8 bits, (7 downto 0)->true) |<< lsu_addr_offset
    }
    default{
      dcache_wdata := B(0, XLEN bits)
      dcache_wstrb := B(8 bits, default -> false)
    }
  }

  
  // =================== stage 1 ===================
  switch(lsu_ctrl_op_reg){
    is(LB){
      lsu_rdata := dcache_rdata_lb
    }
    is(LBU){
      lsu_rdata := dcache_rdata_lbu
    }
    is(LH){
      lsu_rdata := dcache_rdata_lh
    }
    is(LHU){
      lsu_rdata := dcache_rdata_lhu
    }
    is(LW){
      lsu_rdata := dcache_rdata_lw
    }
    is(LWU){
      lsu_rdata := dcache_rdata_lwu
    }
    is(LD){
      lsu_rdata := dcache_rdata
    }
    default{
      lsu_rdata := B(0, XLEN bits)
    }
  }

  switch(micro_op.lsu_ctrl_op){
    is(SB){
      dcache_size := U(0)
    }
    is(SH){
      dcache_size := U(1)
    }
    is(SW){
      dcache_size := U(2)
    }
    is(SD){
      dcache_size := U(3)
    }
    is(LB){
      dcache_size := U(0)
    }
    is(LBU){
      dcache_size := U(0)
    }
    is(LH){
      dcache_size := U(1)
    }
    is(LHU){
      dcache_size := U(1)
    }
    is(LW){
      dcache_size := U(2)
    }
    is(LWU){
      dcache_size := U(2)
    }
    is(LD){
      dcache_size := U(3)
    }
    default{
      dcache_size := U(0)
    }
  }


  // =========== output ================
  val rd_wen_reg = Reg(Bool()) init(false)
  val rd_rob_ptr_reg = Reg(UInt(ROB_PTR_W bits)) init(0)

  when(flush){
    rd_wen_reg := False
    rd_rob_ptr_reg := 0
  }
  .elsewhen(src_stream.fire){
    rd_wen_reg := src_ports.micro_op.rd_wen
    rd_rob_ptr_reg := src_ports.rd_rob_ptr
  }

  src_stream.ready := dcache_cmd_stream.ready
  dst_stream.valid := dcache_ports.rsp.valid
  dst_stream.result := lsu_rdata
  dst_stream.rd_wen := rd_wen_reg
  dst_stream.rd_rob_ptr := rd_rob_ptr_reg
  if(DIFFTEST){
    val pc_reg = Reg(UInt(32 bits)) init(0)
    val instruction_reg = Reg(Bits(32 bits)) init(0)
    when(flush){
      pc_reg := 0
      instruction_reg := 0
    }
    .elsewhen(src_stream.fire){
      pc_reg := src_ports.pc
      instruction_reg := src_ports.instruction
    }
    dst_stream.pc := pc_reg
    dst_stream.instruction := instruction_reg
  }
  dst_stream >> dst_ports

  // =========== timer ================
  timer_cen   := lsu_addr_is_timer && lsu_cen
  timer_wen   := micro_op.lsu_is_store
  timer_addr  := dcache_addr
  timer_wdata := dcache_wdata
}

object GenLSU extends App {
  GenConfig.spinal.generateVerilog(LSU(64, 64))
}