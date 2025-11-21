// Generator : SpinalHDL v1.8.1    git head : 2a7592004363e5b40ec43e1f122ed8641cd8965b
// Component : DIV
// Git hash  : f29d1de95b2b9aea3ec101573c63250a4bc0eea3

`timescale 1ns/1ps

module DIV (
  input               flush,
  input               alu_src_valid,
  output reg          alu_src_ready,
  input               alu_src_uop_com_rd_wen,
  input               alu_src_uop_com_src2_is_imm,
  input      [63:0]   alu_src_src1_data,
  input      [63:0]   alu_src_src2_data,
  input      [4:0]    alu_src_rd_addr,
  input      [31:0]   alu_src_pc,
  input      [31:0]   alu_src_instr,
  input               alu_src_older,
  input      [4:0]    alu_src_uop_alu_alu_ctrl_op,
  input               alu_src_uop_alu_alu_is_word,
  output              exe_dst_valid,
  input               exe_dst_ready,
  output     [63:0]   exe_dst_rd_data,
  output              exe_dst_rd_wen,
  output     [31:0]   exe_dst_pc,
  output     [31:0]   exe_dst_instr,
  output              exe_dst_older,
  input               clk,
  input               reset
);
  localparam AluCtrlEnum_IDLE = 5'd0;
  localparam AluCtrlEnum_ADD = 5'd1;
  localparam AluCtrlEnum_SUB = 5'd2;
  localparam AluCtrlEnum_SLT = 5'd3;
  localparam AluCtrlEnum_SLTU = 5'd4;
  localparam AluCtrlEnum_XOR_1 = 5'd5;
  localparam AluCtrlEnum_SLL_1 = 5'd6;
  localparam AluCtrlEnum_SRL_1 = 5'd7;
  localparam AluCtrlEnum_SRA_1 = 5'd8;
  localparam AluCtrlEnum_AND_1 = 5'd9;
  localparam AluCtrlEnum_OR_1 = 5'd10;
  localparam AluCtrlEnum_LUI = 5'd11;
  localparam AluCtrlEnum_MUL = 5'd12;
  localparam AluCtrlEnum_MULH = 5'd13;
  localparam AluCtrlEnum_MULHSU = 5'd14;
  localparam AluCtrlEnum_MULHU = 5'd15;
  localparam AluCtrlEnum_DIV = 5'd16;
  localparam AluCtrlEnum_DIVU = 5'd17;
  localparam AluCtrlEnum_REM_1 = 5'd18;
  localparam AluCtrlEnum_REMU = 5'd19;
  localparam AluCtrlEnum_MULW = 5'd20;
  localparam AluCtrlEnum_DIVW = 5'd21;
  localparam AluCtrlEnum_DIVUW = 5'd22;
  localparam AluCtrlEnum_REMW = 5'd23;
  localparam AluCtrlEnum_REMUW = 5'd24;

  wire                div_1_io_op_is_word;
  wire                div_1_io_op_is_signed;
  wire       [63:0]   div_1_io_dividend;
  wire       [63:0]   div_1_io_divisor;
  wire                div_1_io_busy;
  wire                div_1_io_done_valid;
  wire       [63:0]   div_1_io_quotient;
  wire       [63:0]   div_1_io_remainder;
  wire       [4:0]    tmp_div_start;
  wire       [4:0]    tmp_div_start_1;
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
  wire       [4:0]    src_stream_uop_alu_alu_ctrl_op;
  wire                src_stream_uop_alu_alu_is_word;
  wire                dst_stream_valid;
  reg                 dst_stream_ready;
  wire       [63:0]   dst_stream_rd_data;
  wire                dst_stream_rd_wen;
  wire       [31:0]   dst_stream_pc;
  wire       [31:0]   dst_stream_instr;
  wire                dst_stream_older;
  wire                alu_is_quo;
  wire                alu_is_rem;
  wire                alu_is_div;
  wire                src_stream_fire;
  wire                div_start;
  wire                div_op_is_signed;
  wire                src_stream_fire_1;
  reg                 div_op_is_word_reg;
  wire                src_stream_fire_2;
  reg                 div_op_is_signed_reg;
  wire                src_stream_fire_3;
  reg        [63:0]   div_src1_reg;
  wire                src_stream_fire_4;
  reg        [63:0]   div_src2_reg;
  wire                src_stream_fire_5;
  reg                 rd_wen_reg;
  wire                src_stream_fire_6;
  reg                 older_reg;
  wire                src_stream_fire_7;
  reg                 alu_is_quo_reg;
  wire                src_stream_fire_8;
  reg                 alu_is_rem_reg;
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
  reg [47:0] alu_src_uop_alu_alu_ctrl_op_string;
  reg [47:0] src_stream_uop_alu_alu_ctrl_op_string;
  `endif


  assign tmp_div_start = AluCtrlEnum_DIV;
  assign tmp_div_start_1 = AluCtrlEnum_DIVU;
  Divider div_1 (
    .io_flush        (flush                   ), //i
    .io_start        (div_start               ), //i
    .io_busy         (div_1_io_busy           ), //o
    .io_done_valid   (div_1_io_done_valid     ), //o
    .io_done_ready   (dst_stream_ready        ), //i
    .io_op_is_word   (div_1_io_op_is_word     ), //i
    .io_op_is_signed (div_1_io_op_is_signed   ), //i
    .io_dividend     (div_1_io_dividend[63:0] ), //i
    .io_divisor      (div_1_io_divisor[63:0]  ), //i
    .io_quotient     (div_1_io_quotient[63:0] ), //o
    .io_remainder    (div_1_io_remainder[63:0]), //o
    .clk             (clk                     ), //i
    .reset           (reset                   )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(alu_src_uop_alu_alu_ctrl_op)
      AluCtrlEnum_IDLE : alu_src_uop_alu_alu_ctrl_op_string = "IDLE  ";
      AluCtrlEnum_ADD : alu_src_uop_alu_alu_ctrl_op_string = "ADD   ";
      AluCtrlEnum_SUB : alu_src_uop_alu_alu_ctrl_op_string = "SUB   ";
      AluCtrlEnum_SLT : alu_src_uop_alu_alu_ctrl_op_string = "SLT   ";
      AluCtrlEnum_SLTU : alu_src_uop_alu_alu_ctrl_op_string = "SLTU  ";
      AluCtrlEnum_XOR_1 : alu_src_uop_alu_alu_ctrl_op_string = "XOR_1 ";
      AluCtrlEnum_SLL_1 : alu_src_uop_alu_alu_ctrl_op_string = "SLL_1 ";
      AluCtrlEnum_SRL_1 : alu_src_uop_alu_alu_ctrl_op_string = "SRL_1 ";
      AluCtrlEnum_SRA_1 : alu_src_uop_alu_alu_ctrl_op_string = "SRA_1 ";
      AluCtrlEnum_AND_1 : alu_src_uop_alu_alu_ctrl_op_string = "AND_1 ";
      AluCtrlEnum_OR_1 : alu_src_uop_alu_alu_ctrl_op_string = "OR_1  ";
      AluCtrlEnum_LUI : alu_src_uop_alu_alu_ctrl_op_string = "LUI   ";
      AluCtrlEnum_MUL : alu_src_uop_alu_alu_ctrl_op_string = "MUL   ";
      AluCtrlEnum_MULH : alu_src_uop_alu_alu_ctrl_op_string = "MULH  ";
      AluCtrlEnum_MULHSU : alu_src_uop_alu_alu_ctrl_op_string = "MULHSU";
      AluCtrlEnum_MULHU : alu_src_uop_alu_alu_ctrl_op_string = "MULHU ";
      AluCtrlEnum_DIV : alu_src_uop_alu_alu_ctrl_op_string = "DIV   ";
      AluCtrlEnum_DIVU : alu_src_uop_alu_alu_ctrl_op_string = "DIVU  ";
      AluCtrlEnum_REM_1 : alu_src_uop_alu_alu_ctrl_op_string = "REM_1 ";
      AluCtrlEnum_REMU : alu_src_uop_alu_alu_ctrl_op_string = "REMU  ";
      AluCtrlEnum_MULW : alu_src_uop_alu_alu_ctrl_op_string = "MULW  ";
      AluCtrlEnum_DIVW : alu_src_uop_alu_alu_ctrl_op_string = "DIVW  ";
      AluCtrlEnum_DIVUW : alu_src_uop_alu_alu_ctrl_op_string = "DIVUW ";
      AluCtrlEnum_REMW : alu_src_uop_alu_alu_ctrl_op_string = "REMW  ";
      AluCtrlEnum_REMUW : alu_src_uop_alu_alu_ctrl_op_string = "REMUW ";
      default : alu_src_uop_alu_alu_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(src_stream_uop_alu_alu_ctrl_op)
      AluCtrlEnum_IDLE : src_stream_uop_alu_alu_ctrl_op_string = "IDLE  ";
      AluCtrlEnum_ADD : src_stream_uop_alu_alu_ctrl_op_string = "ADD   ";
      AluCtrlEnum_SUB : src_stream_uop_alu_alu_ctrl_op_string = "SUB   ";
      AluCtrlEnum_SLT : src_stream_uop_alu_alu_ctrl_op_string = "SLT   ";
      AluCtrlEnum_SLTU : src_stream_uop_alu_alu_ctrl_op_string = "SLTU  ";
      AluCtrlEnum_XOR_1 : src_stream_uop_alu_alu_ctrl_op_string = "XOR_1 ";
      AluCtrlEnum_SLL_1 : src_stream_uop_alu_alu_ctrl_op_string = "SLL_1 ";
      AluCtrlEnum_SRL_1 : src_stream_uop_alu_alu_ctrl_op_string = "SRL_1 ";
      AluCtrlEnum_SRA_1 : src_stream_uop_alu_alu_ctrl_op_string = "SRA_1 ";
      AluCtrlEnum_AND_1 : src_stream_uop_alu_alu_ctrl_op_string = "AND_1 ";
      AluCtrlEnum_OR_1 : src_stream_uop_alu_alu_ctrl_op_string = "OR_1  ";
      AluCtrlEnum_LUI : src_stream_uop_alu_alu_ctrl_op_string = "LUI   ";
      AluCtrlEnum_MUL : src_stream_uop_alu_alu_ctrl_op_string = "MUL   ";
      AluCtrlEnum_MULH : src_stream_uop_alu_alu_ctrl_op_string = "MULH  ";
      AluCtrlEnum_MULHSU : src_stream_uop_alu_alu_ctrl_op_string = "MULHSU";
      AluCtrlEnum_MULHU : src_stream_uop_alu_alu_ctrl_op_string = "MULHU ";
      AluCtrlEnum_DIV : src_stream_uop_alu_alu_ctrl_op_string = "DIV   ";
      AluCtrlEnum_DIVU : src_stream_uop_alu_alu_ctrl_op_string = "DIVU  ";
      AluCtrlEnum_REM_1 : src_stream_uop_alu_alu_ctrl_op_string = "REM_1 ";
      AluCtrlEnum_REMU : src_stream_uop_alu_alu_ctrl_op_string = "REMU  ";
      AluCtrlEnum_MULW : src_stream_uop_alu_alu_ctrl_op_string = "MULW  ";
      AluCtrlEnum_DIVW : src_stream_uop_alu_alu_ctrl_op_string = "DIVW  ";
      AluCtrlEnum_DIVUW : src_stream_uop_alu_alu_ctrl_op_string = "DIVUW ";
      AluCtrlEnum_REMW : src_stream_uop_alu_alu_ctrl_op_string = "REMW  ";
      AluCtrlEnum_REMUW : src_stream_uop_alu_alu_ctrl_op_string = "REMUW ";
      default : src_stream_uop_alu_alu_ctrl_op_string = "??????";
    endcase
  end
  `endif

  always @(*) begin
    src_stream_valid = alu_src_valid; // @ Stream.scala l294
    if(flush) begin
      src_stream_valid = 1'b0; // @ Stream.scala l439
    end
  end

  always @(*) begin
    alu_src_ready = src_stream_ready; // @ Stream.scala l295
    if(flush) begin
      alu_src_ready = 1'b1; // @ Stream.scala l440
    end
  end

  assign src_stream_uop_com_rd_wen = alu_src_uop_com_rd_wen; // @ Stream.scala l296
  assign src_stream_uop_com_src2_is_imm = alu_src_uop_com_src2_is_imm; // @ Stream.scala l296
  assign src_stream_src1_data = alu_src_src1_data; // @ Stream.scala l296
  assign src_stream_src2_data = alu_src_src2_data; // @ Stream.scala l296
  assign src_stream_rd_addr = alu_src_rd_addr; // @ Stream.scala l296
  assign src_stream_pc = alu_src_pc; // @ Stream.scala l296
  assign src_stream_instr = alu_src_instr; // @ Stream.scala l296
  assign src_stream_older = alu_src_older; // @ Stream.scala l296
  assign src_stream_uop_alu_alu_ctrl_op = alu_src_uop_alu_alu_ctrl_op; // @ Stream.scala l296
  assign src_stream_uop_alu_alu_is_word = alu_src_uop_alu_alu_is_word; // @ Stream.scala l296
  assign alu_is_quo = ((((alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_DIV) || (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_DIVU)) || (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_DIVW)) || (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_DIVUW)); // @ BaseType.scala l305
  assign alu_is_rem = ((((alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_REM_1) || (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_REMU)) || (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_REMW)) || (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_REMUW)); // @ BaseType.scala l305
  assign alu_is_div = (alu_is_quo || alu_is_rem); // @ BaseType.scala l305
  assign src_stream_fire = (src_stream_valid && src_stream_ready); // @ BaseType.scala l305
  assign div_start = (src_stream_fire && ((((((((alu_src_uop_alu_alu_ctrl_op == tmp_div_start) || (alu_src_uop_alu_alu_ctrl_op == tmp_div_start_1)) || (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_REM_1)) || (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_REMU)) || (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_DIVW)) || (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_DIVUW)) || (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_REMW)) || (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_REMUW))); // @ BaseType.scala l305
  assign div_op_is_signed = ((((alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_DIV) || (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_REM_1)) || (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_DIVW)) || (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_REMW)); // @ BaseType.scala l305
  assign src_stream_fire_1 = (src_stream_valid && src_stream_ready); // @ BaseType.scala l305
  assign src_stream_fire_2 = (src_stream_valid && src_stream_ready); // @ BaseType.scala l305
  assign src_stream_fire_3 = (src_stream_valid && src_stream_ready); // @ BaseType.scala l305
  assign src_stream_fire_4 = (src_stream_valid && src_stream_ready); // @ BaseType.scala l305
  assign div_1_io_op_is_word = (div_start ? alu_src_uop_alu_alu_is_word : div_op_is_word_reg); // @ DIV.scala l66
  assign div_1_io_op_is_signed = (div_start ? div_op_is_signed : div_op_is_signed_reg); // @ DIV.scala l67
  assign div_1_io_dividend = (div_start ? alu_src_src1_data : div_src1_reg); // @ DIV.scala l68
  assign div_1_io_divisor = (div_start ? alu_src_src2_data : div_src2_reg); // @ DIV.scala l69
  assign src_stream_fire_5 = (src_stream_valid && src_stream_ready); // @ BaseType.scala l305
  assign src_stream_fire_6 = (src_stream_valid && src_stream_ready); // @ BaseType.scala l305
  assign src_stream_fire_7 = (src_stream_valid && src_stream_ready); // @ BaseType.scala l305
  assign src_stream_fire_8 = (src_stream_valid && src_stream_ready); // @ BaseType.scala l305
  assign src_stream_ready = dst_stream_ready; // @ DIV.scala l80
  assign dst_stream_valid = div_1_io_done_valid; // @ DIV.scala l81
  assign dst_stream_rd_wen = src_stream_uop_com_rd_wen; // @ DIV.scala l82
  assign dst_stream_rd_data = (alu_is_quo_reg ? div_1_io_quotient : div_1_io_remainder); // @ DIV.scala l83
  assign dst_stream_pc = src_stream_pc; // @ DIV.scala l84
  assign dst_stream_instr = src_stream_instr; // @ DIV.scala l85
  assign dst_stream_older = src_stream_older; // @ DIV.scala l86
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
  always @(posedge clk) begin
    if(src_stream_fire_1) begin
      div_op_is_word_reg <= alu_src_uop_alu_alu_is_word; // @ DIV.scala l58
    end
    if(src_stream_fire_2) begin
      div_op_is_signed_reg <= div_op_is_signed; // @ DIV.scala l59
    end
    if(src_stream_fire_3) begin
      div_src1_reg <= alu_src_src1_data; // @ DIV.scala l60
    end
    if(src_stream_fire_4) begin
      div_src2_reg <= alu_src_src2_data; // @ DIV.scala l61
    end
    if(dst_stream_ready) begin
      dst_stream_rData_rd_data <= dst_stream_rd_data; // @ Stream.scala l362
      dst_stream_rData_rd_wen <= dst_stream_rd_wen; // @ Stream.scala l362
      dst_stream_rData_pc <= dst_stream_pc; // @ Stream.scala l362
      dst_stream_rData_instr <= dst_stream_instr; // @ Stream.scala l362
      dst_stream_rData_older <= dst_stream_older; // @ Stream.scala l362
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      rd_wen_reg <= 1'b0; // @ Data.scala l400
      older_reg <= 1'b0; // @ Data.scala l400
      alu_is_quo_reg <= 1'b0; // @ Data.scala l400
      alu_is_rem_reg <= 1'b0; // @ Data.scala l400
      dst_stream_rValid <= 1'b0; // @ Data.scala l400
    end else begin
      if(src_stream_fire_5) begin
        rd_wen_reg <= src_stream_uop_com_rd_wen; // @ DIV.scala l74
      end
      if(src_stream_fire_6) begin
        older_reg <= src_stream_older; // @ DIV.scala l75
      end
      if(src_stream_fire_7) begin
        alu_is_quo_reg <= alu_is_quo; // @ DIV.scala l76
      end
      if(src_stream_fire_8) begin
        alu_is_rem_reg <= alu_is_rem; // @ DIV.scala l77
      end
      if(dst_stream_ready) begin
        dst_stream_rValid <= dst_stream_valid; // @ Stream.scala l361
      end
    end
  end


endmodule

module Divider (
  input               io_flush,
  input               io_start,
  output              io_busy,
  output              io_done_valid,
  input               io_done_ready,
  input               io_op_is_word,
  input               io_op_is_signed,
  input      [63:0]   io_dividend,
  input      [63:0]   io_divisor,
  output     [63:0]   io_quotient,
  output     [63:0]   io_remainder,
  input               clk,
  input               reset
);

  wire       [63:0]   u_div_s_axis_divisor_tdata;
  wire       [63:0]   u_div_s_axis_dividend_tdata;
  wire                u_div_m_axis_dout_tvalid;
  wire       [127:0]  u_div_m_axis_dout_tdata;
  wire       [63:0]   tmp_dividend_abs_3;
  wire       [63:0]   tmp_dividend_abs_4;
  wire       [63:0]   tmp_dividend_abs_5;
  wire       [0:0]    tmp_dividend_abs_6;
  wire       [63:0]   tmp_divisor_abs_3;
  wire       [63:0]   tmp_divisor_abs_4;
  wire       [63:0]   tmp_divisor_abs_5;
  wire       [0:0]    tmp_divisor_abs_6;
  wire       [63:0]   tmp_dividend_abs_7;
  wire       [63:0]   tmp_dividend_abs_8;
  wire       [63:0]   tmp_dividend_abs_9;
  wire       [0:0]    tmp_dividend_abs_10;
  wire       [63:0]   tmp_divisor_abs_7;
  wire       [63:0]   tmp_divisor_abs_8;
  wire       [63:0]   tmp_divisor_abs_9;
  wire       [0:0]    tmp_divisor_abs_10;
  wire       [63:0]   tmp_quotient_wrapper;
  wire       [63:0]   tmp_remainder_wrapper;
  wire       [63:0]   tmp_quotient_wrapper_1;
  wire       [63:0]   tmp_remainder_wrapper_1;
  reg                 busy_reg;
  wire       [63:0]   dividend_word_extd;
  wire       [63:0]   divisor_word_extd;
  reg        [63:0]   dividend_abs;
  reg        [63:0]   divisor_abs;
  wire                dividend_positive;
  wire                divisor_positive;
  wire                tmp_dividend_word_extd;
  reg        [31:0]   tmp_dividend_word_extd_1;
  wire                tmp_divisor_word_extd;
  reg        [31:0]   tmp_divisor_word_extd_1;
  wire       [63:0]   tmp_dividend_abs;
  wire       [63:0]   tmp_divisor_abs;
  reg        [31:0]   tmp_dividend_abs_1;
  reg        [31:0]   tmp_divisor_abs_1;
  wire       [63:0]   tmp_dividend_abs_2;
  wire       [63:0]   tmp_divisor_abs_2;
  wire       [63:0]   quotient_origin;
  wire       [63:0]   remainder_origin;
  wire       [63:0]   quotient_word_extd;
  wire       [63:0]   remainder_word_extd;
  reg        [63:0]   quotient_wrapper;
  reg        [63:0]   remainder_wrapper;
  wire                tmp_quotient_word_extd;
  reg        [31:0]   tmp_quotient_word_extd_1;
  wire                tmp_remainder_word_extd;
  reg        [31:0]   tmp_remainder_word_extd_1;
  function [31:0] zz_tmp_dividend_abs_1(input dummy);
    begin
      zz_tmp_dividend_abs_1[31] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[30] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[29] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[28] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[27] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[26] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[25] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[24] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[23] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[22] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[21] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[20] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[19] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[18] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[17] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[16] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[15] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[14] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[13] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[12] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[11] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[10] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[9] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[8] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[7] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[6] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[5] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[4] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[3] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[2] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[1] = 1'b0; // @ Literal.scala l87
      zz_tmp_dividend_abs_1[0] = 1'b0; // @ Literal.scala l87
    end
  endfunction
  wire [31:0] tmp_1;
  function [31:0] zz_tmp_divisor_abs_1(input dummy);
    begin
      zz_tmp_divisor_abs_1[31] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[30] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[29] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[28] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[27] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[26] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[25] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[24] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[23] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[22] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[21] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[20] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[19] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[18] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[17] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[16] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[15] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[14] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[13] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[12] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[11] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[10] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[9] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[8] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[7] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[6] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[5] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[4] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[3] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[2] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[1] = 1'b0; // @ Literal.scala l87
      zz_tmp_divisor_abs_1[0] = 1'b0; // @ Literal.scala l87
    end
  endfunction
  wire [31:0] tmp_2;

  assign tmp_dividend_abs_3 = (tmp_dividend_abs[63] ? tmp_dividend_abs_4 : tmp_dividend_abs);
  assign tmp_dividend_abs_4 = (~ tmp_dividend_abs);
  assign tmp_dividend_abs_6 = tmp_dividend_abs[63];
  assign tmp_dividend_abs_5 = {63'd0, tmp_dividend_abs_6};
  assign tmp_divisor_abs_3 = (tmp_divisor_abs[63] ? tmp_divisor_abs_4 : tmp_divisor_abs);
  assign tmp_divisor_abs_4 = (~ tmp_divisor_abs);
  assign tmp_divisor_abs_6 = tmp_divisor_abs[63];
  assign tmp_divisor_abs_5 = {63'd0, tmp_divisor_abs_6};
  assign tmp_dividend_abs_7 = (tmp_dividend_abs_2[63] ? tmp_dividend_abs_8 : tmp_dividend_abs_2);
  assign tmp_dividend_abs_8 = (~ tmp_dividend_abs_2);
  assign tmp_dividend_abs_10 = tmp_dividend_abs_2[63];
  assign tmp_dividend_abs_9 = {63'd0, tmp_dividend_abs_10};
  assign tmp_divisor_abs_7 = (tmp_divisor_abs_2[63] ? tmp_divisor_abs_8 : tmp_divisor_abs_2);
  assign tmp_divisor_abs_8 = (~ tmp_divisor_abs_2);
  assign tmp_divisor_abs_10 = tmp_divisor_abs_2[63];
  assign tmp_divisor_abs_9 = {63'd0, tmp_divisor_abs_10};
  assign tmp_quotient_wrapper = ((~ quotient_origin) + 64'h0000000000000001);
  assign tmp_remainder_wrapper = ((~ remainder_origin) + 64'h0000000000000001);
  assign tmp_quotient_wrapper_1 = ((~ quotient_origin) + 64'h0000000000000001);
  assign tmp_remainder_wrapper_1 = ((~ remainder_origin) + 64'h0000000000000001);
  div_gen_0 u_div (
    .aclk                   (clk                              ), //i
    .s_axis_divisor_tvalid  (io_start                         ), //i
    .s_axis_divisor_tdata   (u_div_s_axis_divisor_tdata[63:0] ), //i
    .s_axis_dividend_tvalid (io_start                         ), //i
    .s_axis_dividend_tdata  (u_div_s_axis_dividend_tdata[63:0]), //i
    .m_axis_dout_tvalid     (u_div_m_axis_dout_tvalid         ), //o
    .m_axis_dout_tdata      (u_div_m_axis_dout_tdata[127:0]   )  //o
  );
  assign tmp_dividend_word_extd = io_dividend[31]; // @ BaseType.scala l305
  always @(*) begin
    tmp_dividend_word_extd_1[31] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[30] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[29] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[28] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[27] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[26] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[25] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[24] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[23] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[22] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[21] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[20] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[19] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[18] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[17] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[16] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[15] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[14] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[13] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[12] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[11] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[10] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[9] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[8] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[7] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[6] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[5] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[4] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[3] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[2] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[1] = tmp_dividend_word_extd; // @ Literal.scala l87
    tmp_dividend_word_extd_1[0] = tmp_dividend_word_extd; // @ Literal.scala l87
  end

  assign dividend_word_extd = {tmp_dividend_word_extd_1,io_dividend[31 : 0]}; // @ Divider.scala l76
  assign tmp_divisor_word_extd = io_divisor[31]; // @ BaseType.scala l305
  always @(*) begin
    tmp_divisor_word_extd_1[31] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[30] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[29] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[28] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[27] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[26] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[25] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[24] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[23] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[22] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[21] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[20] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[19] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[18] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[17] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[16] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[15] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[14] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[13] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[12] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[11] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[10] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[9] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[8] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[7] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[6] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[5] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[4] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[3] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[2] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[1] = tmp_divisor_word_extd; // @ Literal.scala l87
    tmp_divisor_word_extd_1[0] = tmp_divisor_word_extd; // @ Literal.scala l87
  end

  assign divisor_word_extd = {tmp_divisor_word_extd_1,io_divisor[31 : 0]}; // @ Divider.scala l77
  assign dividend_positive = (io_op_is_signed ? (! dividend_word_extd[63]) : 1'b1); // @ Divider.scala l78
  assign divisor_positive = (io_op_is_signed ? (! divisor_word_extd[63]) : 1'b1); // @ Divider.scala l79
  assign tmp_dividend_abs = dividend_word_extd; // @ BaseType.scala l318
  always @(*) begin
    if(io_op_is_word) begin
      if(io_op_is_signed) begin
        dividend_abs = (tmp_dividend_abs_3 + tmp_dividend_abs_5); // @ Divider.scala l83
      end else begin
        dividend_abs = {tmp_dividend_abs_1,io_dividend[31 : 0]}; // @ Divider.scala l87
      end
    end else begin
      if(io_op_is_signed) begin
        dividend_abs = (tmp_dividend_abs_7 + tmp_dividend_abs_9); // @ Divider.scala l93
      end else begin
        dividend_abs = io_dividend; // @ Divider.scala l97
      end
    end
  end

  assign tmp_divisor_abs = divisor_word_extd; // @ BaseType.scala l318
  always @(*) begin
    if(io_op_is_word) begin
      if(io_op_is_signed) begin
        divisor_abs = (tmp_divisor_abs_3 + tmp_divisor_abs_5); // @ Divider.scala l84
      end else begin
        divisor_abs = {tmp_divisor_abs_1,io_divisor[31 : 0]}; // @ Divider.scala l88
      end
    end else begin
      if(io_op_is_signed) begin
        divisor_abs = (tmp_divisor_abs_7 + tmp_divisor_abs_9); // @ Divider.scala l94
      end else begin
        divisor_abs = io_divisor; // @ Divider.scala l98
      end
    end
  end

  assign tmp_1 = zz_tmp_dividend_abs_1(1'b0);
  always @(*) tmp_dividend_abs_1 = tmp_1;
  assign tmp_2 = zz_tmp_divisor_abs_1(1'b0);
  always @(*) tmp_divisor_abs_1 = tmp_2;
  assign tmp_dividend_abs_2 = io_dividend; // @ BaseType.scala l318
  assign tmp_divisor_abs_2 = io_divisor; // @ BaseType.scala l318
  assign quotient_origin = u_div_m_axis_dout_tdata[127 : 64]; // @ Divider.scala l109
  assign remainder_origin = u_div_m_axis_dout_tdata[63 : 0]; // @ Divider.scala l110
  assign tmp_quotient_word_extd = quotient_origin[31]; // @ BaseType.scala l305
  always @(*) begin
    tmp_quotient_word_extd_1[31] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[30] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[29] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[28] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[27] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[26] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[25] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[24] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[23] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[22] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[21] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[20] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[19] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[18] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[17] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[16] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[15] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[14] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[13] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[12] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[11] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[10] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[9] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[8] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[7] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[6] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[5] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[4] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[3] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[2] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[1] = tmp_quotient_word_extd; // @ Literal.scala l87
    tmp_quotient_word_extd_1[0] = tmp_quotient_word_extd; // @ Literal.scala l87
  end

  assign quotient_word_extd = {tmp_quotient_word_extd_1,quotient_origin[31 : 0]}; // @ Divider.scala l111
  assign tmp_remainder_word_extd = remainder_origin[31]; // @ BaseType.scala l305
  always @(*) begin
    tmp_remainder_word_extd_1[31] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[30] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[29] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[28] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[27] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[26] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[25] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[24] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[23] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[22] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[21] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[20] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[19] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[18] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[17] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[16] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[15] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[14] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[13] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[12] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[11] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[10] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[9] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[8] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[7] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[6] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[5] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[4] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[3] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[2] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[1] = tmp_remainder_word_extd; // @ Literal.scala l87
    tmp_remainder_word_extd_1[0] = tmp_remainder_word_extd; // @ Literal.scala l87
  end

  assign remainder_word_extd = {tmp_remainder_word_extd_1,remainder_origin[31 : 0]}; // @ Divider.scala l112
  always @(*) begin
    if(io_op_is_word) begin
      quotient_wrapper = ((dividend_positive == divisor_positive) ? quotient_word_extd : tmp_quotient_wrapper); // @ Divider.scala l115
    end else begin
      quotient_wrapper = ((dividend_positive == divisor_positive) ? quotient_origin : tmp_quotient_wrapper_1); // @ Divider.scala l119
    end
  end

  always @(*) begin
    if(io_op_is_word) begin
      remainder_wrapper = (dividend_positive ? remainder_word_extd : tmp_remainder_wrapper); // @ Divider.scala l116
    end else begin
      remainder_wrapper = (dividend_positive ? remainder_origin : tmp_remainder_wrapper_1); // @ Divider.scala l120
    end
  end

  assign u_div_s_axis_divisor_tdata = divisor_abs; // @ Divider.scala l124
  assign u_div_s_axis_dividend_tdata = dividend_abs; // @ Divider.scala l126
  assign io_quotient = quotient_wrapper; // @ Divider.scala l127
  assign io_remainder = remainder_wrapper; // @ Divider.scala l128
  assign io_done_valid = (u_div_m_axis_dout_tvalid && busy_reg); // @ Divider.scala l129
  assign io_busy = busy_reg; // @ Divider.scala l130
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      busy_reg <= 1'b0; // @ Data.scala l400
    end else begin
      if(io_flush) begin
        busy_reg <= 1'b0; // @ Divider.scala l61
      end else begin
        if(io_start) begin
          busy_reg <= 1'b1; // @ Divider.scala l64
        end else begin
          if(io_done_valid) begin
            busy_reg <= 1'b0; // @ Divider.scala l67
          end
        end
      end
    end
  end


endmodule
