package dandriscv.tulip

import spinal.core._
import spinal.lib._
import math._

// ================ Unified Branch Predictor =================
// Top-level wrapper that instantiates both TAGE (dynamic) and static predictors.
// Presents a single flat IO to the CPU top level.
case class Predictor(val p : PredictorConfig, val tc : TageConfig = TageConfig()) extends Component {
  import p._

  // ===================== IO =====================
  // ---- TAGE / dynamic predictor ports ----
  val predict_valid   = in Bool()
  val predict_pc      = in UInt(32 bits)
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

  // ---- static predictor ports ----
  val static_predict_pc     = in UInt(32 bits)
  val static_predict_imm    = in Bits(32 bits)
  val static_predict_valid  = in Bool()
  val static_predict_jal    = in Bool()
  val static_predict_branch = in Bool()
  val static_predict_taken  = out Bool()
  val static_target_pc      = out UInt(32 bits)

  // ===================== TAGE predictor instance =====================
  val tage = new tage_predictor(p, tc)
  tage.predict_pc      := predict_pc
  tage.predict_valid   := predict_valid
  predict_history      := tage.predict_history
  tage.train_valid        := train_valid
  tage.train_taken        := train_taken
  tage.train_mispredicted := train_mispredicted
  tage.train_history      := train_history
  tage.train_pc           := train_pc
  tage.train_pc_next      := train_pc_next
  tage.train_is_call      := train_is_call
  tage.train_is_ret       := train_is_ret
  tage.train_is_jmp       := train_is_jmp

  // ===================== static predictor instance =====================
  val static = new static_predictor(p)
  static.predict_pc     := static_predict_pc
  static.predict_imm    := static_predict_imm
  static.predict_valid  := static_predict_valid
  static.predict_jal    := static_predict_jal
  static.predict_branch := static_predict_branch
  static_predict_taken  := static.predict_taken
  static_target_pc      := static.target_pc

  // ===================== Output: static overrides TAGE =====================
  // Static predictor decodes the actual instruction bytes — it is authoritative
  // for unconditional jumps (JAL). When static says taken, ignore TAGE.
  val static_override = static_predict_valid && static.predict_taken
  predict_taken := static_override || tage.predict_taken
  target_pc     := static_override ? static.target_pc | tage.target_pc
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
  // .elsewhen(predict_valid && predict_branch){
  //   predict_taken := predict_imm(32-1)
  //   target_pc := (predict_pc.asSInt + predict_imm.asSInt).asUInt
  // }
  .otherwise{
    predict_taken := False
    target_pc := U(0)
  }
}

