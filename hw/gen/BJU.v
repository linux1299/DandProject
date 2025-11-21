// Generator : SpinalHDL v1.8.1    git head : 2a7592004363e5b40ec43e1f122ed8641cd8965b
// Component : BJU
// Git hash  : f29d1de95b2b9aea3ec101573c63250a4bc0eea3

`timescale 1ns/1ps

module BJU (
  input               flush,
  input               bju_src_valid,
  output reg          bju_src_ready,
  input               bju_src_uop_com_rd_wen,
  input               bju_src_uop_com_src2_is_imm,
  input      [63:0]   bju_src_src1_data,
  input      [63:0]   bju_src_src2_data,
  input      [4:0]    bju_src_rd_addr,
  input      [31:0]   bju_src_pc,
  input      [31:0]   bju_src_instr,
  input               bju_src_older,
  input      [63:0]   bju_src_imm,
  input      [3:0]    bju_src_uop_bju_bju_ctrl_op,
  input               bju_src_uop_bju_bju_rd_eq_rs1,
  input               bju_src_uop_bju_bju_rd_is_link,
  input               bju_src_uop_bju_bju_rs1_is_link,
  input      [3:0]    bju_src_uop_bju_exp_ctrl_op,
  input      [11:0]   bju_src_uop_bju_exp_csr_addr,
  input               bju_src_uop_bju_exp_csr_wen,
  input      [31:0]   bju_src_branch_pc,
  input               bju_src_branch_taken,
  output              exe_dst_valid,
  input               exe_dst_ready,
  output     [63:0]   exe_dst_rd_data,
  output              exe_dst_rd_wen,
  output     [31:0]   exe_dst_pc,
  output     [31:0]   exe_dst_instr,
  output              exe_dst_older,
  output              redirect_valid,
  output     [31:0]   redirect_pc,
  output              train_valid,
  output     [31:0]   train_pc,
  output              train_taken,
  output              train_mispred,
  output     [4:0]    train_history,
  output     [31:0]   train_pc_next,
  output              train_is_call,
  output              train_is_ret,
  output              train_is_jmp,
  output              interrupt_valid,
  output     [31:0]   interrupt_pc,
  input               timer_int,
  input               clk,
  input               reset
);
  localparam BjuCtrlEnum_IDLE = 4'd0;
  localparam BjuCtrlEnum_AUIPC = 4'd1;
  localparam BjuCtrlEnum_JAL = 4'd2;
  localparam BjuCtrlEnum_JALR = 4'd3;
  localparam BjuCtrlEnum_BEQ = 4'd4;
  localparam BjuCtrlEnum_BNE = 4'd5;
  localparam BjuCtrlEnum_BLT = 4'd6;
  localparam BjuCtrlEnum_BGE = 4'd7;
  localparam BjuCtrlEnum_BLTU = 4'd8;
  localparam BjuCtrlEnum_BGEU = 4'd9;
  localparam BjuCtrlEnum_CSR = 4'd10;
  localparam ExpCtrlEnum_IDLE = 4'd0;
  localparam ExpCtrlEnum_ECALL = 4'd1;
  localparam ExpCtrlEnum_EBREAK = 4'd2;
  localparam ExpCtrlEnum_MRET = 4'd3;
  localparam ExpCtrlEnum_CSRRW = 4'd4;
  localparam ExpCtrlEnum_CSRRS = 4'd5;
  localparam ExpCtrlEnum_CSRRC = 4'd6;
  localparam ExpCtrlEnum_CSRRWI = 4'd7;
  localparam ExpCtrlEnum_CSRRSI = 4'd8;
  localparam ExpCtrlEnum_CSRRCI = 4'd9;

  wire                bju_kernel_1_uop_com_rd_wen;
  wire                bju_kernel_1_uop_com_src2_is_imm;
  wire       [63:0]   bju_kernel_1_rd_data;
  wire                bju_kernel_1_redirect_valid;
  wire       [31:0]   bju_kernel_1_redirect_pc;
  wire                bju_kernel_1_train_valid;
  wire       [31:0]   bju_kernel_1_train_pc;
  wire                bju_kernel_1_train_taken;
  wire                bju_kernel_1_train_mispred;
  wire       [4:0]    bju_kernel_1_train_history;
  wire       [31:0]   bju_kernel_1_train_pc_next;
  wire                bju_kernel_1_train_is_call;
  wire                bju_kernel_1_train_is_ret;
  wire                bju_kernel_1_train_is_jmp;
  wire                bju_kernel_1_interrupt_valid;
  wire       [31:0]   bju_kernel_1_interrupt_pc;
  reg                 src_stream_valid;
  wire                src_stream_ready;
  wire                src_stream_uop_com_rd_wen;
  wire                src_stream_uop_com_src2_is_imm;
  wire       [63:0]   src_stream_src1_data;
  wire       [63:0]   src_stream_src2_data;
  wire       [4:0]    src_stream_rd_addr;
  wire       [31:0]   src_stream_pc;
  wire       [31:0]   src_stream_instr;
  wire                src_stream_older;
  wire       [63:0]   src_stream_imm;
  wire       [3:0]    src_stream_uop_bju_bju_ctrl_op;
  wire                src_stream_uop_bju_bju_rd_eq_rs1;
  wire                src_stream_uop_bju_bju_rd_is_link;
  wire                src_stream_uop_bju_bju_rs1_is_link;
  wire       [3:0]    src_stream_uop_bju_exp_ctrl_op;
  wire       [11:0]   src_stream_uop_bju_exp_csr_addr;
  wire                src_stream_uop_bju_exp_csr_wen;
  wire       [31:0]   src_stream_branch_pc;
  wire                src_stream_branch_taken;
  wire                dst_stream_valid;
  reg                 dst_stream_ready;
  wire       [63:0]   dst_stream_rd_data;
  wire                dst_stream_rd_wen;
  wire       [31:0]   dst_stream_pc;
  wire       [31:0]   dst_stream_instr;
  wire                dst_stream_older;
  wire                src_stream_fire;
  wire                dst_stream_m2sPipe_valid;
  wire                dst_stream_m2sPipe_ready;
  wire       [63:0]   dst_stream_m2sPipe_rd_data;
  wire                dst_stream_m2sPipe_rd_wen;
  wire       [31:0]   dst_stream_m2sPipe_pc;
  wire       [31:0]   dst_stream_m2sPipe_instr;
  wire                dst_stream_m2sPipe_older;
  reg                 dst_stream_rValid;
  reg        [63:0]   dst_stream_rData_rd_data;
  reg                 dst_stream_rData_rd_wen;
  reg        [31:0]   dst_stream_rData_pc;
  reg        [31:0]   dst_stream_rData_instr;
  reg                 dst_stream_rData_older;
  `ifndef SYNTHESIS
  reg [39:0] bju_src_uop_bju_bju_ctrl_op_string;
  reg [47:0] bju_src_uop_bju_exp_ctrl_op_string;
  reg [39:0] src_stream_uop_bju_bju_ctrl_op_string;
  reg [47:0] src_stream_uop_bju_exp_ctrl_op_string;
  `endif


  BJU_kernel bju_kernel_1 (
    .in_valid                (src_stream_fire                      ), //i
    .uop_bju_bju_ctrl_op     (src_stream_uop_bju_bju_ctrl_op[3:0]  ), //i
    .uop_bju_bju_rd_eq_rs1   (src_stream_uop_bju_bju_rd_eq_rs1     ), //i
    .uop_bju_bju_rd_is_link  (src_stream_uop_bju_bju_rd_is_link    ), //i
    .uop_bju_bju_rs1_is_link (src_stream_uop_bju_bju_rs1_is_link   ), //i
    .uop_bju_exp_ctrl_op     (src_stream_uop_bju_exp_ctrl_op[3:0]  ), //i
    .uop_bju_exp_csr_addr    (src_stream_uop_bju_exp_csr_addr[11:0]), //i
    .uop_bju_exp_csr_wen     (src_stream_uop_bju_exp_csr_wen       ), //i
    .uop_com_rd_wen          (bju_kernel_1_uop_com_rd_wen          ), //i
    .uop_com_src2_is_imm     (bju_kernel_1_uop_com_src2_is_imm     ), //i
    .pc                      (src_stream_pc[31:0]                  ), //i
    .imm                     (src_stream_imm[63:0]                 ), //i
    .rs1_data                (src_stream_src1_data[63:0]           ), //i
    .rs2_data                (src_stream_src2_data[63:0]           ), //i
    .rd_data                 (bju_kernel_1_rd_data[63:0]           ), //o
    .branch_taken            (src_stream_branch_taken              ), //i
    .branch_pc               (src_stream_branch_pc[31:0]           ), //i
    .redirect_valid          (bju_kernel_1_redirect_valid          ), //o
    .redirect_pc             (bju_kernel_1_redirect_pc[31:0]       ), //o
    .train_valid             (bju_kernel_1_train_valid             ), //o
    .train_pc                (bju_kernel_1_train_pc[31:0]          ), //o
    .train_taken             (bju_kernel_1_train_taken             ), //o
    .train_mispred           (bju_kernel_1_train_mispred           ), //o
    .train_history           (bju_kernel_1_train_history[4:0]      ), //o
    .train_pc_next           (bju_kernel_1_train_pc_next[31:0]     ), //o
    .train_is_call           (bju_kernel_1_train_is_call           ), //o
    .train_is_ret            (bju_kernel_1_train_is_ret            ), //o
    .train_is_jmp            (bju_kernel_1_train_is_jmp            ), //o
    .interrupt_valid         (bju_kernel_1_interrupt_valid         ), //o
    .interrupt_pc            (bju_kernel_1_interrupt_pc[31:0]      ), //o
    .timer_int               (timer_int                            ), //i
    .clk                     (clk                                  ), //i
    .reset                   (reset                                )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(bju_src_uop_bju_bju_ctrl_op)
      BjuCtrlEnum_IDLE : bju_src_uop_bju_bju_ctrl_op_string = "IDLE ";
      BjuCtrlEnum_AUIPC : bju_src_uop_bju_bju_ctrl_op_string = "AUIPC";
      BjuCtrlEnum_JAL : bju_src_uop_bju_bju_ctrl_op_string = "JAL  ";
      BjuCtrlEnum_JALR : bju_src_uop_bju_bju_ctrl_op_string = "JALR ";
      BjuCtrlEnum_BEQ : bju_src_uop_bju_bju_ctrl_op_string = "BEQ  ";
      BjuCtrlEnum_BNE : bju_src_uop_bju_bju_ctrl_op_string = "BNE  ";
      BjuCtrlEnum_BLT : bju_src_uop_bju_bju_ctrl_op_string = "BLT  ";
      BjuCtrlEnum_BGE : bju_src_uop_bju_bju_ctrl_op_string = "BGE  ";
      BjuCtrlEnum_BLTU : bju_src_uop_bju_bju_ctrl_op_string = "BLTU ";
      BjuCtrlEnum_BGEU : bju_src_uop_bju_bju_ctrl_op_string = "BGEU ";
      BjuCtrlEnum_CSR : bju_src_uop_bju_bju_ctrl_op_string = "CSR  ";
      default : bju_src_uop_bju_bju_ctrl_op_string = "?????";
    endcase
  end
  always @(*) begin
    case(bju_src_uop_bju_exp_ctrl_op)
      ExpCtrlEnum_IDLE : bju_src_uop_bju_exp_ctrl_op_string = "IDLE  ";
      ExpCtrlEnum_ECALL : bju_src_uop_bju_exp_ctrl_op_string = "ECALL ";
      ExpCtrlEnum_EBREAK : bju_src_uop_bju_exp_ctrl_op_string = "EBREAK";
      ExpCtrlEnum_MRET : bju_src_uop_bju_exp_ctrl_op_string = "MRET  ";
      ExpCtrlEnum_CSRRW : bju_src_uop_bju_exp_ctrl_op_string = "CSRRW ";
      ExpCtrlEnum_CSRRS : bju_src_uop_bju_exp_ctrl_op_string = "CSRRS ";
      ExpCtrlEnum_CSRRC : bju_src_uop_bju_exp_ctrl_op_string = "CSRRC ";
      ExpCtrlEnum_CSRRWI : bju_src_uop_bju_exp_ctrl_op_string = "CSRRWI";
      ExpCtrlEnum_CSRRSI : bju_src_uop_bju_exp_ctrl_op_string = "CSRRSI";
      ExpCtrlEnum_CSRRCI : bju_src_uop_bju_exp_ctrl_op_string = "CSRRCI";
      default : bju_src_uop_bju_exp_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(src_stream_uop_bju_bju_ctrl_op)
      BjuCtrlEnum_IDLE : src_stream_uop_bju_bju_ctrl_op_string = "IDLE ";
      BjuCtrlEnum_AUIPC : src_stream_uop_bju_bju_ctrl_op_string = "AUIPC";
      BjuCtrlEnum_JAL : src_stream_uop_bju_bju_ctrl_op_string = "JAL  ";
      BjuCtrlEnum_JALR : src_stream_uop_bju_bju_ctrl_op_string = "JALR ";
      BjuCtrlEnum_BEQ : src_stream_uop_bju_bju_ctrl_op_string = "BEQ  ";
      BjuCtrlEnum_BNE : src_stream_uop_bju_bju_ctrl_op_string = "BNE  ";
      BjuCtrlEnum_BLT : src_stream_uop_bju_bju_ctrl_op_string = "BLT  ";
      BjuCtrlEnum_BGE : src_stream_uop_bju_bju_ctrl_op_string = "BGE  ";
      BjuCtrlEnum_BLTU : src_stream_uop_bju_bju_ctrl_op_string = "BLTU ";
      BjuCtrlEnum_BGEU : src_stream_uop_bju_bju_ctrl_op_string = "BGEU ";
      BjuCtrlEnum_CSR : src_stream_uop_bju_bju_ctrl_op_string = "CSR  ";
      default : src_stream_uop_bju_bju_ctrl_op_string = "?????";
    endcase
  end
  always @(*) begin
    case(src_stream_uop_bju_exp_ctrl_op)
      ExpCtrlEnum_IDLE : src_stream_uop_bju_exp_ctrl_op_string = "IDLE  ";
      ExpCtrlEnum_ECALL : src_stream_uop_bju_exp_ctrl_op_string = "ECALL ";
      ExpCtrlEnum_EBREAK : src_stream_uop_bju_exp_ctrl_op_string = "EBREAK";
      ExpCtrlEnum_MRET : src_stream_uop_bju_exp_ctrl_op_string = "MRET  ";
      ExpCtrlEnum_CSRRW : src_stream_uop_bju_exp_ctrl_op_string = "CSRRW ";
      ExpCtrlEnum_CSRRS : src_stream_uop_bju_exp_ctrl_op_string = "CSRRS ";
      ExpCtrlEnum_CSRRC : src_stream_uop_bju_exp_ctrl_op_string = "CSRRC ";
      ExpCtrlEnum_CSRRWI : src_stream_uop_bju_exp_ctrl_op_string = "CSRRWI";
      ExpCtrlEnum_CSRRSI : src_stream_uop_bju_exp_ctrl_op_string = "CSRRSI";
      ExpCtrlEnum_CSRRCI : src_stream_uop_bju_exp_ctrl_op_string = "CSRRCI";
      default : src_stream_uop_bju_exp_ctrl_op_string = "??????";
    endcase
  end
  `endif

  always @(*) begin
    src_stream_valid = bju_src_valid; // @ Stream.scala l294
    if(flush) begin
      src_stream_valid = 1'b0; // @ Stream.scala l439
    end
  end

  always @(*) begin
    bju_src_ready = src_stream_ready; // @ Stream.scala l295
    if(flush) begin
      bju_src_ready = 1'b1; // @ Stream.scala l440
    end
  end

  assign src_stream_uop_com_rd_wen = bju_src_uop_com_rd_wen; // @ Stream.scala l296
  assign src_stream_uop_com_src2_is_imm = bju_src_uop_com_src2_is_imm; // @ Stream.scala l296
  assign src_stream_src1_data = bju_src_src1_data; // @ Stream.scala l296
  assign src_stream_src2_data = bju_src_src2_data; // @ Stream.scala l296
  assign src_stream_rd_addr = bju_src_rd_addr; // @ Stream.scala l296
  assign src_stream_pc = bju_src_pc; // @ Stream.scala l296
  assign src_stream_instr = bju_src_instr; // @ Stream.scala l296
  assign src_stream_older = bju_src_older; // @ Stream.scala l296
  assign src_stream_imm = bju_src_imm; // @ Stream.scala l296
  assign src_stream_uop_bju_bju_ctrl_op = bju_src_uop_bju_bju_ctrl_op; // @ Stream.scala l296
  assign src_stream_uop_bju_bju_rd_eq_rs1 = bju_src_uop_bju_bju_rd_eq_rs1; // @ Stream.scala l296
  assign src_stream_uop_bju_bju_rd_is_link = bju_src_uop_bju_bju_rd_is_link; // @ Stream.scala l296
  assign src_stream_uop_bju_bju_rs1_is_link = bju_src_uop_bju_bju_rs1_is_link; // @ Stream.scala l296
  assign src_stream_uop_bju_exp_ctrl_op = bju_src_uop_bju_exp_ctrl_op; // @ Stream.scala l296
  assign src_stream_uop_bju_exp_csr_addr = bju_src_uop_bju_exp_csr_addr; // @ Stream.scala l296
  assign src_stream_uop_bju_exp_csr_wen = bju_src_uop_bju_exp_csr_wen; // @ Stream.scala l296
  assign src_stream_branch_pc = bju_src_branch_pc; // @ Stream.scala l296
  assign src_stream_branch_taken = bju_src_branch_taken; // @ Stream.scala l296
  assign src_stream_fire = (src_stream_valid && src_stream_ready); // @ BaseType.scala l305
  assign redirect_valid = bju_kernel_1_redirect_valid; // @ BJU.scala l255
  assign redirect_pc = bju_kernel_1_redirect_pc; // @ BJU.scala l256
  assign train_valid = bju_kernel_1_train_valid; // @ BJU.scala l257
  assign train_pc = bju_kernel_1_train_pc; // @ BJU.scala l258
  assign train_taken = bju_kernel_1_train_taken; // @ BJU.scala l259
  assign train_mispred = bju_kernel_1_train_mispred; // @ BJU.scala l260
  assign train_history = bju_kernel_1_train_history; // @ BJU.scala l261
  assign train_pc_next = bju_kernel_1_train_pc_next; // @ BJU.scala l262
  assign train_is_call = bju_kernel_1_train_is_call; // @ BJU.scala l263
  assign train_is_ret = bju_kernel_1_train_is_ret; // @ BJU.scala l264
  assign train_is_jmp = bju_kernel_1_train_is_jmp; // @ BJU.scala l265
  assign interrupt_valid = bju_kernel_1_interrupt_valid; // @ BJU.scala l266
  assign interrupt_pc = bju_kernel_1_interrupt_pc; // @ BJU.scala l267
  assign src_stream_ready = dst_stream_ready; // @ BJU.scala l271
  assign dst_stream_valid = src_stream_valid; // @ BJU.scala l272
  assign dst_stream_rd_data = bju_kernel_1_rd_data; // @ BJU.scala l273
  assign dst_stream_rd_wen = src_stream_uop_com_rd_wen; // @ BJU.scala l274
  assign dst_stream_older = src_stream_older; // @ BJU.scala l275
  assign dst_stream_pc = src_stream_pc; // @ BJU.scala l276
  assign dst_stream_instr = src_stream_instr; // @ BJU.scala l277
  always @(*) begin
    dst_stream_ready = dst_stream_m2sPipe_ready; // @ Stream.scala l367
    if((! dst_stream_m2sPipe_valid)) begin
      dst_stream_ready = 1'b1; // @ Stream.scala l368
    end
  end

  assign dst_stream_m2sPipe_valid = dst_stream_rValid; // @ Stream.scala l370
  assign dst_stream_m2sPipe_rd_data = dst_stream_rData_rd_data; // @ Stream.scala l371
  assign dst_stream_m2sPipe_rd_wen = dst_stream_rData_rd_wen; // @ Stream.scala l371
  assign dst_stream_m2sPipe_pc = dst_stream_rData_pc; // @ Stream.scala l371
  assign dst_stream_m2sPipe_instr = dst_stream_rData_instr; // @ Stream.scala l371
  assign dst_stream_m2sPipe_older = dst_stream_rData_older; // @ Stream.scala l371
  assign exe_dst_valid = dst_stream_m2sPipe_valid; // @ Stream.scala l294
  assign dst_stream_m2sPipe_ready = exe_dst_ready; // @ Stream.scala l295
  assign exe_dst_rd_data = dst_stream_m2sPipe_rd_data; // @ Stream.scala l296
  assign exe_dst_rd_wen = dst_stream_m2sPipe_rd_wen; // @ Stream.scala l296
  assign exe_dst_pc = dst_stream_m2sPipe_pc; // @ Stream.scala l296
  assign exe_dst_instr = dst_stream_m2sPipe_instr; // @ Stream.scala l296
  assign exe_dst_older = dst_stream_m2sPipe_older; // @ Stream.scala l296
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      dst_stream_rValid <= 1'b0; // @ Data.scala l400
    end else begin
      if(dst_stream_ready) begin
        dst_stream_rValid <= dst_stream_valid; // @ Stream.scala l361
      end
    end
  end

  always @(posedge clk) begin
    if(dst_stream_ready) begin
      dst_stream_rData_rd_data <= dst_stream_rd_data; // @ Stream.scala l362
      dst_stream_rData_rd_wen <= dst_stream_rd_wen; // @ Stream.scala l362
      dst_stream_rData_pc <= dst_stream_pc; // @ Stream.scala l362
      dst_stream_rData_instr <= dst_stream_instr; // @ Stream.scala l362
      dst_stream_rData_older <= dst_stream_older; // @ Stream.scala l362
    end
  end


