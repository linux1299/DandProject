package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._
import MyUtils._
import BundleImplicit._

// issue 2 instructions/cycle in FIFO order
case class Issue() extends Component{
  import ExeSelEnum._

  // =================== IO ===================
  val flush          = in Bool()
  val iss_src        = Vec(slave(Stream(IssueSrc())), 2)
  val iss_dst        = Vec(master(Stream(IssueDst())), 2)

  // =============== Entries of Issue =================
  val head = Array.fill(2)(new IssueEntry())
  val skid = Array.fill(2)(new IssueEntry())

  // =============== Update Head entry =================
  for(i <- 0 until 2){
    when(flush){
      head(i).valid := False
    }
    .elsewhen(!skid(i).valid){ // skid is empty, issue into head
      head(i).valid := head(i).update ? iss_src(i).valid | (iss_dst(i).fire ? False | head(i).valid)
    }
    .otherwise{ // skid is full, move skid to head
      head(i).valid := head(i).update ? skid(i).valid | (iss_dst(i).fire ? False | head(i).valid)
    }

    head(i).ready         := !head(i).valid || iss_dst(i).ready
    head(i).update        := head(0).ready && head(1).ready

    // update head.iss_pkg
    when(head(i).update){
      when(skid(i).valid){
        head(i).iss_pkg := skid(i).iss_pkg
        if(i==0){
          when(skid(i).iss_pkg.exe_sel===BJU){
            head(i).exe_sel_oh := B"00001"
          }
          .elsewhen(skid(i).iss_pkg.exe_sel===ALU){
            head(i).exe_sel_oh := B"00010"
          }
          .elsewhen(skid(i).iss_pkg.exe_sel===DIV){
            head(i).exe_sel_oh := B"01000"
          }
          .elsewhen(skid(i).iss_pkg.exe_sel===LSU){
            head(i).exe_sel_oh := B"10000"
          }
        } else {
          when(skid(i).iss_pkg.exe_sel===BJU){
            head(i).exe_sel_oh := B"00001"
          }
          .elsewhen(skid(i).iss_pkg.exe_sel===ALU){
            head(i).exe_sel_oh := B"00100"
          }
          .elsewhen(skid(i).iss_pkg.exe_sel===DIV){
            head(i).exe_sel_oh := B"01000"
          }
          .elsewhen(skid(i).iss_pkg.exe_sel===LSU){
            head(i).exe_sel_oh := B"10000"
          }
        }
      }
      .elsewhen(iss_src(i).valid){
        head(i).iss_pkg := iss_src(i).payload
        if(i==0){
          when(iss_src(i).exe_sel===BJU){
            head(i).exe_sel_oh := B"00001"
          }
          .elsewhen(iss_src(i).exe_sel===ALU){
            head(i).exe_sel_oh := B"00010"
          }
          .elsewhen(iss_src(i).exe_sel===DIV){
            head(i).exe_sel_oh := B"01000"
          }
          .elsewhen(iss_src(i).exe_sel===LSU){
            head(i).exe_sel_oh := B"10000"
          }
        } else {
          when(iss_src(i).exe_sel===BJU){
            head(i).exe_sel_oh := B"00001"
          }
          .elsewhen(iss_src(i).exe_sel===ALU){
            head(i).exe_sel_oh := B"00100"
          }
          .elsewhen(iss_src(i).exe_sel===DIV){
            head(i).exe_sel_oh := B"01000"
          }
          .elsewhen(iss_src(i).exe_sel===LSU){
            head(i).exe_sel_oh := B"10000"
          }
        }
      }
    }


    // =============== Update Skid entry =================
    when(flush){
      skid(i).valid := False
    }
    .elsewhen(!head(i).update || (head(i).update && skid(i).valid)){
      skid(i).valid := skid(i).ready ? iss_src(i).valid | skid(i).valid
    }

    skid(i).ready  := !skid(i).valid || head(i).update
    skid(i).update := iss_src(i).valid && ((!skid(i).valid && !head(i).update) || (skid(i).valid && head(i).update))

    when(skid(i).update){
      skid(i).iss_pkg := iss_src(i).payload
    }

    // =============== output exe sel onehot =================
    

    
    // =================== Output ===================
    iss_src(i).ready := skid(i).ready
    iss_dst(i).valid := head(i).valid

    iss_dst(i).iss_pkg  := head(i).iss_pkg
    iss_dst(i).exe_sel_oh := head(i).exe_sel_oh

  }

  StreamRenameUtil(this)
}


case class IssueEntry() extends Area{
  val valid     = RegInit(False)
  val ready     = Bool()
  val update    = Bool()
  val iss_pkg = Reg(IssueSrc())
  val exe_sel_oh = Reg(Bits(5 bits)) init(0)
}


object GenIssue extends App{
  GenConfig.spinal.generateVerilog(Issue())
}
