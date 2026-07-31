package dandriscv.tulip

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi._

// ==================== BIU =============================
case class BIU(p : DCacheConfig) extends Component{
  import p._

  val stall = out Bool()
  val flush = in Bool()
  val cpu = slave(DCachePorts(32, 64))
  val cpu_bypass = master(DCachePorts(32, 64))

  // cpu related
  val cpu_cmd_ready       = RegInit(True)
  val bypass              = cpu.cmd.fire
  val bypass_rsp_valid_d1 = RegInit(False)
  val bypass_rsp_data_d1  = Reg(Bits(64 bits)) init(0)

  // resp to cpu ports
  when(bypass){
    cpu_cmd_ready := False
  }
  .elsewhen(cpu.rsp.fire){
    cpu_cmd_ready := True
  }

  when(cpu.rsp.fire){
    bypass_rsp_valid_d1 := False
  }
  .elsewhen(cpu_bypass.rsp.valid){
    bypass_rsp_valid_d1 := True
    bypass_rsp_data_d1  := cpu_bypass.rsp.data
  }

  cpu_bypass.cmd.valid   := bypass
  cpu_bypass.cmd.addr    := cpu.cmd.addr
  cpu_bypass.cmd.wen     := cpu.cmd.wen
  cpu_bypass.cmd.wdata   := cpu.cmd.wdata
  cpu_bypass.cmd.wstrb   := cpu.cmd.wstrb
  cpu_bypass.cmd.size    := cpu.cmd.size
  // Forward sideband through BIU
  cpu_bypass.cmd.rd_wen   := cpu.cmd.rd_wen
  cpu_bypass.cmd.rd_addr  := cpu.cmd.rd_addr
  cpu_bypass.cmd.pc       := cpu.cmd.pc
  cpu_bypass.cmd.instr    := cpu.cmd.instr
  cpu_bypass.cmd.rob_adr  := cpu.cmd.rob_adr
  cpu_bypass.cmd.lsu_ctrl := cpu.cmd.lsu_ctrl
  cpu_bypass.cmd.addr_off := cpu.cmd.addr_off
  cpu_bypass.cmd.is_timer := cpu.cmd.is_timer
  cpu_bypass.rsp.ready    := cpu.rsp.ready
  cpu.rsp.data            := bypass_rsp_data_d1
  cpu.rsp.valid           := bypass_rsp_valid_d1
  // Sideband on response
  cpu.rsp.rd_wen   := cpu_bypass.rsp.rd_wen
  cpu.rsp.rd_addr  := cpu_bypass.rsp.rd_addr
  cpu.rsp.pc       := cpu_bypass.rsp.pc
  cpu.rsp.instr    := cpu_bypass.rsp.instr
  cpu.rsp.rob_adr  := cpu_bypass.rsp.rob_adr
  cpu.rsp.lsu_ctrl := cpu_bypass.rsp.lsu_ctrl
  cpu.rsp.addr_off := cpu_bypass.rsp.addr_off
  cpu.rsp.is_timer := cpu_bypass.rsp.is_timer
  cpu.cmd.ready          := cpu_cmd_ready
  stall                  := (!cpu.cmd.ready && !bypass_rsp_valid_d1) || bypass
}

