package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._
import dandriscv.Riscv._
import dandriscv.Riscv.CSR._

case class Timer(MXLEN : Int = 64, addressWidth : Int = 64) extends Component {
  val cen       = in Bool()
  val wen       = in Bool()
  val addr      = in UInt(addressWidth bits)
  val wdata     = in Bits(MXLEN bits)
  val rdata     = out Bits(MXLEN bits)
  val timer_int = out Bool()

  val mtime = Reg(Bits(MXLEN bits)) init(0)
  val mtimecmp = RegInit(B(MXLEN bits, default -> True))

  when(wen && cen){
    switch(addr){
      is(MTIME){
        mtime := wdata
      }
      is(MTIMECMP){
        mtimecmp := wdata
      }
    }
  }.otherwise{
    mtime := (mtime.asUInt + 1).asBits
  }

  when(addr===MTIME){
    rdata := mtime
  }.elsewhen(addr===MTIMECMP){
    rdata := mtimecmp
  }.otherwise{
    rdata := 0
  }

  timer_int := mtime.asUInt >= mtimecmp.asUInt
}

case class LSU() extends Component {
  import CpuConfig._
  import LsuCtrlEnum._
  import CSR._

  // =================== IO ===================
  val timer_int    = out Bool()
  val lsu_src      = slave(Stream(ExeSrc("LSU")))
  val lsu_dst      = master(Stream(ExeDst()))
  val dcache_ports = master(DCachePorts(32, 64))

  // =========== stream control ================
  val dst_stream    = Stream(ExeDst())
  val dcache_stream = Stream(DCacheCmd(32, 64))

  // =================== stage 0 logic ===================
  val src1              = lsu_src.src1_data
  val src2              = lsu_src.src2_data
  val imm               = lsu_src.imm
  val uop_lsu           = lsu_src.uop_lsu
  val lsu_cen           = uop_lsu.lsu_is_load || uop_lsu.lsu_is_store
  val lsu_addr          = src1.asUInt + imm.asUInt
  val lsu_addr_offset   = lsu_addr(2 downto 0)
  val lsu_addr_is_timer = (lsu_addr===MTIME) || (lsu_addr===MTIMECMP)
  val lsu_wdata         = src2
  val lsu_wdata_byte    = B((64-8-1 downto 0)  -> lsu_wdata(7))  ## lsu_wdata(7 downto 0)
  val lsu_wdata_half    = B((64-16-1 downto 0) -> lsu_wdata(15)) ## lsu_wdata(15 downto 0)
  val lsu_wdata_word    = B((64-32-1 downto 0) -> lsu_wdata(31)) ## lsu_wdata(31 downto 0)
  val dcache_cen        = !lsu_addr_is_timer && lsu_cen
  val dcache_addr       = lsu_addr.resized
  val dcache_wdata      = Bits(64 bits)
  val dcache_wstrb      = Bits(64/8 bits)
  val dcache_wen        = uop_lsu.lsu_is_store
  val dcache_size       = UInt(3 bits)

  // =================== stage 1 logic ===================
  val lsu_addr_offset_reg = RegNextWhen(lsu_addr_offset, lsu_src.fire)
  val dcache_rdata        = dcache_ports.rsp.data |>> (lsu_addr_offset_reg << 3)
  val dcache_rdata_lb     = B((XLEN-8-1 downto 0) -> dcache_rdata(7)) ## dcache_rdata(7 downto 0)
  val dcache_rdata_lbu    = B((XLEN-8-1 downto 0) -> False) ## dcache_rdata(7 downto 0)
  val dcache_rdata_lh     = B((XLEN-16-1 downto 0) -> dcache_rdata(15)) ## dcache_rdata(15 downto 0)
  val dcache_rdata_lhu    = B((XLEN-16-1 downto 0) -> False) ## dcache_rdata(15 downto 0)
  val dcache_rdata_lw     = B((XLEN-32-1 downto 0) -> dcache_rdata(31)) ## dcache_rdata(31 downto 0)
  val dcache_rdata_lwu    = B((XLEN-32-1 downto 0) -> False) ## dcache_rdata(31 downto 0)
  val lsu_rdata           = Bits(64 bits)
  val lsu_ctrl_op_reg     = RegNextWhen(uop_lsu.lsu_ctrl_op, lsu_src.fire)

  // =========== timer ================
  val timer        = new Timer()
  val timer_cen    = lsu_addr_is_timer && lsu_cen
  val timer_wen    = uop_lsu.lsu_is_store
  val timer_addr   = dcache_addr
  val timer_wdata  = dcache_wdata
  val timer_rdata  = timer.rdata

  timer.cen   := timer_cen
  timer.wen   := timer_wen
  timer.addr  := timer_addr
  timer.wdata := timer_wdata
  timer_int   := timer.timer_int

  // =================== stage 0 access dcache ===================
  dcache_stream.valid := dcache_cen && lsu_src.valid
  dcache_stream.addr  := dcache_addr
  dcache_stream.wen   := dcache_wen
  dcache_stream.wdata := dcache_wdata
  dcache_stream.wstrb := dcache_wstrb
  dcache_stream.size  := dcache_size
  dcache_stream       >> dcache_ports.cmd

  switch(uop_lsu.lsu_ctrl_op){
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

  switch(uop_lsu.lsu_ctrl_op){
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

  

  // =========== output ================
  val rd_wen_reg   = Reg(Bool()) init(false)
  val rd_addr_reg  = Reg(UInt(5 bits)) init(0)
  val older_reg    = Reg(Bool()) init(false)
  val pc_reg       = Reg(UInt(32 bits)) init(0)
  val instr_reg    = Reg(Bits(32 bits)) init(0)
  val tail_adr_reg = Reg(UInt(3 bits)) init(0)
  val is_timer_reg = Reg(Bool()) init(false)

  when(lsu_src.fire){
    rd_wen_reg   := lsu_src.uop_com.rd_wen
    rd_addr_reg  := lsu_src.rd_addr
    pc_reg       := lsu_src.pc
    instr_reg    := lsu_src.instr
    tail_adr_reg := lsu_src.entry_adr
    is_timer_reg := lsu_addr_is_timer
  }

  lsu_src.ready      := dcache_stream.ready
  dcache_ports.rsp.ready := dst_stream.ready
  dst_stream.valid   := dcache_ports.rsp.valid
  dst_stream.rd_data := is_timer_reg ? timer_rdata | lsu_rdata
  dst_stream.rd_wen  := rd_wen_reg
  dst_stream.rd_addr := rd_addr_reg
  dst_stream.pc      := pc_reg
  dst_stream.instr   := instr_reg
  dst_stream.entry_adr := tail_adr_reg

  dst_stream >-> lsu_dst

  


  StreamRenameUtil(this)
}

object GenLSU extends App {
  GenConfig.spinal.generateVerilog(LSU())
}