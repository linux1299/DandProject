package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._
import spinal.core.sim._

import spinal.lib.bus.amba4.axi._

// ==================== CACHE =============================
case class ICache(p : ICacheConfig) extends Component{
  import p._

  val flush   = in Bool()
  val cpu     = slave(ICachePorts(32, 64))
  val sram    = for(i<-0 until wayCount*2) yield new Area{
    val ports = master(SramPorts(banAddrWidth, 32))
  }
  val next_level = master(ICacheNextLevelPorts(AW=32, DW=64))

  case class LineMeta() extends Bundle{
    val vld = Reg(Bool()) init(False)
    val tag = Reg(UInt(tagWidth bits)) init(0)
    val mru = Reg(Bool()) init(False)
  }

  val ways = Seq.fill(wayCount)(new Area{
    val metas = Vec(LineMeta(), wayLineCount)
  })

  // cache related
  val cache_tag      = Vec(UInt(tagWidth bits), wayCount)
  val cache_hit      = Vec(Bool(), wayCount)
  val cache_invld_d1 = Vec(Bool(), wayCount)
  val cache_victim   = Vec(Bool(), wayCount)
  val cache_mru      = Vec(Bool(), wayCount)
  val cache_lru_d1   = Vec(Bool(), wayCount)
  val hit_id         = UInt(log2Up(wayCount) bits)
  val hit_id_d1      = RegNext(hit_id)
  val evict_id       = UInt(log2Up(wayCount) bits)
  val invld_id       = UInt(log2Up(wayCount) bits)
  val victim_id      = UInt(log2Up(wayCount) bits)
  val mru_full       = cache_mru.asBits.andR
  val is_hit         = cache_hit.asBits.orR & cpu.cmd.fire
  val is_hit_d1      = RegNext(is_hit)
  val is_miss        = !cache_hit.asBits.orR & cpu.cmd.fire
  val is_diff        = !cache_victim.asBits.orR
  val flush_busy     = RegInit(False)
  val flush_cnt      = Counter(0 to wayLineCount-1)
  val flush_done     = flush_busy && flush_cnt===(wayLineCount-1)
  val evict_id_miss  = RegNextWhen(evict_id, is_miss)

  // cpu related
  val cpu_tag           = cpu.cmd.addr(tagRange)
  val cpu_set           = cpu.cmd.addr(setRange)
  val cpu_bank_addr     = cpu.cmd.addr(bankAddrRange)
  val cpu_bank_index    = cpu.cmd.addr(bankIndexRange)
  val cpu_addr_d1       = RegNextWhen(cpu.cmd.addr, cpu.cmd.fire) init(0)
  val cpu_set_d1        = cpu_addr_d1(setRange)
  val cpu_tag_d1        = cpu_addr_d1(tagRange)
  val cpu_bank_addr_d1  = cpu_addr_d1(bankAddrRange)
  val cpu_bank_index_d1 = cpu_addr_d1(bankIndexRange)
  val cpu_cmd_ready     = RegInit(True)

  // sram related
  val sram_banks_data   = Vec(Bits(2*32 bits), wayCount)
  val sram_banks_valid  = Vec(Bool(), wayCount)

  // next level related
  val next_level_cmd_valid = RegInit(False)
  val next_level_data_cnt  = Counter(0 to 7)
  val next_level_bank_addr = next_level.cmd.addr(bankAddrRange)
  val next_level_done      = RegNext(next_level.rsp.valid && next_level_data_cnt===7)

  when(is_miss){
    next_level_cmd_valid := True
  }
  .elsewhen(next_level.cmd.fire){
    next_level_cmd_valid := False
  }

  when(is_miss){
    next_level_data_cnt.clear()
  }
  .elsewhen(next_level_done){
    next_level_data_cnt.clear()
  }
  .elsewhen(next_level.rsp.valid){
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
  hit_id    := OHToUInt(cache_hit)
  invld_id  := OHToUInt(cache_invld_d1)
  victim_id := OHToUInt(cache_victim)
  evict_id  := is_diff ? invld_id | victim_id

  for(wayId <- 0 until wayCount){

    cache_tag(wayId) := ways(wayId).metas(cpu_set).tag
    cache_hit(wayId) := (cache_tag(wayId) === cpu_tag) & ways(wayId).metas(cpu_set).vld
    cache_mru(wayId) := ways(wayId).metas(cpu_set).mru
    
    // replace logic
    cache_invld_d1(wayId) := !ways(wayId).metas(cpu_set_d1).vld
    cache_lru_d1(wayId)   := !ways(wayId).metas(cpu_set_d1).mru
    cache_victim(wayId)   := cache_invld_d1(wayId) & cache_lru_d1(wayId)

    // sram logic

    sram_banks_data(wayId) := (cpu_bank_index_d1===U(0)) ?  (sram(wayId*2+1).ports.rsp.data ## sram(wayId*2).ports.rsp.data) |
                                                            (sram(wayId*2).ports.rsp.data   ## sram(wayId*2+1).ports.rsp.data)
    sram_banks_valid(wayId):= sram(wayId*2).ports.rsp.valid

    for (bankId <- 0 until 2){

      when(is_hit && U(wayId)===hit_id){ // when hit, read sram
        sram(wayId*2 + bankId).ports.cmd.addr  := cpu_bank_addr + ((U(bankId)===U(0)) ? cpu_bank_index | 0)
        sram(wayId*2 + bankId).ports.cmd.valid := True
        sram(wayId*2 + bankId).ports.cmd.wen   := False
        sram(wayId*2 + bankId).ports.cmd.wdata := B(0, 32 bits)
        sram(wayId*2 + bankId).ports.cmd.wstrb := B(0, 32/8 bits)
      } 
      .elsewhen(next_level_done && U(wayId)===evict_id_miss){ // when read next level data done, read data from victim way
        sram(wayId*2 + bankId).ports.cmd.addr  := cpu_bank_addr_d1 + ((U(bankId)===U(0)) ? cpu_bank_index_d1 | 0)
        sram(wayId*2 + bankId).ports.cmd.valid := True
        sram(wayId*2 + bankId).ports.cmd.wen   := False
        sram(wayId*2 + bankId).ports.cmd.wdata := B(0, 32 bits)
        sram(wayId*2 + bankId).ports.cmd.wstrb := B(0, 32/8 bits)
      }
      .elsewhen(next_level.rsp.valid && U(wayId)===evict_id_miss){ // when read miss, read next level data, write to banks
        sram(wayId*2 + bankId).ports.cmd.addr  := next_level_bank_addr + next_level_data_cnt
        sram(wayId*2 + bankId).ports.cmd.valid := True
        sram(wayId*2 + bankId).ports.cmd.wen   := True
        sram(wayId*2 + bankId).ports.cmd.wdata := next_level.rsp.data(bankId*32+32-1 downto bankId*32)
        sram(wayId*2 + bankId).ports.cmd.wstrb := B(32/8 bits, default -> True)
      }
      .otherwise {
        sram(wayId*2 + bankId).ports.cmd.addr  := U(0, banAddrWidth bits)
        sram(wayId*2 + bankId).ports.cmd.valid := False
        sram(wayId*2 + bankId).ports.cmd.wen   := False
        sram(wayId*2 + bankId).ports.cmd.wdata := B(0, 32 bits)
        sram(wayId*2 + bankId).ports.cmd.wstrb := B(0, 32/8 bits)
      }
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
      .elsewhen(next_level_done && U(wayId)===evict_id_miss){
        ways(wayId).metas(cpu_set_d1).vld := True
      }
    }
    // tags
    when(next_level_done && U(wayId)===evict_id_miss){
      ways(wayId).metas(cpu_set_d1).tag := cpu_tag_d1
    }

    // to cpu ready
    when(flush || is_miss){
      cpu_cmd_ready := False
    }
    .elsewhen(flush_done || next_level_done){
      cpu_cmd_ready := True
    }
  }

  // resp to cpu ports
  cpu.rsp.data  := is_hit_d1 ? sram_banks_data(hit_id_d1)  | sram_banks_data(evict_id_miss)
  cpu.rsp.valid := is_hit_d1 ? sram_banks_valid(hit_id_d1) | sram_banks_valid(evict_id_miss)
  cpu.cmd.ready := cpu_cmd_ready

  // cmd to next level cache
  next_level.cmd.addr  := (cpu_addr_d1(32-1 downto offsetWidth) ## U(0, offsetWidth bits)).asUInt
  next_level.cmd.len   := (busBurstLen-1)
  next_level.cmd.size  := busDataSize
  next_level.cmd.valid := next_level_cmd_valid

}


case class ICacheTop(val config : ICacheConfig, val axiConfig : Axi4Config) extends Component {

  import config._

  // ====================== IO ==================
  val flush = in Bool()
  val icache_src = slave(ICachePorts(32, 64))
  // next level AXI ports/ direct ports
  val icacheReader = master(Axi4ReadOnly(axiConfig)).setName("icache")
  
  // connect icache and cpu ports
  val icache = new ICache(config)
  icache_src.cmd <> icache.cpu.cmd
  icache_src.rsp <> icache.cpu.rsp
  icache.flush := flush
  // sram ports
  val sram_area = for(i<-0 until wayCount*2) yield new Area{
    val sram = new Sram(32, banAddrWidth)
  }
  for(i<-0 until wayCount*2) {
    icache.sram(i).ports <> sram_area(i).sram.ports
  }

  // ==================== AXI output, has burst ================
  // ar channel
  icacheReader.ar.valid := icache.next_level.cmd.valid
  icacheReader.ar.id := U(0)
  icacheReader.ar.len := icache.next_level.cmd.len.resized
  icacheReader.ar.size := icache.next_level.cmd.size
  icacheReader.ar.burst := B(1) // INCR
  icacheReader.ar.addr := icache.next_level.cmd.addr.resize(32)
  icache.next_level.cmd.ready := icacheReader.ar.ready
  // r channel
  icacheReader.r.ready := True
  icache.next_level.rsp.valid := icacheReader.r.valid && (icacheReader.r.id===U(0))
  icache.next_level.rsp.data := icacheReader.r.data

  StreamRenameUtil(this)
}



object GenICacheTop extends App {
  val icache_config = ICacheConfig(
    cacheSize = 32 * 1024, // 32 KB
    wayCount  = 4
  )

  val icache_axi_config = Axi4Config(
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
    useStrb = false
  )
  GenConfig.spinal.generateVerilog(ICacheTop(icache_config, icache_axi_config))
}