// ===============================================
// BIU Top Module
// ===============================================
case class BIUTop(val config : DCacheConfig, val axiConfig : Axi4Config) extends Component {

  import config._
  // ============================= IO =============================
  val stall = out Bool()
  val flush = in Bool()
  val dcache_src = slave(DCachePorts(32, 64))
  // next level AXI ports/ or direct ports
  val dcacheReader = master(Axi4ReadOnly(axiConfig)).setName("dcache")
  val dcacheWriter = master(Axi4WriteOnly(axiConfig)).setName("dcache")

  // connect biu and cpu ports
  val biu = new BIU(config)
  dcache_src.cmd <> biu.cpu.cmd
  dcache_src.rsp <> biu.cpu.rsp
  biu.flush := flush
  dcache_src.stall <> biu.stall

  // axi output
  val handshake_cnt = RegInit(False)
  val ar_len_cnt = Reg(UInt(4 bits)) init(0)
  val bypass_read = biu.cpu_bypass.cmd.valid && !biu.cpu_bypass.cmd.wen
  val bypass_write = biu.cpu_bypass.cmd.valid && biu.cpu_bypass.cmd.wen
  val bypass_write_reg = RegInit(False)
  val bypass_reg = RegInit(False)
  when(bypass_write){
    bypass_write_reg := True
  }
  .elsewhen(biu.cpu_bypass.rsp.valid){
    bypass_write_reg := False
  }
  when(bypass_read || bypass_write){
    bypass_reg := True
  }
  .elsewhen(biu.cpu_bypass.rsp.valid){
    bypass_reg := False
  }

  // ar channel
  dcacheReader.ar.valid.setAsReg() init(False)
  dcacheReader.ar.id.setAsReg() init(0)
  dcacheReader.ar.len.setAsReg() init(0)
  dcacheReader.ar.size.setAsReg() init(0)
  dcacheReader.ar.burst.setAsReg() init(0)
  dcacheReader.ar.addr.setAsReg() init(0)

  when(bypass_read){
    dcacheReader.ar.valid      := True
  }
  .elsewhen(dcacheReader.ar.fire){
    when(ar_len_cnt>U(0)){
      dcacheReader.ar.valid    := True
    }.otherwise{
      dcacheReader.ar.valid    := False
    }
  }
  when(bypass_read){
    ar_len_cnt               := U(0)
  }.elsewhen(dcacheReader.ar.fire && ar_len_cnt>U(0)){
    ar_len_cnt               := ar_len_cnt - U(1)
  }
  dcacheReader.ar.id   := U(1)
  dcacheReader.ar.len  := U(0)
  when(bypass_read){
    dcacheReader.ar.size := biu.cpu_bypass.cmd.size
  }

  dcacheReader.ar.burst := B(1) // INCR
  // ar addr unburst
  when(bypass_read){
    dcacheReader.ar.addr := biu.cpu_bypass.cmd.addr.resize(32)
  }.elsewhen(dcacheReader.ar.fire){
    dcacheReader.ar.addr := dcacheReader.ar.addr + U(64/8)
  }
  // r channel
  dcacheReader.r.ready := dcache_src.rsp.ready
  // aw channel
  dcacheWriter.aw.valid.setAsReg() init(False)
  dcacheWriter.aw.id.setAsReg() init(0)
  dcacheWriter.aw.len.setAsReg() init(0)
  dcacheWriter.aw.size.setAsReg() init(0)
  dcacheWriter.aw.burst.setAsReg() init(0)
  dcacheWriter.aw.addr.setAsReg() init(0)
  when(bypass_write){
    dcacheWriter.aw.valid := True
  }
  .elsewhen(dcacheWriter.aw.fire){
    dcacheWriter.aw.valid := False
  }
  dcacheWriter.aw.id := U(2)

  when(bypass_write){
    dcacheWriter.aw.len := U(0, 8 bits)
  }

  when(bypass_write){
    dcacheWriter.aw.size := biu.cpu_bypass.cmd.size
  }
  dcacheWriter.aw.burst := B(1) // INCR

  when(bypass_write){
    dcacheWriter.aw.addr := biu.cpu_bypass.cmd.addr.resize(32)
  }
  // w channel
  dcacheWriter.w.valid.setAsReg() init(False)
  dcacheWriter.w.data.setAsReg() init(0)
  dcacheWriter.w.strb.setAsReg() init(0)
  dcacheWriter.w.last.setAsReg() init(False)
  when(bypass_write){
    dcacheWriter.w.valid := True
    dcacheWriter.w.data := biu.cpu_bypass.cmd.wdata
    dcacheWriter.w.strb := biu.cpu_bypass.cmd.wstrb
    dcacheWriter.w.last := True
  }
  .elsewhen(dcacheWriter.w.fire){
    dcacheWriter.w.valid := False
  }

  // b channel
  dcacheWriter.b.ready := True
  // to biu signal
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
  val aw_and_w_fire = ((dcacheWriter.aw.fire && dcacheWriter.w.fire) || (handshake_cnt && (dcacheWriter.aw.fire || dcacheWriter.w.fire)))

  biu.cpu_bypass.cmd.ready := True
  biu.cpu_bypass.rsp.valid := bypass_reg ? (bypass_write_reg ? dcacheWriter.b.valid | (dcacheReader.r.valid && (dcacheReader.r.id===U(1)))) | False
  biu.cpu_bypass.rsp.data  := dcacheReader.r.data
}
