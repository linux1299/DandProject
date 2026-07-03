package dandriscv.biophytum

import spinal.core._
import spinal.lib._
import math._

// ================ gshare predictor =================
case class gshare_predictor(val p : PredictorConfig) extends Component {
  import p._

  val predict_pc      = in UInt(32 bits)
  val predict_valid   = in Bool()
  val predict_taken   = out Bool()
  val predict_history = out UInt(HISTORY_LEN bits)
  val target_pc       = out UInt(32 bits)
  val train_valid        = in Bool()
  val train_taken        = in Bool()
  val train_mispredicted = in Bool()
  val train_history      = in UInt(HISTORY_LEN bits)
  val train_pc           = in UInt(32 bits)
  val train_pc_next      = in UInt(32 bits)
  val train_is_call      = in Bool()
  val train_is_ret       = in Bool()
  val train_is_jmp       = in Bool()

  val GSHARE = new Area {
    val GBR           = Reg(Bits(HISTORY_LEN bits)) init(0) // global branch history
    val PHT           = Vec(RegInit(U"2'b01"), PHT_ENTRIES)
    val predict_index = predict_pc(HISTORY_LEN+1 downto 2) ^ GBR.asUInt
    val train_index   = train_pc(HISTORY_LEN+1 downto 2) ^ train_history
    val pht_taken     = PHT(predict_index)(1)

    when(train_valid) {
      switch(PHT(train_index)) {
        is(U"2'b00") {
          when(train_taken) {
              PHT(train_index) := U"2'b01"
          } .otherwise {
              PHT(train_index) := U"2'b00"
          }
        }
        is(U"2'b01") {
          when(train_taken) {
              PHT(train_index) := U"2'b10"
          } .otherwise {
              PHT(train_index) := U"2'b00"
          }
        }
        is(U"2'b10") {
          when(train_taken) {
              PHT(train_index) := U"2'b11"
          } .otherwise {
              PHT(train_index) := U"2'b00"
          }
        }
        is(U"2'b11") {
          when(~train_taken) {
              PHT(train_index) := U"2'b10"
          } .otherwise {
              PHT(train_index) := U"2'b11"
          }
        }
      }
    }

    when(train_valid & train_mispredicted) { // update at exe stage
      GBR := train_history(HISTORY_LEN-2 downto 0).asBits ## train_taken
    }
    .elsewhen(predict_valid) { // update at fetch stage
      GBR := GBR(HISTORY_LEN-2 downto 0) ## predict_taken
    }
  }

  // ======================== Branch Target Buffer =====================
  val BTB = new Area{
    val valid     = Reg(Bits(BTB_ENTRIES bits)) init(0)
    val source_pc = Vec(Reg(UInt(32 bits)) init(0), BTB_ENTRIES)
    val call      = Reg(Bits(BTB_ENTRIES bits)) init(0)
    val ret       = Reg(Bits(BTB_ENTRIES bits)) init(0)
    val jmp       = Reg(Bits(BTB_ENTRIES bits)) init(0)
    val target_pc = Vec(Reg(UInt(32 bits)) init(0), BTB_ENTRIES)

    val is_matched = False
    val is_call    = False
    val is_ret     = False
    val is_jmp     = False
    val target_pc_read = U(0, 32 bits)

    // =============== read BTB =================
    val readBTB = for(i <- 0 until BTB_ENTRIES) yield new Area {
      when(source_pc(i)===predict_pc && valid(i)){
        is_matched := True
        is_call    := call(i)
        is_ret     := ret(i)
        is_jmp     := jmp(i)
        target_pc_read := target_pc(i)
      }
    }

    // =============== write BTB =================
    val btb_write_index = UInt(BTB_ENTRIES_WIDTH bits)
    val btb_alloc_index = Counter(0 to BTB_ENTRIES-1)
    val btb_is_hit_vec  = Vec(Bool(), BTB_ENTRIES)
    val btb_is_miss_vec = Vec(Bool(), BTB_ENTRIES)
    val btb_is_hit      = btb_is_hit_vec.asBits.orR
    val btb_is_miss     = btb_is_miss_vec.asBits.orR

    val writeBTB = for(i <- 0 until BTB_ENTRIES) yield new Area {
      when(train_valid && train_taken){
        when(source_pc(i)===train_pc && valid(i)){
          btb_is_hit_vec(i) := True
        }.otherwise{
          btb_is_hit_vec(i) := False
        }
        when(source_pc(i)=/=train_pc || !valid(i)){
          btb_is_miss_vec(i) := True
        }.otherwise{
          btb_is_miss_vec(i) := False
        }
      }.otherwise{
        btb_is_hit_vec(i) := False
        btb_is_miss_vec(i) := False
      }
    }
    btb_write_index := OHToUInt(btb_is_hit_vec)

    when(btb_is_miss){
      when(btb_alloc_index.willOverflowIfInc){
        btb_alloc_index.clear()
      }
      .otherwise{
        btb_alloc_index.increment()
      }
    }

    when(btb_is_hit){
      source_pc(btb_write_index) := train_pc
      call(btb_write_index)      := train_is_call
      ret(btb_write_index)       := train_is_ret
      jmp(btb_write_index)       := train_is_jmp
      target_pc(btb_write_index) := train_pc_next
    }
    .elsewhen(btb_is_miss){
      valid(btb_alloc_index)     := True
      source_pc(btb_alloc_index) := train_pc
      call(btb_alloc_index)      := train_is_call
      ret(btb_alloc_index)       := train_is_ret
      jmp(btb_alloc_index)       := train_is_jmp
      target_pc(btb_alloc_index) := train_pc_next
    }
  }

  // ===================== Return Address Stack =====================
  val RAS = new Area{
    val ras_regfile           = Vec(Reg(UInt(32 bits)), RAS_ENTRIES)
    val ras_next_index        = UInt(RAS_ENTRIES_WIDTH bits)
    val ras_curr_index        = RegNext(ras_next_index) init(0)
    val ras_next_index_proven = UInt(RAS_ENTRIES_WIDTH bits)
    val ras_curr_index_proven = RegNext(ras_next_index_proven) init(0)
    val ras_return_pc         = UInt(32 bits)
    val ras_call_matched      = BTB.is_matched && BTB.is_call
    val ras_ret_matched       = BTB.is_matched && BTB.is_ret
    
    // true ras index at exe stage
    when(train_valid && train_is_call){
      ras_next_index_proven := ras_curr_index_proven + 1
    }
    .elsewhen(train_valid && train_is_ret){
      ras_next_index_proven := ras_curr_index_proven - 1
    }
    .otherwise{
      ras_next_index_proven := ras_curr_index_proven
    }

    // ras index (speculative)
    when(train_mispredicted && train_valid && train_is_call){
      ras_next_index := ras_curr_index_proven + 1
    }
    .elsewhen(train_mispredicted && train_valid && train_is_ret){
      ras_next_index := ras_curr_index_proven - 1
    }
    .elsewhen(ras_call_matched){
      ras_next_index := ras_curr_index + 1
    }
    .elsewhen(ras_ret_matched){
      ras_next_index := ras_curr_index - 1
    }
    .otherwise{
      ras_next_index := ras_curr_index
    }

    // update RAS
    when(train_mispredicted && train_valid && train_is_call){
      ras_regfile(ras_next_index) := train_pc + 4
    }
    .elsewhen(ras_call_matched){
      ras_regfile(ras_next_index) := predict_pc + 4
    }

    // ras return addr
    ras_return_pc := ras_regfile(ras_curr_index)

  }

  // ============================= output =============================
  val taken_or_jmp_or_call = GSHARE.pht_taken || BTB.is_jmp || BTB.is_call

  predict_history := GSHARE.GBR.asUInt
  predict_taken   := predict_valid && BTB.is_matched && (taken_or_jmp_or_call || BTB.is_ret)

  target_pc       := RAS.ras_ret_matched ? RAS.ras_return_pc | 
                                          ((BTB.is_matched && taken_or_jmp_or_call) ? BTB.target_pc_read | 
                                                                                      (predict_pc+4))
}

// ================ static predictor =================
case class static_predictor(val p : PredictorConfig) extends Component {
  import p._

  val predict_pc     = in UInt(32 bits)
  val predict_imm    = in Bits(32 bits)
  val predict_valid  = in Bool()
  val predict_jal    = in Bool()
  val predict_branch = in Bool()
  val predict_taken  = out Bool()
  val target_pc      = out UInt(32 bits)

  when(predict_valid && predict_jal){
    predict_taken := True
    target_pc := (predict_pc.asSInt + predict_imm.asSInt).asUInt
  }
  .elsewhen(predict_valid && predict_branch){
    predict_taken := predict_imm(32-1)
    target_pc := (predict_pc.asSInt + predict_imm.asSInt).asUInt
  }
  .otherwise{
    predict_taken := False
    target_pc := U(0)
  }

}