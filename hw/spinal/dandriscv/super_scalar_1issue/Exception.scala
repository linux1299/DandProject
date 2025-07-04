package dandriscv.super_scalar_1issue

import spinal.core._
import spinal.lib._
import dandriscv.Riscv.CSR._
import ExceptionEnum._

// ========================= csr register file moudle =========================
case class CsrRegfile(MXLEN : Int = 64) extends Component{
  val cpu_ports = slave(CsrCpuPorts(MXLEN))
  val clint_ports= slave(CsrClintPorts(MXLEN))
  val timer_int = in Bool()

  val mstatus = Reg(Bits(MXLEN bits)) init(B"51'b0" ## B"13'b11000_1000_0000")
  val mie     = Reg(Bits(MXLEN bits)) init(0)
  val mtvec   = Reg(Bits(MXLEN bits)) init(0)
  val mepc    = Reg(Bits(MXLEN bits)) init(0)
  val mcause  = Reg(Bits(MXLEN bits)) init(0)
  val mtval   = Reg(Bits(MXLEN bits)) init(0)
  val mip     = Reg(Bits(MXLEN bits)) init(0)
  val mcycle  = Reg(Bits(MXLEN bits)) init(0)
  val mhartid = Reg(Bits(MXLEN bits)) init(0)
  val mscratch= Reg(Bits(MXLEN bits)) init(0)

  mcycle := (mcycle.asUInt + U(1, MXLEN bits)).asBits
  mip    := B"52'b0" ## B"1'b0" ## B"3'b0" ## timer_int ## B"7'b0"

  when(cpu_ports.wen){
    switch(cpu_ports.waddr){
      is(U(MSTATUS, 12 bits)){
        mstatus := (cpu_ports.wdata(16 downto 15)===B"2'b11" || cpu_ports.wdata(14 downto 13)===B"2'b11") ## B"50'b0" ## B"2'b11" ## B"3'b0" ## cpu_ports.wdata(7) ## B"3'b0" ## cpu_ports.wdata(3) ## B"3'b0"
                    //                                       SD                                                           MPP                       MPIE                                MIE
      }
      is(U(MIE, 12 bits)){
        mie     := B"52'b0" ## cpu_ports.wdata(11) ## B"3'b0" ## cpu_ports.wdata(7) ## B"3'b0" ## cpu_ports.wdata(3) ## B"3'b0"
      }
      is(U(MTVEC, 12 bits)){
        mtvec   := cpu_ports.wdata
      }
      is(U(MEPC, 12 bits)){
        mepc    := cpu_ports.wdata
      }
      is(U(MCAUSE, 12 bits)){
        mcause  := cpu_ports.wdata
      }
      is(U(MBADADDR, 12 bits)){
        mtval   := cpu_ports.wdata
      }
      is(U(MHARTID, 12 bits)){
        mhartid := cpu_ports.wdata
      }
      is(U(MSCRATCH, 12 bits)){
        mscratch:= cpu_ports.wdata
      }
    }
  }.otherwise{
    when(clint_ports.mepc_wen){
      mepc := clint_ports.mepc_wdata
    }
    when(clint_ports.mcause_wen){
      mcause := clint_ports.mcause_wdata
    }
    when(clint_ports.mstatus_wen){
      mstatus := clint_ports.mstatus_wdata
    }
    mtvec := clint_ports.mtvec(MXLEN-1 downto 2) ## B"2'b0"
  }

  // cpu read csr
  when(cpu_ports.wen && cpu_ports.raddr===cpu_ports.waddr){
    cpu_ports.rdata := cpu_ports.wdata
  }.otherwise{
    switch(cpu_ports.raddr){
      is(U(MSTATUS, 12 bits)){
        cpu_ports.rdata := mstatus
      }
      is(U(MIE, 12 bits)){
        cpu_ports.rdata := mie
      }
      is(U(MTVEC, 12 bits)){
        cpu_ports.rdata := mtvec
      }
      is(U(MEPC, 12 bits)){
        cpu_ports.rdata := mepc
      }
      is(U(MCAUSE, 12 bits)){
        cpu_ports.rdata := mcause
      }
      is(U(MBADADDR, 12 bits)){
        cpu_ports.rdata := mtval
      }
      is(U(MIP, 12 bits)){
        cpu_ports.rdata := mip
      }
      is(U(MCYCLE, 12 bits)){
        cpu_ports.rdata := mcycle
      }
      is(U(MHARTID, 12 bits)){
        cpu_ports.rdata := mhartid
      }
      default{
        cpu_ports.rdata := 0
      }
    }
  }

  // clint ports
  clint_ports.mtvec := mtvec
  clint_ports.mepc  := mepc
  clint_ports.mstatus := mstatus
  clint_ports.global_int_en := mstatus(3)
  clint_ports.mtime_int_en := mie(7)
  clint_ports.mtime_int_pend := mip(7)
}

// =========================clint moudle =========================
case class Clint(MXLEN : Int = 64, addressWidth : Int = 64) extends Component{
  // interrupt onlygen at exe stage
  // write csr at exe stage
  val pc = in UInt(addressWidth bits)
  val pc_next = in UInt(addressWidth bits)
  val csr_ports= master(CsrClintPorts(MXLEN))
  val timer_int= in Bool()
  val int_en = out Bool()
  val int_pc = out UInt(addressWidth bits)
  val ecall = in Bool()
  val ebreak = in Bool()
  val mret = in Bool()

  // internal signals
  val int_state = ExceptionEnum()
  val mepc_wdata = Bits(MXLEN bits)
  val mcause_wdata = Bits(MXLEN bits)

  // interrupt type
  when(ecall){
    int_state := ECALL
  }
  .elsewhen(ebreak){
    int_state := EBREAK
  }
  .elsewhen(csr_ports.global_int_en && csr_ports.mtime_int_en && timer_int){
    int_state := TIME
  }
  .elsewhen(mret){
    int_state := MRET
  }
  .otherwise{
    int_state := IDLE
  }

  // mepc wdata
  when(int_state===TIME){ // exact async exception
    mepc_wdata := pc_next.asBits.resized
  }
  .otherwise{ // sync exception
    mepc_wdata := pc.asBits.resized
  }
  
  // mcause wdata
  when(int_state===ECALL){
    mcause_wdata := B(11, MXLEN bits)
  }
  .elsewhen(int_state===EBREAK){
    mcause_wdata := B(3, MXLEN bits)
  }
  .elsewhen(int_state===TIME){
    mcause_wdata := B"64'h8000_0000_0000_0007"
  }
  .otherwise{
    mcause_wdata := 0
  }

  // write to csr
  switch(int_state){
    is(ECALL, EBREAK, TIME){
      int_en := True
      int_pc := csr_ports.mtvec.asUInt.resized
      csr_ports.mepc_wen := True
      csr_ports.mcause_wen := True
      csr_ports.mstatus_wen := True
      csr_ports.mepc_wdata := mepc_wdata
      csr_ports.mcause_wdata := mcause_wdata
      csr_ports.mstatus_wdata := csr_ports.mstatus(63 downto 8) ## csr_ports.mstatus(3) ## csr_ports.mstatus(6 downto 4) ## False ## csr_ports.mstatus(2 downto 0)
      //                                                            MPIE[7]=MIE[3]                                          MIE[3]=0
    }
    is(MRET){
      int_en := True
      int_pc := csr_ports.mepc.asUInt.resized
      csr_ports.mepc_wen := False
      csr_ports.mcause_wen := False
      csr_ports.mstatus_wen := True
      csr_ports.mepc_wdata := 0
      csr_ports.mcause_wdata := 0
      csr_ports.mstatus_wdata := csr_ports.mstatus(63 downto 8) ## True ## csr_ports.mstatus(6 downto 4) ## csr_ports.mstatus(7) ## csr_ports.mstatus(2 downto 0)
      //                                                            MPIE[7]=MIE[3]                                          MIE[3]=MPIE[7]
    }
    default{
      int_en := False
      int_pc := 0
      csr_ports.mepc_wen := False
      csr_ports.mcause_wen := False
      csr_ports.mstatus_wen := False
      csr_ports.mepc_wdata := 0
      csr_ports.mcause_wdata := 0
      csr_ports.mstatus_wdata := 0
    }
  }

}

case class Timer(MXLEN : Int = 64, addressWidth : Int = 64) extends Component {
  val cen = in Bool()
  val wen = in Bool()
  val addr= in UInt(addressWidth bits)
  val wdata = in Bits(MXLEN bits)
  val rdata = out Bits(MXLEN bits)
  val timer_int = out Bool()
  val mtime = Reg(Bits(MXLEN bits)) init(0)
  val mtimecmp = RegInit(B(MXLEN bits, default -> True))

  when(wen && cen){
    switch(addr){
      is(MTIME){
        mtime := wdata
      }
      is(MTIMECMP){
        mtimecmp := wdata
      }
    }
  }.otherwise{
    mtime := (mtime.asUInt + 1).asBits
  }

  when(addr===MTIME){
    rdata := mtime
  }.elsewhen(addr===MTIMECMP){
    rdata := mtimecmp
  }.otherwise{
    rdata := 0
  }

  timer_int := mtime.asUInt >= mtimecmp.asUInt
}
