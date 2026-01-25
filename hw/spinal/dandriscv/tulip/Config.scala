package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._

// ================ ICache ==================
case class ICacheConfig(cacheSize    : Int, // bytes
                        wayCount     : Int
                        ){

  def lineCount      = cacheSize/64
  def wayLineCount   = lineCount/wayCount
  def busBurstLen    = 8
  def busDataSize    = log2Up(8)
  def offsetWidth    = log2Up(64)
  def setWidth       = log2Up(wayLineCount)
  def tagWidth       = 32-setWidth-offsetWidth
  def banAddrWidth   = setWidth+3

  // range
  def offsetRange    = (offsetWidth-1) downto 0
  def setRange       = (offsetWidth+setWidth-1) downto offsetWidth
  def tagRange       = 31 downto (offsetWidth+setWidth)
  def bankAddrRange  = (banAddrWidth+2) downto 3
  def bankIndexRange = 2 downto 2

  assert(wayCount>=2)
  
}

// ================ DCache ==================
case class DCacheConfig(cacheSize    : Int, // bytes
                        wayCount     : Int,
                        bypassAddrLow0  : BigInt,
                        bypassAddrHigh0 : BigInt,
                        bypassAddrLow1  : BigInt,
                        bypassAddrHigh1 : BigInt,
                        bypassAddrLow2  : BigInt,
                        bypassAddrHigh2 : BigInt,
                        ){

  def lineCount      = cacheSize/64
  def wayLineCount   = lineCount/wayCount
  def busBurstLen    = 8
  def busDataSize    = log2Up(8)
  def offsetWidth    = log2Up(64)
  def setWidth       = log2Up(wayLineCount)
  def tagWidth       = 32-setWidth-offsetWidth
  def banAddrWidth   = setWidth+3

  // range
  def offsetRange    = (offsetWidth-1) downto 0
  def setRange       = (offsetWidth+setWidth-1) downto offsetWidth
  def tagRange       = 31 downto (offsetWidth+setWidth)
  def bankAddrRange  = (banAddrWidth+2) downto 3
  def bankIndexRange = 2 downto 2

  assert(wayCount>=2)
  
}

// ================ Cpu ===============
object CpuConfig{
  def XLEN = 64
  def BPU_TYPE = "static"
  // def BPU_TYPE = "gshare"
  def BPU_HISTORY_LEN = 5
  def DIFFTEST = true
}

// ================ Gshare ==================
case class PredictorConfig(
                          RAS_ENTRIES : Int=4, 
                          BTB_ENTRIES : Int=4, 
                          PHT_ENTRIES : Int=128
                          ){
  def BTB_ENTRIES_WIDTH = log2Up(BTB_ENTRIES)
  def RAS_ENTRIES_WIDTH = log2Up(RAS_ENTRIES)
  def HISTORY_LEN       = log2Up(PHT_ENTRIES)
}

object GenConfig {
  def spinal = SpinalConfig(
    targetDirectory = "hw/gen",
    defaultConfigForClockDomains = ClockDomainConfig(
      resetActiveLevel = HIGH
    ),
    onlyStdLogicVectorAtTopLevelIo = true,
    nameWhenByFile = false,
    genLineComments = true,
    anonymSignalPrefix = "tmp"
  )
}

