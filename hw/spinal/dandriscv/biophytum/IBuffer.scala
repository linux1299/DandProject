package dandriscv.biophytum

import spinal.core._
import spinal.lib._
import math._
import MyUtils._
import BundleImplicit._

// issue instructions to EXE
case class IBuffer() extends Component{
  import CpuConfig._
  import ExeSelEnum._

  // =================== IO ===================
  val flush   = in Bool()
  val ibf_src = Vec(slave(Stream(InstrPkg())), 2)
  val ibf_dst = Vec(master(Stream(InstrPkg())), 2)

  // =============== Entries of IBuffer =================
  val head_ptr_curr = Reg(UInt(IBF_ADR_W+1 bits)) init(0)
  val tail_ptr_curr = Reg(UInt(IBF_ADR_W+1 bits)) init(0)
  val head_ptr_next = UInt(IBF_ADR_W+1 bits)
  val tail_ptr_next = UInt(IBF_ADR_W+1 bits)
  val head_ptr_plus = UInt(IBF_ADR_W+1 bits)
  val tail_ptr_plus = UInt(IBF_ADR_W+1 bits)
  val head_adr_curr = head_ptr_curr(IBF_ADR_W-1 downto 0)
  val tail_adr_curr = tail_ptr_curr(IBF_ADR_W-1 downto 0)
  val head_adr_plus = head_ptr_plus(IBF_ADR_W-1 downto 0)
  val tail_adr_plus = tail_ptr_plus(IBF_ADR_W-1 downto 0)
  val ibuffer       = new Area{
    val valid     = Vec(RegInit(False), IBF_DEPTH)
    val instr_pkg = Vec(Reg(InstrPkg()), IBF_DEPTH)
  }

  val push_ibuffer_num =  (ibf_src(0).fire && ibf_src(1).fire) ? U(2, 2 bits) |
                         ((ibf_src(0).fire || ibf_src(1).fire) ? U(1, 2 bits) | U(0, 2 bits))

  val pop_ibuffer_num =   (ibf_dst(0).fire && ibf_dst(1).fire) ? U(2, 2 bits) |
                         ((ibf_dst(0).fire || ibf_dst(1).fire) ? U(1, 2 bits) | U(0, 2 bits))

  // =============== Update head ptr =================
  head_ptr_curr := flush ? U(0) | head_ptr_next
  head_ptr_next := head_ptr_curr + pop_ibuffer_num
  head_ptr_plus := head_ptr_curr + 1

  // =============== Update tail ptr =================
  tail_ptr_curr := flush ? U(0) | tail_ptr_next
  tail_ptr_next := tail_ptr_curr + push_ibuffer_num
  tail_ptr_plus := tail_ptr_curr + 1

  // =============== Update Entry =================
  for(i <- 0 until IBF_DEPTH){

    when(ibf_src(0).fire && ibf_src(1).fire && tail_adr_plus===U(i)){
      ibuffer.valid(i)     := True // 2 instr, src(1) write to tail_adr_plus
      ibuffer.instr_pkg(i) := ibf_src(1).payload
    }
    .elsewhen(ibf_src(0).fire && ibf_src(1).fire && tail_adr_curr===U(i)){
      ibuffer.valid(i)     := True // 2 instr, src(0) write to tail_adr_curr
      ibuffer.instr_pkg(i) := ibf_src(0).payload
    }
    .elsewhen(ibf_src(0).fire && tail_adr_curr===U(i)){
      ibuffer.valid(i)     := True // 1 instr, src(0) write to tail_adr_curr
      ibuffer.instr_pkg(i) := ibf_src(0).payload
    }

    when(flush){
      ibuffer.valid(i)   := False
    }
    .elsewhen((ibf_dst(0).fire && ibf_dst(1).fire) && head_adr_plus===U(i)){
      ibuffer.valid(i)   := False
    }
    .elsewhen((ibf_dst(0).fire || ibf_dst(1).fire) && head_adr_curr===U(i)){
      ibuffer.valid(i)   := False
    }
  }

  // =============== Output =================
  ibf_dst(0).valid     := ibuffer.valid(head_adr_curr)
  ibf_dst(0).payload   := ibuffer.instr_pkg(head_adr_curr)
  ibf_dst(1).valid     := ibuffer.valid(head_adr_plus) && ibf_dst(0).valid
  ibf_dst(1).payload   := ibuffer.instr_pkg(head_adr_plus)

  val entry_cnt        = Reg(UInt(IBF_ADR_W+1 bits)) init(0)
  entry_cnt            := flush ? U(0) | (entry_cnt + push_ibuffer_num - pop_ibuffer_num)
  ibf_src(0).ready     := (entry_cnt <= (IBF_DEPTH-2)) && !flush
  ibf_src(1).ready     := (entry_cnt <= (IBF_DEPTH-2)) && !flush

  StreamRenameUtil(this)
}





object GenIBuffer extends App{
  GenConfig.spinal.generateVerilog(IBuffer())
}