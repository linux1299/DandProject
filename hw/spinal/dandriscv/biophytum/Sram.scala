package dandriscv.biophytum

import spinal.core._
import spinal.lib._
import scala.math._


case class Sram(bankWidth : Int = 64, bankDepthBits : Int = 6) extends Component{

  val wordCount = pow(2, bankDepthBits.toDouble).toInt
  val ports = slave(SramPorts(bankDepthBits, bankWidth))
  val mem = Mem(Bits(bankWidth bits), wordCount)

  mem.write(
    enable  = ports.cmd.valid && ports.cmd.wen,
    address = ports.cmd.addr,
    data    = ports.cmd.wdata,
    mask    = ports.cmd.wstrb
  )

  // ports.rsp.data := mem.readSync(
  ports.rsp.data := mem.readAsync(
    // enable  = ports.cmd.valid,
    address = ports.cmd.addr
  )

  val rsp_valid = RegInit(False)
  when(ports.cmd.valid && !ports.cmd.wen){
    rsp_valid := True
  }.otherwise{
    rsp_valid := False
  }
  ports.rsp.valid := rsp_valid


}

case class Sram_2ports(bankWidth : Int = 64, bankDepthBits : Int = 6) extends Component{

  val wordCount = pow(2, bankDepthBits.toDouble).toInt
  val ports_0 = slave(SramPorts(bankDepthBits, bankWidth))
  val ports_1 = slave(SramPorts(bankDepthBits, bankWidth))
  val mem = Mem(Bits(bankWidth bits), wordCount)

  mem.write(
    enable  = ports_0.cmd.valid && ports_0.cmd.wen,
    address = ports_0.cmd.addr,
    data    = ports_0.cmd.wdata,
    mask    = ports_0.cmd.wstrb
  )

  ports_0.rsp.data := mem.readSync(
    enable  = ports_0.cmd.valid,
    address = ports_0.cmd.addr
  )

  ports_1.rsp.data := mem.readSync(
    enable  = ports_1.cmd.valid,
    address = ports_1.cmd.addr
  )

  val rsp_valid_0 = RegInit(False)
  val rsp_valid_1 = RegInit(False)

  when(ports_0.cmd.valid && !ports_0.cmd.wen){
    rsp_valid_0 := True
  }.otherwise{
    rsp_valid_0 := False
  }
  ports_0.rsp.valid := rsp_valid_0

  when(ports_1.cmd.valid && !ports_1.cmd.wen){
    rsp_valid_1 := True
  }.otherwise{
    rsp_valid_1 := False
  }
  ports_1.rsp.valid := rsp_valid_1

}