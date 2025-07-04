package dandriscv.super_scalar_1issue

import spinal.core._
import spinal.lib._
import math._

// ================ ICache ==================
case class ICacheConfig(cacheSize : Int,
                        bytePerLine : Int,
                        wayCount : Int,
                        addressWidth : Int,
                        cpuDataWidth : Int,
                        bankWidth : Int,
                        busDataWidth : Int,
                        directOutput : Boolean,
                        noBurst : Boolean
                        ){

  def lineCount = cacheSize/bytePerLine
  def wayLineCount = lineCount/wayCount
  def busBurstLen = bytePerLine*8/busDataWidth
  def busDataSize = log2Up(busDataWidth/8)
  def bankNum = 2
  def bankDepth = cacheSize*8/wayCount/bankNum/bankWidth
  def bankDepthBits = log2Up(bankDepth)
  def offsetWidth = log2Up(bytePerLine)
  def setWidth = log2Up(wayLineCount)
  def tagWidth = addressWidth-setWidth-offsetWidth
  def cpuDataBytesWidth = log2Up(cpuDataWidth/8)
  def lineBusDataNum = bytePerLine/(busDataWidth/8) 
  // range
  def offsetRange = (offsetWidth-1) downto 0
  def setRange = (offsetWidth+setWidth-1) downto offsetWidth
  def tagRange = (addressWidth-1) downto (offsetWidth+setWidth)
  def bankAddrRange  = (bankDepthBits+cpuDataBytesWidth) downto (cpuDataBytesWidth+1)
  def bankIndexRange = 2 downto 2

  assert(wayCount>=2)
  assert(bankWidth==cpuDataWidth)
  assert(busDataWidth==2*cpuDataWidth)
  
}

// ================ DCache ==================
case class DCacheConfig(cacheSize : Int,
                        bytePerLine : Int,
                        wayCount : Int,
                        addressWidth : Int,
                        cpuDataWidth : Int,
                        bankWidth : Int,
                        busDataWidth : Int,
                        directOutput : Boolean,
                        noBurst : Boolean){

  def lineCount = cacheSize/bytePerLine
  def wayLineCount = lineCount/wayCount
  def busBurstLen = bytePerLine*8/busDataWidth // 2
  def busDataSize = log2Up(busDataWidth/8) // 5
  def bankDepth = cacheSize*8/wayCount/bankWidth
  def bankDepthBits = log2Up(bankDepth)
  def offsetWidth = log2Up(bytePerLine) // 6
  def setWidth = log2Up(wayLineCount)
  def tagWidth = addressWidth-setWidth-offsetWidth
  def cpuDataBytesWidth = log2Up(cpuDataWidth/8)
  def lineBusDataNum = bytePerLine/(busDataWidth/8)
  // range
  def offsetRange = (offsetWidth-1) downto 0
  def setRange = (offsetWidth+setWidth-1) downto offsetWidth
  def tagRange = (addressWidth-1) downto (offsetWidth+setWidth)
  def bankAddrRange  = (bankDepthBits+cpuDataBytesWidth-1) downto cpuDataBytesWidth

  assert(wayCount>=2)
  assert(bankWidth==cpuDataWidth)
  assert(busDataWidth==cpuDataWidth)
  
}


// ================ Gshare ==================
case class PredictorConfig(predictorType : String = "GSHARE",
                          addressWidth : Int=64, 
                          RAS_ENTRIES : Int=4, 
                          BTB_ENTRIES : Int=4, 
                          PHT_ENTRIES : Int=128
                          ){
  def PHT_address_width = log2Up(PHT_ENTRIES)
  def BTB_ENTRIES_WIDTH = log2Up(BTB_ENTRIES)
  def RAS_ENTRIES_WIDTH = log2Up(RAS_ENTRIES)
  def historyLen        = log2Up(PHT_ENTRIES)
}

// ================ IQ ==================
case class IssueQueueConfig(
  DEPTH : Int,
  IQ_Type: String
){
  def PTR_WIDTH = log2Up(DEPTH)+1
}

object AluCtrlEnum extends SpinalEnum(binarySequential){
  val IDLE, ADD, SUB, SLT, SLTU, XOR, SLL, SRL, SRA, AND, OR, LUI,
      MUL, MULH, MULHSU, MULHU, DIV, DIVU, REM, REMU, MULW, DIVW, DIVUW, REMW, REMUW = newElement()
}

object BjuCtrlEnum extends SpinalEnum(binarySequential){
  val IDLE, AUIPC, JAL, JALR, BEQ, BNE, BLT, BGE, BLTU, BGEU, CSR = newElement()
}

object LsuCtrlEnum extends SpinalEnum(binarySequential){
  val IDLE, LB, LBU, LH, LHU, LW, LWU, LD, SB, SH, SW, SD = newElement()
}

object ExpCtrlEnum extends SpinalEnum(binarySequential){
  val IDLE, ECALL, EBREAK, MRET, CSRRW, CSRRS, CSRRC, CSRRWI, CSRRSI, CSRRCI = newElement()
}

// ============== ROB ===============
object ROBStateEnum extends SpinalEnum(binarySequential){
  val IDLE, ENQUEUE, EXECUTING, COMPLETE, COMMIT = newElement()
}

object ExceptionEnum extends SpinalEnum(binarySequential){
  val IDLE, ECALL, EBREAK, MRET, TIME = newElement()
}

object RobMicroOp extends SpinalEnum(binarySequential){
  val IDLE, ALU, BJU, LSU = newElement()
}


// ================ Cpu ===============
object CpuConfig{

  def IQ_NUM = 4
  def XLEN = 64
  def PC_WIDTH = 32
  def PredictorHistoryLen = 5
  def ROB_DEPTH = 8
  def ROB_PTR_W = log2Up(ROB_DEPTH)+1
  def MEM_AW = 32
  def DIFFTEST = true
  def BPU_TYPE = "static"
}

object GenConfig {
  def spinal = SpinalConfig(
    targetDirectory = "hw/gen",
    defaultConfigForClockDomains = ClockDomainConfig(
      resetActiveLevel = LOW
    ),
    onlyStdLogicVectorAtTopLevelIo = true,
    nameWhenByFile = false,
    genLineComments = true,
    anonymSignalPrefix = "tmp"
  )
}

// ========================= function =========================
object MyUtils {
  // func
  def dataMux(valid: Bits, data: Bits): Bits = {
    var data_num = valid.getWidth
    var data_len = data.getWidth / data_num
    // println(s"data_num is $data_num")
    // println(s"data_len is $data_len")
    val valid_extend = Vec(Bits(data_len bits), data_num)
    val data_valid = Vec(Bits(data_len bits), data_num)
    for(i <- 0 until data_num){
      valid_extend(i) := B(valid(i), data_len)
      data_valid(i) := data(i*data_len, data_len bits) & valid_extend(i)
    }
    val data_out = data_valid.reduce(_ | _)
    data_out
  }
}