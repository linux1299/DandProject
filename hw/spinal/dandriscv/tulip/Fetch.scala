package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._
import dandriscv.Riscv._

case class Fetch_kernel(resetVector : BigInt) extends Component {
  import CpuConfig._

  // ==================== IO =============================
  val flush         = in Bool()
  val interrupt_vld = in Bool()
  val interrupt_pc  = in UInt(32 bits)
  val redirect_vld  = in Bool()
  val redirect_pc   = in UInt(32 bits)
  val icache_ports  = master(ICachePorts(32, 64))
  // ---- TAGE / dynamic predictor (early: when PC is sent to ICache) ----
  val predict_pc    = out UInt(32 bits)
  val predict_valid = out Bool()
  val branch_taken  = in Bool()
  val branch_pc     = in UInt(32 bits)
  val fch_dst       = master(Stream(FchDst()))
  // ---- static predictor (decode time: when instruction arrives) ----
  val static_predict_pc     = out UInt(32 bits)
  val static_predict_valid  = out Bool()
  val predict_imm    = out Bits(64 bits)
  val predict_jal    = out Bool()
  val predict_branch = out Bool()
  

  // ==================== internal signals =============================
  val pc          = Reg(UInt(32 bits)) init(resetVector)
  val fetch_valid = RegInit(False)
  val rsp_flush   = RegInit(False)
  
  val pc_in_stream          = Stream(UInt(32 bits))
  val pc_out_stream         = Stream(UInt(32 bits))
  val pc_stream_fifo        = FIFO(UInt(32 bits), 8, true)
  val instr_in_stream       = Stream(Bits(64 bits))
  val instr_out_stream      = Stream(Bits(64 bits))
  val instr_stream_fifo     = FIFO(Bits(64 bits), 8)

  val branch_pc_in_stream   = Stream(UInt(32 bits))
  val branch_pc_out_stream  = Stream(UInt(32 bits))
  val branch_pc_stream_fifo = FIFO(UInt(32 bits), 8)
  val taken_in_stream       = Stream(Bool())
  val taken_out_stream      = Stream(Bool())
  val branch_taken_fifo     = FIFO(Bool(), 8)
  
  val fifo_all_valid = pc_out_stream.valid && instr_out_stream.valid && branch_pc_out_stream.valid
  val fifo_all_ready = pc_stream_fifo.has_space && branch_taken_fifo.has_space && instr_stream_fifo.has_space
  
  val fetchFSM = new Area{
    object FetchEnum extends SpinalEnum(binarySequential) {
      val IDLE, FETCH, HALT = newElement()
    }
    import FetchEnum._

    val state_next = FetchEnum()
    val state_curr = RegNext(state_next) init(IDLE)

    switch(state_curr){
      is(IDLE) {
        when(!fch_dst.isStall){
          state_next := FETCH
        }
        .otherwise{
          state_next := IDLE
        }
      }
      is(FETCH) {
        when(icache_ports.cmd.isStall || !fifo_all_ready){
          state_next := HALT
        }
        .otherwise{
          state_next := FETCH
        }
      }
      is(HALT){
        when(icache_ports.cmd.ready && fifo_all_ready){
          state_next := FETCH
        }
        .otherwise{
          state_next := HALT
        }
      }
    }

    // when fetch is stalling and need jump, invalid prev rsp
    when(!icache_ports.cmd.ready && 
        (interrupt_vld || redirect_vld || branch_taken)){
      rsp_flush := True
    }
    .elsewhen(icache_ports.rsp.fire){
      rsp_flush := False
    }
    
    // use pc to fetch instrution
    when(state_next===FETCH){
      fetch_valid := True
    }
    .otherwise{
      fetch_valid := False
    }

    when(interrupt_vld){
      pc := interrupt_pc
    }
    .elsewhen(redirect_vld){
      pc := redirect_pc
    }
    .elsewhen(branch_taken) {
      pc := branch_pc
    }
    .elsewhen(icache_ports.cmd.fire){
      pc := pc + 8
    }

  }

  // PC FIFO
  pc_in_stream.valid   := icache_ports.cmd.fire
  pc_in_stream.payload := pc
  pc_out_stream.ready  := fch_dst.fire
  pc_in_stream         <> pc_stream_fifo.ports.s_ports
  pc_out_stream        <> pc_stream_fifo.ports.m_ports
  pc_stream_fifo.flush := flush

  // Instruction FIFO
  instr_in_stream.valid   := icache_ports.rsp.valid && !rsp_flush && !flush
  instr_in_stream.payload := icache_ports.rsp.data
  instr_out_stream.ready  := fch_dst.fire
  instr_in_stream         <> instr_stream_fifo.ports.s_ports
  instr_out_stream        <> instr_stream_fifo.ports.m_ports
  instr_stream_fifo.flush := flush

  // BRANCH PC FIFO
  branch_pc_in_stream.valid   := instr_in_stream.valid
  branch_pc_in_stream.payload := branch_pc
  branch_pc_out_stream.ready  := fch_dst.fire
  branch_pc_in_stream         <> branch_pc_stream_fifo.ports.s_ports
  branch_pc_out_stream        <> branch_pc_stream_fifo.ports.m_ports
  branch_pc_stream_fifo.flush := flush
  


  // BPU taken FIFO
  taken_in_stream.valid   := instr_in_stream.valid
  taken_in_stream.payload := branch_taken
  taken_out_stream.ready  := fch_dst.fire
  taken_in_stream         <> branch_taken_fifo.ports.s_ports
  taken_out_stream        <> branch_taken_fifo.ports.m_ports
  branch_taken_fifo.flush := flush

  // output
  fch_dst.pc           := pc_out_stream.payload
  fch_dst.instr        := instr_out_stream.payload
  fch_dst.branch_taken := taken_out_stream.payload
  fch_dst.valid        := fifo_all_valid && !flush

  // to static predictor (decode time, aligned with ICache response)
  val op_is_jal          = (icache_ports.rsp.data(opcodeRange)===OP_JAL)
  val op_is_branch       = (icache_ports.rsp.data(opcodeRange)===OP_BRANCH)
  val imm_all            = IMM_ALL(icache_ports.rsp.data, 64)
  predict_imm            := op_is_jal ? imm_all.j_sext | (op_is_branch ? imm_all.b_sext | B(0))
  predict_jal            := op_is_jal
  predict_branch         := op_is_branch
  static_predict_valid   := instr_in_stream.valid
  static_predict_pc      := RegNextWhen(pc, icache_ports.cmd.fire)

  // to TAGE predictor (early: when PC is sent to ICache, before instruction arrives)
  predict_valid := icache_ports.cmd.fire
  predict_pc    := pc


  //============= output ===================
  // fetch dst
  fch_dst.branch_pc      := branch_pc_out_stream.payload
  // to icache
  icache_ports.cmd.valid := fetch_valid && !flush && !branch_taken

  // send cmd to icache_ports
  icache_ports.cmd.addr  := pc

  // ==================== perf cnt =============================
  val fetch_stall_cnt = Reg(UInt(32 bits)) init(0)
  when(icache_ports.cmd.isStall) {fetch_stall_cnt := fetch_stall_cnt + 1}

}

