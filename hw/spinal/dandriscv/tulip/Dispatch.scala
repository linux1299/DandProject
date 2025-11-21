package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._
import MyUtils._
import BundleImplicit._


// Dispatch 2 instructions/cycle
case class Dispatch() extends Component{

  // =================== IO ===================
  val flush         = in Bool()
  val dis_src       = Vec(slave(Stream(IssueDst())), 2) // dis stage
  val dis_to_bju    = master(Stream(ExeSrc("BJU"))) // exe stage BJU
  val dis_to_al1    = master(Stream(ExeSrc("ALU"))) // exe stage ALU 1
  val dis_to_al2    = master(Stream(ExeSrc("ALU"))) // exe stage ALU 2
  val dis_to_div    = master(Stream(ExeSrc("ALU"))) // exe stage DIV
  val dis_to_lsu    = master(Stream(ExeSrc("LSU"))) // exe stage LSU
  val wbc_rd_wen    = Vec(in Bool(), 5)
  val wbc_rd_addr   = Vec(in UInt(5 bits), 5)
  val wbc_rd_data   = Vec(in Bits(64 bits), 5)
  val ret_rd_wen    = Vec(in Bool(), 2)
  val ret_rd_addr   = Vec(in UInt(5 bits), 2)
  val ret_rd_data   = Vec(in Bits(64 bits), 2)
  val read_regfile  = Vec(master(ReadRegfile()), 2)
  

  // =============== Entries of Dispatch =================
  val entry = new Area{
    val fu_oh    = Vec(Reg(Bits(5 bits)) init(0), 32) // FU onehot
    val arf      = Vec(RegInit(True), 32)
    val wbc      = Vec(RegInit(False), 32)
    val ret      = Vec(RegInit(False), 32)
    val dis_fire = Vec(Bool(), 32)
    val exe_fire = Vec(Bool(), 32)
    val wbc_fire = Vec(Bool(), 32)
    val ret_fire = Vec(Bool(), 32)
  }

  // =============== Stream =================
  val dis_stream    = Vec(Stream(IssueDst()), 2) // dis stage
  val exe_stream    = Vec(Stream(ExeSrc("ALL")), 5) // dis stage
  val bju_stream    = Stream(ExeSrc("BJU")) // dis stage BJU
  val al1_stream    = Stream(ExeSrc("ALU")) // dis stage ALU 1
  val al2_stream    = Stream(ExeSrc("ALU")) // dis stage ALU 2
  val div_stream    = Stream(ExeSrc("ALU")) // dis stage DIV
  val lsu_stream    = Stream(ExeSrc("LSU")) // dis stage LSU
  val exe_sel_valid = Vec(Bits(5 bits), 2)
  val src1_valid    = Vec(Bool(), 2)
  val src2_valid    = Vec(Bool(), 2)
  val rs1_addr      = Vec(UInt(5 bits), 2)
  val rs2_addr      = Vec(UInt(5 bits), 2)
  val rd_addr       = Vec(UInt(5 bits), 2)
  val rs1_arf_data  = Vec(Bits(64 bits), 2)
  val rs2_arf_data  = Vec(Bits(64 bits), 2)
  val rs1_wbc_data  = Vec(Bits(64 bits), 2)
  val rs2_wbc_data  = Vec(Bits(64 bits), 2)
  val rs1_ret_data  = Vec(Bits(64 bits), 2)
  val rs2_ret_data  = Vec(Bits(64 bits), 2)
  val rs1_wbc_sel   = Vec(Bits(5 bits), 2)
  val rs2_wbc_sel   = Vec(Bits(5 bits), 2)
  val rs1_ret_sel   = Vec(Bits(2 bits), 2)
  val rs2_ret_sel   = Vec(Bits(2 bits), 2)
  val wbc_data      = wbc_rd_data.asBits
  val ret_data      = ret_rd_data.asBits

  for(i <- 0 until 2){
    dis_stream(i) << dis_src(i).throwWhen(flush)

    rs1_addr(i)   := dis_src(i).iss_pkg.rs1_addr
    rs2_addr(i)   := dis_src(i).iss_pkg.rs2_addr
    rd_addr(i)    := dis_src(i).iss_pkg.rd_addr

  }
  

  src1_valid(0) := entry.arf(rs1_addr(0)) ||
                   entry.wbc(rs1_addr(0)) ||
                   entry.ret(rs1_addr(0))

  src2_valid(0) := entry.arf(rs2_addr(0)) ||
                   entry.wbc(rs2_addr(0)) ||
                   entry.ret(rs2_addr(0)) ||
                   dis_src(0).iss_pkg.micro_op.uop_com.src2_is_imm

  src1_valid(1) := (rs1_addr(1) =/= rd_addr(0) || !dis_stream(0).valid) &&
                    (entry.arf(rs1_addr(1)) ||
                     entry.wbc(rs1_addr(1)) ||
                     entry.ret(rs1_addr(1)))
                  

  src2_valid(1) := ((rs2_addr(1) =/= rd_addr(0) || !dis_stream(0).valid) &&
                    (entry.arf(rs2_addr(1))  ||
                     entry.wbc(rs2_addr(1))  ||
                     entry.ret(rs2_addr(1)))) ||
                   dis_src(1).iss_pkg.micro_op.uop_com.src2_is_imm

  exe_sel_valid(0) := dis_src(0).exe_sel_oh & 
                      B(5 bits, default -> src1_valid(0)) & 
                      B(5 bits, default -> src2_valid(0)) & 
                      B(5 bits, default -> dis_stream(0).valid)

  exe_sel_valid(1) := dis_src(1).exe_sel_oh & 
                      B(5 bits, default -> src1_valid(1)) & 
                      B(5 bits, default -> src2_valid(1)) & 
                      B(5 bits, default -> dis_stream(1).valid) & 
                      ~exe_sel_valid(0)

  rs1_arf_data(0) := read_regfile(0).rs1_data
  rs2_arf_data(0) := read_regfile(0).rs2_data
  rs1_arf_data(1) := read_regfile(1).rs1_data
  rs2_arf_data(1) := read_regfile(1).rs2_data

  rs1_wbc_sel(0)  := entry.fu_oh(rs1_addr(0))
  rs2_wbc_sel(0)  := entry.fu_oh(rs2_addr(0))
  rs1_wbc_sel(1)  := entry.fu_oh(rs1_addr(1))
  rs2_wbc_sel(1)  := entry.fu_oh(rs2_addr(1))

  rs1_ret_sel(0)  := ((rs1_addr(0)===ret_rd_addr(1)) && ret_rd_wen(1)) ? B(2, 2 bits) | B(1, 2 bits) // newer instruction with prior
  rs2_ret_sel(0)  := ((rs2_addr(0)===ret_rd_addr(1)) && ret_rd_wen(1)) ? B(2, 2 bits) | B(1, 2 bits) // newer instruction with prior
  rs1_ret_sel(1)  := ((rs1_addr(1)===ret_rd_addr(1)) && ret_rd_wen(1)) ? B(2, 2 bits) | B(1, 2 bits) // newer instruction with prior
  rs2_ret_sel(1)  := ((rs2_addr(1)===ret_rd_addr(1)) && ret_rd_wen(1)) ? B(2, 2 bits) | B(1, 2 bits) // newer instruction with prior

  rs1_wbc_data(0) := dataMux(rs1_wbc_sel(0), wbc_data)
  rs2_wbc_data(0) := dataMux(rs2_wbc_sel(0), wbc_data)
  rs1_wbc_data(1) := dataMux(rs1_wbc_sel(1), wbc_data)
  rs2_wbc_data(1) := dataMux(rs2_wbc_sel(1), wbc_data)

  rs1_ret_data(0) := dataMux(rs1_ret_sel(0), ret_data)
  rs2_ret_data(0) := dataMux(rs2_ret_sel(0), ret_data)
  rs1_ret_data(1) := dataMux(rs1_ret_sel(1), ret_data)
  rs2_ret_data(1) := dataMux(rs2_ret_sel(1), ret_data)


  // =============== Update entry =================
  entry.fu_oh(0) := B(0, 5 bits)
  entry.arf  (0) := True
  entry.wbc  (0) := False
  entry.ret  (0) := False

  for(i <- 1 until 32){
    // fire
    entry.dis_fire(i) := dis_stream(0).fire && dis_stream(0).iss_pkg.micro_op.uop_com.rd_wen && dis_stream(0).iss_pkg.rd_addr===U(i) ||
                         dis_stream(1).fire && dis_stream(1).iss_pkg.micro_op.uop_com.rd_wen && dis_stream(1).iss_pkg.rd_addr===U(i)

    entry.exe_fire(i) := dis_to_bju.fire && dis_to_bju.uop_com.rd_wen && dis_to_bju.rd_addr===U(i) ||
                         dis_to_al1.fire && dis_to_al1.uop_com.rd_wen && dis_to_al1.rd_addr===U(i) ||
                         dis_to_al2.fire && dis_to_al2.uop_com.rd_wen && dis_to_al2.rd_addr===U(i) ||
                         dis_to_div.fire && dis_to_div.uop_com.rd_wen && dis_to_div.rd_addr===U(i) ||
                         dis_to_lsu.fire && dis_to_lsu.uop_com.rd_wen && dis_to_lsu.rd_addr===U(i)
    
    entry.wbc_fire(i) := wbc_rd_wen(0) && wbc_rd_addr(0)===U(i) ||
                         wbc_rd_wen(1) && wbc_rd_addr(1)===U(i) ||
                         wbc_rd_wen(2) && wbc_rd_addr(2)===U(i) ||
                         wbc_rd_wen(3) && wbc_rd_addr(3)===U(i) ||
                         wbc_rd_wen(4) && wbc_rd_addr(4)===U(i)
    
    entry.ret_fire(i) := ret_rd_wen(0) && ret_rd_addr(0)===U(i) ||
                         ret_rd_wen(1) && ret_rd_addr(1)===U(i)
    

    // fu_oh
    when(flush){
      entry.fu_oh(i) := B(0)
    }
    .elsewhen(dis_stream(0).fire && dis_stream(0).iss_pkg.micro_op.uop_com.rd_wen && dis_stream(0).iss_pkg.rd_addr===U(i)){
      entry.fu_oh(i) := exe_sel_valid(0)
    }
    .elsewhen(dis_stream(1).fire && dis_stream(1).iss_pkg.micro_op.uop_com.rd_wen && dis_stream(1).iss_pkg.rd_addr===U(i)){
      entry.fu_oh(i) := exe_sel_valid(1)
    }

    // arf
    when(flush){
      entry.arf(i) := False
    }
    .elsewhen(entry.dis_fire(i)){
      entry.arf(i) := False
    }
    .elsewhen(entry.ret_fire(i)){
      entry.arf(i) := True
    }

    // wbc
    when(flush){
      entry.wbc(i) := False
    }
    .elsewhen(entry.exe_fire(i)){
      entry.wbc(i) := True
    }
    .elsewhen(entry.wbc_fire(i)){
      entry.wbc(i) := False
    }

    // ret
    when(flush){
      entry.ret(i) := False
    }
    .elsewhen(entry.wbc_fire(i)){
      entry.ret(i) := True
    }
    .elsewhen(entry.ret_fire(i)){
      entry.ret(i) := False
    }

  }

  // =================== Output ===================
  dis_stream(0).ready := (exe_sel_valid(0)(0) && exe_stream(0).ready) ||
                         (exe_sel_valid(0)(1) && exe_stream(1).ready) ||
                         (exe_sel_valid(0)(2) && exe_stream(2).ready) ||
                         (exe_sel_valid(0)(3) && exe_stream(3).ready) ||
                         (exe_sel_valid(0)(4) && exe_stream(4).ready)

  dis_stream(1).ready :=((exe_sel_valid(1)(0) && exe_stream(0).ready) ||
                         (exe_sel_valid(1)(1) && exe_stream(1).ready) ||
                         (exe_sel_valid(1)(2) && exe_stream(2).ready) ||
                         (exe_sel_valid(1)(3) && exe_stream(3).ready) ||
                         (exe_sel_valid(1)(4) && exe_stream(4).ready)) && dis_stream(0).ready

  for(i <- 0 until 5){
    exe_stream(i).valid        := exe_sel_valid(0)(i) || (exe_sel_valid(1)(i) && dis_stream(0).ready)
    exe_stream(i).uop_com      := exe_sel_valid(0)(i) ? dis_stream(0).iss_pkg.micro_op.uop_com | dis_stream(1).iss_pkg.micro_op.uop_com
    exe_stream(i).rd_addr      := exe_sel_valid(0)(i) ? dis_stream(0).iss_pkg.rd_addr          | dis_stream(1).iss_pkg.rd_addr
    exe_stream(i).pc           := exe_sel_valid(0)(i) ? dis_stream(0).iss_pkg.pc               | dis_stream(1).iss_pkg.pc
    exe_stream(i).instr        := exe_sel_valid(0)(i) ? dis_stream(0).iss_pkg.instr            | dis_stream(1).iss_pkg.instr
    exe_stream(i).older        := exe_sel_valid(0)(i) ? True                                   | False
    exe_stream(i).uop_alu      := exe_sel_valid(0)(i) ? dis_stream(0).iss_pkg.micro_op.uop_alu | dis_stream(1).iss_pkg.micro_op.uop_alu
    exe_stream(i).imm          := exe_sel_valid(0)(i) ? dis_stream(0).iss_pkg.imm              | dis_stream(1).iss_pkg.imm
    exe_stream(i).uop_bju      := exe_sel_valid(0)(i) ? dis_stream(0).iss_pkg.micro_op.uop_bju | dis_stream(1).iss_pkg.micro_op.uop_bju
    exe_stream(i).branch_pc    := exe_sel_valid(0)(i) ? dis_stream(0).iss_pkg.branch_pc        | dis_stream(1).iss_pkg.branch_pc
    exe_stream(i).branch_taken := exe_sel_valid(0)(i) ? dis_stream(0).iss_pkg.branch_taken     | dis_stream(1).iss_pkg.branch_taken
    exe_stream(i).uop_lsu      := exe_sel_valid(0)(i) ? dis_stream(0).iss_pkg.micro_op.uop_lsu | dis_stream(1).iss_pkg.micro_op.uop_lsu

    when(exe_sel_valid(0)(i)){
      when(entry.wbc(rs1_addr(0))){
        exe_stream(i).src1_data := rs1_wbc_data(0)
      }
      .elsewhen(entry.ret(rs1_addr(0))){
        exe_stream(i).src1_data := rs1_ret_data(0)
      }
      .otherwise{
        exe_stream(i).src1_data := rs1_arf_data(0)
      }
    }
    .otherwise{
      when(entry.wbc(rs1_addr(1))){
        exe_stream(i).src1_data := rs1_wbc_data(1)
      }
      .elsewhen(entry.ret(rs1_addr(1))){
        exe_stream(i).src1_data := rs1_ret_data(1)
      }
      .otherwise{
        exe_stream(i).src1_data := rs1_arf_data(1)
      }
    }

    when(exe_sel_valid(0)(i)){
      when(dis_src(0).iss_pkg.micro_op.uop_com.src2_is_imm){
        exe_stream(i).src2_data := dis_src(0).iss_pkg.imm
      }
      .elsewhen(entry.wbc(rs2_addr(0))){
        exe_stream(i).src2_data := rs2_wbc_data(0)
      }
      .elsewhen(entry.ret(rs2_addr(0))){
        exe_stream(i).src2_data := rs2_ret_data(0)
      }
      .otherwise{
        exe_stream(i).src2_data := rs2_arf_data(0)
      }
    }
    .otherwise{
      when(dis_src(1).iss_pkg.micro_op.uop_com.src2_is_imm){
        exe_stream(i).src2_data := dis_src(1).iss_pkg.imm
      }
      .elsewhen(entry.wbc(rs2_addr(1))){
        exe_stream(i).src2_data := rs2_wbc_data(1)
      }
      .elsewhen(entry.ret(rs2_addr(1))){
        exe_stream(i).src2_data := rs2_ret_data(1)
      }
      .otherwise{
        exe_stream(i).src2_data := rs2_arf_data(1)
      }
    }
  }
  
  bju_stream.payload := exe_stream(0).payload
  al1_stream.payload := exe_stream(1).payload
  al2_stream.payload := exe_stream(2).payload
  div_stream.payload := exe_stream(3).payload
  lsu_stream.payload := exe_stream(4).payload

  bju_stream.valid := exe_stream(0).valid
  al1_stream.valid := exe_stream(1).valid
  al2_stream.valid := exe_stream(2).valid
  div_stream.valid := exe_stream(3).valid
  lsu_stream.valid := exe_stream(4).valid

  exe_stream(0).ready := bju_stream.ready
  exe_stream(1).ready := al1_stream.ready
  exe_stream(2).ready := al2_stream.ready
  exe_stream(3).ready := div_stream.ready
  exe_stream(4).ready := lsu_stream.ready

  // ================== output =====================
  dis_to_bju <-< bju_stream
  dis_to_al1 <-< al1_stream
  dis_to_al2 <-< al2_stream
  dis_to_div <-< div_stream
  dis_to_lsu <-< lsu_stream
  
  read_regfile(0).rs1_addr := rs1_addr(0)
  read_regfile(0).rs2_addr := rs2_addr(0)
  read_regfile(1).rs1_addr := rs1_addr(0)
  read_regfile(1).rs2_addr := rs2_addr(0)


  StreamRenameUtil(this)
}


case class Test() extends Component{
  val src = slave(Stream(ExeSrc("ALL")))
  val dst = master(Stream(ExeSrc("ALU")))
  dst.payload connect src.payload
  dst.valid := src.valid
  src.ready := dst.ready

  StreamRenameUtil(this)
}

object GenDispatch extends App{
  GenConfig.spinal.generateVerilog(Dispatch())
}
