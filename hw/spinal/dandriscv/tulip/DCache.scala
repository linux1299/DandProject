package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._
import spinal.lib.bus.amba4.axi._

case class DCache(p : DCacheConfig) extends Component{
  import p._
  import CpuConfig._

  object MSHRState extends SpinalEnum(binarySequential){
    val IDLE = newElement()
    val EVICT_READ = newElement()
    val EVICT_DONE = newElement()
    val REFILL_WAIT = newElement()
    val REFILL_DONE = newElement()
  }

  // =================== IO ===================
  val flush = in Bool()
  val cpu   = slave(DCachePorts(32, 64))
  val sram  = for(i<-0 until wayCount) yield new Area{
    val ports = master(SramPorts(banAddrWidth, 64))
  }
  val next_level = master(DCacheNextLevelPorts(32, 64))
  val cpu_bypass = master(DCachePorts(32, 64))
  val wb_burst_data  = out Vec(Bits(64 bits), busBurstLen)
  val wb_burst_addr  = out UInt(32 bits)
  val wb_burst_start = out Bool()
  val wb_burst_done  = in Bool()

  // =================== Line Meta ===================
  case class LineMeta() extends Bundle{
    val vld   = Reg(Bool()) init(False)
    val dirty = Reg(Bool()) init(False)
    val tag   = Reg(UInt(tagWidth bits)) init(0)
    val mru   = Reg(Bool()) init(False)
  }
  val ways = Seq.fill(wayCount)(new Area{
    val metas = Vec(LineMeta(), wayLineCount)
  })

  // =================== Bypass ===================
  val cpu_addr      = cpu.cmd.addr
  val cpu_tag       = cpu_addr(tagRange)
  val cpu_set       = cpu_addr(setRange)
  val cpu_bank_addr = cpu_addr(bankAddrRange)
  val cpu_wstrb     = cpu.cmd.wstrb
  val cpu_wdata     = cpu.cmd.wdata
  val cpu_wen       = cpu.cmd.wen

  val bypass_cond_0 = (cpu_addr >= U(bypassAddrLow0)) && (cpu_addr <= U(bypassAddrHigh0))
  val bypass_cond_1 = (cpu_addr >= U(bypassAddrLow1)) && (cpu_addr <= U(bypassAddrHigh1))
  val bypass_cond_2 = (cpu_addr >= U(bypassAddrLow2)) &&
    (if(bypassAddrHigh2 == ((BigInt(1) << 32) - 1)) True else cpu_addr <= U(bypassAddrHigh2))
  val bypass_addr   = bypass_cond_0 || bypass_cond_1 || bypass_cond_2
  val bypass        = bypass_addr && cpu.cmd.fire
  val bypass_rsp_valid_d1 = Delay(cpu_bypass.rsp.valid, 1)
  val bypass_rsp_data_d1  = Delay(cpu_bypass.rsp.data, 1)

  // The CPU request is accepted before the AXI-side command can necessarily
  // handshake.  Keep a private copy until cpu_bypass.cmd.fire; otherwise an
  // AR/AW backpressure cycle drops a bypass transaction.
  val bypass_cmd_valid = RegInit(False)
  val bypass_cmd_addr  = Reg(UInt(32 bits))
  val bypass_cmd_wen   = Reg(Bool())
  val bypass_cmd_wdata = Reg(Bits(64 bits))
  val bypass_cmd_wstrb = Reg(Bits(8 bits))
  val bypass_cmd_size  = Reg(UInt(3 bits))
  val bypass_store_pending = RegInit(False)
  val bypass_load_pending  = RegInit(False)
  when(bypass && cpu.cmd.fire && cpu.cmd.wen){
    bypass_cmd_valid := True
    bypass_cmd_addr  := cpu_addr
    bypass_cmd_wen   := cpu_wen
    bypass_cmd_wdata := cpu_wdata
    bypass_cmd_wstrb := cpu_wstrb
    bypass_cmd_size  := cpu.cmd.size
    bypass_store_pending := True
  }.elsewhen(bypass_store_pending && cpu.rsp.fire){
    bypass_store_pending := False
  }
  when(bypass && cpu.cmd.fire && !cpu.cmd.wen){
    bypass_cmd_valid := True
    bypass_cmd_addr  := cpu_addr
    bypass_cmd_wen   := cpu_wen
    bypass_cmd_wdata := cpu_wdata
    bypass_cmd_wstrb := cpu_wstrb
    bypass_cmd_size  := cpu.cmd.size
    bypass_load_pending := True
  }.elsewhen(bypass_load_pending && bypass_rsp_valid_d1){
    // The AXI R pulse is captured into rsp_hold and may be consumed later.
    // Waiting for cpu.rsp.fire here would miss that pulse and leave the
    // bypass path permanently busy when the consumer applies backpressure.
    bypass_load_pending := False
  }

  when(cpu_bypass.cmd.fire){ bypass_cmd_valid := False }
  cpu_bypass.cmd.valid := bypass_cmd_valid
  cpu_bypass.cmd.addr  := bypass_cmd_addr
  cpu_bypass.cmd.wen   := bypass_cmd_wen
  cpu_bypass.cmd.wdata := bypass_cmd_wdata
  cpu_bypass.cmd.wstrb := bypass_cmd_wstrb
  cpu_bypass.cmd.size  := bypass_cmd_size
  cpu_bypass.rsp.ready := cpu.rsp.ready

  // =================== Tag compare ===================
  val cache_tag   = Vec(UInt(tagWidth bits), wayCount)
  val cache_hit   = Vec(Bool(), wayCount)
  val cache_dirty = Vec(Bool(), wayCount)
  val cache_vld   = Vec(Bool(), wayCount)

  for(wayId <- 0 until wayCount){
    cache_tag(wayId)   := ways(wayId).metas(cpu_set).tag
    cache_vld(wayId)   := ways(wayId).metas(cpu_set).vld
    cache_hit(wayId)   := (cache_tag(wayId) === cpu_tag) && cache_vld(wayId)
    cache_dirty(wayId) := ways(wayId).metas(cpu_set).dirty
  }

  val is_hit_cmb = cache_hit.asBits.orR
  val is_hit     = is_hit_cmb && cpu.cmd.fire && !bypass
  val is_write   = cpu.cmd.fire && cpu_wen && !bypass

  // =================== Pipeline registers ===================
  val cpu_hit_d1     = RegNext(is_hit) init(False)
  val cpu_hit_id_d1  = Reg(UInt(log2Up(wayCount) bits))
  val cpu_wen_d1     = RegNextWhen(cpu_wen, cpu.cmd.fire) init(False)
  val sb_rd_wen_d1   = RegNextWhen(cpu.cmd.rd_wen,   cpu.cmd.fire) init(False)
  val sb_rd_addr_d1  = RegNextWhen(cpu.cmd.rd_addr,  cpu.cmd.fire) init(0)
  val sb_pc_d1       = RegNextWhen(cpu.cmd.pc,       cpu.cmd.fire) init(0)
  val sb_instr_d1    = RegNextWhen(cpu.cmd.instr,    cpu.cmd.fire) init(0)
  val sb_rob_adr_d1  = RegNextWhen(cpu.cmd.rob_adr,  cpu.cmd.fire) init(0)
  val sb_lsu_ctrl_d1 = RegNextWhen(cpu.cmd.lsu_ctrl, cpu.cmd.fire) init(0)
  val sb_addr_off_d1 = RegNextWhen(cpu.cmd.addr_off, cpu.cmd.fire) init(0)
  val sb_is_timer_d1 = RegNextWhen(cpu.cmd.is_timer, cpu.cmd.fire) init(False)

  // Every response source below is a pulse (SRAM read, refill completion or
  // bypass response).  A Stream response must instead remain valid until the
  // consumer handshakes, so serialize it through a one-entry holding buffer.
  val rsp_hold_valid    = RegInit(False)
  val rsp_hold_data     = Reg(Bits(64 bits)) init(0)
  val rsp_hold_rd_wen   = Reg(Bool()) init(False)
  val rsp_hold_rd_addr  = Reg(UInt(5 bits)) init(0)
  val rsp_hold_pc       = Reg(UInt(32 bits)) init(0)
  val rsp_hold_instr    = Reg(Bits(32 bits)) init(0)
  val rsp_hold_rob_adr  = Reg(UInt(ROB_ADR_W bits)) init(0)
  val rsp_hold_lsu_ctrl = Reg(Bits(4 bits)) init(0)
  val rsp_hold_addr_off = Reg(UInt(3 bits)) init(0)
  val rsp_hold_is_timer = Reg(Bool()) init(False)

  val hit_id_enc = UInt(log2Up(wayCount) bits)
  hit_id_enc := 0
  for(i <- 0 until wayCount){ when(cache_hit(i)){ hit_id_enc := i } }
  when(is_hit){ cpu_hit_id_d1 := hit_id_enc }

  // =================== MSHR ===================
  case class MSHREntry() extends Area{
    val valid = RegInit(False)
    val state = Reg(MSHRState()) init(MSHRState.IDLE)
    val tag   = Reg(UInt(tagWidth bits))
    val set   = Reg(UInt(setWidth bits))
    val way   = Reg(UInt(log2Up(wayCount) bits))
    val is_write  = Reg(Bool())
    val refill_cnt = Reg(UInt(log2Up(busBurstLen) bits))
    val merge_mask = Reg(Bits(busBurstLen bits))
    val merge_data = Vec(Reg(Bits(64 bits)), busBurstLen)
    val merge_strb = Vec(Reg(Bits(8 bits)), busBurstLen)
    val victim_dirty = Reg(Bool())
    val wb_addr  = Reg(UInt(32 bits))
    val wb_data  = Vec(Reg(Bits(64 bits)), busBurstLen)
    val ar_sent  = RegInit(False)
    val sb_rd_wen   = Reg(Bool())
    val sb_rd_addr  = Reg(UInt(5 bits))
    val sb_pc       = Reg(UInt(32 bits))
    val sb_instr    = Reg(Bits(32 bits))
    val sb_rob_adr  = Reg(UInt(ROB_ADR_W bits))
    val sb_lsu_ctrl = Reg(Bits(4 bits))
    val sb_addr_off = Reg(UInt(3 bits))
    val sb_is_timer = Reg(Bool())
    val req_beat    = Reg(UInt(log2Up(busBurstLen) bits)) // which beat the CPU requested
  }

  val mshr = for(_ <- 0 until mshrEntries) yield new MSHREntry()
  val mshr0 = mshr(0)

  // ---- MSHR hit: an active request to the same cache line ----
  val mshr_hit_vec = Vec(Bool(), mshrEntries)
  for(i <- 0 until mshrEntries){
    mshr_hit_vec(i) := mshr(i).valid &&
      mshr(i).tag === cpu_tag && mshr(i).set === cpu_set
  }
  val mshr_hit_any = mshr_hit_vec.asBits.orR

  // ---- Free entry detection ----
  val mshr_has_free = !mshr0.valid

  // is_miss: true miss (excludes MSHR hits)
  val is_miss = !is_hit_cmb && cpu.cmd.fire && !bypass && !mshr_hit_any

  // =================== Write-back Buffer ===================
  val wb = new Area{
    val valid  = RegInit(False)
    val active = RegInit(False)
    val addr   = Reg(UInt(32 bits))
    val data   = Vec(Reg(Bits(64 bits)), busBurstLen)
  }
  wb_burst_data := wb.data
  wb_burst_addr := wb.addr
  wb_burst_start:= wb.valid && !wb.active && !wb_burst_done
  when(wb_burst_start){ wb.active := True }
  when(wb_burst_done){ wb.valid := False; wb.active := False }

  // =================== Victim Selection ===================
  val cache_invld = Vec(Bool(), wayCount)
  val cache_lru   = Vec(Bool(), wayCount)
  for(wayId <- 0 until wayCount){
    cache_invld(wayId) := !ways(wayId).metas(cpu_set).vld
    cache_lru(wayId)   := !ways(wayId).metas(cpu_set).mru
  }

  val evict_id = UInt(log2Up(wayCount) bits)
  when(cache_invld.asBits.orR){
    evict_id := OHToUInt(cache_invld.asBits)
  }.otherwise{
    evict_id := OHToUInt(cache_lru.asBits)
  }
  val victim_is_dirty = cache_dirty(evict_id)

  // =================== SRAM ===================
  val sram_banks_data  = Vec(Bits(64 bits), wayCount)
  val sram_banks_valid = Vec(Bool(), wayCount)
  val sram_hit_data    = Reg(Bits(64 bits))
  val mshr_resp_data   = Reg(Bits(64 bits))  // captured refill data for MSHR response
  for(wayId <- 0 until wayCount){
    sram_banks_data(wayId)  := sram(wayId).ports.rsp.data
    sram_banks_valid(wayId) := sram(wayId).ports.rsp.valid
  }
  // Capture hit data when SRAM sync read response arrives (1 cycle after cmd)
  for(wayId <- 0 until wayCount){
    when(sram_banks_valid(wayId) && cpu_hit_d1 && U(wayId) === cpu_hit_id_d1 && !cpu_wen_d1){
      sram_hit_data := sram_banks_data(wayId)
    }
  }
  // (mshr_resp_data capture moved after SRAM block)
  val hit_valid = sram_banks_valid(cpu_hit_id_d1)

  def byteMask(strb: Bits): Bits = {
    val mask = Bits(64 bits)
    for(byte <- 0 until 8){
      mask(byte * 8, 8 bits) := strb(byte) ? B(0xff, 8 bits) | B(0, 8 bits)
    }
    mask
  }

  // ---- MSHR SRAM port ----
  val mshr_bank_addr  = UInt(banAddrWidth bits)
  val mshr_bank_wen   = Bool()
  val mshr_bank_data  = Bits(64 bits)
  val mshr_bank_strb  = Bits(8 bits)
  val mshr_bank_valid = Bool()

  val mshr_line_base = (mshr0.set @@ U(0, 3 bits)).resized
  mshr_bank_addr  := mshr_line_base + mshr0.refill_cnt.resized
  mshr_bank_valid := False; mshr_bank_wen := False
  mshr_bank_data  := B(0, 64 bits); mshr_bank_strb := B(0, 8 bits)

  when(mshr0.valid){
    switch(mshr0.state){
      is(MSHRState.EVICT_READ){
        // Sram has a synchronous read port.  Holding cmd.valid through the
        // response cycle reissues the same address, so the following capture
        // sees every beat shifted by one and corrupts write-back data.  Issue
        // the next read only after the previous response has been consumed.
        mshr_bank_valid := !sram_banks_valid(mshr0.way)
        mshr_bank_wen   := False
      }
      is(MSHRState.REFILL_WAIT){
        val mergedByteMask = byteMask(mshr0.merge_strb(mshr0.refill_cnt))
        val merged = mshr0.merge_mask(mshr0.refill_cnt) ?
          ((next_level.rsp.data & ~mergedByteMask) | (mshr0.merge_data(mshr0.refill_cnt) & mergedByteMask)) |
          next_level.rsp.data
        mshr_bank_valid := next_level.rsp.valid && next_level.rsp.rvalid
        mshr_bank_wen   := True
        mshr_bank_data  := merged
        mshr_bank_strb  := B(8 bits, default -> True)
      }
    }
  }

  for(wayId <- 0 until wayCount){
    val cpu_use  = is_hit && U(wayId) === hit_id_enc
    val mshr_use = mshr0.valid && U(wayId) === mshr0.way && mshr_bank_valid

    when(cpu_use){
      sram(wayId).ports.cmd.valid := True
      sram(wayId).ports.cmd.addr  := cpu_bank_addr
      sram(wayId).ports.cmd.wen   := cpu_wen
      sram(wayId).ports.cmd.wdata := cpu_wdata
      sram(wayId).ports.cmd.wstrb := cpu_wstrb
    }.elsewhen(mshr_use){
      sram(wayId).ports.cmd.valid := True
      sram(wayId).ports.cmd.addr  := mshr_bank_addr
      sram(wayId).ports.cmd.wen   := mshr_bank_wen
      sram(wayId).ports.cmd.wdata := mshr_bank_data
      sram(wayId).ports.cmd.wstrb := mshr_bank_strb
    }.otherwise{
      sram(wayId).ports.cmd.valid := False
      sram(wayId).ports.cmd.addr  := U(0, banAddrWidth bits)
      sram(wayId).ports.cmd.wen   := False
      sram(wayId).ports.cmd.wdata := B(0, 64 bits)
      sram(wayId).ports.cmd.wstrb := B(0, 8 bits)
    }
  }

  // Capture MSHR refill data at the requested beat for response
  when(mshr0.valid && mshr0.state === MSHRState.REFILL_WAIT && mshr_bank_valid && mshr_bank_wen &&
       mshr0.refill_cnt === mshr0.req_beat){
    mshr_resp_data := mshr_bank_data
  }

  // =================== MSHR allocation (entry 0 primary) ===================
  when(is_miss && mshr_has_free){
    mshr0.valid := True
    mshr0.state := MSHRState.EVICT_READ
    mshr0.tag   := cpu_tag
    mshr0.set   := cpu_set
    mshr0.way   := evict_id
    mshr0.is_write := cpu_wen
    mshr0.refill_cnt := 0
    mshr0.ar_sent := False
    mshr0.merge_mask := (cpu_wen ? (B(1, busBurstLen bits) << cpu_addr(offsetWidth-1 downto 3)).resized | B(0, busBurstLen bits))
    // A load miss may later absorb stores to other beats.  Initialise every
    // merge slot before the first such store; otherwise the first OR below
    // reads an uninitialised byte strobe/data register.
    for(beat <- 0 until busBurstLen){
      mshr0.merge_data(beat) := B(0, 64 bits)
      mshr0.merge_strb(beat) := B(0, 8 bits)
    }
    when(cpu_wen){
      val beat = cpu_addr(offsetWidth-1 downto 3)
      mshr0.merge_data(beat) := cpu_wdata
      mshr0.merge_strb(beat) := cpu_wstrb
    }
    mshr0.victim_dirty := victim_is_dirty
    mshr0.wb_addr := (cache_tag(evict_id) @@ cpu_set @@ U(0, offsetWidth bits)).resize(32)
    mshr0.sb_rd_wen   := cpu.cmd.rd_wen
    mshr0.sb_rd_addr  := cpu.cmd.rd_addr
    mshr0.sb_pc       := cpu.cmd.pc
    mshr0.sb_instr    := cpu.cmd.instr
    mshr0.sb_rob_adr  := cpu.cmd.rob_adr
    mshr0.sb_lsu_ctrl := cpu.cmd.lsu_ctrl
    mshr0.sb_addr_off := cpu.cmd.addr_off
    mshr0.sb_is_timer := cpu.cmd.is_timer
    mshr0.req_beat    := cpu_addr(offsetWidth-1 downto 3)
  }

  // =================== MSHR FSM (entry 0 primary) ===================
  when(mshr0.valid && mshr0.state === MSHRState.EVICT_READ){
    // Sync read: data arrives 1 cycle after SRAM cmd, use sram_banks_valid
    when(sram_banks_valid(mshr0.way) && !(cpu_hit_d1 && cpu_hit_id_d1 === mshr0.way)){
      mshr0.wb_data(mshr0.refill_cnt) := sram_banks_data(mshr0.way)
      when(mshr0.refill_cnt < U(busBurstLen-1)){
        mshr0.refill_cnt := mshr0.refill_cnt + 1
      }.otherwise{
        mshr0.state := MSHRState.EVICT_DONE
        mshr0.refill_cnt := 0
      }
    }
  }

  when(mshr0.valid && mshr0.state === MSHRState.EVICT_DONE){
    // A single-entry writeback buffer must not be overwritten.  A refill may
    // finish before a delayed B response, so wait here until the prior dirty
    // victim has retired before accepting another dirty victim.
    when(!mshr0.victim_dirty || !wb.valid){
      when(mshr0.victim_dirty){
        wb.valid := True
        wb.addr  := mshr0.wb_addr
        wb.data  := mshr0.wb_data
      }
      mshr0.state := MSHRState.REFILL_WAIT
    }
  }

  val nl_rvalid = next_level.rsp.valid && next_level.rsp.rvalid
  next_level.rsp.ready := True

  when(mshr0.valid && mshr0.state === MSHRState.REFILL_WAIT){
    when(nl_rvalid){
      when(mshr0.refill_cnt < U(busBurstLen-1)){
        mshr0.refill_cnt := mshr0.refill_cnt + 1
      }.otherwise{
        mshr0.state := MSHRState.REFILL_DONE
      }
    }
  }

  when(mshr0.valid && mshr0.state === MSHRState.REFILL_DONE && cpu.rsp.fire){
    mshr0.valid := False
    mshr0.state := MSHRState.IDLE
    mshr0.ar_sent := False
  }

  // A flush walks all metadata entries.  Requests must remain blocked for the
  // entire walk, not just while the external flush signal is asserted.
  val flush_busy     = RegInit(False)
  val flush_set_cnt  = Reg(UInt(log2Up(wayLineCount) bits))
  val flush_way_cnt  = Reg(UInt(log2Up(wayCount) bits))
  val flush_done     = RegInit(False)

  // =================== CPU cmd ready ===================
  val cpu_cmd_ready = Bool()
  cpu_cmd_ready := True
  when(bypass_load_pending){
    cpu_cmd_ready := False
  }.elsewhen(bypass_store_pending || bypass_cmd_valid){
    cpu_cmd_ready := False
  }.elsewhen(rsp_hold_valid || cpu_hit_d1){
    // Do not accept a second hit while the prior hit is entering or waiting
    // in the response buffer; this cache intentionally has one response slot.
    cpu_cmd_ready := False
  }.elsewhen(flush || flush_busy){
    cpu_cmd_ready := False
  }.elsewhen(mshr0.valid){
    // There is only one CPU response path and no response queue.  Letting a
    // normal hit complete in the same cycle as REFILL_DONE can consume the
    // miss response and lose it.  Serialize requests while the MSHR is live,
    // except for a same-line store that can be safely merged before the final
    // refill response is produced.
    cpu_cmd_ready := mshr_hit_any && cpu.cmd.wen &&
      (mshr0.state =/= MSHRState.REFILL_DONE)
  }.elsewhen(!is_hit_cmb && !bypass_addr && !mshr_hit_any){
    cpu_cmd_ready := mshr_has_free
  }

  // =================== Next level commands ===================
  val wb_aw_sent = RegInit(False)
  when(wb_burst_done){ wb_aw_sent := False }

  next_level.cmd.valid := False
  next_level.cmd.addr  := U(0, 32 bits)
  next_level.cmd.len   := U(0, 4 bits)
  next_level.cmd.size  := U(0, 3 bits)
  next_level.cmd.wen   := False
  next_level.cmd.wdata := B(0, 64 bits)
  next_level.cmd.wstrb := B(0, 8 bits)
  next_level.cmd.is_wb := False

  when(wb.valid && !wb_aw_sent){
    next_level.cmd.valid := True
    next_level.cmd.addr  := wb.addr
    next_level.cmd.len   := U(busBurstLen-1, 4 bits)
    next_level.cmd.size  := busDataSize
    next_level.cmd.wen   := True
    next_level.cmd.wdata := wb.data(0)
    next_level.cmd.wstrb := B(8 bits, default -> True)
    next_level.cmd.is_wb := True
  }
  .elsewhen(mshr0.valid && !mshr0.ar_sent &&
    ((mshr0.state === MSHRState.EVICT_DONE && !mshr0.victim_dirty) || mshr0.state === MSHRState.REFILL_WAIT)){
    next_level.cmd.valid := True
    next_level.cmd.addr  := (mshr0.tag @@ mshr0.set @@ U(0, offsetWidth bits)).resize(32)
    next_level.cmd.len   := U(busBurstLen-1, 4 bits)
    next_level.cmd.size  := busDataSize
    next_level.cmd.wen   := False
    next_level.cmd.is_wb := False
  }

  when(next_level.cmd.fire && next_level.cmd.is_wb){
    wb_aw_sent := True
  }
  when(next_level.cmd.fire && !next_level.cmd.wen){
    mshr0.ar_sent := True
  }

  // =================== MSHR hit write merge ===================
  for(i <- 0 until mshrEntries){
    when(mshr_hit_vec(i) && cpu.cmd.fire && cpu_wen){
      val beat = cpu_addr(offsetWidth-1 downto 3)
      val writeByteMask = byteMask(cpu_wstrb)
      mshr(i).merge_mask(beat) := True
      mshr(i).merge_data(beat) := (mshr(i).merge_data(beat) & ~writeByteMask) | (cpu_wdata & writeByteMask)
      mshr(i).merge_strb(beat) := mshr(i).merge_strb(beat) | cpu_wstrb
      // A load miss which absorbs a store must install a dirty line as well.
      // Otherwise REFILL_DONE overwrites the transient dirty bit with false
      // and the store is later lost on eviction.
      mshr(i).is_write := True
    }
  }

  // =================== CPU Response ===================
  val rsp_src_valid    = Bool()
  val rsp_src_data     = Bits(64 bits)
  val rsp_src_rd_wen   = Bool()
  val rsp_src_rd_addr  = UInt(5 bits)
  val rsp_src_pc       = UInt(32 bits)
  val rsp_src_instr    = Bits(32 bits)
  val rsp_src_rob_adr  = UInt(ROB_ADR_W bits)
  val rsp_src_lsu_ctrl = Bits(4 bits)
  val rsp_src_addr_off = UInt(3 bits)
  val rsp_src_is_timer = Bool()

  rsp_src_data     := B(0, 64 bits)
  rsp_src_valid    := False
  rsp_src_rd_wen   := False; rsp_src_rd_addr  := 0
  rsp_src_pc       := 0;     rsp_src_instr    := B(0, 32 bits)
  rsp_src_rob_adr  := 0;     rsp_src_lsu_ctrl := B(0, 4 bits)
  rsp_src_addr_off := 0;     rsp_src_is_timer := False

  when(bypass_store_pending){
    rsp_src_valid := True
    rsp_src_rd_wen := sb_rd_wen_d1; rsp_src_rd_addr := sb_rd_addr_d1
    rsp_src_pc := sb_pc_d1; rsp_src_instr := sb_instr_d1
    rsp_src_rob_adr := sb_rob_adr_d1; rsp_src_lsu_ctrl := sb_lsu_ctrl_d1
    rsp_src_addr_off := sb_addr_off_d1; rsp_src_is_timer := sb_is_timer_d1
  }
  .elsewhen(bypass_load_pending){
    rsp_src_valid := bypass_rsp_valid_d1
    rsp_src_data  := bypass_rsp_data_d1
    rsp_src_rd_wen := sb_rd_wen_d1; rsp_src_rd_addr := sb_rd_addr_d1
    rsp_src_pc := sb_pc_d1; rsp_src_instr := sb_instr_d1
    rsp_src_rob_adr := sb_rob_adr_d1; rsp_src_lsu_ctrl := sb_lsu_ctrl_d1
    rsp_src_addr_off := sb_addr_off_d1; rsp_src_is_timer := sb_is_timer_d1
  }
  .elsewhen(cpu_hit_d1 && !cpu_wen_d1){
    rsp_src_valid := hit_valid  // sram_banks_valid(cpu_hit_id_d1), aligned with sync read
    rsp_src_data  := sram_banks_data(cpu_hit_id_d1)
    rsp_src_rd_wen := sb_rd_wen_d1; rsp_src_rd_addr := sb_rd_addr_d1
    rsp_src_pc := sb_pc_d1; rsp_src_instr := sb_instr_d1
    rsp_src_rob_adr := sb_rob_adr_d1; rsp_src_lsu_ctrl := sb_lsu_ctrl_d1
    rsp_src_addr_off := sb_addr_off_d1; rsp_src_is_timer := sb_is_timer_d1
  }
  .elsewhen(cpu_hit_d1 && cpu_wen_d1){
    rsp_src_valid := True
    rsp_src_rd_wen := sb_rd_wen_d1; rsp_src_rd_addr := sb_rd_addr_d1
    rsp_src_pc := sb_pc_d1; rsp_src_instr := sb_instr_d1
    rsp_src_rob_adr := sb_rob_adr_d1; rsp_src_lsu_ctrl := sb_lsu_ctrl_d1
    rsp_src_addr_off := sb_addr_off_d1; rsp_src_is_timer := sb_is_timer_d1
  }
  // MSHR refill done
  .elsewhen(mshr0.valid && mshr0.state === MSHRState.REFILL_DONE){
    rsp_src_valid   := True
    rsp_src_data    := mshr_resp_data
    rsp_src_rd_wen  := mshr0.sb_rd_wen;   rsp_src_rd_addr  := mshr0.sb_rd_addr
    rsp_src_pc      := mshr0.sb_pc;       rsp_src_instr    := mshr0.sb_instr
    rsp_src_rob_adr := mshr0.sb_rob_adr;  rsp_src_lsu_ctrl := mshr0.sb_lsu_ctrl
    rsp_src_addr_off := mshr0.sb_addr_off; rsp_src_is_timer := mshr0.sb_is_timer
  }
  // MSHR write merge ack (any entry)
  .elsewhen(mshr_hit_any && cpu.cmd.fire && cpu_wen){
    rsp_src_valid := True
    rsp_src_rd_wen := cpu.cmd.rd_wen; rsp_src_rd_addr := cpu.cmd.rd_addr
    rsp_src_pc := cpu.cmd.pc; rsp_src_instr := cpu.cmd.instr
    rsp_src_rob_adr := cpu.cmd.rob_adr; rsp_src_lsu_ctrl := cpu.cmd.lsu_ctrl
    rsp_src_addr_off := cpu.cmd.addr_off; rsp_src_is_timer := cpu.cmd.is_timer
  }

  when(cpu.rsp.fire){
    rsp_hold_valid := False
  }
  when(!rsp_hold_valid && rsp_src_valid){
    rsp_hold_valid    := True
    rsp_hold_data     := rsp_src_data
    rsp_hold_rd_wen   := rsp_src_rd_wen
    rsp_hold_rd_addr  := rsp_src_rd_addr
    rsp_hold_pc       := rsp_src_pc
    rsp_hold_instr    := rsp_src_instr
    rsp_hold_rob_adr  := rsp_src_rob_adr
    rsp_hold_lsu_ctrl := rsp_src_lsu_ctrl
    rsp_hold_addr_off := rsp_src_addr_off
    rsp_hold_is_timer := rsp_src_is_timer
  }

  cpu.rsp.valid    := rsp_hold_valid
  cpu.rsp.data     := rsp_hold_data
  cpu.rsp.rd_wen   := rsp_hold_rd_wen
  cpu.rsp.rd_addr  := rsp_hold_rd_addr
  cpu.rsp.pc       := rsp_hold_pc
  cpu.rsp.instr    := rsp_hold_instr
  cpu.rsp.rob_adr  := rsp_hold_rob_adr
  cpu.rsp.lsu_ctrl := rsp_hold_lsu_ctrl
  cpu.rsp.addr_off := rsp_hold_addr_off
  cpu.rsp.is_timer := rsp_hold_is_timer

  cpu.cmd.ready := cpu_cmd_ready

  // =================== Meta Update ===================
  for(wayId <- 0 until wayCount){
    when(is_hit){
      // Keep exactly one MRU bit per set.  Letting both ways remain MRU
      // makes the later LRU one-hot encoder select an arbitrary victim.
      ways(wayId).metas(cpu_set).mru := U(wayId) === hit_id_enc
      when(cpu_wen && U(wayId) === hit_id_enc){
        ways(wayId).metas(cpu_set).dirty := True
      }
    }

    when(mshr0.valid && mshr0.state === MSHRState.REFILL_DONE){
      ways(wayId).metas(mshr0.set).mru := U(wayId) === mshr0.way
      when(U(wayId) === mshr0.way){
        ways(wayId).metas(mshr0.set).vld   := True
        ways(wayId).metas(mshr0.set).tag   := mshr0.tag
        ways(wayId).metas(mshr0.set).dirty := mshr0.is_write
      }
    }

    for(i <- 0 until mshrEntries){
      when(mshr_hit_vec(i) && cpu.cmd.fire && cpu_wen && U(wayId) === mshr(i).way){
        ways(wayId).metas(mshr(i).set).dirty := True
      }
    }
  }

  // =================== Flush ===================
  when(flush){
    flush_busy := True; flush_set_cnt := 0; flush_way_cnt := 0; flush_done := False
  }
  when(flush_busy && !flush_done){
    for(wayId <- 0 until wayCount){
      when(U(wayId) === flush_way_cnt){
        val cur = ways(wayId).metas(flush_set_cnt)
        cur.vld := False; cur.dirty := False; cur.mru := False
      }
    }
    when(flush_way_cnt < U(wayCount-1)){
      flush_way_cnt := flush_way_cnt + 1
    }.otherwise{
      flush_way_cnt := 0
      when(flush_set_cnt < U(wayLineCount-1)){
        flush_set_cnt := flush_set_cnt + 1
      }.otherwise{
        flush_done := True
      }
    }
  }
  when(flush_done && !flush){
    flush_busy := False; flush_done := False
  }

  StreamRenameUtil(this)
}


