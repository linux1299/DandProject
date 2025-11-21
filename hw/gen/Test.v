// Generator : SpinalHDL v1.8.1    git head : 2a7592004363e5b40ec43e1f122ed8641cd8965b
// Component : Test
// Git hash  : f29d1de95b2b9aea3ec101573c63250a4bc0eea3

`timescale 1ns/1ps

module Test (
  input               dis_src_valid,
  output              dis_src_ready,
  input               dis_src_uop_com_rd_wen,
  input               dis_src_uop_com_src2_is_imm,
  input      [63:0]   dis_src_src1_data,
  input      [63:0]   dis_src_src2_data,
  input      [4:0]    dis_src_rd_addr,
  input      [31:0]   dis_src_pc,
  input      [31:0]   dis_src_instr,
  input      [4:0]    dis_src_uop_alu_alu_ctrl_op,
  input               dis_src_uop_alu_alu_is_word,
  input      [63:0]   dis_src_imm,
  input      [31:0]   dis_src_branch_pc,
  input               dis_src_branch_taken,
  input      [3:0]    dis_src_uop_lsu_lsu_ctrl_op,
  input               dis_src_uop_lsu_lsu_is_load,
  input               dis_src_uop_lsu_lsu_is_store,
  output              dis_dst_valid,
  input               dis_dst_ready,
  output              dis_dst_uop_com_rd_wen,
  output              dis_dst_uop_com_src2_is_imm,
  output     [63:0]   dis_dst_src1_data,
  output     [63:0]   dis_dst_src2_data,
  output     [4:0]    dis_dst_rd_addr,
  output     [31:0]   dis_dst_pc,
  output     [31:0]   dis_dst_instr,
  output     [4:0]    dis_dst_uop_alu_alu_ctrl_op,
  output              dis_dst_uop_alu_alu_is_word
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
  localparam LsuCtrlEnum_IDLE = 4'd0;
  localparam LsuCtrlEnum_LB = 4'd1;
  localparam LsuCtrlEnum_LBU = 4'd2;
  localparam LsuCtrlEnum_LH = 4'd3;
  localparam LsuCtrlEnum_LHU = 4'd4;
  localparam LsuCtrlEnum_LW = 4'd5;
  localparam LsuCtrlEnum_LWU = 4'd6;
  localparam LsuCtrlEnum_LD = 4'd7;
  localparam LsuCtrlEnum_SB = 4'd8;
  localparam LsuCtrlEnum_SH = 4'd9;
  localparam LsuCtrlEnum_SW = 4'd10;
  localparam LsuCtrlEnum_SD = 4'd11;

  `ifndef SYNTHESIS
  reg [47:0] dis_src_uop_alu_alu_ctrl_op_string;
  reg [31:0] dis_src_uop_lsu_lsu_ctrl_op_string;
  reg [47:0] dis_dst_uop_alu_alu_ctrl_op_string;
  `endif


  `ifndef SYNTHESIS
  always @(*) begin
    case(dis_src_uop_alu_alu_ctrl_op)
      AluCtrlEnum_IDLE : dis_src_uop_alu_alu_ctrl_op_string = "IDLE  ";
      AluCtrlEnum_ADD : dis_src_uop_alu_alu_ctrl_op_string = "ADD   ";
      AluCtrlEnum_SUB : dis_src_uop_alu_alu_ctrl_op_string = "SUB   ";
      AluCtrlEnum_SLT : dis_src_uop_alu_alu_ctrl_op_string = "SLT   ";
      AluCtrlEnum_SLTU : dis_src_uop_alu_alu_ctrl_op_string = "SLTU  ";
      AluCtrlEnum_XOR_1 : dis_src_uop_alu_alu_ctrl_op_string = "XOR_1 ";
      AluCtrlEnum_SLL_1 : dis_src_uop_alu_alu_ctrl_op_string = "SLL_1 ";
      AluCtrlEnum_SRL_1 : dis_src_uop_alu_alu_ctrl_op_string = "SRL_1 ";
      AluCtrlEnum_SRA_1 : dis_src_uop_alu_alu_ctrl_op_string = "SRA_1 ";
      AluCtrlEnum_AND_1 : dis_src_uop_alu_alu_ctrl_op_string = "AND_1 ";
      AluCtrlEnum_OR_1 : dis_src_uop_alu_alu_ctrl_op_string = "OR_1  ";
      AluCtrlEnum_LUI : dis_src_uop_alu_alu_ctrl_op_string = "LUI   ";
      AluCtrlEnum_MUL : dis_src_uop_alu_alu_ctrl_op_string = "MUL   ";
      AluCtrlEnum_MULH : dis_src_uop_alu_alu_ctrl_op_string = "MULH  ";
      AluCtrlEnum_MULHSU : dis_src_uop_alu_alu_ctrl_op_string = "MULHSU";
      AluCtrlEnum_MULHU : dis_src_uop_alu_alu_ctrl_op_string = "MULHU ";
      AluCtrlEnum_DIV : dis_src_uop_alu_alu_ctrl_op_string = "DIV   ";
      AluCtrlEnum_DIVU : dis_src_uop_alu_alu_ctrl_op_string = "DIVU  ";
      AluCtrlEnum_REM_1 : dis_src_uop_alu_alu_ctrl_op_string = "REM_1 ";
      AluCtrlEnum_REMU : dis_src_uop_alu_alu_ctrl_op_string = "REMU  ";
      AluCtrlEnum_MULW : dis_src_uop_alu_alu_ctrl_op_string = "MULW  ";
      AluCtrlEnum_DIVW : dis_src_uop_alu_alu_ctrl_op_string = "DIVW  ";
      AluCtrlEnum_DIVUW : dis_src_uop_alu_alu_ctrl_op_string = "DIVUW ";
      AluCtrlEnum_REMW : dis_src_uop_alu_alu_ctrl_op_string = "REMW  ";
      AluCtrlEnum_REMUW : dis_src_uop_alu_alu_ctrl_op_string = "REMUW ";
      default : dis_src_uop_alu_alu_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(dis_src_uop_lsu_lsu_ctrl_op)
      LsuCtrlEnum_IDLE : dis_src_uop_lsu_lsu_ctrl_op_string = "IDLE";
      LsuCtrlEnum_LB : dis_src_uop_lsu_lsu_ctrl_op_string = "LB  ";
      LsuCtrlEnum_LBU : dis_src_uop_lsu_lsu_ctrl_op_string = "LBU ";
      LsuCtrlEnum_LH : dis_src_uop_lsu_lsu_ctrl_op_string = "LH  ";
      LsuCtrlEnum_LHU : dis_src_uop_lsu_lsu_ctrl_op_string = "LHU ";
      LsuCtrlEnum_LW : dis_src_uop_lsu_lsu_ctrl_op_string = "LW  ";
      LsuCtrlEnum_LWU : dis_src_uop_lsu_lsu_ctrl_op_string = "LWU ";
      LsuCtrlEnum_LD : dis_src_uop_lsu_lsu_ctrl_op_string = "LD  ";
      LsuCtrlEnum_SB : dis_src_uop_lsu_lsu_ctrl_op_string = "SB  ";
      LsuCtrlEnum_SH : dis_src_uop_lsu_lsu_ctrl_op_string = "SH  ";
      LsuCtrlEnum_SW : dis_src_uop_lsu_lsu_ctrl_op_string = "SW  ";
      LsuCtrlEnum_SD : dis_src_uop_lsu_lsu_ctrl_op_string = "SD  ";
      default : dis_src_uop_lsu_lsu_ctrl_op_string = "????";
    endcase
  end
  always @(*) begin
    case(dis_dst_uop_alu_alu_ctrl_op)
      AluCtrlEnum_IDLE : dis_dst_uop_alu_alu_ctrl_op_string = "IDLE  ";
      AluCtrlEnum_ADD : dis_dst_uop_alu_alu_ctrl_op_string = "ADD   ";
      AluCtrlEnum_SUB : dis_dst_uop_alu_alu_ctrl_op_string = "SUB   ";
      AluCtrlEnum_SLT : dis_dst_uop_alu_alu_ctrl_op_string = "SLT   ";
      AluCtrlEnum_SLTU : dis_dst_uop_alu_alu_ctrl_op_string = "SLTU  ";
      AluCtrlEnum_XOR_1 : dis_dst_uop_alu_alu_ctrl_op_string = "XOR_1 ";
      AluCtrlEnum_SLL_1 : dis_dst_uop_alu_alu_ctrl_op_string = "SLL_1 ";
      AluCtrlEnum_SRL_1 : dis_dst_uop_alu_alu_ctrl_op_string = "SRL_1 ";
      AluCtrlEnum_SRA_1 : dis_dst_uop_alu_alu_ctrl_op_string = "SRA_1 ";
      AluCtrlEnum_AND_1 : dis_dst_uop_alu_alu_ctrl_op_string = "AND_1 ";
      AluCtrlEnum_OR_1 : dis_dst_uop_alu_alu_ctrl_op_string = "OR_1  ";
      AluCtrlEnum_LUI : dis_dst_uop_alu_alu_ctrl_op_string = "LUI   ";
      AluCtrlEnum_MUL : dis_dst_uop_alu_alu_ctrl_op_string = "MUL   ";
      AluCtrlEnum_MULH : dis_dst_uop_alu_alu_ctrl_op_string = "MULH  ";
      AluCtrlEnum_MULHSU : dis_dst_uop_alu_alu_ctrl_op_string = "MULHSU";
      AluCtrlEnum_MULHU : dis_dst_uop_alu_alu_ctrl_op_string = "MULHU ";
      AluCtrlEnum_DIV : dis_dst_uop_alu_alu_ctrl_op_string = "DIV   ";
      AluCtrlEnum_DIVU : dis_dst_uop_alu_alu_ctrl_op_string = "DIVU  ";
      AluCtrlEnum_REM_1 : dis_dst_uop_alu_alu_ctrl_op_string = "REM_1 ";
      AluCtrlEnum_REMU : dis_dst_uop_alu_alu_ctrl_op_string = "REMU  ";
      AluCtrlEnum_MULW : dis_dst_uop_alu_alu_ctrl_op_string = "MULW  ";
      AluCtrlEnum_DIVW : dis_dst_uop_alu_alu_ctrl_op_string = "DIVW  ";
      AluCtrlEnum_DIVUW : dis_dst_uop_alu_alu_ctrl_op_string = "DIVUW ";
      AluCtrlEnum_REMW : dis_dst_uop_alu_alu_ctrl_op_string = "REMW  ";
      AluCtrlEnum_REMUW : dis_dst_uop_alu_alu_ctrl_op_string = "REMUW ";
      default : dis_dst_uop_alu_alu_ctrl_op_string = "??????";
    endcase
  end
  `endif

  assign dis_dst_uop_com_rd_wen = dis_src_uop_com_rd_wen; // @ Config.scala l148
  assign dis_dst_uop_com_src2_is_imm = dis_src_uop_com_src2_is_imm; // @ Config.scala l148
  assign dis_dst_src1_data = dis_src_src1_data; // @ Config.scala l148
  assign dis_dst_src2_data = dis_src_src2_data; // @ Config.scala l148
  assign dis_dst_rd_addr = dis_src_rd_addr; // @ Config.scala l148
  assign dis_dst_pc = dis_src_pc; // @ Config.scala l148
  assign dis_dst_instr = dis_src_instr; // @ Config.scala l148
  assign dis_dst_uop_alu_alu_ctrl_op = dis_src_uop_alu_alu_ctrl_op; // @ Config.scala l148
  assign dis_dst_uop_alu_alu_is_word = dis_src_uop_alu_alu_is_word; // @ Config.scala l148
  assign dis_dst_valid = dis_src_valid; // @ Dispatch.scala l142
  assign dis_src_ready = dis_dst_ready; // @ Dispatch.scala l143

endmodule