// ================ TAGE predictor =================
// TAGE (TAgged GEometric) branch predictor by André Seznec.
// Dual-PC prediction: predicts both instruction 0 (predict_pc) and
// instruction 1 (predict_pc+4) in parallel for dual-issue fetch.
case class tage_predictor(val p : PredictorConfig, val tc : TageConfig = TageConfig()) extends Component {
  import p._
  import tc._

  // ===================== IO =====================
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

  // ===================== constants =====================
  val MAX_HIST     = maxHistoryLen
  val NUM_TAGGED   = numTables
  // UInt factory wrappers — `UInt(3 bits)` at class-body can be shadowed;
  // use spinal.core.UInt for explicit resolution.
  // def (not val): each call must return a fresh Data instance so signals
  // like providerPred/altPred are independent wires, not aliases.
  private def pu: spinal.core.UInt = spinal.core.UInt(3 bits)
  private def uu: spinal.core.UInt = spinal.core.UInt(2 bits)
  val PRED_INIT    = U(1 << (PRED_CTR_BITS - 1), PRED_CTR_BITS bits)
  val PRED_MAX     = U((1 << PRED_CTR_BITS) - 1, PRED_CTR_BITS bits)
  val USEFUL_MAX   = U((1 << USEFUL_CTR_BITS) - 1, USEFUL_CTR_BITS bits)

  /** Fold lower `histLen` bits of `x` to `w` bits via segment XOR. */
  private def foldHist(x: Bits, histLen: Int, w: Int): Bits = {
    val xlo = x(histLen - 1 downto 0)
    val n   = (histLen + w - 1) / w
    var r   = B(0, w bits)
    for (i <- 0 until n) {
      val lo = i * w
      val hi = scala.math.min(lo + w, histLen)
      r = r ^ xlo(hi - 1 downto lo).resize(w)
    }
    r
  }

  /** Same as foldHist but rotated by w/2 bits for tag diversity. */
  private def foldHistTag(x: Bits, histLen: Int, w: Int): Bits = {
    val rot  = if (w >= 2) w / 2 else 1
    val xRot = if (histLen > rot)
      x(histLen - 1 - rot downto 0) ## x(histLen - 1 downto histLen - rot)
    else
      x(histLen - 1 downto 0)
    foldHist(xRot, histLen, w)
  }

  /** 2-bit saturating counter update. */
  private def updateCtr2(ctr: UInt, up: Bool): UInt = {
    val nxt = UInt(2 bits)
    when(up) { nxt := (ctr === U(3)) ? U(3) | (ctr + U(1)) }
      .otherwise { nxt := (ctr === U(0)) ? U(0) | (ctr - U(1)) }
    nxt
  }

  /** N-bit saturating counter update. */
  private def updateCtrN(ctr: UInt, up: Bool, max: UInt): UInt = {
    val nxt = UInt(PRED_CTR_BITS bits)
    when(up) { nxt := (ctr >= max - 1) ? max | (ctr + 1) }
      .otherwise { nxt := (ctr === U(0)) ? U(0) | (ctr - 1) }
    nxt
  }

  // ===================== Global History Register =====================
  val ghr = Reg(Bits(MAX_HIST bits)) init(0)
  when(train_valid) {
    ghr := ghr(MAX_HIST - 2 downto 0) ## train_taken
  }

  // ===================== Bimodal Table =====================
  val bimodal = Vec(Reg(UInt(2 bits)) init(2), BIMODAL_SIZE)

  // ===================== Tagged Table Entry =====================
  case class TagEntry() extends Bundle {
    val tag    = UInt(TAG_WIDTH bits)
    val pred   = pu
    val useful = uu
    val valid  = Bool()
  }

  // ===================== Tagged Tables =====================
  val tagTables = for (t <- 0 until NUM_TAGGED) yield new Area {
    val size    = TAG_TABLE_SIZES(t)
    val idxW    = log2Up(size)
    val hLen    = scala.math.min(TABLE_HISTORY_LENS(t), MAX_HIST)
    val entries = Vec(Reg(TagEntry()), size)

    for (i <- 0 until size) {
      entries(i).valid.init(False)
      entries(i).pred.init(PRED_INIT)
      entries(i).useful.init(0)
      entries(i).tag.init(0)
    }

    def index(pc: UInt, gh: Bits): UInt = {
      val f = foldHist(gh, hLen, idxW)
      (pc(idxW + 1 downto 2).asBits ^ f).asUInt
    }

    def tag(pc: UInt, gh: Bits): UInt = {
      val f  = foldHistTag(gh, hLen, TAG_WIDTH)
      val ts = idxW + 2
      (pc(ts + TAG_WIDTH - 1 downto ts).asBits ^ f).asUInt
    }

    def readEntry(pc: UInt, gh: Bits): (Bool, UInt, UInt) = {
      val idx  = index(pc, gh)
      val tg   = tag(pc, gh)
      val e    = entries(idx)
      val isHit = e.valid && e.tag === tg
      (isHit, e.pred, e.useful)
    }
  }

  // ===================== Prediction (combinational, dual-PC) =====================
  // ---- TAGE read for instruction 0 (predict_pc) ----
  val prHit0   = Vec(Bool(), NUM_TAGGED)
  val prPred0  = Vec(pu, NUM_TAGGED)
  for (t <- 0 until NUM_TAGGED) {
    val (h, p, _) = tagTables(t).readEntry(predict_pc, ghr)
    prHit0(t)  := h
    prPred0(t) := p
  }

  val bmIdx0   = predict_pc(log2Up(BIMODAL_SIZE) + 1 downto 2)
  val bmPred0  = bimodal(bmIdx0)
  val bmTaken0 = bmPred0(1)

  val anyTagHit0    = prHit0.asBits.orR
  val providerId0   = UInt(log2Up(NUM_TAGGED + 1) bits)
  val providerPred0 = pu; // semi avoids { from being parsed as body
  {
    val foundChain = Vec(Bool(), NUM_TAGGED + 1)
    val selOH      = Vec(Bool(), NUM_TAGGED)
    foundChain(NUM_TAGGED) := False
    for (t <- (0 until NUM_TAGGED).reverse) {
      foundChain(t) := foundChain(t + 1) || prHit0(t)
      selOH(t)      := !foundChain(t + 1) && prHit0(t)
    }
    providerId0   := OHToUInt(selOH.asBits)
    providerPred0 := MuxOH(selOH.asBits, prPred0)
  }

  val tageCondTaken0 = anyTagHit0 ? providerPred0(PRED_CTR_BITS - 1) | bmTaken0

  // ---- TAGE read for instruction 1 (predict_pc + 4) ----
  val pcPlus4 = predict_pc + 4
  val prHit1  = Vec(Bool(), NUM_TAGGED)
  val prPred1 = Vec(pu, NUM_TAGGED)
  for (t <- 0 until NUM_TAGGED) {
    val (h, p, _) = tagTables(t).readEntry(pcPlus4, ghr)
    prHit1(t)  := h
    prPred1(t) := p
  }

  val bmIdx1   = pcPlus4(log2Up(BIMODAL_SIZE) + 1 downto 2)
  val bmPred1  = bimodal(bmIdx1)
  val bmTaken1 = bmPred1(1)

  val anyTagHit1    = prHit1.asBits.orR
  val providerId1   = UInt(log2Up(NUM_TAGGED + 1) bits)
  val providerPred1 = pu; // semi avoids { from being parsed as body
  {
    val foundChain = Vec(Bool(), NUM_TAGGED + 1)
    val selOH      = Vec(Bool(), NUM_TAGGED)
    foundChain(NUM_TAGGED) := False
    for (t <- (0 until NUM_TAGGED).reverse) {
      foundChain(t) := foundChain(t + 1) || prHit1(t)
      selOH(t)      := !foundChain(t + 1) && prHit1(t)
    }
    providerId1   := OHToUInt(selOH.asBits)
    providerPred1 := MuxOH(selOH.asBits, prPred1)
  }

  val tageCondTaken1 = anyTagHit1 ? providerPred1(PRED_CTR_BITS - 1) | bmTaken1

  // ===================== BTB (Branch Target Buffer) =====================
  val BTB = new Area {
    val valid     = Reg(Bits(BTB_ENTRIES bits)) init(0)
    val source_pc = Vec(Reg(UInt(32 bits)) init(0), BTB_ENTRIES)
    val call      = Reg(Bits(BTB_ENTRIES bits)) init(0)
    val ret       = Reg(Bits(BTB_ENTRIES bits)) init(0)
    val jmp       = Reg(Bits(BTB_ENTRIES bits)) init(0)
    val target_pc = Vec(Reg(UInt(32 bits)) init(0), BTB_ENTRIES)

    // ---- read port 0: instruction 0 (predict_pc) ----
    val is_matched_0    = False
    val is_call_out_0   = False
    val is_ret_out_0    = False
    val is_jmp_out_0    = False
    val target_pc_read_0 = U(0, 32 bits)

    val readBTB0 = for (i <- 0 until BTB_ENTRIES) yield new Area {
      when(source_pc(i) === predict_pc && valid(i)) {
        is_matched_0     := True
        is_call_out_0    := call(i)
        is_ret_out_0     := ret(i)
        is_jmp_out_0     := jmp(i)
        target_pc_read_0 := target_pc(i)
      }
    }

    // ---- read port 1: instruction 1 (predict_pc + 4) ----
    val is_matched_1    = False
    val is_call_out_1   = False
    val is_ret_out_1    = False
    val is_jmp_out_1    = False
    val target_pc_read_1 = U(0, 32 bits)

    val pcPlus4 = predict_pc + 4
    val readBTB1 = for (i <- 0 until BTB_ENTRIES) yield new Area {
      when(source_pc(i) === pcPlus4 && valid(i)) {
        is_matched_1     := True
        is_call_out_1    := call(i)
        is_ret_out_1     := ret(i)
        is_jmp_out_1     := jmp(i)
        target_pc_read_1 := target_pc(i)
      }
    }

    // ---- write port (shared) ----
    val btb_write_index = UInt(BTB_ENTRIES_WIDTH bits)
    val btb_alloc_index = Counter(0 to BTB_ENTRIES - 1)
    val btb_is_hit_vec  = Vec(Bool(), BTB_ENTRIES)
    val btb_is_miss_vec = Vec(Bool(), BTB_ENTRIES)
    val btb_is_hit      = btb_is_hit_vec.asBits.orR
    val btb_is_miss     = btb_is_miss_vec.asBits.orR

    val writeBTB = for (i <- 0 until BTB_ENTRIES) yield new Area {
      when(train_valid && train_taken) {
        when(source_pc(i) === train_pc && valid(i)) { btb_is_hit_vec(i) := True }
          .otherwise { btb_is_hit_vec(i) := False }
        when(source_pc(i) =/= train_pc || !valid(i)) { btb_is_miss_vec(i) := True }
          .otherwise { btb_is_miss_vec(i) := False }
      } .otherwise {
        btb_is_hit_vec(i)  := False
        btb_is_miss_vec(i) := False
      }
    }
    btb_write_index := OHToUInt(btb_is_hit_vec)

    when(btb_is_miss) {
      when(btb_alloc_index.willOverflowIfInc) { btb_alloc_index.clear() }
        .otherwise { btb_alloc_index.increment() }
    }

    when(btb_is_hit) {
      source_pc(btb_write_index) := train_pc
      call(btb_write_index)      := train_is_call
      ret(btb_write_index)       := train_is_ret
      jmp(btb_write_index)       := train_is_jmp
      target_pc(btb_write_index) := train_pc_next
    } .elsewhen(btb_is_miss) {
      valid(btb_alloc_index)     := True
      source_pc(btb_alloc_index) := train_pc
      call(btb_alloc_index)      := train_is_call
      ret(btb_alloc_index)       := train_is_ret
      jmp(btb_alloc_index)       := train_is_jmp
      target_pc(btb_alloc_index) := train_pc_next
    }
  }

  // ===================== RAS (Return Address Stack) =====================
  val RAS = new Area {
    val ras_regfile           = Vec(Reg(UInt(32 bits)), RAS_ENTRIES)
    val ras_next_index        = UInt(RAS_ENTRIES_WIDTH bits)
    val ras_curr_index        = RegNext(ras_next_index) init(0)
    val ras_next_index_proven = UInt(RAS_ENTRIES_WIDTH bits)
    val ras_curr_index_proven = RegNext(ras_next_index_proven) init(0)
    val ras_return_pc         = UInt(32 bits)

    val instr0_taken = BTB.is_matched_0 && (tageCondTaken0 || BTB.is_jmp_out_0 || BTB.is_call_out_0 || BTB.is_ret_out_0)

    val eff_call_matched = (BTB.is_matched_0 && BTB.is_call_out_0) ||
                           (!instr0_taken && BTB.is_matched_1 && BTB.is_call_out_1)
    val eff_ret_matched  = (BTB.is_matched_0 && BTB.is_ret_out_0) ||
                           (!instr0_taken && BTB.is_matched_1 && BTB.is_ret_out_1)

    val ras_push_data = (BTB.is_matched_0 && BTB.is_call_out_0) ? (predict_pc + 4) | (predict_pc + 8)

    // true RAS index at exe stage
    when(train_valid && train_is_call) {
      ras_next_index_proven := ras_curr_index_proven + 1
    } .elsewhen(train_valid && train_is_ret) {
      ras_next_index_proven := ras_curr_index_proven - 1
    } .otherwise {
      ras_next_index_proven := ras_curr_index_proven
    }

    // speculative RAS index
    when(train_mispredicted && train_valid && train_is_call) {
      ras_next_index := ras_curr_index_proven + 1
    } .elsewhen(train_mispredicted && train_valid && train_is_ret) {
      ras_next_index := ras_curr_index_proven - 1
    } .elsewhen(eff_call_matched) {
      ras_next_index := ras_curr_index + 1
    } .elsewhen(eff_ret_matched) {
      ras_next_index := ras_curr_index - 1
    } .otherwise {
      ras_next_index := ras_curr_index
    }

    // update RAS
    when(train_mispredicted && train_valid && train_is_call) {
      ras_regfile(ras_next_index) := train_pc + 4
    } .elsewhen(eff_call_matched) {
      ras_regfile(ras_next_index) := ras_push_data
    }

    ras_return_pc := ras_regfile(ras_curr_index)
  }

  // ===================== Training Logic =====================
  val trHit  = Vec(Bool(), NUM_TAGGED)
  val trPred = Vec(pu, NUM_TAGGED)
  for (t <- 0 until NUM_TAGGED) {
    val (h, p, _) = tagTables(t).readEntry(train_pc, ghr)
    trHit(t)  := h
    trPred(t) := p
  }

  val trProviderId   = UInt(log2Up(NUM_TAGGED + 1) bits)
  val trProviderPred = pu; // semi avoids { from being parsed as body
  val trAltPred      = pu; // semi avoids { from being parsed as body
  {
    val foundChain = Vec(Bool(), NUM_TAGGED + 1)
    val selOH      = Vec(Bool(), NUM_TAGGED)
    foundChain(NUM_TAGGED) := False
    for (t <- (0 until NUM_TAGGED).reverse) {
      foundChain(t) := foundChain(t + 1) || trHit(t)
      selOH(t)      := !foundChain(t + 1) && trHit(t)
    }
    trProviderId   := OHToUInt(selOH.asBits)
    trProviderPred := MuxOH(selOH.asBits, trPred)
  }
  {
    val altFoundChain = Vec(Bool(), NUM_TAGGED + 1)
    val altOH         = Vec(Bool(), NUM_TAGGED)
    altFoundChain(NUM_TAGGED) := False
    for (t <- (0 until NUM_TAGGED).reverse) {
      val isProvider = (t === trProviderId)
      altFoundChain(t) := altFoundChain(t + 1) || (trHit(t) && !isProvider)
      altOH(t)         := !altFoundChain(t + 1) && trHit(t) && !isProvider
    }
    trAltPred := MuxOH(altOH.asBits, trPred)
    when(!altFoundChain(0)) { trAltPred := bimodal(train_pc(log2Up(BIMODAL_SIZE)+1 downto 2)).resized }
  }

  val isCondBranch = !train_is_jmp && !train_is_call && !train_is_ret
  for (t <- 0 until NUM_TAGGED) {
    when(train_valid && trHit(t) && trProviderId === U(t)) {
      val newPred = updateCtrN(tagTables(t).entries(tagTables(t).index(train_pc, ghr)).pred, train_taken, PRED_MAX)
      tagTables(t).entries(tagTables(t).index(train_pc, ghr)).pred := newPred

      when(trProviderPred =/= trAltPred) {
        val idxU = tagTables(t).index(train_pc, ghr)
        when(train_taken === trProviderPred(PRED_CTR_BITS - 1)) {
          when(tagTables(t).entries(idxU).useful < USEFUL_MAX) {
            tagTables(t).entries(idxU).useful := tagTables(t).entries(idxU).useful + U(1)
          }
        } .otherwise {
          when(tagTables(t).entries(idxU).useful > U(0)) {
            tagTables(t).entries(idxU).useful := tagTables(t).entries(idxU).useful - U(1)
          }
        }
      }
    }
  }

  when(train_valid && isCondBranch) {
    val bmTrainIdx = train_pc(log2Up(BIMODAL_SIZE) + 1 downto 2)
    bimodal(bmTrainIdx) := updateCtr2(bimodal(bmTrainIdx), train_taken)
  }

  // ---- Allocation on misprediction ----
  val lfsr = Reg(UInt(RAND_BITS bits)) init(1)
  when(train_valid && train_mispredicted && isCondBranch) {
    val lfsrShift = (lfsr >> 1).resize(RAND_BITS)
    lfsr := Mux(lfsr(0), U"8'hB4" ^ lfsrShift, lfsrShift)
  }

  val remainingTables = UInt(log2Up(NUM_TAGGED) bits)
  val allocTargetTbl  = UInt(log2Up(NUM_TAGGED) bits)
  remainingTables := U(0)
  allocTargetTbl  := U(0)

  when(train_valid && train_mispredicted && isCondBranch) {
    remainingTables := U(NUM_TAGGED) - trProviderId - U(1)

    val allocOffset = UInt(log2Up(NUM_TAGGED) bits)
    allocOffset := U(0)
    when(remainingTables > U(0)) {
      allocOffset := (lfsr.resize(log2Up(NUM_TAGGED)) % remainingTables) + U(1)
      allocTargetTbl := trProviderId + allocOffset
    } .otherwise {
      allocTargetTbl := U(0)
    }
  }

  for (t <- 0 until NUM_TAGGED) {
    when(train_valid && train_mispredicted && isCondBranch && allocTargetTbl === U(t)) {
      when(remainingTables > U(0)) {
        val allocIdx = tagTables(t).index(train_pc, ghr)
        val allocTg  = tagTables(t).tag(train_pc, ghr)
        when(tagTables(t).entries(allocIdx).useful === U(0)) {
          tagTables(t).entries(allocIdx).valid := True
          tagTables(t).entries(allocIdx).tag   := allocTg
          tagTables(t).entries(allocIdx).pred  := PRED_INIT
        } .otherwise {
          tagTables(t).entries(allocIdx).useful := tagTables(t).entries(allocIdx).useful - U(1)
        }
      }
    }
  }

  // ===================== Output (pipelined, dual-issue) =====================
  val instr0_taken = BTB.is_matched_0 && (tageCondTaken0 || BTB.is_jmp_out_0 || BTB.is_call_out_0 || BTB.is_ret_out_0)

  val instr1_active = !instr0_taken
  val instr1_taken  = BTB.is_matched_1 && (tageCondTaken1 || BTB.is_jmp_out_1 || BTB.is_call_out_1 || BTB.is_ret_out_1)

  val eff_taken  = instr0_taken || (instr1_active && instr1_taken)
  val eff_is_ret = RAS.eff_ret_matched

  val tage_taken_comb = predict_valid && (eff_taken || eff_is_ret)

  // Target priority: RAS ret > instr0 branch > instr1 branch > fall-through (pc+8)
  val target_pc_comb = UInt(32 bits)
  when(eff_is_ret) {
    target_pc_comb := RAS.ras_return_pc
  } .elsewhen(instr0_taken) {
    target_pc_comb := BTB.target_pc_read_0
  } .elsewhen(instr1_active && instr1_taken) {
    target_pc_comb := BTB.target_pc_read_1
  } .otherwise {
    target_pc_comb := predict_pc + 8
  }

  val predict_history_comb = ghr(HISTORY_LEN - 1 downto 0).asUInt

  // Pipeline registers for timing closure
  val predict_taken_reg   = Reg(Bool()) init(False)
  val target_pc_reg       = Reg(UInt(32 bits)) init(0)
  val predict_history_reg = Reg(UInt(HISTORY_LEN bits)) init(0)

  predict_taken_reg   := tage_taken_comb
  target_pc_reg       := target_pc_comb
  predict_history_reg := predict_history_comb

  predict_taken   := predict_taken_reg
  target_pc       := target_pc_reg
  predict_history := predict_history_reg
}
