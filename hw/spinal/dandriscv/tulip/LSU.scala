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
  // addr_offset comes from DCache sideband (survives hit-under-miss)
  val dcache_rdata = dcache_ports.rsp.data |>> (dcache_ports.rsp.addr_off << 3)
  val dcache_rdata_lb     = B((XLEN-8-1 downto 0) -> dcache_rdata(7)) ## dcache_rdata(7 downto 0)
  val dcache_rdata_lbu    = B((XLEN-8-1 downto 0) -> False) ## dcache_rdata(7 downto 0)
  val dcache_rdata_lh     = B((XLEN-16-1 downto 0) -> dcache_rdata(15)) ## dcache_rdata(15 downto 0)
  val dcache_rdata_lhu    = B((XLEN-16-1 downto 0) -> False) ## dcache_rdata(15 downto 0)
  val dcache_rdata_lw     = B((XLEN-32-1 downto 0) -> dcache_rdata(31)) ## dcache_rdata(31 downto 0)
  val dcache_rdata_lwu    = B((XLEN-32-1 downto 0) -> False) ## dcache_rdata(31 downto 0)
  val lsu_rdata           = Bits(64 bits)

  // Timer accesses bypass DCache, but they still need to obey the same
  // request/response contract as a cached access.  Keep one response entry
  // so a timer load/store cannot disappear while the next LSU request is
  // being issued.
  val timer_rsp_valid   = RegInit(False)
  val timer_rsp_data    = Reg(Bits(64 bits)) init(0)
  val timer_rsp_rd_wen  = Reg(Bool()) init(False)
  val timer_rsp_rd_addr = Reg(UInt(5 bits)) init(0)
  val timer_rsp_pc      = Reg(UInt(32 bits)) init(0)
  val timer_rsp_instr   = Reg(Bits(32 bits)) init(0)
  val timer_rsp_rob_adr = Reg(UInt(ROB_ADR_W bits)) init(0)
  val timer_rsp_fire    = timer_rsp_valid && !dcache_ports.rsp.valid && dst_stream.ready
  val timer_access      = lsu_src.valid && lsu_cen && lsu_addr_is_timer
  // Give an already-returning DCache operation priority.  That keeps the
  // single LSU completion stream ordered and prevents two responses in one
  // cycle.
  val timer_cmd_ready   = !timer_rsp_valid && !dcache_ports.rsp.valid
  val timer_fire        = timer_access && timer_cmd_ready

  // =========== timer ================
  val timer        = new Timer()
  val timer_cen    = timer_fire
  val timer_wen    = timer_fire && uop_lsu.lsu_is_store
  val timer_addr   = dcache_addr
  val timer_wdata  = dcache_wdata
  val timer_rdata  = timer.rdata

  timer.cen   := timer_cen
  timer.wen   := timer_wen
  timer.addr  := timer_addr
  timer.wdata := timer_wdata
  timer_int   := timer.timer_int

  when(timer_rsp_fire){
    timer_rsp_valid := False
  }
  when(timer_fire){
    timer_rsp_valid   := True
    timer_rsp_data    := timer_rdata
    timer_rsp_rd_wen  := lsu_src.uop_com.rd_wen
    timer_rsp_rd_addr := lsu_src.rd_addr
    timer_rsp_pc      := lsu_src.pc
    timer_rsp_instr   := lsu_src.instr
    timer_rsp_rob_adr := lsu_src.rob_adr
  }

  // =================== stage 0 access dcache ===================
  dcache_stream.valid := dcache_cen && lsu_src.valid
  dcache_stream.addr  := dcache_addr
  dcache_stream.wen   := dcache_wen
  dcache_stream.wdata := dcache_wdata
  dcache_stream.wstrb := dcache_wstrb
  dcache_stream.size  := dcache_size
  // sideband forwarded through DCache to avoid pipeline registers in LSU
  dcache_stream.rd_wen   := lsu_src.uop_com.rd_wen
  dcache_stream.rd_addr  := lsu_src.rd_addr
  dcache_stream.pc       := lsu_src.pc
  dcache_stream.instr    := lsu_src.instr
  dcache_stream.rob_adr  := lsu_src.rob_adr
  // LSU-local state for data alignment and timer detection
  dcache_stream.lsu_ctrl := uop_lsu.lsu_ctrl_op.asBits.resized
  dcache_stream.addr_off := lsu_addr_offset
  dcache_stream.is_timer := lsu_addr_is_timer
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
  // lsu_ctrl comes from DCache sideband — safe under hit-under-miss
  val lsu_ctrl_rsp = cloneOf(uop_lsu.lsu_ctrl_op)
  lsu_ctrl_rsp.assignFromBits(dcache_ports.rsp.lsu_ctrl)
  switch(lsu_ctrl_rsp){
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
  lsu_src.ready      := lsu_addr_is_timer ? timer_cmd_ready | dcache_stream.ready
  dcache_ports.rsp.ready := dst_stream.ready
  dst_stream.valid   := dcache_ports.rsp.valid || timer_rsp_valid
  dst_stream.rd_data := dcache_ports.rsp.valid ? lsu_rdata | timer_rsp_data
  dst_stream.rd_wen  := dcache_ports.rsp.valid ? dcache_ports.rsp.rd_wen | timer_rsp_rd_wen
  dst_stream.rd_addr := dcache_ports.rsp.valid ? dcache_ports.rsp.rd_addr | timer_rsp_rd_addr
  dst_stream.pc      := dcache_ports.rsp.valid ? dcache_ports.rsp.pc | timer_rsp_pc
  dst_stream.instr   := dcache_ports.rsp.valid ? dcache_ports.rsp.instr | timer_rsp_instr
  dst_stream.rob_adr := dcache_ports.rsp.valid ? dcache_ports.rsp.rob_adr | timer_rsp_rob_adr

  dst_stream >-> lsu_dst

  


  StreamRenameUtil(this)
}

object GenLSU extends App {
  GenConfig.spinal.generateVerilog(LSU())
}