endmodule

module BJU_kernel (
  input               in_valid,
  input      [3:0]    uop_bju_bju_ctrl_op,
  input               uop_bju_bju_rd_eq_rs1,
  input               uop_bju_bju_rd_is_link,
  input               uop_bju_bju_rs1_is_link,
  input      [3:0]    uop_bju_exp_ctrl_op,
  input      [11:0]   uop_bju_exp_csr_addr,
  input               uop_bju_exp_csr_wen,
  input               uop_com_rd_wen,
  input               uop_com_src2_is_imm,
  input      [31:0]   pc,
  input      [63:0]   imm,
  input      [63:0]   rs1_data,
  input      [63:0]   rs2_data,
  output     [63:0]   rd_data,
  input               branch_taken,
  input      [31:0]   branch_pc,
  output reg          redirect_valid,
  output reg [31:0]   redirect_pc,
  output              train_valid,
  output     [31:0]   train_pc,
  output              train_taken,
  output              train_mispred,
  output     [4:0]    train_history,
  output     [31:0]   train_pc_next,
  output              train_is_call,
  output              train_is_ret,
  output              train_is_jmp,
  output              interrupt_valid,
  output     [31:0]   interrupt_pc,
  input               timer_int,
  input               clk,
  input               reset
);
  localparam BjuCtrlEnum_IDLE = 4'd0;
  localparam BjuCtrlEnum_AUIPC = 4'd1;
  localparam BjuCtrlEnum_JAL = 4'd2;
  localparam BjuCtrlEnum_JALR = 4'd3;
  localparam BjuCtrlEnum_BEQ = 4'd4;
  localparam BjuCtrlEnum_BNE = 4'd5;
  localparam BjuCtrlEnum_BLT = 4'd6;
  localparam BjuCtrlEnum_BGE = 4'd7;
  localparam BjuCtrlEnum_BLTU = 4'd8;
  localparam BjuCtrlEnum_BGEU = 4'd9;
  localparam BjuCtrlEnum_CSR = 4'd10;
  localparam ExpCtrlEnum_IDLE = 4'd0;
  localparam ExpCtrlEnum_ECALL = 4'd1;
  localparam ExpCtrlEnum_EBREAK = 4'd2;
  localparam ExpCtrlEnum_MRET = 4'd3;
  localparam ExpCtrlEnum_CSRRW = 4'd4;
  localparam ExpCtrlEnum_CSRRS = 4'd5;
  localparam ExpCtrlEnum_CSRRC = 4'd6;
  localparam ExpCtrlEnum_CSRRWI = 4'd7;
  localparam ExpCtrlEnum_CSRRSI = 4'd8;
  localparam ExpCtrlEnum_CSRRCI = 4'd9;

  wire                clint_1_ecall;
  wire                clint_1_ebreak;
  wire                clint_1_mret;
  wire       [63:0]   csr_regfile_cpu_ports_rdata;
  wire       [63:0]   csr_regfile_clint_ports_mtvec;
  wire       [63:0]   csr_regfile_clint_ports_mepc;
  wire       [63:0]   csr_regfile_clint_ports_mstatus;
  wire                csr_regfile_clint_ports_global_int_en;
  wire                csr_regfile_clint_ports_mtime_int_en;
  wire                csr_regfile_clint_ports_mtime_int_pend;
  wire                clint_1_csr_ports_mepc_wen;
  wire       [63:0]   clint_1_csr_ports_mepc_wdata;
  wire                clint_1_csr_ports_mcause_wen;
  wire       [63:0]   clint_1_csr_ports_mcause_wdata;
  wire                clint_1_csr_ports_mstatus_wen;
  wire       [63:0]   clint_1_csr_ports_mstatus_wdata;
  wire                clint_1_int_en;
  wire       [31:0]   clint_1_int_pc;
  wire       [63:0]   tmp_blt_result;
  wire       [63:0]   tmp_blt_result_1;
  wire       [63:0]   tmp_bge_result;
  wire       [63:0]   tmp_bge_result_1;
  wire       [63:0]   tmp_pc_next;
  wire       [63:0]   tmp_pc_next_1;
  wire       [63:0]   tmp_pc_next_2;
  wire       [63:0]   tmp_pc_next_3;
  wire       [63:0]   tmp_pc_next_4;
  wire       [63:0]   tmp_pc_next_5;
  wire       [63:0]   tmp_pc_next_6;
  wire       [63:0]   tmp_pc_next_7;
  wire       [63:0]   tmp_pc_next_8;
  wire       [63:0]   tmp_pc_next_9;
  wire       [31:0]   tmp_pc_next_10;
  wire       [63:0]   tmp_pc_next_11;
  wire       [63:0]   tmp_rd_data;
  wire       [63:0]   tmp_rd_data_1;
  wire       [63:0]   csr_rdata;
  reg        [31:0]   pc_next;
  wire                auipc;
  wire                jal;
  wire                jalr;
  wire                beq;
  wire                bne;
  wire                blt;
  wire                bge;
  wire                bltu;
  wire                bgeu;
  wire                csr;
  wire                branch_or_jalr;
  wire                branch_or_jump;
  reg                 is_call;
  reg                 is_ret;
  reg                 is_jmp;
  wire                beq_result;
  wire                bne_result;
  wire                blt_result;
  wire                bge_result;
  wire                bltu_result;
  wire                bgeu_result;
  wire                real_taken;
  reg        [4:0]    branch_history;
  wire       [63:0]   src2;
  reg        [63:0]   csr_wdata;
  wire       [63:0]   csrrs_wdata;
  wire       [63:0]   csrrc_wdata;
  wire       [63:0]   csrrsi_wdata;
  wire       [63:0]   csrrci_wdata;
  wire                csr_wen;
  reg        [63:0]   csr_wdata_regNext;
  reg                 csr_wen_regNext;
  reg        [11:0]   uop_bju_exp_csr_addr_regNext;
  `ifndef SYNTHESIS
  reg [39:0] uop_bju_bju_ctrl_op_string;
  reg [47:0] uop_bju_exp_ctrl_op_string;
  `endif


  assign tmp_blt_result = rs1_data;
  assign tmp_blt_result_1 = rs2_data;
  assign tmp_bge_result = rs2_data;
  assign tmp_bge_result_1 = rs1_data;
  assign tmp_pc_next = tmp_pc_next_1;
  assign tmp_pc_next_1 = (tmp_pc_next_2 & tmp_pc_next_5);
  assign tmp_pc_next_2 = ($signed(tmp_pc_next_3) + $signed(tmp_pc_next_4));
  assign tmp_pc_next_3 = rs1_data;
  assign tmp_pc_next_4 = imm;
  assign tmp_pc_next_5 = (~ tmp_pc_next_6);
  assign tmp_pc_next_6 = 64'h0000000000000001;
  assign tmp_pc_next_7 = tmp_pc_next_8;
  assign tmp_pc_next_8 = ($signed(tmp_pc_next_9) + $signed(tmp_pc_next_11));
  assign tmp_pc_next_10 = pc;
  assign tmp_pc_next_9 = {{32{tmp_pc_next_10[31]}}, tmp_pc_next_10};
  assign tmp_pc_next_11 = imm;
  assign tmp_rd_data = (tmp_rd_data_1 + src2);
  assign tmp_rd_data_1 = {32'd0, pc};
  CsrRegfile csr_regfile (
    .cpu_ports_waddr            (uop_bju_exp_csr_addr_regNext[11:0]    ), //i
    .cpu_ports_wen              (csr_wen_regNext                       ), //i
    .cpu_ports_wdata            (csr_wdata_regNext[63:0]               ), //i
    .cpu_ports_raddr            (uop_bju_exp_csr_addr[11:0]            ), //i
    .cpu_ports_rdata            (csr_regfile_cpu_ports_rdata[63:0]     ), //o
    .clint_ports_mepc_wen       (clint_1_csr_ports_mepc_wen            ), //i
    .clint_ports_mepc_wdata     (clint_1_csr_ports_mepc_wdata[63:0]    ), //i
    .clint_ports_mcause_wen     (clint_1_csr_ports_mcause_wen          ), //i
    .clint_ports_mcause_wdata   (clint_1_csr_ports_mcause_wdata[63:0]  ), //i
    .clint_ports_mstatus_wen    (clint_1_csr_ports_mstatus_wen         ), //i
    .clint_ports_mstatus_wdata  (clint_1_csr_ports_mstatus_wdata[63:0] ), //i
    .clint_ports_mtvec          (csr_regfile_clint_ports_mtvec[63:0]   ), //o
    .clint_ports_mepc           (csr_regfile_clint_ports_mepc[63:0]    ), //o
    .clint_ports_mstatus        (csr_regfile_clint_ports_mstatus[63:0] ), //o
    .clint_ports_global_int_en  (csr_regfile_clint_ports_global_int_en ), //o
    .clint_ports_mtime_int_en   (csr_regfile_clint_ports_mtime_int_en  ), //o
    .clint_ports_mtime_int_pend (csr_regfile_clint_ports_mtime_int_pend), //o
    .timer_int                  (timer_int                             ), //i
    .clk                        (clk                                   ), //i
    .reset                      (reset                                 )  //i
  );
  Clint clint_1 (
    .pc                       (pc[31:0]                              ), //i
    .pc_next                  (redirect_pc[31:0]                     ), //i
    .csr_ports_mepc_wen       (clint_1_csr_ports_mepc_wen            ), //o
    .csr_ports_mepc_wdata     (clint_1_csr_ports_mepc_wdata[63:0]    ), //o
    .csr_ports_mcause_wen     (clint_1_csr_ports_mcause_wen          ), //o
    .csr_ports_mcause_wdata   (clint_1_csr_ports_mcause_wdata[63:0]  ), //o
    .csr_ports_mstatus_wen    (clint_1_csr_ports_mstatus_wen         ), //o
    .csr_ports_mstatus_wdata  (clint_1_csr_ports_mstatus_wdata[63:0] ), //o
    .csr_ports_mtvec          (csr_regfile_clint_ports_mtvec[63:0]   ), //i
    .csr_ports_mepc           (csr_regfile_clint_ports_mepc[63:0]    ), //i
    .csr_ports_mstatus        (csr_regfile_clint_ports_mstatus[63:0] ), //i
    .csr_ports_global_int_en  (csr_regfile_clint_ports_global_int_en ), //i
    .csr_ports_mtime_int_en   (csr_regfile_clint_ports_mtime_int_en  ), //i
    .csr_ports_mtime_int_pend (csr_regfile_clint_ports_mtime_int_pend), //i
    .timer_int                (timer_int                             ), //i
    .int_en                   (clint_1_int_en                        ), //o
    .int_pc                   (clint_1_int_pc[31:0]                  ), //o
    .ecall                    (clint_1_ecall                         ), //i
    .ebreak                   (clint_1_ebreak                        ), //i
    .mret                     (clint_1_mret                          )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(uop_bju_bju_ctrl_op)
      BjuCtrlEnum_IDLE : uop_bju_bju_ctrl_op_string = "IDLE ";
      BjuCtrlEnum_AUIPC : uop_bju_bju_ctrl_op_string = "AUIPC";
      BjuCtrlEnum_JAL : uop_bju_bju_ctrl_op_string = "JAL  ";
      BjuCtrlEnum_JALR : uop_bju_bju_ctrl_op_string = "JALR ";
      BjuCtrlEnum_BEQ : uop_bju_bju_ctrl_op_string = "BEQ  ";
      BjuCtrlEnum_BNE : uop_bju_bju_ctrl_op_string = "BNE  ";
      BjuCtrlEnum_BLT : uop_bju_bju_ctrl_op_string = "BLT  ";
      BjuCtrlEnum_BGE : uop_bju_bju_ctrl_op_string = "BGE  ";
      BjuCtrlEnum_BLTU : uop_bju_bju_ctrl_op_string = "BLTU ";
      BjuCtrlEnum_BGEU : uop_bju_bju_ctrl_op_string = "BGEU ";
      BjuCtrlEnum_CSR : uop_bju_bju_ctrl_op_string = "CSR  ";
      default : uop_bju_bju_ctrl_op_string = "?????";
    endcase
  end
  always @(*) begin
    case(uop_bju_exp_ctrl_op)
      ExpCtrlEnum_IDLE : uop_bju_exp_ctrl_op_string = "IDLE  ";
      ExpCtrlEnum_ECALL : uop_bju_exp_ctrl_op_string = "ECALL ";
      ExpCtrlEnum_EBREAK : uop_bju_exp_ctrl_op_string = "EBREAK";
      ExpCtrlEnum_MRET : uop_bju_exp_ctrl_op_string = "MRET  ";
      ExpCtrlEnum_CSRRW : uop_bju_exp_ctrl_op_string = "CSRRW ";
      ExpCtrlEnum_CSRRS : uop_bju_exp_ctrl_op_string = "CSRRS ";
      ExpCtrlEnum_CSRRC : uop_bju_exp_ctrl_op_string = "CSRRC ";
      ExpCtrlEnum_CSRRWI : uop_bju_exp_ctrl_op_string = "CSRRWI";
      ExpCtrlEnum_CSRRSI : uop_bju_exp_ctrl_op_string = "CSRRSI";
      ExpCtrlEnum_CSRRCI : uop_bju_exp_ctrl_op_string = "CSRRCI";
      default : uop_bju_exp_ctrl_op_string = "??????";
    endcase
  end
  `endif

  assign auipc = (uop_bju_bju_ctrl_op == BjuCtrlEnum_AUIPC); // @ BaseType.scala l305
  assign jal = (uop_bju_bju_ctrl_op == BjuCtrlEnum_JAL); // @ BaseType.scala l305
  assign jalr = (uop_bju_bju_ctrl_op == BjuCtrlEnum_JALR); // @ BaseType.scala l305
  assign beq = (uop_bju_bju_ctrl_op == BjuCtrlEnum_BEQ); // @ BaseType.scala l305
  assign bne = (uop_bju_bju_ctrl_op == BjuCtrlEnum_BNE); // @ BaseType.scala l305
  assign blt = (uop_bju_bju_ctrl_op == BjuCtrlEnum_BLT); // @ BaseType.scala l305
  assign bge = (uop_bju_bju_ctrl_op == BjuCtrlEnum_BGE); // @ BaseType.scala l305
  assign bltu = (uop_bju_bju_ctrl_op == BjuCtrlEnum_BLTU); // @ BaseType.scala l305
  assign bgeu = (uop_bju_bju_ctrl_op == BjuCtrlEnum_BGEU); // @ BaseType.scala l305
  assign csr = (uop_bju_bju_ctrl_op == BjuCtrlEnum_CSR); // @ BaseType.scala l305
  assign branch_or_jalr = ((((((jalr || beq) || bne) || blt) || bge) || bltu) || bgeu); // @ BaseType.scala l305
  assign branch_or_jump = (branch_or_jalr || jal); // @ BaseType.scala l305
  always @(*) begin
    is_call = 1'b0; // @ BJU.scala l65
    if(jal) begin
      if(uop_bju_bju_rd_is_link) begin
        is_call = 1'b1; // @ BJU.scala l109
      end else begin
        is_call = 1'b0; // @ BJU.scala l113
      end
    end else begin
      if(jalr) begin
        if(uop_bju_bju_rd_is_link) begin
          if(uop_bju_bju_rs1_is_link) begin
            if(uop_bju_bju_rd_eq_rs1) begin
              is_call = 1'b1; // @ BJU.scala l131
            end else begin
              is_call = 1'b1; // @ BJU.scala l133
            end
          end else begin
            is_call = 1'b1; // @ BJU.scala l137
          end
        end
      end
    end
  end

  always @(*) begin
    is_ret = 1'b0; // @ BJU.scala l66
    if(jal) begin
      if(uop_bju_bju_rd_is_link) begin
        is_ret = 1'b0; // @ BJU.scala l110
      end else begin
        is_ret = 1'b0; // @ BJU.scala l114
      end
    end else begin
      if(jalr) begin
        if(uop_bju_bju_rd_is_link) begin
          if(uop_bju_bju_rs1_is_link) begin
            if(!uop_bju_bju_rd_eq_rs1) begin
              is_ret = 1'b1; // @ BJU.scala l134
            end
          end
        end else begin
          if(uop_bju_bju_rs1_is_link) begin
            is_ret = 1'b1; // @ BJU.scala l141
          end
        end
      end
    end
  end

  always @(*) begin
    is_jmp = 1'b0; // @ BJU.scala l67
    if(jal) begin
      if(uop_bju_bju_rd_is_link) begin
        is_jmp = 1'b0; // @ BJU.scala l111
      end else begin
        is_jmp = 1'b1; // @ BJU.scala l115
      end
    end else begin
      if(jalr) begin
        if(!uop_bju_bju_rd_is_link) begin
          if(!uop_bju_bju_rs1_is_link) begin
            is_jmp = 1'b1; // @ BJU.scala l143
          end
        end
      end
    end
  end

  assign beq_result = (beq && (rs1_data == rs2_data)); // @ BaseType.scala l305
  assign bne_result = (bne && (rs1_data != rs2_data)); // @ BaseType.scala l305
  assign blt_result = (blt && ($signed(tmp_blt_result) < $signed(tmp_blt_result_1))); // @ BaseType.scala l305
  assign bge_result = (bge && ($signed(tmp_bge_result) <= $signed(tmp_bge_result_1))); // @ BaseType.scala l305
  assign bltu_result = (bltu && (rs1_data < rs2_data)); // @ BaseType.scala l305
  assign bgeu_result = (bgeu && (rs2_data <= rs1_data)); // @ BaseType.scala l305
  assign real_taken = (((((((beq_result || bne_result) || blt_result) || bge_result) || bltu_result) || bgeu_result) || jal) || jalr); // @ BaseType.scala l305
  always @(*) begin
    if(jalr) begin
      pc_next = tmp_pc_next[31:0]; // @ BJU.scala l85
    end else begin
      pc_next = tmp_pc_next_7[31:0]; // @ BJU.scala l87
    end
  end

  always @(*) begin
    redirect_valid = 1'b0; // @ BJU.scala l90
    if(branch_or_jump) begin
      if(real_taken) begin
        if(((! branch_taken) || (branch_pc != pc_next))) begin
          redirect_valid = in_valid; // @ BJU.scala l95
        end
      end else begin
        if(branch_taken) begin
          redirect_valid = in_valid; // @ BJU.scala l101
        end
      end
    end
  end

  always @(*) begin
    redirect_pc = 32'h0; // @ BJU.scala l91
    if(branch_or_jump) begin
      if(real_taken) begin
        if(((! branch_taken) || (branch_pc != pc_next))) begin
          redirect_pc = pc_next; // @ BJU.scala l96
        end
      end else begin
        if(branch_taken) begin
          redirect_pc = (pc + 32'h00000004); // @ BJU.scala l102
        end
      end
    end
  end

  assign src2 = ((jal || jalr) ? 64'h0000000000000004 : rs2_data); // @ Expression.scala l1431
  assign rd_data = (csr ? csr_rdata : tmp_rd_data); // @ BJU.scala l151
  assign train_valid = (in_valid && branch_or_jump); // @ BJU.scala l154
  assign train_pc = pc; // @ BJU.scala l155
  assign train_taken = real_taken; // @ BJU.scala l156
  assign train_mispred = redirect_valid; // @ BJU.scala l157
  assign train_history = branch_history; // @ BJU.scala l158
  assign train_pc_next = redirect_pc; // @ BJU.scala l159
  assign train_is_call = is_call; // @ BJU.scala l160
  assign train_is_ret = is_ret; // @ BJU.scala l161
  assign train_is_jmp = is_jmp; // @ BJU.scala l162
  assign csr_rdata = csr_regfile_cpu_ports_rdata; // @ BJU.scala l168
  assign clint_1_ecall = (in_valid && (uop_bju_exp_ctrl_op == ExpCtrlEnum_ECALL)); // @ BJU.scala l171
  assign clint_1_ebreak = (in_valid && (uop_bju_exp_ctrl_op == ExpCtrlEnum_EBREAK)); // @ BJU.scala l172
  assign clint_1_mret = (in_valid && (uop_bju_exp_ctrl_op == ExpCtrlEnum_MRET)); // @ BJU.scala l173
  assign csrrs_wdata = (rs1_data | csr_rdata); // @ BaseType.scala l299
  assign csrrc_wdata = ((~ rs1_data) & csr_rdata); // @ BaseType.scala l299
  assign csrrsi_wdata = (imm | csr_rdata); // @ BaseType.scala l299
  assign csrrci_wdata = ((~ imm) & csr_rdata); // @ BaseType.scala l299
  assign csr_wen = (in_valid && uop_bju_exp_csr_wen); // @ BaseType.scala l305
  always @(*) begin
    case(uop_bju_exp_ctrl_op)
      ExpCtrlEnum_CSRRW : begin
        csr_wdata = rs1_data; // @ BJU.scala l185
      end
      ExpCtrlEnum_CSRRS : begin
        csr_wdata = csrrs_wdata; // @ BJU.scala l188
      end
      ExpCtrlEnum_CSRRC : begin
        csr_wdata = csrrc_wdata; // @ BJU.scala l191
      end
      ExpCtrlEnum_CSRRWI : begin
        csr_wdata = imm; // @ BJU.scala l194
      end
      ExpCtrlEnum_CSRRSI : begin
        csr_wdata = csrrsi_wdata; // @ BJU.scala l197
      end
      ExpCtrlEnum_CSRRCI : begin
        csr_wdata = csrrci_wdata; // @ BJU.scala l200
      end
      default : begin
        csr_wdata = 64'h0; // @ BJU.scala l203
      end
    endcase
  end

  assign interrupt_valid = clint_1_int_en; // @ BJU.scala l212
  assign interrupt_pc = clint_1_int_pc; // @ BJU.scala l213
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      branch_history <= 5'h0; // @ Data.scala l400
    end else begin
      if(in_valid) begin
        branch_history <= {branch_history[3 : 0],real_taken}; // @ BJU.scala l81
      end
    end
  end

  always @(posedge clk) begin
    csr_wdata_regNext <= csr_wdata; // @ Reg.scala l39
    csr_wen_regNext <= csr_wen; // @ Reg.scala l39
    uop_bju_exp_csr_addr_regNext <= uop_bju_exp_csr_addr; // @ Reg.scala l39
  end


endmodule

module Clint (
  input      [31:0]   pc,
  input      [31:0]   pc_next,
  output reg          csr_ports_mepc_wen,
  output reg [63:0]   csr_ports_mepc_wdata,
  output reg          csr_ports_mcause_wen,
  output reg [63:0]   csr_ports_mcause_wdata,
  output reg          csr_ports_mstatus_wen,
  output reg [63:0]   csr_ports_mstatus_wdata,
  input      [63:0]   csr_ports_mtvec,
  input      [63:0]   csr_ports_mepc,
  input      [63:0]   csr_ports_mstatus,
  input               csr_ports_global_int_en,
  input               csr_ports_mtime_int_en,
  input               csr_ports_mtime_int_pend,
  input               timer_int,
  output reg          int_en,
  output reg [31:0]   int_pc,
  input               ecall,
  input               ebreak,
  input               mret
);
  localparam ExceptionEnum_IDLE = 3'd0;
  localparam ExceptionEnum_ECALL = 3'd1;
  localparam ExceptionEnum_EBREAK = 3'd2;
  localparam ExceptionEnum_MRET = 3'd3;
  localparam ExceptionEnum_TIME_1 = 3'd4;

  wire       [31:0]   tmp_mepc_wdata;
  wire       [31:0]   tmp_mepc_wdata_1;
  wire       [63:0]   tmp_int_pc;
  wire       [63:0]   tmp_int_pc_1;
  reg        [2:0]    int_state;
  reg        [63:0]   mepc_wdata;
  reg        [63:0]   mcause_wdata;
  `ifndef SYNTHESIS
  reg [47:0] int_state_string;
  `endif


  assign tmp_mepc_wdata = pc_next;
  assign tmp_mepc_wdata_1 = pc;
  assign tmp_int_pc = csr_ports_mtvec;
  assign tmp_int_pc_1 = csr_ports_mepc;
  `ifndef SYNTHESIS
  always @(*) begin
    case(int_state)
      ExceptionEnum_IDLE : int_state_string = "IDLE  ";
      ExceptionEnum_ECALL : int_state_string = "ECALL ";
      ExceptionEnum_EBREAK : int_state_string = "EBREAK";
      ExceptionEnum_MRET : int_state_string = "MRET  ";
      ExceptionEnum_TIME_1 : int_state_string = "TIME_1";
      default : int_state_string = "??????";
    endcase
  end
  `endif

  always @(*) begin
    if(ecall) begin
      int_state = ExceptionEnum_ECALL; // @ Enum.scala l151
    end else begin
      if(ebreak) begin
        int_state = ExceptionEnum_EBREAK; // @ Enum.scala l151
      end else begin
        if(((csr_ports_global_int_en && csr_ports_mtime_int_en) && timer_int)) begin
          int_state = ExceptionEnum_TIME_1; // @ Enum.scala l151
        end else begin
          if(mret) begin
            int_state = ExceptionEnum_MRET; // @ Enum.scala l151
          end else begin
            int_state = ExceptionEnum_IDLE; // @ Enum.scala l151
          end
        end
      end
    end
  end

  always @(*) begin
    if((int_state == ExceptionEnum_TIME_1)) begin
      mepc_wdata = {32'd0, tmp_mepc_wdata}; // @ Exception.scala l154
    end else begin
      mepc_wdata = {32'd0, tmp_mepc_wdata_1}; // @ Exception.scala l157
    end
  end

  always @(*) begin
    if((int_state == ExceptionEnum_ECALL)) begin
      mcause_wdata = 64'h000000000000000b; // @ Exception.scala l162
    end else begin
      if((int_state == ExceptionEnum_EBREAK)) begin
        mcause_wdata = 64'h0000000000000003; // @ Exception.scala l165
      end else begin
        if((int_state == ExceptionEnum_TIME_1)) begin
          mcause_wdata = 64'h8000000000000007; // @ Exception.scala l168
        end else begin
          mcause_wdata = 64'h0; // @ Exception.scala l171
        end
      end
    end
  end

  always @(*) begin
    case(int_state)
      ExceptionEnum_ECALL, ExceptionEnum_EBREAK, ExceptionEnum_TIME_1 : begin
        int_en = 1'b1; // @ Exception.scala l177
      end
      ExceptionEnum_MRET : begin
        int_en = 1'b1; // @ Exception.scala l188
      end
      default : begin
        int_en = 1'b0; // @ Exception.scala l199
      end
    endcase
  end

  always @(*) begin
    case(int_state)
      ExceptionEnum_ECALL, ExceptionEnum_EBREAK, ExceptionEnum_TIME_1 : begin
        int_pc = tmp_int_pc[31:0]; // @ Exception.scala l178
      end
      ExceptionEnum_MRET : begin
        int_pc = tmp_int_pc_1[31:0]; // @ Exception.scala l189
      end
      default : begin
        int_pc = 32'h0; // @ Exception.scala l200
      end
    endcase
  end

  always @(*) begin
    case(int_state)
      ExceptionEnum_ECALL, ExceptionEnum_EBREAK, ExceptionEnum_TIME_1 : begin
        csr_ports_mepc_wen = 1'b1; // @ Exception.scala l179
      end
      ExceptionEnum_MRET : begin
        csr_ports_mepc_wen = 1'b0; // @ Exception.scala l190
      end
      default : begin
        csr_ports_mepc_wen = 1'b0; // @ Exception.scala l201
      end
    endcase
  end

  always @(*) begin
    case(int_state)
      ExceptionEnum_ECALL, ExceptionEnum_EBREAK, ExceptionEnum_TIME_1 : begin
        csr_ports_mcause_wen = 1'b1; // @ Exception.scala l180
      end
      ExceptionEnum_MRET : begin
        csr_ports_mcause_wen = 1'b0; // @ Exception.scala l191
      end
      default : begin
        csr_ports_mcause_wen = 1'b0; // @ Exception.scala l202
      end
    endcase
  end

  always @(*) begin
    case(int_state)
      ExceptionEnum_ECALL, ExceptionEnum_EBREAK, ExceptionEnum_TIME_1 : begin
        csr_ports_mstatus_wen = 1'b1; // @ Exception.scala l181
      end
      ExceptionEnum_MRET : begin
        csr_ports_mstatus_wen = 1'b1; // @ Exception.scala l192
      end
      default : begin
        csr_ports_mstatus_wen = 1'b0; // @ Exception.scala l203
      end
    endcase
  end

  always @(*) begin
    case(int_state)
      ExceptionEnum_ECALL, ExceptionEnum_EBREAK, ExceptionEnum_TIME_1 : begin
        csr_ports_mepc_wdata = mepc_wdata; // @ Exception.scala l182
      end
      ExceptionEnum_MRET : begin
        csr_ports_mepc_wdata = 64'h0; // @ Exception.scala l193
      end
      default : begin
        csr_ports_mepc_wdata = 64'h0; // @ Exception.scala l204
      end
    endcase
  end

  always @(*) begin
    case(int_state)
      ExceptionEnum_ECALL, ExceptionEnum_EBREAK, ExceptionEnum_TIME_1 : begin
        csr_ports_mcause_wdata = mcause_wdata; // @ Exception.scala l183
      end
      ExceptionEnum_MRET : begin
        csr_ports_mcause_wdata = 64'h0; // @ Exception.scala l194
      end
      default : begin
        csr_ports_mcause_wdata = 64'h0; // @ Exception.scala l205
      end
    endcase
  end

  always @(*) begin
    case(int_state)
      ExceptionEnum_ECALL, ExceptionEnum_EBREAK, ExceptionEnum_TIME_1 : begin
        csr_ports_mstatus_wdata = {{{{csr_ports_mstatus[63 : 8],csr_ports_mstatus[3]},csr_ports_mstatus[6 : 4]},1'b0},csr_ports_mstatus[2 : 0]}; // @ Exception.scala l184
      end
      ExceptionEnum_MRET : begin
        csr_ports_mstatus_wdata = {{{{csr_ports_mstatus[63 : 8],1'b1},csr_ports_mstatus[6 : 4]},csr_ports_mstatus[7]},csr_ports_mstatus[2 : 0]}; // @ Exception.scala l195
      end
      default : begin
        csr_ports_mstatus_wdata = 64'h0; // @ Exception.scala l206
      end
    endcase
  end


endmodule

module CsrRegfile (
  input      [11:0]   cpu_ports_waddr,
  input               cpu_ports_wen,
  input      [63:0]   cpu_ports_wdata,
  input      [11:0]   cpu_ports_raddr,
  output reg [63:0]   cpu_ports_rdata,
  input               clint_ports_mepc_wen,
  input      [63:0]   clint_ports_mepc_wdata,
  input               clint_ports_mcause_wen,
  input      [63:0]   clint_ports_mcause_wdata,
  input               clint_ports_mstatus_wen,
  input      [63:0]   clint_ports_mstatus_wdata,
  output     [63:0]   clint_ports_mtvec,
  output     [63:0]   clint_ports_mepc,
  output     [63:0]   clint_ports_mstatus,
  output              clint_ports_global_int_en,
  output              clint_ports_mtime_int_en,
  output              clint_ports_mtime_int_pend,
  input               timer_int,
  input               clk,
  input               reset
);

  wire       [63:0]   tmp_mcycle;
  reg        [63:0]   mstatus;
  reg        [63:0]   mie;
  reg        [63:0]   mtvec;
  reg        [63:0]   mepc;
  reg        [63:0]   mcause;
  reg        [63:0]   mtval;
  reg        [63:0]   mip;
  reg        [63:0]   mcycle;
  reg        [63:0]   mhartid;
  reg        [63:0]   mscratch;

  assign tmp_mcycle = (mcycle + 64'h0000000000000001);
  always @(*) begin
    if((cpu_ports_wen && (cpu_ports_raddr == cpu_ports_waddr))) begin
      cpu_ports_rdata = cpu_ports_wdata; // @ Exception.scala l71
    end else begin
      case(cpu_ports_raddr)
        12'h300 : begin
          cpu_ports_rdata = mstatus; // @ Exception.scala l75
        end
        12'h304 : begin
          cpu_ports_rdata = mie; // @ Exception.scala l78
        end
        12'h305 : begin
          cpu_ports_rdata = mtvec; // @ Exception.scala l81
        end
        12'h341 : begin
          cpu_ports_rdata = mepc; // @ Exception.scala l84
        end
        12'h342 : begin
          cpu_ports_rdata = mcause; // @ Exception.scala l87
        end
        12'h343 : begin
          cpu_ports_rdata = mtval; // @ Exception.scala l90
        end
        12'h344 : begin
          cpu_ports_rdata = mip; // @ Exception.scala l93
        end
        12'hb00 : begin
          cpu_ports_rdata = mcycle; // @ Exception.scala l96
        end
        12'hf14 : begin
          cpu_ports_rdata = mhartid; // @ Exception.scala l99
        end
        default : begin
          cpu_ports_rdata = 64'h0; // @ Exception.scala l102
        end
      endcase
    end
  end

  assign clint_ports_mtvec = mtvec; // @ Exception.scala l108
  assign clint_ports_mepc = mepc; // @ Exception.scala l109
  assign clint_ports_mstatus = mstatus; // @ Exception.scala l110
  assign clint_ports_global_int_en = mstatus[3]; // @ Exception.scala l111
  assign clint_ports_mtime_int_en = mie[7]; // @ Exception.scala l112
  assign clint_ports_mtime_int_pend = mip[7]; // @ Exception.scala l113
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      mstatus <= {51'h0,13'h1880}; // @ Data.scala l400
      mie <= 64'h0; // @ Data.scala l400
      mtvec <= 64'h0; // @ Data.scala l400
      mepc <= 64'h0; // @ Data.scala l400
      mcause <= 64'h0; // @ Data.scala l400
      mtval <= 64'h0; // @ Data.scala l400
      mip <= 64'h0; // @ Data.scala l400
      mcycle <= 64'h0; // @ Data.scala l400
      mhartid <= 64'h0; // @ Data.scala l400
      mscratch <= 64'h0; // @ Data.scala l400
    end else begin
      mcycle <= tmp_mcycle; // @ Exception.scala l25
      mip <= {{{{52'h0,1'b0},3'b000},timer_int},7'h0}; // @ Exception.scala l26
      if(cpu_ports_wen) begin
        case(cpu_ports_waddr)
          12'h300 : begin
            mstatus <= {{{{{{{((cpu_ports_wdata[16 : 15] == 2'b11) || (cpu_ports_wdata[14 : 13] == 2'b11)),50'h0},2'b11},3'b000},cpu_ports_wdata[7]},3'b000},cpu_ports_wdata[3]},3'b000}; // @ Exception.scala l31
          end
          12'h304 : begin
            mie <= {{{{{{52'h0,cpu_ports_wdata[11]},3'b000},cpu_ports_wdata[7]},3'b000},cpu_ports_wdata[3]},3'b000}; // @ Exception.scala l35
          end
          12'h305 : begin
            mtvec <= cpu_ports_wdata; // @ Exception.scala l38
          end
          12'h341 : begin
            mepc <= cpu_ports_wdata; // @ Exception.scala l41
          end
          12'h342 : begin
            mcause <= cpu_ports_wdata; // @ Exception.scala l44
          end
          12'h343 : begin
            mtval <= cpu_ports_wdata; // @ Exception.scala l47
          end
          12'hf14 : begin
            mhartid <= cpu_ports_wdata; // @ Exception.scala l50
          end
          12'h340 : begin
            mscratch <= cpu_ports_wdata; // @ Exception.scala l53
          end
          default : begin
          end
        endcase
      end else begin
        if(clint_ports_mepc_wen) begin
          mepc <= clint_ports_mepc_wdata; // @ Exception.scala l58
        end
        if(clint_ports_mcause_wen) begin
          mcause <= clint_ports_mcause_wdata; // @ Exception.scala l61
        end
        if(clint_ports_mstatus_wen) begin
          mstatus <= clint_ports_mstatus_wdata; // @ Exception.scala l64
        end
        mtvec <= {clint_ports_mtvec[63 : 2],2'b00}; // @ Exception.scala l66
      end
    end
  end


endmodule
