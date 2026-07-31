package dandriscv.tulip

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi._

/**
  * Focused integration wrapper for the LSU <-> DCache contract.
  *
  * It is deliberately smaller than Tulip: simulation can drive a single LSU
  * request stream while a memory model drives the real AXI ports of DCacheTop.
  * This exercises address alignment, response sideband propagation, cache
  * misses/hits and timer completion without depending on the front end or ROB.
  */
case class LSUDCacheTop(val config: DCacheConfig, val axiConfig: Axi4Config) extends Component {
  val flush     = in Bool()
  val timer_int = out Bool()
  val lsu_src   = slave(Stream(ExeSrc("LSU")))
  val lsu_dst   = master(Stream(ExeDst()))
  val dcacheReader = master(Axi4ReadOnly(axiConfig)).setName("dcache")
  val dcacheWriter = master(Axi4WriteOnly(axiConfig)).setName("dcache")

  val lsu    = new LSU()
  val dcache = new DCacheTop(config, axiConfig)

  lsu.lsu_src           << lsu_src
  lsu_dst               << lsu.lsu_dst
  timer_int             := lsu.timer_int

  dcache.flush          := flush
  dcache.dcache_src.cmd << lsu.dcache_ports.cmd
  lsu.dcache_ports.rsp  << dcache.dcache_src.rsp

  dcacheReader.ar       << dcache.dcacheReader.ar
  dcacheReader.r        >> dcache.dcacheReader.r
  dcacheWriter.aw       << dcache.dcacheWriter.aw
  dcacheWriter.w        << dcache.dcacheWriter.w
  dcacheWriter.b        >> dcache.dcacheWriter.b

  StreamRenameUtil(this)
}

object GenLSUDCacheTop extends App {
  val dcacheConfig = DCacheConfig(
    cacheSize = 16 * 1024,
    wayCount = 2,
    mshrEntries = 1,
    bypassAddrLow0  = 0x10000000l,
    bypassAddrHigh0 = 0x3fffffffl,
    bypassAddrLow1  = 0x10001000l,
    bypassAddrHigh1 = 0x10001fffl,
    bypassAddrLow2  = 0x10001000l,
    bypassAddrHigh2 = 0x10001fffl
  )
  val axiConfig = Axi4Config(
    addressWidth = 32, dataWidth = 64, idWidth = 2,
    useId = true, useLast = true, useRegion = false,
    useBurst = true, useLock = false, useCache = false,
    useSize = true, useQos = false, useLen = true,
    useResp = true, useProt = false, useStrb = true
  )
  GenConfig.spinal.generateVerilog(LSUDCacheTop(dcacheConfig, axiConfig))
}