// ===============================================
// Dcache Top Module
// ===============================================
case class DCacheTop(val config : DCacheConfig, val axiConfig : Axi4Config) extends Component {

  import config._
  // ============================= IO =============================
  val flush = in Bool()
  val dcache_src = slave(DCachePorts(32, 64))
  val dcacheReader = master(Axi4ReadOnly(axiConfig)).setName("dcache")
  val dcacheWriter = master(Axi4WriteOnly(axiConfig)).setName("dcache")

  val dcache = new DCache(config)
  dcache_src.cmd <> dcache.cpu.cmd
  dcache_src.rsp <> dcache.cpu.rsp
  dcache.flush := flush

  val sram_area = for(i<-0 until wayCount) yield new Area{
    val sram = new Sram(64, banAddrWidth)
  }
  for(i<-0 until wayCount) {
    dcache.sram(i).ports <> sram_area(i).sram.ports
  }

  // ==================== AXI output ================
  val handshake_cnt   = RegInit(False)
  val nextlevel_read  = dcache.next_level.cmd.valid && !dcache.next_level.cmd.wen
  val nextlevel_write = dcache.next_level.cmd.valid && dcache.next_level.cmd.wen && !dcache.next_level.cmd.is_wb
  val wb_write        = dcache.next_level.cmd.valid && dcache.next_level.cmd.wen && dcache.next_level.cmd.is_wb
  val bypass_read     = dcache.cpu_bypass.cmd.valid && !dcache.cpu_bypass.cmd.wen
  val bypass_write    = dcache.cpu_bypass.cmd.valid && dcache.cpu_bypass.cmd.wen
  val wb_beat_cnt = Reg(UInt(log2Up(busBurstLen) bits))
  val wb_sending  = RegInit(False)
  // A single-beat bypass write still has independent AXI AW and W
  // handshakes.  Remember each one so a reasserted AWREADY cannot accept the
  // same address twice while W is delayed.
  val bypass_aw_sent = RegInit(False)
  val bypass_w_sent  = RegInit(False)

  // There is one AXI read channel and one AXI write channel.  Only report
  // ready to the command selected for that channel; otherwise two internal
  // streams can both observe fire while only one address reaches AXI.
  val read_select_bypass = bypass_read
  val read_select_next   = nextlevel_read && !read_select_bypass
  val write_busy_wb      = wb_sending || wb_write
  val write_select_wb    = wb_write && !wb_sending
  val write_select_bypass = bypass_write && !write_busy_wb
  val write_select_next  = nextlevel_write && !write_busy_wb && !bypass_write

  dcacheReader.ar.valid := read_select_next || read_select_bypass
  dcacheReader.ar.id    := U(1)
  dcacheReader.ar.len   := bypass_read ? U(0, 8 bits) | dcache.next_level.cmd.len.resized
  dcacheReader.ar.size  := bypass_read ? dcache.cpu_bypass.cmd.size | dcache.next_level.cmd.size
  dcacheReader.ar.burst := B(1)
  dcacheReader.ar.addr  := bypass_read ? dcache.cpu_bypass.cmd.addr.resize(32) | dcache.next_level.cmd.addr.resize(32)

  dcacheReader.r.ready := True

  dcacheWriter.aw.valid := write_select_next || write_select_wb ||
    (write_select_bypass && !bypass_aw_sent)
  dcacheWriter.aw.id    := U(2)
  dcacheWriter.aw.len   := bypass_write ? U(0, 8 bits) | dcache.next_level.cmd.len.resized
  dcacheWriter.aw.size  := bypass_write ? dcache.cpu_bypass.cmd.size | dcache.next_level.cmd.size
  dcacheWriter.aw.burst := B(1)
  dcacheWriter.aw.addr  := bypass_write ? dcache.cpu_bypass.cmd.addr.resize(32) | dcache.next_level.cmd.addr.resize(32)

  when(write_select_wb && dcacheWriter.aw.fire){ wb_sending := True; wb_beat_cnt := 0 }
  when(wb_sending && dcacheWriter.w.fire){
    when(wb_beat_cnt < U(busBurstLen-1)){ wb_beat_cnt := wb_beat_cnt + 1 }
    .otherwise { wb_sending := False }
  }

  // W is derived directly from the burst state.  Registering these signals
  // makes data/last lag wb_beat_cnt by one cycle and emits a ninth beat.
  dcacheWriter.w.valid := False
  dcacheWriter.w.data  := B(0, 64 bits)
  dcacheWriter.w.strb  := B(0, 8 bits)
  dcacheWriter.w.last  := False

  when(wb_sending){
    dcacheWriter.w.valid := True
    dcacheWriter.w.data  := dcache.wb_burst_data(wb_beat_cnt)
    dcacheWriter.w.strb  := B(8 bits, default -> True)
    dcacheWriter.w.last  := (wb_beat_cnt === U(busBurstLen-1))
  }
  .elsewhen(write_select_next || (write_select_bypass && !bypass_w_sent)){
    dcacheWriter.w.valid := True
    dcacheWriter.w.data  := bypass_write ? dcache.cpu_bypass.cmd.wdata | dcache.next_level.cmd.wdata
    dcacheWriter.w.strb  := bypass_write ? dcache.cpu_bypass.cmd.wstrb | dcache.next_level.cmd.wstrb
    dcacheWriter.w.last  := True
  }

  dcacheWriter.b.ready := True

  val bypass_write_complete =
    (bypass_aw_sent || (write_select_bypass && dcacheWriter.aw.fire)) &&
    (bypass_w_sent  || (write_select_bypass && dcacheWriter.w.fire))
  when(dcache.cpu_bypass.cmd.fire && dcache.cpu_bypass.cmd.wen){
    bypass_aw_sent := False
    bypass_w_sent  := False
  }.otherwise{
    when(write_select_bypass && dcacheWriter.aw.fire){ bypass_aw_sent := True }
    when(write_select_bypass && dcacheWriter.w.fire){ bypass_w_sent  := True }
  }

  val wb_b_resp_pending = RegInit(False)
  when(write_select_wb && dcacheWriter.aw.fire){
    wb_b_resp_pending := True
  }.elsewhen(wb_b_resp_pending && dcacheWriter.b.valid){
    wb_b_resp_pending := False
  }
  dcache.wb_burst_done := wb_b_resp_pending && dcacheWriter.b.valid && (dcacheWriter.b.resp === B(0))

  when(handshake_cnt===False){
    when(dcacheWriter.aw.fire && dcacheWriter.w.fire){
      handshake_cnt := False
    }.elsewhen(dcacheWriter.aw.fire || dcacheWriter.w.fire){
      handshake_cnt := True
    }
  }
  .elsewhen(handshake_cnt===True){
    when(dcacheWriter.aw.fire || dcacheWriter.w.fire){
      handshake_cnt := False
    }
  }
  val aw_and_w_fire = (dcacheWriter.aw.fire && dcacheWriter.w.fire) ||
                      ((dcacheWriter.aw.fire || dcacheWriter.w.fire) && handshake_cnt)
  dcache.next_level.cmd.ready  := dcache.next_level.cmd.wen ?
    ((write_select_wb || write_select_next) && aw_and_w_fire) |
    (read_select_next && dcacheReader.ar.ready)
  dcache.next_level.rsp.valid  := dcache.next_level.cmd.wen ? dcacheWriter.b.valid | dcacheReader.r.valid
  dcache.next_level.rsp.bresp  := dcacheWriter.b.resp
  dcache.next_level.rsp.data   := dcacheReader.r.data
  dcache.next_level.rsp.rvalid := dcacheReader.r.valid && (dcacheReader.r.id===U(1))
  dcache.cpu_bypass.cmd.ready  := dcache.cpu_bypass.cmd.wen ?
    (write_select_bypass && bypass_write_complete) |
    (read_select_bypass && dcacheReader.ar.ready)
  dcache.cpu_bypass.rsp.valid  := dcache.cpu_bypass.cmd.wen ? dcacheWriter.b.valid | dcacheReader.r.valid
  dcache.cpu_bypass.rsp.data   := dcacheReader.r.data

  StreamRenameUtil(this)
}

object GenDCacheTop extends App {
  val dcache_config = DCacheConfig(
    cacheSize = 32 * 1024,
    wayCount = 2,
    mshrEntries = 1,
    bypassAddrLow0  = 0x10000000l,
    bypassAddrHigh0 = 0x3fffffffl,
    bypassAddrLow1  = 0x10001000l,
    bypassAddrHigh1 = 0x10001fffl,
    bypassAddrLow2  = 0x80000000l,
    bypassAddrHigh2 = 0xffffffffl
  )
  val dcache_axi_config = Axi4Config(
    addressWidth = 32, dataWidth = 64, idWidth = 2,
    useId = true, useLast = true, useRegion = false,
    useBurst = true, useLock = false, useCache = false,
    useSize = true, useQos = false, useLen = true,
    useResp = true, useProt = false, useStrb = true
  )
  GenConfig.spinal.generateVerilog(DCacheTop(dcache_config, dcache_axi_config))
}