case class Fetch(resetVector : BigInt) extends Component {
  import CpuConfig._

  // ==================== IO =============================
  val flush         = in Bool()
  val interrupt_vld = in Bool()
  val interrupt_pc  = in UInt(32 bits)
  val redirect_vld  = in Bool()
  val redirect_pc   = in UInt(32 bits)
  val icache_ports  = master(ICachePorts(32, 64))
  // ---- TAGE / dynamic predictor ----
  val predict_pc    = out UInt(32 bits)
  val predict_valid = out Bool()
  val branch_taken  = in Bool()
  val branch_pc     = in UInt(32 bits)
  val fch_dst       = Vec(master(Stream(DecSrc())), 2)
  // ---- static predictor ----
  val static_predict_pc     = out UInt(32 bits)
  val static_predict_valid  = out Bool()
  val predict_imm    = out Bits(64 bits)
  val predict_jal    = out Bool()
  val predict_branch = out Bool()

  // ==================== inst =============================
  val fetch           = new Fetch_kernel(resetVector)
  fetch.flush         := flush
  fetch.interrupt_vld := interrupt_vld
  fetch.interrupt_pc  := interrupt_pc
  fetch.redirect_vld  := redirect_vld
  fetch.redirect_pc   := redirect_pc
  icache_ports.cmd    <> fetch.icache_ports.cmd
  icache_ports.rsp    <> fetch.icache_ports.rsp
  fetch.branch_pc     := branch_pc
  fetch.branch_taken  := branch_taken


  // ==================== to stream =============================
  val src_stream = fetch.fch_dst.throwWhen(flush)
  val dec_stream = Vec(Stream(DecSrc()), 2)

  // fork to 2 stream
  val (src_stream_0, src_stream_1) = StreamFork2(src_stream, synchronous=false)

  dec_stream(0).valid        := src_stream_0.valid
  dec_stream(0).instr        := src_stream_0.instr(31 downto 0)
  dec_stream(0).pc           := src_stream_0.pc
  dec_stream(0).branch_pc    := src_stream_0.branch_pc
  dec_stream(0).branch_taken := src_stream_0.branch_taken
  src_stream_0.ready         := dec_stream(0).ready

  dec_stream(1).valid        := src_stream_1.valid
  dec_stream(1).instr        := src_stream_1.instr(63 downto 32)
  dec_stream(1).pc           := src_stream_1.pc + 4
  dec_stream(1).branch_pc    := src_stream_1.branch_pc
  dec_stream(1).branch_taken := src_stream_1.branch_taken
  src_stream_1.ready         := dec_stream(1).ready

  // output
  dec_stream(0) >-> fch_dst(0)
  dec_stream(1) >-> fch_dst(1)
  predict_pc    := fetch.predict_pc
  predict_valid := fetch.predict_valid
  static_predict_pc    := fetch.static_predict_pc
  static_predict_valid := fetch.static_predict_valid
  predict_imm    := fetch.predict_imm
  predict_jal    := fetch.predict_jal
  predict_branch := fetch.predict_branch

  
  
  StreamRenameUtil(this)
}

object GenFetch extends App {
  GenConfig.spinal.generateVerilog(Fetch(0x80000000l))
}