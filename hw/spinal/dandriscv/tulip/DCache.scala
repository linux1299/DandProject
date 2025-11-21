package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._
import spinal.lib.bus.amba4.axi._


// ==================== CACHE =============================
case class DCache(p : DCacheConfig) extends Component{
  import p._

  val flush = in Bool()
  val cpu   = slave(DCachePorts(32, 64))
  val sram  = for(i<-0 until wayCount) yield new Area{
    val ports = master(SramPorts(banAddrWidth, 64))
  }
  val next_level = master(DCacheNextLevelPorts(32, 64))
  val cpu_bypass = master(DCachePorts(32, 64))

  case class LineMeta() extends Bundle{
    val vld = Reg(Bool()) init(False)
    val tag = Reg(UInt(tagWidth bits)) init(0)
    val mru = Reg(Bool()) init(False)
  }

  val ways = Seq.fill(wayCount)(new Area{
    val metas = Vec(LineMeta(), wayLineCount)
  })

  // cpu related
  val cpu_cmd_ready   = RegInit(True)
  val cpu_tag         = cpu.cmd.addr(tagRange)
  val cpu_set         = cpu.cmd.addr(setRange)
  val cpu_bank_addr   = cpu.cmd.addr(bankAddrRange)
  val cpu_addr        = cpu.cmd.addr
  val cpu_wstrb       = cpu.cmd.wstrb
  val cpu_wdata       = cpu.cmd.wdata
  val cpu_wen         = cpu.cmd.wen
  val bypass_cond_0   = (cpu_addr >= U(bypassAddrLow0)) && (cpu_addr <= U(bypassAddrHigh0))
  val bypass_cond_1   = (cpu_addr >= U(bypassAddrLow1)) && (cpu_addr <= U(bypassAddrHigh1))
  val bypass_cond_2   = (cpu_addr >= U(bypassAddrLow2)) && (cpu_addr <= U(bypassAddrHigh2))
  val bypass          = (bypass_cond_0 || bypass_cond_1 || bypass_cond_2) && cpu.cmd.fire
  val bypass_reg          = RegInit(False)
  val bypass_rsp_valid_d1 = Delay(cpu_bypass.rsp.valid, 1)
  val bypass_rsp_data_d1  = Delay(cpu_bypass.rsp.data, 1)
  cpu_bypass.cmd.valid := bypass
  cpu_bypass.cmd.addr  := cpu.cmd.addr
  cpu_bypass.cmd.wen   := cpu.cmd.wen
  cpu_bypass.cmd.wdata := cpu.cmd.wdata
  cpu_bypass.cmd.wstrb := cpu.cmd.wstrb
  cpu_bypass.cmd.size  := cpu.cmd.size
  when(bypass){
    bypass_reg := True
  }
  .elsewhen(bypass_rsp_valid_d1){
    bypass_reg := False
  }

  // cache related
  val cache_tag        = Vec(UInt(tagWidth bits), wayCount)
  val cache_hit        = Vec(Bool(), wayCount)
  val cache_invld      = Vec(Bool(), wayCount)
  val cache_invld_d1   = Vec(Bool(), wayCount)
  val cache_victim     = Vec(Bool(), wayCount)
  val cache_mru        = Vec(Bool(), wayCount)
  val cache_lru        = Vec(Bool(), wayCount)
  val cache_lru_d1     = Vec(Bool(), wayCount)
  val hit_id           = UInt(log2Up(wayCount) bits)
  val hit_id_d1        = RegNext(hit_id)
  val evict_id         = UInt(log2Up(wayCount) bits)
  val evict_id_d1      = RegNext(evict_id)
  val invld_id         = UInt(log2Up(wayCount) bits)
  val victim_id        = UInt(log2Up(wayCount) bits)
  val mru_full         = cache_mru.asBits.andR
  val is_hit           = cache_hit.asBits.orR & cpu.cmd.fire & !bypass
  val is_hit_d1        = RegNext(is_hit)
  val is_miss          = !cache_hit.asBits.orR & cpu.cmd.fire & !bypass
  val is_diff          = !cache_victim.asBits.orR
  val is_write         = cpu.cmd.fire & cpu.cmd.wen & !bypass
  val is_write_reg     = Reg(Bool()) init(false)
  val flush_busy       = RegInit(False)
  val flush_cnt        = Counter(0 to wayLineCount-1)
  val flush_done       = flush_busy && flush_cnt===(wayLineCount-1)
  val cache_hit_gnt    = Vec(Bool(), wayCount)
  val cache_victim_gnt = Vec(Bool(), wayCount)
  val cache_invld_gnt  = Vec(Bool(), wayCount)
  val evict_id_miss    = RegNextWhen(evict_id, is_miss)

  val cpu_wen_d1       = RegNextWhen(cpu.cmd.wen,   cpu.cmd.fire) init(false)
  val cpu_wstrb_d1     = RegNextWhen(cpu.cmd.wstrb, cpu.cmd.fire) init(0)
  val cpu_wdata_d1     = RegNextWhen(cpu.cmd.wdata, cpu.cmd.fire) init(0)
  val cpu_addr_d1      = RegNextWhen(cpu.cmd.addr, cpu.cmd.fire) init(0)
  val cpu_set_d1       = cpu_addr_d1(setRange)
  val cpu_tag_d1       = cpu_addr_d1(tagRange)
  val cpu_bank_addr_d1 = cpu_addr_d1(bankAddrRange)

  // sram related
  val sram_banks_data  = Vec(Bits(64 bits), wayCount)
  val sram_banks_valid = Vec(Bool(), wayCount)

  // next level related
  val next_level_cmd_valid = RegInit(False)
  val next_level_data_cnt  = Counter(0 to 7)
  val next_level_bank_addr = cpu_addr_d1(bankAddrRange)
  val next_level_rvalid    = next_level.rsp.valid && next_level.rsp.rvalid
  val next_level_rdone     = RegNext(next_level_rvalid && next_level_data_cnt===7)
  val next_level_wdone     = RegNext(next_level.rsp.valid && !next_level.rsp.rvalid && next_level.rsp.bresp===B(0))
  val next_level_wstrb     = cpu_wstrb_d1
  val next_level_wdata     = cpu_wdata_d1

  when((is_miss || is_write)){ // cache miss or write
    next_level_cmd_valid := True
  }
  .otherwise{
    next_level_cmd_valid := False
  }

  when(is_miss && ~is_write){
    next_level_data_cnt.clear()
  }
  .elsewhen(next_level_rdone){
    next_level_data_cnt.clear()
  }
  .elsewhen(next_level_rvalid){
    next_level_data_cnt.increment()
  }

  // flush
  when(flush){
    flush_busy := True
  }
  .elsewhen(flush_done){
    flush_busy := False
  }

  when(flush_busy && flush_cnt===(wayLineCount-1)){
    flush_cnt.clear()
  }
  .elsewhen(flush_busy){
    flush_cnt.increment()
  }
  
  // read metas to decide cache hit, acccess sram, update mru
  cache_hit_gnt    := OHMasking.roundRobin(cache_hit, B(1, wayCount bits).asBools)
  cache_invld_gnt  := OHMasking.roundRobin(cache_invld_d1, B(1, wayCount bits).asBools)
  cache_victim_gnt := OHMasking.roundRobin(cache_victim, B(1, wayCount bits).asBools)

  hit_id    := OHToUInt(cache_hit_gnt)
  invld_id  := OHToUInt(cache_invld_gnt)
  victim_id := OHToUInt(cache_victim_gnt)
  evict_id  := is_diff ? invld_id | victim_id

  for(wayId <- 0 until wayCount){

    cache_tag(wayId) := ways(wayId).metas(cpu_set).tag
    cache_hit(wayId) := (cache_tag(wayId) === cpu_tag) & ways(wayId).metas(cpu_set).vld
    cache_mru(wayId) := ways(wayId).metas(cpu_set).mru
    
    // victim is the way to be replaced
    cache_invld_d1(wayId) := !ways(wayId).metas(cpu_set_d1).vld
    cache_lru_d1(wayId)   := !ways(wayId).metas(cpu_set_d1).mru
    cache_victim(wayId)   := cache_invld_d1(wayId) & cache_lru_d1(wayId)


    // sram TODO:timing maybe bad
    sram_banks_data(wayId) := sram(wayId).ports.rsp.data
    sram_banks_valid(wayId):= sram(wayId).ports.rsp.valid
    when(is_hit && U(wayId)===hit_id){ // read hit or write hit
      sram(wayId).ports.cmd.addr := cpu_bank_addr
      sram(wayId).ports.cmd.valid:= True
      sram(wayId).ports.cmd.wen  := False
      sram(wayId).ports.cmd.wdata:= B(0, 64 bits)
      sram(wayId).ports.cmd.wstrb:= B(0, 64/8 bits)
    } 
    .elsewhen(next_level_rdone && !is_write && U(wayId)===evict_id_miss){ // when read next level data done, read data from evict_id way
      sram(wayId).ports.cmd.addr := cpu_bank_addr_d1
      sram(wayId).ports.cmd.valid:= True
      sram(wayId).ports.cmd.wen  := False
      sram(wayId).ports.cmd.wdata:= B(0, 64 bits)
      sram(wayId).ports.cmd.wstrb:= B(0, 64/8 bits)
    }
    .elsewhen(next_level_rvalid && U(wayId)===evict_id_miss){ // when read miss, read next level data, write to banks
      sram(wayId).ports.cmd.addr := next_level_bank_addr
      sram(wayId).ports.cmd.valid:= True
      sram(wayId).ports.cmd.wen  := True
      sram(wayId).ports.cmd.wdata:= next_level.rsp.data
      sram(wayId).ports.cmd.wstrb:= B(64/8 bits, default -> True)
    }
    .otherwise {
      sram(wayId).ports.cmd.addr := U(0, banAddrWidth bits)
      sram(wayId).ports.cmd.valid:= False
      sram(wayId).ports.cmd.wen  := False
      sram(wayId).ports.cmd.wdata:= B(0, 64 bits)
      sram(wayId).ports.cmd.wstrb:= B(0, 64/8 bits)
    }

    // ================= metas update =================
    when(flush_busy){
      ways(wayId).metas(flush_cnt).mru := False
      ways(wayId).metas(flush_cnt).vld := False
    }
    .otherwise{
      // hit and MRU all 1, set hit way MRU=1, other 0
      when(is_hit && mru_full){
        when(cache_hit(wayId)) {
          ways(wayId).metas(cpu_set).mru := True
        } .otherwise {
          ways(wayId).metas(cpu_set).mru := False
        }
      } // hit and MRU not all 1
      .elsewhen(is_hit && cache_hit(wayId)){
        ways(wayId).metas(cpu_set).mru := True
      } // miss and next_level data read done
      .elsewhen(next_level_rdone && U(wayId)===evict_id_miss){
        ways(wayId).metas(cpu_set_d1).vld := True
      }
    }
    // tags
    when(next_level_rdone && U(wayId)===evict_id_miss){
      ways(wayId).metas(cpu_set_d1).tag := cpu_tag_d1
    }
  }

  // resp to cpu ports
  when(is_write){
    is_write_reg := True
  }
  .elsewhen(next_level_wdone){
    is_write_reg := False
  }

  when((flush || is_miss || is_write || bypass)){
    cpu_cmd_ready := False
  }
  .elsewhen((flush_done || next_level_rdone || next_level_wdone || bypass_rsp_valid_d1)){
    cpu_cmd_ready := True 
  }

  val hit_data      = sram_banks_data(hit_id_d1)
  val hit_valid     = sram_banks_valid(hit_id_d1)
  val refill_data   = sram_banks_data(evict_id_miss)
  val refill_valid  = sram_banks_valid(evict_id_miss)
  cpu.rsp.data     := (bypass_reg ? bypass_rsp_data_d1 |
                                   (is_hit_d1 ? hit_data | refill_data))
  cpu.rsp.valid    := bypass_reg ? bypass_rsp_valid_d1 | 
                                  (is_write_reg ? next_level_wdone | 
                                                 (is_hit_d1 ? hit_valid | refill_valid))
  cpu.cmd.ready    := cpu_cmd_ready

  // cmd to next level cache
  next_level.cmd.addr := cpu_addr_d1
  next_level.cmd.len  := (cpu_wen_d1 ? U(0, 4 bits) | U(busBurstLen-1, 4 bits))
  next_level.cmd.size := busDataSize
  next_level.cmd.wen  := cpu_wen_d1
  next_level.cmd.wdata:= next_level_wdata
  next_level.cmd.wstrb:= next_level_wstrb
  next_level.cmd.valid:= next_level_cmd_valid
}