// ========================= function =========================
object MyUtils {
  def dataMux(valid: Bits, data: Bits): Bits = {
    var data_num = valid.getWidth
    var data_len = data.getWidth / data_num
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

object StreamRenameUtil {
  def apply(topLevel:Component) = {
    Rename(topLevel,true)
  }

  def Rename(toplevel:Component,isCurrentComponent:Boolean):Boolean={
    //current component process
    if(!isCurrentComponent){
      toplevel.dslBody.foreachStatements{
        case bt:BaseType if bt.parent.isInstanceOf[Stream[_]] => streamRename( bt.parent.asInstanceOf[Stream[_]])
        case bt:BaseType if bt.parent.isInstanceOf[Flow[_]] => flowRename( bt.parent.asInstanceOf[Flow[_]])
        case _ =>
      }
    }else{
      toplevel.dslBody.foreachStatements{
        case bt:BaseType if bt.parent.isInstanceOf[Stream[_]] => toplevel.addPrePopTask(()=>{streamRename( bt.parent.asInstanceOf[Stream[_]])})
        case bt:BaseType if bt.parent.isInstanceOf[Flow[_]] => toplevel.addPrePopTask(()=>{flowRename( bt.parent.asInstanceOf[Flow[_]])})
        case _ =>
      }
    }

    for(child<-toplevel.children){
      Rename(child,false)
    }
    true
  }

  def streamRename(streamPort:Stream[_])={
    streamPort.flatten.foreach((bt)=>{
      val signalName=bt.getName()
      if(signalName.contains("fragment")){
        bt.setName(signalName.replace("_payload_fragment_","_"))
      }else{
        bt.setName(signalName.replace("_payload_","_"))
      }
    })
  }

  def flowRename(flowPort:Flow[_])={
    flowPort.flatten.foreach((bt)=>{
      val signalName=bt.getName()
      if(signalName.contains("fragment")){
        bt.setName(signalName.replace("_payload_fragment_","_"))
      }else{
        bt.setName(signalName.replace("_payload_","_"))
      }
    })
  }

}

object BundleImplicit{
  implicit class autoConnect(bus:Bundle){
    def connect(srcBus:Bundle): Unit ={
      bus.connectWithSrcNull(srcBus)
//      srcBus.connectWithSrcNull(bus)
      bus.connectWithSrc(srcBus)
    }
    
    def connectWithSrcNull(srcBus:Bundle)={
      for((name,element)<-bus.elements){
        val srcPort=srcBus.find(name)
        if(srcPort==null){
          element match {
            case b:Bundle=>b.setToZero()
            case _ =>{
              if(element.isOutput || element.isDirectionLess){
                println(Console.RED+s"${element} have no driver ,assign to 0"+Console.RESET)
                element.assignFromBits(B(0,element.getBitsWidth bits))
              }
            }
          }
        }
      }
    }

    def connectWithSrc(srcBus:Bundle): Unit ={
      for((name,element)<-bus.elements){
        val srcPort =srcBus.find(name)
        if(srcPort!=null){
          element match {
          case b:Bundle=>b.connect(srcPort.asInstanceOf[Bundle])
          case _ =>
            (element.getDirection,srcPort.getDirection) match{
              case(`out`,`in`)   => assignWithAdapt(element,srcPort)
              case (`out`,null)  => assignWithAdapt(element,srcPort)
              case (`in`,`out`)  => assignWithAdapt(srcPort,element)
              case (`in`,null)   => assignWithAdapt(srcPort,element)
              case (null,`in`)   => assignWithAdapt(element,srcPort)
              case (null,`out`)  => assignWithAdapt(srcPort,element)
              case _ if element.isAnalog && srcPort.isAnalog => assignWithAdapt(element,srcPort)
              case _             => LocatedPendingError(s"DIRECTION MISMATCH"+
                                            s"impossible to infer the connection direction between $srcPort and $srcPort ")
            }
          }
        }
      }
    }

    def assignWithAdapt(dst:Data,src:Data):Unit={
      if(dst.getBitsWidth!=src.getBitsWidth){
        println(Console.RED+ s"$dst width is different with $src,auto resized"+Console.RESET)
        dst:=src.resized
      }else{
        dst:=src
      }
    }

    def setToZero():Unit={
      for((name,element)<-bus.elements){
        element match {
          case b:Bundle=>b.setToZero()
          case _:Bundle=>{
            if(element.isOutput || element.isDirectionLess){
              println(Console.RED+s"${element} have no driver ,assign to 0"+Console.RESET)
              if(element.isInstanceOf[Bool])
                element:=False
              else
                element.assignFromBits(B(0,element.getBitsWidth bits))
            }
          }
        }
      }
    }
  }
}
