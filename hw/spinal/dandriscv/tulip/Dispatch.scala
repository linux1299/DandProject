package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._
import MyUtils._
import BundleImplicit._

// ============== ROB ===============
object DispStateEnum extends SpinalEnum(binarySequential){
  //   0    1    2    3    4    5
  val ARF, EXE, BUF, WBC, ROB, RET = newElement()
}


// Dispatch 2 instructions/cycle
case class Dispatch() extends Component{
  import CpuConfig._
  import DispStateEnum._

  // =================== IO ===================
  val dis_src        = Vec(slave(Stream(IssueDst())), 2) // dis stage
  val dis_to_bju     = master(Stream(ExeSrc("BJU"))) // exe stage BJU
  val dis_to_al1     = master(Stream(ExeSrc("ALU"))) // exe stage ALU 1
  val dis_to_al2     = master(Stream(ExeSrc("ALU"))) // exe stage ALU 2
  val dis_to_div     = master(Stream(ExeSrc("ALU"))) // exe stage DIV
  val dis_to_lsu     = master(Stream(ExeSrc("LSU"))) // exe stage LSU
  val exe_rd_wen     = Vec(in Bool(), 3)
  val exe_rd_data    = Vec(in Bits(64 bits), 3)
  val exe_rd_addr    = Vec(in UInt(5 bits), 3)
  val exe_rob_adr    = Vec(in UInt(ROB_ADR_W bits), 3)
  val exe_rob_order  = Vec(in UInt(ROB_ADR_W bits), 3)
  val wbc_rd_wen     = Vec(in Bool(), 5)
  val wbc_rd_addr    = Vec(in UInt(5 bits), 5)
  val wbc_rob_adr    = Vec(in UInt(ROB_ADR_W bits), 5)
  val wbc_rd_data    = Vec(in Bits(64 bits), 5)
  val cpl_rd_wen     = Vec(in Bool(), 2)
  val cpl_rd_addr    = Vec(in UInt(5 bits), 2)
  val cpl_rob_adr    = Vec(in UInt(ROB_ADR_W bits), 2)
  val rob_rs1_addr   = Vec(out UInt(ROB_ADR_W bits), 2)
  val rob_rs2_addr   = Vec(out UInt(ROB_ADR_W bits), 2)
  val rob_rs1_data   = Vec(in Bits(64 bits), 2)
  val rob_rs2_data   = Vec(in Bits(64 bits), 2)
  val ret_rd_wen     = Vec(in Bool(), 2)
  val ret_rd_addr    = Vec(in UInt(5 bits), 2)
  val ret_rob_adr    = Vec(in UInt(ROB_ADR_W bits), 2)
  val ret_rd_data    = Vec(in Bits(64 bits), 2)
  val read_regfile   = Vec(master(ReadRegfile()), 2)
  val rob_is_ready   = in Bool()
  val tail_adr_older = in UInt(ROB_ADR_W bits)
  val tail_adr_newer = in UInt(ROB_ADR_W bits)
  

  // =============== Entries of Dispatch =================
  val entry = new Area{
    val exe_oh   = Vec(Reg(Bits(5 bits)) init(0), 32) // FU onehot
    val state    = Vec(Reg(DispStateEnum()) init(ARF), 32)
    val dis_fire = Vec(Bool(), 32)
    val exe_fire = Vec(Bool(), 32)
    val wbc_fire = Vec(Bool(), 32)
    val cpl_fire = Vec(Bool(), 32)
    val ret_fire = Vec(Bool(), 32)
    val alu_or_bju = Vec(Bool(), 32)
    val div_or_lsu = Vec(Bool(), 32)
    val rob_adr  = Vec(Reg(UInt(ROB_ADR_W bits)) init(0), 32)
  }

  // =============== Stream =================
  val exe_stream    = Vec(Stream(ExeSrc("ALL")), 5) // dis stage
  val bju_stream    = Stream(ExeSrc("BJU")) // dis stage BJU
  val al1_stream    = Stream(ExeSrc("ALU")) // dis stage ALU 1
  val al2_stream    = Stream(ExeSrc("ALU")) // dis stage ALU 2
  val div_stream    = Stream(ExeSrc("ALU")) // dis stage DIV
  val lsu_stream    = Stream(ExeSrc("LSU")) // dis stage LSU
  val exe_oh_valid  = Vec(Bits(5 bits), 2)
  val src1_valid    = Vec(Bool(), 2)
  val src2_valid    = Vec(Bool(), 2)
  val rs1_addr      = Vec(UInt(5 bits), 2)
  val rs2_addr      = Vec(UInt(5 bits), 2)
  val rd_addr       = Vec(UInt(5 bits), 2)
  val rs1_arf_data  = Vec(Bits(64 bits), 2)
  val rs2_arf_data  = Vec(Bits(64 bits), 2)
  val rs1_exe_data  = Vec(Bits(64 bits), 2)
  val rs2_exe_data  = Vec(Bits(64 bits), 2)
  val rs1_wbc_data  = Vec(Bits(64 bits), 2)
  val rs2_wbc_data  = Vec(Bits(64 bits), 2)
  val rs1_ret_data  = Vec(Bits(64 bits), 2)
  val rs2_ret_data  = Vec(Bits(64 bits), 2)
  val rs1_exe_sel   = Vec(Bits(3 bits), 2)
  val rs2_exe_sel   = Vec(Bits(3 bits), 2)
  val rs1_wbc_sel   = Vec(Bits(5 bits), 2)
  val rs2_wbc_sel   = Vec(Bits(5 bits), 2)
  val rs1_ret_sel   = Vec(Bits(2 bits), 2)
  val rs2_ret_sel   = Vec(Bits(2 bits), 2)
  val exe_data      = exe_rd_data.asBits
  val wbc_data      = wbc_rd_data.asBits
  val ret_data      = ret_rd_data.asBits
  val dis_older_vld = exe_oh_valid(0).orR
  val dis_newer_vld = exe_oh_valid(1).orR

  for(i <- 0 until 2){
    rs1_addr(i)   := dis_src(i).iss_pkg.rs1_addr
    rs2_addr(i)   := dis_src(i).iss_pkg.rs2_addr
    rd_addr(i)    := dis_src(i).iss_pkg.rd_addr
  }
  

  src1_valid(0) := (entry.state(rs1_addr(0))=/=EXE && entry.state(rs1_addr(0))=/=WBC) || 
                   (entry.state(rs1_addr(0))===EXE && entry.alu_or_bju(rs1_addr(0))) // wbc can't forward

  src2_valid(0) := ((entry.state(rs2_addr(0))=/=EXE && entry.state(rs2_addr(0))=/=WBC) || (entry.state(rs2_addr(0))===EXE && entry.alu_or_bju(rs2_addr(0))))
                   (dis_src(0).iss_pkg.micro_op.uop_lsu.lsu_is_store ? False | dis_src(0).iss_pkg.micro_op.uop_com.src2_is_imm)

  src1_valid(1) := (rs1_addr(1) =/= rd_addr(0) || !dis_src(0).valid) && // if issue1 depends on issue0, stall
                   ((entry.state(rs1_addr(1))=/=EXE && entry.state(rs1_addr(1))=/=WBC) || (entry.state(rs1_addr(1))===EXE && entry.alu_or_bju(rs1_addr(1))))
                  

  src2_valid(1) := ( (rs2_addr(1) =/= rd_addr(0) || !dis_src(0).valid) && // if issue1 depends on issue0, stall 
                     ((entry.state(rs2_addr(1))=/=EXE && entry.state(rs2_addr(1))=/=WBC) || (entry.state(rs2_addr(1))===EXE && entry.alu_or_bju(rs2_addr(1)))) ) ||
                   (dis_src(1).iss_pkg.micro_op.uop_lsu.lsu_is_store ? False | dis_src(1).iss_pkg.micro_op.uop_com.src2_is_imm)

  exe_oh_valid(0) := dis_src(0).exe_oh & 
                      B(5 bits, default -> src1_valid(0)) & 
                      B(5 bits, default -> src2_valid(0)) & 
                      B(5 bits, default -> dis_src(0).valid)

  exe_oh_valid(1) := dis_src(1).exe_oh & 
                      B(5 bits, default -> src1_valid(1)) & 
                      B(5 bits, default -> src2_valid(1)) & 
                      B(5 bits, default -> dis_src(1).valid) & 
                      ~exe_oh_valid(0)

  rs1_arf_data(0) := read_regfile(0).rs1_data
  rs2_arf_data(0) := read_regfile(0).rs2_data
  rs1_arf_data(1) := read_regfile(1).rs1_data
  rs2_arf_data(1) := read_regfile(1).rs2_data

  rs1_wbc_sel(0)  := entry.exe_oh(rs1_addr(0))
  rs2_wbc_sel(0)  := entry.exe_oh(rs2_addr(0))
  rs1_wbc_sel(1)  := entry.exe_oh(rs1_addr(1))
  rs2_wbc_sel(1)  := entry.exe_oh(rs2_addr(1))

  rs1_exe_sel(0)  := rs1_wbc_sel(0)(2 downto 0)
  rs2_exe_sel(0)  := rs2_wbc_sel(0)(2 downto 0)
  rs1_exe_sel(1)  := rs1_wbc_sel(1)(2 downto 0)
  rs2_exe_sel(1)  := rs2_wbc_sel(1)(2 downto 0)

  rs1_ret_sel(0)  := ((rs1_addr(0)===ret_rd_addr(1)) && ret_rd_wen(1)) ? B(2, 2 bits) | B(1, 2 bits) // newer instruction with prior
  rs2_ret_sel(0)  := ((rs2_addr(0)===ret_rd_addr(1)) && ret_rd_wen(1)) ? B(2, 2 bits) | B(1, 2 bits) // newer instruction with prior
  rs1_ret_sel(1)  := ((rs1_addr(1)===ret_rd_addr(1)) && ret_rd_wen(1)) ? B(2, 2 bits) | B(1, 2 bits) // newer instruction with prior
  rs2_ret_sel(1)  := ((rs2_addr(1)===ret_rd_addr(1)) && ret_rd_wen(1)) ? B(2, 2 bits) | B(1, 2 bits) // newer instruction with prior

  rs1_exe_data(0) := dataMux(rs1_exe_sel(0), exe_data)
  rs2_exe_data(0) := dataMux(rs2_exe_sel(0), exe_data)
  rs1_exe_data(1) := dataMux(rs1_exe_sel(1), exe_data)
  rs2_exe_data(1) := dataMux(rs2_exe_sel(1), exe_data)

  rs1_wbc_data(0) := dataMux(rs1_wbc_sel(0), wbc_data)
  rs2_wbc_data(0) := dataMux(rs2_wbc_sel(0), wbc_data)
  rs1_wbc_data(1) := dataMux(rs1_wbc_sel(1), wbc_data)
  rs2_wbc_data(1) := dataMux(rs2_wbc_sel(1), wbc_data)

  rs1_ret_data(0) := dataMux(rs1_ret_sel(0), ret_data)
  rs2_ret_data(0) := dataMux(rs2_ret_sel(0), ret_data)
  rs1_ret_data(1) := dataMux(rs1_ret_sel(1), ret_data)
  rs2_ret_data(1) := dataMux(rs2_ret_sel(1), ret_data)


  // =============== Update entry =================
  entry.exe_oh(0)   := B(0, 5 bits)
  entry.state(0)    := ARF
  entry.dis_fire(0) := False
  entry.exe_fire(0) := False
  entry.wbc_fire(0) := False
  entry.cpl_fire(0) := False
  entry.ret_fire(0) := False
  entry.alu_or_bju(0) := False
  entry.div_or_lsu(0) := False
  entry.rob_adr(0)  := U(0, ROB_ADR_W bits)

  for(i <- 1 until 32){
    entry.alu_or_bju(i) := (entry.exe_oh(i)===B"00001" || entry.exe_oh(i)===B"00010" || entry.exe_oh(i)===B"00100")
    entry.div_or_lsu(i) := (entry.exe_oh(i)===B"01000" || entry.exe_oh(i)===B"10000")

    // fire
    entry.dis_fire(i) := dis_src(0).fire && dis_src(0).iss_pkg.micro_op.uop_com.rd_wen && dis_src(0).iss_pkg.rd_addr===U(i) ||
                         dis_src(1).fire && dis_src(1).iss_pkg.micro_op.uop_com.rd_wen && dis_src(1).iss_pkg.rd_addr===U(i)

    entry.exe_fire(i) := dis_to_bju.fire && dis_to_bju.uop_com.rd_wen && dis_to_bju.rd_addr===U(i) && dis_to_bju.rob_adr===entry.rob_adr(i) ||
                         dis_to_al1.fire && dis_to_al1.uop_com.rd_wen && dis_to_al1.rd_addr===U(i) && dis_to_al1.rob_adr===entry.rob_adr(i) ||
                         dis_to_al2.fire && dis_to_al2.uop_com.rd_wen && dis_to_al2.rd_addr===U(i) && dis_to_al2.rob_adr===entry.rob_adr(i) ||
                         dis_to_div.fire && dis_to_div.uop_com.rd_wen && dis_to_div.rd_addr===U(i) && dis_to_div.rob_adr===entry.rob_adr(i) ||
                         dis_to_lsu.fire && dis_to_lsu.uop_com.rd_wen && dis_to_lsu.rd_addr===U(i) && dis_to_lsu.rob_adr===entry.rob_adr(i)
    
    entry.wbc_fire(i) := wbc_rd_wen(0) && wbc_rd_addr(0)===U(i) && wbc_rob_adr(0)===entry.rob_adr(i)||
                         wbc_rd_wen(1) && wbc_rd_addr(1)===U(i) && wbc_rob_adr(1)===entry.rob_adr(i)||
                         wbc_rd_wen(2) && wbc_rd_addr(2)===U(i) && wbc_rob_adr(2)===entry.rob_adr(i)||
                         wbc_rd_wen(3) && wbc_rd_addr(3)===U(i) && wbc_rob_adr(3)===entry.rob_adr(i)||
                         wbc_rd_wen(4) && wbc_rd_addr(4)===U(i) && wbc_rob_adr(4)===entry.rob_adr(i)

    entry.cpl_fire(i) := cpl_rd_wen(0) && cpl_rd_addr(0)===U(i) && cpl_rob_adr(0)===entry.rob_adr(i) ||
                         cpl_rd_wen(1) && cpl_rd_addr(1)===U(i) && cpl_rob_adr(1)===entry.rob_adr(i)

    entry.ret_fire(i) := ret_rd_wen(0) && ret_rd_addr(0)===U(i) && ret_rob_adr(0)===entry.rob_adr(i) ||
                         ret_rd_wen(1) && ret_rd_addr(1)===U(i) && ret_rob_adr(1)===entry.rob_adr(i)
    

    // exe_oh
    when(dis_src(0).fire && dis_src(0).iss_pkg.micro_op.uop_com.rd_wen && dis_src(0).iss_pkg.rd_addr===U(i)){
      entry.exe_oh(i) := exe_oh_valid(0)
      entry.rob_adr(i):= tail_adr_older
    }
    .elsewhen(dis_src(1).fire && dis_src(1).iss_pkg.micro_op.uop_com.rd_wen && dis_src(1).iss_pkg.rd_addr===U(i)){
      entry.exe_oh(i) := exe_oh_valid(1)
      entry.rob_adr(i):= dis_src(0).fire ? tail_adr_newer | tail_adr_older
    }

    // state
    switch(entry.state(i)){
      is(ARF){
        when(entry.dis_fire(i)){
          entry.state(i) := EXE
        }
      }
      is(EXE){
        when(entry.dis_fire(i)){
          entry.state(i) := EXE
        }
        .elsewhen(entry.alu_or_bju(i) && entry.exe_fire(i)){
          entry.state(i) := BUF
        }
        .elsewhen(entry.div_or_lsu(i) && entry.exe_fire(i)){
          entry.state(i) := WBC
        }
      }
      is(BUF){
        when(entry.dis_fire(i)){
          entry.state(i) := EXE
        }
        .elsewhen(entry.wbc_fire(i)){
          entry.state(i) := ROB
        }
      }
      is(WBC){
        when(entry.dis_fire(i)){
          entry.state(i) := EXE
        }
        .elsewhen(entry.wbc_fire(i)){
          entry.state(i) := ROB
        }
      }
      is(ROB){
        when(entry.dis_fire(i)){
          entry.state(i) := EXE
        }
        .elsewhen(entry.cpl_fire(i)){
          entry.state(i) := RET
        }
      }
      is(RET){
        when(entry.dis_fire(i)){
          entry.state(i) := EXE
        }
        .elsewhen(entry.ret_fire(i)){
          entry.state(i) := ARF
        }
      }
    }

  }

  // =================== write back buffer for BJU/ALU ===================
  val buf_exe_rd_data  = Vec(Reg(Bits(64 bits)) init(0), 3)
  val buf_exe_rd_valid = Vec(RegInit(False), 3)
  val buf_exe_rd_addr = Vec(Reg(UInt(5 bits)) init(0), 3)
  val buf_exe_rob_adr = Vec(Reg(UInt(ROB_ADR_W bits)) init(0), 3)
  val buf_exe_rd_wen_valid = Vec(Bool(), 3)
  val rs1_buf_data  = Vec(Bits(64 bits), 2)
  val rs2_buf_data  = Vec(Bits(64 bits), 2)
  val rs1_buf_sel   = Vec(Bits(3 bits), 2)
  val rs2_buf_sel   = Vec(Bits(3 bits), 2)

  // rob order bigger means newer
  buf_exe_rd_wen_valid(0) := exe_rd_wen(0) && ((exe_rob_order(0)>exe_rob_order(1) && exe_rd_wen(1) && exe_rd_addr(0)===exe_rd_addr(1)) || !exe_rd_wen(1) || (exe_rd_addr(0)=/=exe_rd_addr(1))) && 
                                              ((exe_rob_order(0)>exe_rob_order(2) && exe_rd_wen(2) && exe_rd_addr(0)===exe_rd_addr(2)) || !exe_rd_wen(2) || (exe_rd_addr(0)=/=exe_rd_addr(2)))
  buf_exe_rd_wen_valid(1) := exe_rd_wen(1) && ((exe_rob_order(1)>exe_rob_order(0) && exe_rd_wen(0) && exe_rd_addr(1)===exe_rd_addr(0)) || !exe_rd_wen(0) || (exe_rd_addr(1)=/=exe_rd_addr(0))) && 
                                              ((exe_rob_order(1)>exe_rob_order(2) && exe_rd_wen(2) && exe_rd_addr(1)===exe_rd_addr(2)) || !exe_rd_wen(2) || (exe_rd_addr(1)=/=exe_rd_addr(2)))
  buf_exe_rd_wen_valid(2) := exe_rd_wen(2) && ((exe_rob_order(2)>exe_rob_order(0) && exe_rd_wen(0) && exe_rd_addr(2)===exe_rd_addr(0)) || !exe_rd_wen(0) || (exe_rd_addr(2)=/=exe_rd_addr(0))) && 
                                              ((exe_rob_order(2)>exe_rob_order(1) && exe_rd_wen(1) && exe_rd_addr(2)===exe_rd_addr(1)) || !exe_rd_wen(1) || (exe_rd_addr(2)=/=exe_rd_addr(1)))
  for(i <- 0 until 3){
    
    when(wbc_rd_wen(i) && wbc_rd_addr(i)===buf_exe_rd_addr(i) && wbc_rob_adr(i)===buf_exe_rob_adr(i)){
      buf_exe_rd_valid(i):= False
    }

    when(buf_exe_rd_wen_valid(i)){
      buf_exe_rd_valid(i):= True
      buf_exe_rd_data(i) := exe_rd_data(i)
      buf_exe_rd_addr(i) := exe_rd_addr(i)
      buf_exe_rob_adr(i) := exe_rob_adr(i)
    }
    

    rs1_buf_sel(0)(i)  := (rs1_addr(0)===buf_exe_rd_addr(i)) && buf_exe_rd_valid(i)
    rs2_buf_sel(0)(i)  := (rs2_addr(0)===buf_exe_rd_addr(i)) && buf_exe_rd_valid(i)
    rs1_buf_sel(1)(i)  := (rs1_addr(1)===buf_exe_rd_addr(i)) && buf_exe_rd_valid(i)
    rs2_buf_sel(1)(i)  := (rs2_addr(1)===buf_exe_rd_addr(i)) && buf_exe_rd_valid(i)
  }

  rs1_buf_data(0) := rs1_buf_sel(0)(0) ? buf_exe_rd_data(0) | (rs1_buf_sel(0)(1) ? buf_exe_rd_data(1) | buf_exe_rd_data(2))
  rs1_buf_data(1) := rs1_buf_sel(1)(0) ? buf_exe_rd_data(0) | (rs1_buf_sel(1)(1) ? buf_exe_rd_data(1) | buf_exe_rd_data(2))
  rs2_buf_data(0) := rs2_buf_sel(0)(0) ? buf_exe_rd_data(0) | (rs2_buf_sel(0)(1) ? buf_exe_rd_data(1) | buf_exe_rd_data(2))
  rs2_buf_data(1) := rs2_buf_sel(1)(0) ? buf_exe_rd_data(0) | (rs2_buf_sel(1)(1) ? buf_exe_rd_data(1) | buf_exe_rd_data(2))
  

  // =================== Output ===================
  dis_src(0).ready :=   ((exe_oh_valid(0)(0) && exe_stream(0).ready) ||
                         (exe_oh_valid(0)(1) && exe_stream(1).ready) ||
                         (exe_oh_valid(0)(2) && exe_stream(2).ready) ||
                         (exe_oh_valid(0)(3) && exe_stream(3).ready) ||
                         (exe_oh_valid(0)(4) && exe_stream(4).ready)) && rob_is_ready

  dis_src(1).ready :=   ((exe_oh_valid(1)(0) && exe_stream(0).ready) ||
                         (exe_oh_valid(1)(1) && exe_stream(1).ready) ||
                         (exe_oh_valid(1)(2) && exe_stream(2).ready) ||
                         (exe_oh_valid(1)(3) && exe_stream(3).ready) ||
                         (exe_oh_valid(1)(4) && exe_stream(4).ready)) && (dis_src(0).ready || !dis_src(0).valid) && rob_is_ready

  for(i <- 0 until 5){
    exe_stream(i).valid        := (exe_oh_valid(0)(i) || (exe_oh_valid(1)(i) && (dis_src(0).ready || !dis_src(0).valid))) && rob_is_ready // older instr has priority
    exe_stream(i).uop_com      := exe_oh_valid(0)(i) ? dis_src(0).iss_pkg.micro_op.uop_com | dis_src(1).iss_pkg.micro_op.uop_com
    exe_stream(i).rd_addr      := exe_oh_valid(0)(i) ? dis_src(0).iss_pkg.rd_addr          | dis_src(1).iss_pkg.rd_addr
    exe_stream(i).pc           := exe_oh_valid(0)(i) ? dis_src(0).iss_pkg.pc               | dis_src(1).iss_pkg.pc
    exe_stream(i).instr        := exe_oh_valid(0)(i) ? dis_src(0).iss_pkg.instr            | dis_src(1).iss_pkg.instr
    exe_stream(i).rob_adr    := (exe_oh_valid(1)(i) && dis_older_vld && dis_newer_vld) ? tail_adr_newer | tail_adr_older // if dispatch 2 instr, use newer rob_adr
    exe_stream(i).uop_alu      := exe_oh_valid(0)(i) ? dis_src(0).iss_pkg.micro_op.uop_alu | dis_src(1).iss_pkg.micro_op.uop_alu
    exe_stream(i).imm          := exe_oh_valid(0)(i) ? dis_src(0).iss_pkg.imm              | dis_src(1).iss_pkg.imm
    exe_stream(i).uop_bju      := exe_oh_valid(0)(i) ? dis_src(0).iss_pkg.micro_op.uop_bju | dis_src(1).iss_pkg.micro_op.uop_bju
    exe_stream(i).branch_pc    := exe_oh_valid(0)(i) ? dis_src(0).iss_pkg.branch_pc        | dis_src(1).iss_pkg.branch_pc
    exe_stream(i).branch_taken := exe_oh_valid(0)(i) ? dis_src(0).iss_pkg.branch_taken     | dis_src(1).iss_pkg.branch_taken
    exe_stream(i).uop_lsu      := exe_oh_valid(0)(i) ? dis_src(0).iss_pkg.micro_op.uop_lsu | dis_src(1).iss_pkg.micro_op.uop_lsu

    // j=1/0: select form issue0 or issue1, 0 with prior
    exe_stream(i).src1_data := 0
    exe_stream(i).src2_data := 0

    for(j <- 1 to 0 by -1){
      when(exe_oh_valid(j)(i)){ // -------------- rs1
        when(entry.state(rs1_addr(j))===EXE && entry.alu_or_bju(rs1_addr(j))){
          exe_stream(i).src1_data := rs1_exe_data(j)
        }
        .elsewhen(entry.state(rs1_addr(j))===WBC){
          exe_stream(i).src1_data := rs1_wbc_data(j)
        }
        .elsewhen(entry.state(rs1_addr(j))===BUF){
          exe_stream(i).src1_data := rs1_buf_data(j)
        }
        .elsewhen(entry.state(rs1_addr(j))===ROB){
          exe_stream(i).src1_data := rob_rs1_data(j)
        }
        .elsewhen(entry.state(rs1_addr(j))===RET){
          exe_stream(i).src1_data := rs1_ret_data(j)
        }
        .otherwise{
          exe_stream(i).src1_data := rs1_arf_data(j)
        }
      }

      when(exe_oh_valid(j)(i)){ // -------------- rs2
        when(dis_src(j).iss_pkg.micro_op.uop_com.src2_is_imm && dis_src(j).iss_pkg.exe_sel=/=ExeSelEnum.LSU){
          exe_stream(i).src2_data := dis_src(j).iss_pkg.imm
        }
        .elsewhen(entry.state(rs2_addr(j))===EXE && entry.alu_or_bju(rs2_addr(j))){
          exe_stream(i).src2_data := rs2_exe_data(j)
        }
        .elsewhen(entry.state(rs2_addr(j))===BUF){
          exe_stream(i).src2_data := rs2_buf_data(j)
        }
        .elsewhen(entry.state(rs2_addr(j))===ROB){
          exe_stream(i).src2_data := rob_rs2_data(j)
        }
        .elsewhen(entry.state(rs2_addr(j))===RET){
          exe_stream(i).src2_data := rs2_ret_data(j)
        }
        .otherwise{
          exe_stream(i).src2_data := rs2_arf_data(j)
        }
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
  
  for(i <- 0 until 2){
    read_regfile(i).rs1_addr := rs1_addr(i)
    read_regfile(i).rs2_addr := rs2_addr(i)
    rob_rs1_addr(i) := entry.rob_adr(rs1_addr(i))
    rob_rs2_addr(i) := entry.rob_adr(rs2_addr(i))
  }

  // ================== perf =====================
  val issue0_rs1_or_rs2_not_ready = dis_src(0).isStall && (!src1_valid(0) || !src2_valid(0))
  val issue1_rs1_or_rs2_not_ready = dis_src(1).isStall && (!src1_valid(1) || !src2_valid(1))
  val issue1_stall_of_race_exe    = dis_src(1).isStall && (src1_valid(1) && src2_valid(1))
  val issue1_stall_of_iss0_stall  = dis_src(1).isStall && dis_src(0).isStall && !issue1_stall_of_race_exe && !issue1_rs1_or_rs2_not_ready

  val issue0_rs1_or_rs2_not_ready_cnt = Reg(UInt(32 bits)) init(0)
  val issue1_rs1_or_rs2_not_ready_cnt = Reg(UInt(32 bits)) init(0)
  val issue1_stall_of_race_exe_cnt    = Reg(UInt(32 bits)) init(0)
  val issue1_stall_of_iss0_stall_cnt  = Reg(UInt(32 bits)) init(0)

  when(issue0_rs1_or_rs2_not_ready) {issue0_rs1_or_rs2_not_ready_cnt := issue0_rs1_or_rs2_not_ready_cnt + 1}
  when(issue1_rs1_or_rs2_not_ready) {issue1_rs1_or_rs2_not_ready_cnt := issue1_rs1_or_rs2_not_ready_cnt + 1}
  when(issue1_stall_of_race_exe)    {issue1_stall_of_race_exe_cnt    := issue1_stall_of_race_exe_cnt    + 1}
  when(issue1_stall_of_iss0_stall)  {issue1_stall_of_iss0_stall_cnt  := issue1_stall_of_iss0_stall_cnt  + 1}


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