// ===============================================
// Dcache Top Module
// ===============================================
case class DCacheTop(val config : DCacheConfig, val axiConfig : Axi4Config) extends Component {

  import config._
  // ============================= IO =============================
  val flush = in Bool()
  val dcache_src = slave(DCachePorts(32, 64))
  // next level AXI ports/ or direct ports
  val dcacheReader = master(Axi4ReadOnly(axiConfig)).setName("dcache")
  val dcacheWriter = master(Axi4WriteOnly(axiConfig)).setName("dcache")

  // connect dcache and cpu ports
  val dcache = new DCache(config)
  dcache_src.cmd <> dcache.cpu.cmd
  dcache_src.rsp <> dcache.cpu.rsp
  dcache.flush := flush

  // sram ports
  val sram_area = for(i<-0 until wayCount) yield new Area{
    val sram = new Sram(64, banAddrWidth)
  }
  for(i<-0 until wayCount) {
    dcache.sram(i).ports <> sram_area(i).sram.ports
  }

  // ==================== AXI output, has burst ================
  val handshake_cnt   = RegInit(False)
  val nextlevel_read  = dcache.next_level.cmd.valid && !dcache.next_level.cmd.wen
  val nextlevel_write = dcache.next_level.cmd.valid && dcache.next_level.cmd.wen
  val bypass_read     = dcache.cpu_bypass.cmd.valid && !dcache.cpu_bypass.cmd.wen
  val bypass_write    = dcache.cpu_bypass.cmd.valid && dcache.cpu_bypass.cmd.wen
  
  // ----------------- ar channel -----------------
  dcacheReader.ar.valid.setAsReg() init(False)
  dcacheReader.ar.id.setAsReg() init(0)
  dcacheReader.ar.len.setAsReg() init(0)
  dcacheReader.ar.size.setAsReg() init(0)
  dcacheReader.ar.burst.setAsReg() init(0)
  dcacheReader.ar.addr.setAsReg() init(0)
  when(nextlevel_read || bypass_read){
    dcacheReader.ar.valid      := True
  }
  .elsewhen(dcacheReader.ar.fire){
    dcacheReader.ar.valid      := False
  }
  dcacheReader.ar.id    := U(1)
  dcacheReader.ar.len   := bypass_read ? U(0, 8 bits) | dcache.next_level.cmd.len.resized
  dcacheReader.ar.size  := bypass_read ? dcache.cpu_bypass.cmd.size | dcache.next_level.cmd.size
  dcacheReader.ar.burst := B(1) // INCR
  dcacheReader.ar.addr  := bypass_read ? dcache.cpu_bypass.cmd.addr.resize(32) | dcache.next_level.cmd.addr.resize(32)
  
  // ----------------- r channel -----------------
  dcacheReader.r.ready := True
  
  // ----------------- aw channel -----------------
  dcacheWriter.aw.valid.setAsReg() init(False)
  dcacheWriter.aw.id.setAsReg() init(0)
  dcacheWriter.aw.len.setAsReg() init(0)
  dcacheWriter.aw.size.setAsReg() init(0)
  dcacheWriter.aw.burst.setAsReg() init(0)
  dcacheWriter.aw.addr.setAsReg() init(0)
  when(nextlevel_write || bypass_write){
    dcacheWriter.aw.valid := True
  }
  .elsewhen(dcacheWriter.aw.fire){
    dcacheWriter.aw.valid := False
  }
  dcacheWriter.aw.id    := U(2)
  dcacheWriter.aw.len   := bypass_write ? U(0, 8 bits) | dcache.next_level.cmd.len.resized
  dcacheWriter.aw.size  := bypass_write ? dcache.cpu_bypass.cmd.size | dcache.next_level.cmd.size
  dcacheWriter.aw.burst := B(1) // INCR
  dcacheWriter.aw.addr  := bypass_write ? dcache.cpu_bypass.cmd.addr.resize(32) | dcache.next_level.cmd.addr.resize(32)
  
  // ----------------- w channel -----------------
  dcacheWriter.w.valid.setAsReg() init(False)
  dcacheWriter.w.data.setAsReg() init(0)
  dcacheWriter.w.strb.setAsReg() init(0)
  dcacheWriter.w.last.setAsReg() init(False)
  when(dcache.next_level.cmd.valid && dcache.next_level.cmd.wen){
    dcacheWriter.w.valid := True
  }
  .elsewhen(dcacheWriter.w.fire){
    dcacheWriter.w.valid := False
  }
  dcacheWriter.w.data := bypass_write ? dcache.cpu_bypass.cmd.wdata | dcache.next_level.cmd.wdata
  dcacheWriter.w.strb := bypass_write ? dcache.cpu_bypass.cmd.wstrb | dcache.next_level.cmd.wstrb
  dcacheWriter.w.last := True
  
  // ----------------- b channel -----------------
  dcacheWriter.b.ready := True

  // ----------------- to dcache signal -----------------
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
  dcache.next_level.cmd.ready  := dcache.next_level.cmd.wen ? aw_and_w_fire | dcacheReader.ar.ready
  dcache.next_level.rsp.valid  := dcache.next_level.cmd.wen ? dcacheWriter.b.valid | dcacheReader.r.valid
  dcache.next_level.rsp.bresp  := dcacheWriter.b.resp
  dcache.next_level.rsp.data   := dcacheReader.r.data
  dcache.next_level.rsp.rvalid := dcacheReader.r.valid && (dcacheReader.r.id===U(1))
  dcache.cpu_bypass.cmd.ready  := dcache.cpu_bypass.cmd.wen ? aw_and_w_fire | dcacheReader.ar.ready
  dcache.cpu_bypass.rsp.valid  := dcache.cpu_bypass.cmd.wen ? dcacheWriter.b.valid | dcacheReader.r.valid
  dcache.cpu_bypass.rsp.data   := dcacheReader.r.data
  
  StreamRenameUtil(this)
}

 object GenDCacheTop extends App {
  val dcache_config = DCacheConfig(
    cacheSize = 32 * 1024, // 32 KB
    wayCount = 2,
    bypassAddrLow0  = 0x10000000l,
    bypassAddrHigh0 = 0x3fffffffl,
    bypassAddrLow1  = 0x10001000l,
    bypassAddrHigh1 = 0x10001fffl,
    bypassAddrLow2  = 0x80000000l,
    bypassAddrHigh2 = 0xffffffffl
  )

  val dcache_axi_config = Axi4Config(
    addressWidth = 32,
    dataWidth = 64,
    idWidth = 2,
    useId = true,
    useLast = true,
    useRegion = false,
    useBurst = true,
    useLock = false,
    useCache = false,
    useSize = true,
    useQos = false,
    useLen = true,
    useResp = true,
    useProt = false,
    useStrb = true
  )
  GenConfig.spinal.generateVerilog(DCacheTop(dcache_config, dcache_axi_config))
}