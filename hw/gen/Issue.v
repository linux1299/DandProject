// Generator : SpinalHDL v1.8.1    git head : 2a7592004363e5b40ec43e1f122ed8641cd8965b
// Component : Issue
// Git hash  : f29d1de95b2b9aea3ec101573c63250a4bc0eea3

`timescale 1ns/1ps

module Issue (
  input               flush,
  input               iss_src_0_valid,
  output              iss_src_0_ready,
  input               iss_src_0_micro_op_uop_com_rd_wen,
  input               iss_src_0_micro_op_uop_com_src2_is_imm,
  input      [4:0]    iss_src_0_micro_op_uop_alu_alu_ctrl_op,
  input               iss_src_0_micro_op_uop_alu_alu_is_word,
  input      [3:0]    iss_src_0_micro_op_uop_bju_bju_ctrl_op,
  input               iss_src_0_micro_op_uop_bju_bju_rd_eq_rs1,
  input               iss_src_0_micro_op_uop_bju_bju_rd_is_link,
  input               iss_src_0_micro_op_uop_bju_bju_rs1_is_link,
  input      [3:0]    iss_src_0_micro_op_uop_bju_exp_ctrl_op,
  input      [11:0]   iss_src_0_micro_op_uop_bju_exp_csr_addr,
  input               iss_src_0_micro_op_uop_bju_exp_csr_wen,
  input      [3:0]    iss_src_0_micro_op_uop_lsu_lsu_ctrl_op,
  input               iss_src_0_micro_op_uop_lsu_lsu_is_load,
  input               iss_src_0_micro_op_uop_lsu_lsu_is_store,
  input      [2:0]    iss_src_0_exe_sel,
  input      [4:0]    iss_src_0_rs1_addr,
  input      [4:0]    iss_src_0_rs2_addr,
  input      [4:0]    iss_src_0_rd_addr,
  input      [63:0]   iss_src_0_imm,
  input      [31:0]   iss_src_0_pc,
  input      [31:0]   iss_src_0_branch_pc,
  input               iss_src_0_branch_taken,
  input      [31:0]   iss_src_0_instr,
  input               iss_src_1_valid,
  output              iss_src_1_ready,
  input               iss_src_1_micro_op_uop_com_rd_wen,
  input               iss_src_1_micro_op_uop_com_src2_is_imm,
  input      [4:0]    iss_src_1_micro_op_uop_alu_alu_ctrl_op,
  input               iss_src_1_micro_op_uop_alu_alu_is_word,
  input      [3:0]    iss_src_1_micro_op_uop_bju_bju_ctrl_op,
  input               iss_src_1_micro_op_uop_bju_bju_rd_eq_rs1,
  input               iss_src_1_micro_op_uop_bju_bju_rd_is_link,
  input               iss_src_1_micro_op_uop_bju_bju_rs1_is_link,
  input      [3:0]    iss_src_1_micro_op_uop_bju_exp_ctrl_op,
  input      [11:0]   iss_src_1_micro_op_uop_bju_exp_csr_addr,
  input               iss_src_1_micro_op_uop_bju_exp_csr_wen,
  input      [3:0]    iss_src_1_micro_op_uop_lsu_lsu_ctrl_op,
  input               iss_src_1_micro_op_uop_lsu_lsu_is_load,
  input               iss_src_1_micro_op_uop_lsu_lsu_is_store,
  input      [2:0]    iss_src_1_exe_sel,
  input      [4:0]    iss_src_1_rs1_addr,
  input      [4:0]    iss_src_1_rs2_addr,
  input      [4:0]    iss_src_1_rd_addr,
  input      [63:0]   iss_src_1_imm,
  input      [31:0]   iss_src_1_pc,
  input      [31:0]   iss_src_1_branch_pc,
  input               iss_src_1_branch_taken,
  input      [31:0]   iss_src_1_instr,
  output              iss_dst_0_valid,
  input               iss_dst_0_ready,
  output              iss_dst_0_issue_src_micro_op_uop_com_rd_wen,
  output              iss_dst_0_issue_src_micro_op_uop_com_src2_is_imm,
  output     [4:0]    iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op,
  output              iss_dst_0_issue_src_micro_op_uop_alu_alu_is_word,
  output     [3:0]    iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op,
  output              iss_dst_0_issue_src_micro_op_uop_bju_bju_rd_eq_rs1,
  output              iss_dst_0_issue_src_micro_op_uop_bju_bju_rd_is_link,
  output              iss_dst_0_issue_src_micro_op_uop_bju_bju_rs1_is_link,
  output     [3:0]    iss_dst_0_issue_src_micro_op_uop_bju_exp_ctrl_op,
  output     [11:0]   iss_dst_0_issue_src_micro_op_uop_bju_exp_csr_addr,
  output              iss_dst_0_issue_src_micro_op_uop_bju_exp_csr_wen,
  output     [3:0]    iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op,
  output              iss_dst_0_issue_src_micro_op_uop_lsu_lsu_is_load,
  output              iss_dst_0_issue_src_micro_op_uop_lsu_lsu_is_store,
  output     [2:0]    iss_dst_0_issue_src_exe_sel,
  output     [4:0]    iss_dst_0_issue_src_rs1_addr,
  output     [4:0]    iss_dst_0_issue_src_rs2_addr,
  output     [4:0]    iss_dst_0_issue_src_rd_addr,
  output     [63:0]   iss_dst_0_issue_src_imm,
  output     [31:0]   iss_dst_0_issue_src_pc,
  output     [31:0]   iss_dst_0_issue_src_branch_pc,
  output              iss_dst_0_issue_src_branch_taken,
  output     [31:0]   iss_dst_0_issue_src_instr,
  output     [4:0]    iss_dst_0_exe_sel_oh,
  output              iss_dst_1_valid,
  input               iss_dst_1_ready,
  output              iss_dst_1_issue_src_micro_op_uop_com_rd_wen,
  output              iss_dst_1_issue_src_micro_op_uop_com_src2_is_imm,
  output     [4:0]    iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op,
  output              iss_dst_1_issue_src_micro_op_uop_alu_alu_is_word,
  output     [3:0]    iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op,
  output              iss_dst_1_issue_src_micro_op_uop_bju_bju_rd_eq_rs1,
  output              iss_dst_1_issue_src_micro_op_uop_bju_bju_rd_is_link,
  output              iss_dst_1_issue_src_micro_op_uop_bju_bju_rs1_is_link,
  output     [3:0]    iss_dst_1_issue_src_micro_op_uop_bju_exp_ctrl_op,
  output     [11:0]   iss_dst_1_issue_src_micro_op_uop_bju_exp_csr_addr,
  output              iss_dst_1_issue_src_micro_op_uop_bju_exp_csr_wen,
  output     [3:0]    iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op,
  output              iss_dst_1_issue_src_micro_op_uop_lsu_lsu_is_load,
  output              iss_dst_1_issue_src_micro_op_uop_lsu_lsu_is_store,
  output     [2:0]    iss_dst_1_issue_src_exe_sel,
  output     [4:0]    iss_dst_1_issue_src_rs1_addr,
  output     [4:0]    iss_dst_1_issue_src_rs2_addr,
  output     [4:0]    iss_dst_1_issue_src_rd_addr,
  output     [63:0]   iss_dst_1_issue_src_imm,
  output     [31:0]   iss_dst_1_issue_src_pc,
  output     [31:0]   iss_dst_1_issue_src_branch_pc,
  output              iss_dst_1_issue_src_branch_taken,
  output     [31:0]   iss_dst_1_issue_src_instr,
  output     [4:0]    iss_dst_1_exe_sel_oh,
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
  localparam ExeSelEnum_IDLE = 3'd0;
  localparam ExeSelEnum_ALU = 3'd1;
  localparam ExeSelEnum_BJU = 3'd2;
  localparam ExeSelEnum_LSU = 3'd3;
  localparam ExeSelEnum_DIV = 3'd4;

  reg                 head_0_valid;
  wire                head_0_ready;
  wire                head_0_update;
  reg                 head_0_issue_src_micro_op_uop_com_rd_wen;
  reg                 head_0_issue_src_micro_op_uop_com_src2_is_imm;
  reg        [4:0]    head_0_issue_src_micro_op_uop_alu_alu_ctrl_op;
  reg                 head_0_issue_src_micro_op_uop_alu_alu_is_word;
  reg        [3:0]    head_0_issue_src_micro_op_uop_bju_bju_ctrl_op;
  reg                 head_0_issue_src_micro_op_uop_bju_bju_rd_eq_rs1;
  reg                 head_0_issue_src_micro_op_uop_bju_bju_rd_is_link;
  reg                 head_0_issue_src_micro_op_uop_bju_bju_rs1_is_link;
  reg        [3:0]    head_0_issue_src_micro_op_uop_bju_exp_ctrl_op;
  reg        [11:0]   head_0_issue_src_micro_op_uop_bju_exp_csr_addr;
  reg                 head_0_issue_src_micro_op_uop_bju_exp_csr_wen;
  reg        [3:0]    head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op;
  reg                 head_0_issue_src_micro_op_uop_lsu_lsu_is_load;
  reg                 head_0_issue_src_micro_op_uop_lsu_lsu_is_store;
  reg        [2:0]    head_0_issue_src_exe_sel;
  reg        [4:0]    head_0_issue_src_rs1_addr;
  reg        [4:0]    head_0_issue_src_rs2_addr;
  reg        [4:0]    head_0_issue_src_rd_addr;
  reg        [63:0]   head_0_issue_src_imm;
  reg        [31:0]   head_0_issue_src_pc;
  reg        [31:0]   head_0_issue_src_branch_pc;
  reg                 head_0_issue_src_branch_taken;
  reg        [31:0]   head_0_issue_src_instr;
  reg        [4:0]    head_0_exe_sel_oh;
  reg                 head_1_valid;
  wire                head_1_ready;
  wire                head_1_update;
  reg                 head_1_issue_src_micro_op_uop_com_rd_wen;
  reg                 head_1_issue_src_micro_op_uop_com_src2_is_imm;
  reg        [4:0]    head_1_issue_src_micro_op_uop_alu_alu_ctrl_op;
  reg                 head_1_issue_src_micro_op_uop_alu_alu_is_word;
  reg        [3:0]    head_1_issue_src_micro_op_uop_bju_bju_ctrl_op;
  reg                 head_1_issue_src_micro_op_uop_bju_bju_rd_eq_rs1;
  reg                 head_1_issue_src_micro_op_uop_bju_bju_rd_is_link;
  reg                 head_1_issue_src_micro_op_uop_bju_bju_rs1_is_link;
  reg        [3:0]    head_1_issue_src_micro_op_uop_bju_exp_ctrl_op;
  reg        [11:0]   head_1_issue_src_micro_op_uop_bju_exp_csr_addr;
  reg                 head_1_issue_src_micro_op_uop_bju_exp_csr_wen;
  reg        [3:0]    head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op;
  reg                 head_1_issue_src_micro_op_uop_lsu_lsu_is_load;
  reg                 head_1_issue_src_micro_op_uop_lsu_lsu_is_store;
  reg        [2:0]    head_1_issue_src_exe_sel;
  reg        [4:0]    head_1_issue_src_rs1_addr;
  reg        [4:0]    head_1_issue_src_rs2_addr;
  reg        [4:0]    head_1_issue_src_rd_addr;
  reg        [63:0]   head_1_issue_src_imm;
  reg        [31:0]   head_1_issue_src_pc;
  reg        [31:0]   head_1_issue_src_branch_pc;
  reg                 head_1_issue_src_branch_taken;
  reg        [31:0]   head_1_issue_src_instr;
  reg        [4:0]    head_1_exe_sel_oh;
  reg                 skid_0_valid;
  wire                skid_0_ready;
  wire                skid_0_update;
  reg                 skid_0_issue_src_micro_op_uop_com_rd_wen;
  reg                 skid_0_issue_src_micro_op_uop_com_src2_is_imm;
  reg        [4:0]    skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op;
  reg                 skid_0_issue_src_micro_op_uop_alu_alu_is_word;
  reg        [3:0]    skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op;
  reg                 skid_0_issue_src_micro_op_uop_bju_bju_rd_eq_rs1;
  reg                 skid_0_issue_src_micro_op_uop_bju_bju_rd_is_link;
  reg                 skid_0_issue_src_micro_op_uop_bju_bju_rs1_is_link;
  reg        [3:0]    skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op;
  reg        [11:0]   skid_0_issue_src_micro_op_uop_bju_exp_csr_addr;
  reg                 skid_0_issue_src_micro_op_uop_bju_exp_csr_wen;
  reg        [3:0]    skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op;
  reg                 skid_0_issue_src_micro_op_uop_lsu_lsu_is_load;
  reg                 skid_0_issue_src_micro_op_uop_lsu_lsu_is_store;
  reg        [2:0]    skid_0_issue_src_exe_sel;
  reg        [4:0]    skid_0_issue_src_rs1_addr;
  reg        [4:0]    skid_0_issue_src_rs2_addr;
  reg        [4:0]    skid_0_issue_src_rd_addr;
  reg        [63:0]   skid_0_issue_src_imm;
  reg        [31:0]   skid_0_issue_src_pc;
  reg        [31:0]   skid_0_issue_src_branch_pc;
  reg                 skid_0_issue_src_branch_taken;
  reg        [31:0]   skid_0_issue_src_instr;
  wire       [4:0]    skid_0_exe_sel_oh;
  reg                 skid_1_valid;
  wire                skid_1_ready;
  wire                skid_1_update;
  reg                 skid_1_issue_src_micro_op_uop_com_rd_wen;
  reg                 skid_1_issue_src_micro_op_uop_com_src2_is_imm;
  reg        [4:0]    skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op;
  reg                 skid_1_issue_src_micro_op_uop_alu_alu_is_word;
  reg        [3:0]    skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op;
  reg                 skid_1_issue_src_micro_op_uop_bju_bju_rd_eq_rs1;
  reg                 skid_1_issue_src_micro_op_uop_bju_bju_rd_is_link;
  reg                 skid_1_issue_src_micro_op_uop_bju_bju_rs1_is_link;
  reg        [3:0]    skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op;
  reg        [11:0]   skid_1_issue_src_micro_op_uop_bju_exp_csr_addr;
  reg                 skid_1_issue_src_micro_op_uop_bju_exp_csr_wen;
  reg        [3:0]    skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op;
  reg                 skid_1_issue_src_micro_op_uop_lsu_lsu_is_load;
  reg                 skid_1_issue_src_micro_op_uop_lsu_lsu_is_store;
  reg        [2:0]    skid_1_issue_src_exe_sel;
  reg        [4:0]    skid_1_issue_src_rs1_addr;
  reg        [4:0]    skid_1_issue_src_rs2_addr;
  reg        [4:0]    skid_1_issue_src_rd_addr;
  reg        [63:0]   skid_1_issue_src_imm;
  reg        [31:0]   skid_1_issue_src_pc;
  reg        [31:0]   skid_1_issue_src_branch_pc;
  reg                 skid_1_issue_src_branch_taken;
  reg        [31:0]   skid_1_issue_src_instr;
  wire       [4:0]    skid_1_exe_sel_oh;
  `ifndef SYNTHESIS
  reg [47:0] iss_src_0_micro_op_uop_alu_alu_ctrl_op_string;
  reg [39:0] iss_src_0_micro_op_uop_bju_bju_ctrl_op_string;
  reg [47:0] iss_src_0_micro_op_uop_bju_exp_ctrl_op_string;
  reg [31:0] iss_src_0_micro_op_uop_lsu_lsu_ctrl_op_string;
  reg [31:0] iss_src_0_exe_sel_string;
  reg [47:0] iss_src_1_micro_op_uop_alu_alu_ctrl_op_string;
  reg [39:0] iss_src_1_micro_op_uop_bju_bju_ctrl_op_string;
  reg [47:0] iss_src_1_micro_op_uop_bju_exp_ctrl_op_string;
  reg [31:0] iss_src_1_micro_op_uop_lsu_lsu_ctrl_op_string;
  reg [31:0] iss_src_1_exe_sel_string;
  reg [47:0] iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string;
  reg [39:0] iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string;
  reg [47:0] iss_dst_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string;
  reg [31:0] iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string;
  reg [31:0] iss_dst_0_issue_src_exe_sel_string;
  reg [47:0] iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string;
  reg [39:0] iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string;
  reg [47:0] iss_dst_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string;
  reg [31:0] iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string;
  reg [31:0] iss_dst_1_issue_src_exe_sel_string;
  reg [47:0] head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string;
  reg [39:0] head_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string;
  reg [47:0] head_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string;
  reg [31:0] head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string;
  reg [31:0] head_0_issue_src_exe_sel_string;
  reg [47:0] head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string;
  reg [39:0] head_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string;
  reg [47:0] head_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string;
  reg [31:0] head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string;
  reg [31:0] head_1_issue_src_exe_sel_string;
  reg [47:0] skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string;
  reg [39:0] skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string;
  reg [47:0] skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string;
  reg [31:0] skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string;
  reg [31:0] skid_0_issue_src_exe_sel_string;
  reg [47:0] skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string;
  reg [39:0] skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string;
  reg [47:0] skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string;
  reg [31:0] skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string;
  reg [31:0] skid_1_issue_src_exe_sel_string;
  `endif


  `ifndef SYNTHESIS
  always @(*) begin
    case(iss_src_0_micro_op_uop_alu_alu_ctrl_op)
      AluCtrlEnum_IDLE : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "IDLE  ";
      AluCtrlEnum_ADD : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "ADD   ";
      AluCtrlEnum_SUB : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "SUB   ";
      AluCtrlEnum_SLT : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "SLT   ";
      AluCtrlEnum_SLTU : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "SLTU  ";
      AluCtrlEnum_XOR_1 : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "XOR_1 ";
      AluCtrlEnum_SLL_1 : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "SLL_1 ";
      AluCtrlEnum_SRL_1 : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "SRL_1 ";
      AluCtrlEnum_SRA_1 : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "SRA_1 ";
      AluCtrlEnum_AND_1 : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "AND_1 ";
      AluCtrlEnum_OR_1 : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "OR_1  ";
      AluCtrlEnum_LUI : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "LUI   ";
      AluCtrlEnum_MUL : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "MUL   ";
      AluCtrlEnum_MULH : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "MULH  ";
      AluCtrlEnum_MULHSU : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "MULHSU";
      AluCtrlEnum_MULHU : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "MULHU ";
      AluCtrlEnum_DIV : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "DIV   ";
      AluCtrlEnum_DIVU : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "DIVU  ";
      AluCtrlEnum_REM_1 : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "REM_1 ";
      AluCtrlEnum_REMU : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "REMU  ";
      AluCtrlEnum_MULW : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "MULW  ";
      AluCtrlEnum_DIVW : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "DIVW  ";
      AluCtrlEnum_DIVUW : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "DIVUW ";
      AluCtrlEnum_REMW : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "REMW  ";
      AluCtrlEnum_REMUW : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "REMUW ";
      default : iss_src_0_micro_op_uop_alu_alu_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(iss_src_0_micro_op_uop_bju_bju_ctrl_op)
      BjuCtrlEnum_IDLE : iss_src_0_micro_op_uop_bju_bju_ctrl_op_string = "IDLE ";
      BjuCtrlEnum_AUIPC : iss_src_0_micro_op_uop_bju_bju_ctrl_op_string = "AUIPC";
      BjuCtrlEnum_JAL : iss_src_0_micro_op_uop_bju_bju_ctrl_op_string = "JAL  ";
      BjuCtrlEnum_JALR : iss_src_0_micro_op_uop_bju_bju_ctrl_op_string = "JALR ";
      BjuCtrlEnum_BEQ : iss_src_0_micro_op_uop_bju_bju_ctrl_op_string = "BEQ  ";
      BjuCtrlEnum_BNE : iss_src_0_micro_op_uop_bju_bju_ctrl_op_string = "BNE  ";
      BjuCtrlEnum_BLT : iss_src_0_micro_op_uop_bju_bju_ctrl_op_string = "BLT  ";
      BjuCtrlEnum_BGE : iss_src_0_micro_op_uop_bju_bju_ctrl_op_string = "BGE  ";
      BjuCtrlEnum_BLTU : iss_src_0_micro_op_uop_bju_bju_ctrl_op_string = "BLTU ";
      BjuCtrlEnum_BGEU : iss_src_0_micro_op_uop_bju_bju_ctrl_op_string = "BGEU ";
      BjuCtrlEnum_CSR : iss_src_0_micro_op_uop_bju_bju_ctrl_op_string = "CSR  ";
      default : iss_src_0_micro_op_uop_bju_bju_ctrl_op_string = "?????";
    endcase
  end
  always @(*) begin
    case(iss_src_0_micro_op_uop_bju_exp_ctrl_op)
      ExpCtrlEnum_IDLE : iss_src_0_micro_op_uop_bju_exp_ctrl_op_string = "IDLE  ";
      ExpCtrlEnum_ECALL : iss_src_0_micro_op_uop_bju_exp_ctrl_op_string = "ECALL ";
      ExpCtrlEnum_EBREAK : iss_src_0_micro_op_uop_bju_exp_ctrl_op_string = "EBREAK";
      ExpCtrlEnum_MRET : iss_src_0_micro_op_uop_bju_exp_ctrl_op_string = "MRET  ";
      ExpCtrlEnum_CSRRW : iss_src_0_micro_op_uop_bju_exp_ctrl_op_string = "CSRRW ";
      ExpCtrlEnum_CSRRS : iss_src_0_micro_op_uop_bju_exp_ctrl_op_string = "CSRRS ";
      ExpCtrlEnum_CSRRC : iss_src_0_micro_op_uop_bju_exp_ctrl_op_string = "CSRRC ";
      ExpCtrlEnum_CSRRWI : iss_src_0_micro_op_uop_bju_exp_ctrl_op_string = "CSRRWI";
      ExpCtrlEnum_CSRRSI : iss_src_0_micro_op_uop_bju_exp_ctrl_op_string = "CSRRSI";
      ExpCtrlEnum_CSRRCI : iss_src_0_micro_op_uop_bju_exp_ctrl_op_string = "CSRRCI";
      default : iss_src_0_micro_op_uop_bju_exp_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(iss_src_0_micro_op_uop_lsu_lsu_ctrl_op)
      LsuCtrlEnum_IDLE : iss_src_0_micro_op_uop_lsu_lsu_ctrl_op_string = "IDLE";
      LsuCtrlEnum_LB : iss_src_0_micro_op_uop_lsu_lsu_ctrl_op_string = "LB  ";
      LsuCtrlEnum_LBU : iss_src_0_micro_op_uop_lsu_lsu_ctrl_op_string = "LBU ";
      LsuCtrlEnum_LH : iss_src_0_micro_op_uop_lsu_lsu_ctrl_op_string = "LH  ";
      LsuCtrlEnum_LHU : iss_src_0_micro_op_uop_lsu_lsu_ctrl_op_string = "LHU ";
      LsuCtrlEnum_LW : iss_src_0_micro_op_uop_lsu_lsu_ctrl_op_string = "LW  ";
      LsuCtrlEnum_LWU : iss_src_0_micro_op_uop_lsu_lsu_ctrl_op_string = "LWU ";
      LsuCtrlEnum_LD : iss_src_0_micro_op_uop_lsu_lsu_ctrl_op_string = "LD  ";
      LsuCtrlEnum_SB : iss_src_0_micro_op_uop_lsu_lsu_ctrl_op_string = "SB  ";
      LsuCtrlEnum_SH : iss_src_0_micro_op_uop_lsu_lsu_ctrl_op_string = "SH  ";
      LsuCtrlEnum_SW : iss_src_0_micro_op_uop_lsu_lsu_ctrl_op_string = "SW  ";
      LsuCtrlEnum_SD : iss_src_0_micro_op_uop_lsu_lsu_ctrl_op_string = "SD  ";
      default : iss_src_0_micro_op_uop_lsu_lsu_ctrl_op_string = "????";
    endcase
  end
  always @(*) begin
    case(iss_src_0_exe_sel)
      ExeSelEnum_IDLE : iss_src_0_exe_sel_string = "IDLE";
      ExeSelEnum_ALU : iss_src_0_exe_sel_string = "ALU ";
      ExeSelEnum_BJU : iss_src_0_exe_sel_string = "BJU ";
      ExeSelEnum_LSU : iss_src_0_exe_sel_string = "LSU ";
      ExeSelEnum_DIV : iss_src_0_exe_sel_string = "DIV ";
      default : iss_src_0_exe_sel_string = "????";
    endcase
  end
  always @(*) begin
    case(iss_src_1_micro_op_uop_alu_alu_ctrl_op)
      AluCtrlEnum_IDLE : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "IDLE  ";
      AluCtrlEnum_ADD : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "ADD   ";
      AluCtrlEnum_SUB : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "SUB   ";
      AluCtrlEnum_SLT : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "SLT   ";
      AluCtrlEnum_SLTU : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "SLTU  ";
      AluCtrlEnum_XOR_1 : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "XOR_1 ";
      AluCtrlEnum_SLL_1 : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "SLL_1 ";
      AluCtrlEnum_SRL_1 : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "SRL_1 ";
      AluCtrlEnum_SRA_1 : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "SRA_1 ";
      AluCtrlEnum_AND_1 : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "AND_1 ";
      AluCtrlEnum_OR_1 : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "OR_1  ";
      AluCtrlEnum_LUI : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "LUI   ";
      AluCtrlEnum_MUL : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "MUL   ";
      AluCtrlEnum_MULH : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "MULH  ";
      AluCtrlEnum_MULHSU : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "MULHSU";
      AluCtrlEnum_MULHU : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "MULHU ";
      AluCtrlEnum_DIV : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "DIV   ";
      AluCtrlEnum_DIVU : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "DIVU  ";
      AluCtrlEnum_REM_1 : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "REM_1 ";
      AluCtrlEnum_REMU : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "REMU  ";
      AluCtrlEnum_MULW : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "MULW  ";
      AluCtrlEnum_DIVW : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "DIVW  ";
      AluCtrlEnum_DIVUW : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "DIVUW ";
      AluCtrlEnum_REMW : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "REMW  ";
      AluCtrlEnum_REMUW : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "REMUW ";
      default : iss_src_1_micro_op_uop_alu_alu_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(iss_src_1_micro_op_uop_bju_bju_ctrl_op)
      BjuCtrlEnum_IDLE : iss_src_1_micro_op_uop_bju_bju_ctrl_op_string = "IDLE ";
      BjuCtrlEnum_AUIPC : iss_src_1_micro_op_uop_bju_bju_ctrl_op_string = "AUIPC";
      BjuCtrlEnum_JAL : iss_src_1_micro_op_uop_bju_bju_ctrl_op_string = "JAL  ";
      BjuCtrlEnum_JALR : iss_src_1_micro_op_uop_bju_bju_ctrl_op_string = "JALR ";
      BjuCtrlEnum_BEQ : iss_src_1_micro_op_uop_bju_bju_ctrl_op_string = "BEQ  ";
      BjuCtrlEnum_BNE : iss_src_1_micro_op_uop_bju_bju_ctrl_op_string = "BNE  ";
      BjuCtrlEnum_BLT : iss_src_1_micro_op_uop_bju_bju_ctrl_op_string = "BLT  ";
      BjuCtrlEnum_BGE : iss_src_1_micro_op_uop_bju_bju_ctrl_op_string = "BGE  ";
      BjuCtrlEnum_BLTU : iss_src_1_micro_op_uop_bju_bju_ctrl_op_string = "BLTU ";
      BjuCtrlEnum_BGEU : iss_src_1_micro_op_uop_bju_bju_ctrl_op_string = "BGEU ";
      BjuCtrlEnum_CSR : iss_src_1_micro_op_uop_bju_bju_ctrl_op_string = "CSR  ";
      default : iss_src_1_micro_op_uop_bju_bju_ctrl_op_string = "?????";
    endcase
  end
  always @(*) begin
    case(iss_src_1_micro_op_uop_bju_exp_ctrl_op)
      ExpCtrlEnum_IDLE : iss_src_1_micro_op_uop_bju_exp_ctrl_op_string = "IDLE  ";
      ExpCtrlEnum_ECALL : iss_src_1_micro_op_uop_bju_exp_ctrl_op_string = "ECALL ";
      ExpCtrlEnum_EBREAK : iss_src_1_micro_op_uop_bju_exp_ctrl_op_string = "EBREAK";
      ExpCtrlEnum_MRET : iss_src_1_micro_op_uop_bju_exp_ctrl_op_string = "MRET  ";
      ExpCtrlEnum_CSRRW : iss_src_1_micro_op_uop_bju_exp_ctrl_op_string = "CSRRW ";
      ExpCtrlEnum_CSRRS : iss_src_1_micro_op_uop_bju_exp_ctrl_op_string = "CSRRS ";
      ExpCtrlEnum_CSRRC : iss_src_1_micro_op_uop_bju_exp_ctrl_op_string = "CSRRC ";
      ExpCtrlEnum_CSRRWI : iss_src_1_micro_op_uop_bju_exp_ctrl_op_string = "CSRRWI";
      ExpCtrlEnum_CSRRSI : iss_src_1_micro_op_uop_bju_exp_ctrl_op_string = "CSRRSI";
      ExpCtrlEnum_CSRRCI : iss_src_1_micro_op_uop_bju_exp_ctrl_op_string = "CSRRCI";
      default : iss_src_1_micro_op_uop_bju_exp_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(iss_src_1_micro_op_uop_lsu_lsu_ctrl_op)
      LsuCtrlEnum_IDLE : iss_src_1_micro_op_uop_lsu_lsu_ctrl_op_string = "IDLE";
      LsuCtrlEnum_LB : iss_src_1_micro_op_uop_lsu_lsu_ctrl_op_string = "LB  ";
      LsuCtrlEnum_LBU : iss_src_1_micro_op_uop_lsu_lsu_ctrl_op_string = "LBU ";
      LsuCtrlEnum_LH : iss_src_1_micro_op_uop_lsu_lsu_ctrl_op_string = "LH  ";
      LsuCtrlEnum_LHU : iss_src_1_micro_op_uop_lsu_lsu_ctrl_op_string = "LHU ";
      LsuCtrlEnum_LW : iss_src_1_micro_op_uop_lsu_lsu_ctrl_op_string = "LW  ";
      LsuCtrlEnum_LWU : iss_src_1_micro_op_uop_lsu_lsu_ctrl_op_string = "LWU ";
      LsuCtrlEnum_LD : iss_src_1_micro_op_uop_lsu_lsu_ctrl_op_string = "LD  ";
      LsuCtrlEnum_SB : iss_src_1_micro_op_uop_lsu_lsu_ctrl_op_string = "SB  ";
      LsuCtrlEnum_SH : iss_src_1_micro_op_uop_lsu_lsu_ctrl_op_string = "SH  ";
      LsuCtrlEnum_SW : iss_src_1_micro_op_uop_lsu_lsu_ctrl_op_string = "SW  ";
      LsuCtrlEnum_SD : iss_src_1_micro_op_uop_lsu_lsu_ctrl_op_string = "SD  ";
      default : iss_src_1_micro_op_uop_lsu_lsu_ctrl_op_string = "????";
    endcase
  end
  always @(*) begin
    case(iss_src_1_exe_sel)
      ExeSelEnum_IDLE : iss_src_1_exe_sel_string = "IDLE";
      ExeSelEnum_ALU : iss_src_1_exe_sel_string = "ALU ";
      ExeSelEnum_BJU : iss_src_1_exe_sel_string = "BJU ";
      ExeSelEnum_LSU : iss_src_1_exe_sel_string = "LSU ";
      ExeSelEnum_DIV : iss_src_1_exe_sel_string = "DIV ";
      default : iss_src_1_exe_sel_string = "????";
    endcase
  end
  always @(*) begin
    case(iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op)
      AluCtrlEnum_IDLE : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "IDLE  ";
      AluCtrlEnum_ADD : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "ADD   ";
      AluCtrlEnum_SUB : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SUB   ";
      AluCtrlEnum_SLT : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLT   ";
      AluCtrlEnum_SLTU : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLTU  ";
      AluCtrlEnum_XOR_1 : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "XOR_1 ";
      AluCtrlEnum_SLL_1 : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLL_1 ";
      AluCtrlEnum_SRL_1 : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SRL_1 ";
      AluCtrlEnum_SRA_1 : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SRA_1 ";
      AluCtrlEnum_AND_1 : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "AND_1 ";
      AluCtrlEnum_OR_1 : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "OR_1  ";
      AluCtrlEnum_LUI : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "LUI   ";
      AluCtrlEnum_MUL : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MUL   ";
      AluCtrlEnum_MULH : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULH  ";
      AluCtrlEnum_MULHSU : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULHSU";
      AluCtrlEnum_MULHU : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULHU ";
      AluCtrlEnum_DIV : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIV   ";
      AluCtrlEnum_DIVU : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVU  ";
      AluCtrlEnum_REM_1 : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REM_1 ";
      AluCtrlEnum_REMU : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMU  ";
      AluCtrlEnum_MULW : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULW  ";
      AluCtrlEnum_DIVW : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVW  ";
      AluCtrlEnum_DIVUW : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVUW ";
      AluCtrlEnum_REMW : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMW  ";
      AluCtrlEnum_REMUW : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMUW ";
      default : iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op)
      BjuCtrlEnum_IDLE : iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "IDLE ";
      BjuCtrlEnum_AUIPC : iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "AUIPC";
      BjuCtrlEnum_JAL : iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "JAL  ";
      BjuCtrlEnum_JALR : iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "JALR ";
      BjuCtrlEnum_BEQ : iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BEQ  ";
      BjuCtrlEnum_BNE : iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BNE  ";
      BjuCtrlEnum_BLT : iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BLT  ";
      BjuCtrlEnum_BGE : iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BGE  ";
      BjuCtrlEnum_BLTU : iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BLTU ";
      BjuCtrlEnum_BGEU : iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BGEU ";
      BjuCtrlEnum_CSR : iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "CSR  ";
      default : iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "?????";
    endcase
  end
  always @(*) begin
    case(iss_dst_0_issue_src_micro_op_uop_bju_exp_ctrl_op)
      ExpCtrlEnum_IDLE : iss_dst_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "IDLE  ";
      ExpCtrlEnum_ECALL : iss_dst_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "ECALL ";
      ExpCtrlEnum_EBREAK : iss_dst_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "EBREAK";
      ExpCtrlEnum_MRET : iss_dst_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "MRET  ";
      ExpCtrlEnum_CSRRW : iss_dst_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRW ";
      ExpCtrlEnum_CSRRS : iss_dst_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRS ";
      ExpCtrlEnum_CSRRC : iss_dst_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRC ";
      ExpCtrlEnum_CSRRWI : iss_dst_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRWI";
      ExpCtrlEnum_CSRRSI : iss_dst_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRSI";
      ExpCtrlEnum_CSRRCI : iss_dst_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRCI";
      default : iss_dst_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op)
      LsuCtrlEnum_IDLE : iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "IDLE";
      LsuCtrlEnum_LB : iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LB  ";
      LsuCtrlEnum_LBU : iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LBU ";
      LsuCtrlEnum_LH : iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LH  ";
      LsuCtrlEnum_LHU : iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LHU ";
      LsuCtrlEnum_LW : iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LW  ";
      LsuCtrlEnum_LWU : iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LWU ";
      LsuCtrlEnum_LD : iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LD  ";
      LsuCtrlEnum_SB : iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SB  ";
      LsuCtrlEnum_SH : iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SH  ";
      LsuCtrlEnum_SW : iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SW  ";
      LsuCtrlEnum_SD : iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SD  ";
      default : iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "????";
    endcase
  end
  always @(*) begin
    case(iss_dst_0_issue_src_exe_sel)
      ExeSelEnum_IDLE : iss_dst_0_issue_src_exe_sel_string = "IDLE";
      ExeSelEnum_ALU : iss_dst_0_issue_src_exe_sel_string = "ALU ";
      ExeSelEnum_BJU : iss_dst_0_issue_src_exe_sel_string = "BJU ";
      ExeSelEnum_LSU : iss_dst_0_issue_src_exe_sel_string = "LSU ";
      ExeSelEnum_DIV : iss_dst_0_issue_src_exe_sel_string = "DIV ";
      default : iss_dst_0_issue_src_exe_sel_string = "????";
    endcase
  end
  always @(*) begin
    case(iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op)
      AluCtrlEnum_IDLE : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "IDLE  ";
      AluCtrlEnum_ADD : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "ADD   ";
      AluCtrlEnum_SUB : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SUB   ";
      AluCtrlEnum_SLT : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLT   ";
      AluCtrlEnum_SLTU : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLTU  ";
      AluCtrlEnum_XOR_1 : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "XOR_1 ";
      AluCtrlEnum_SLL_1 : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLL_1 ";
      AluCtrlEnum_SRL_1 : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SRL_1 ";
      AluCtrlEnum_SRA_1 : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SRA_1 ";
      AluCtrlEnum_AND_1 : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "AND_1 ";
      AluCtrlEnum_OR_1 : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "OR_1  ";
      AluCtrlEnum_LUI : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "LUI   ";
      AluCtrlEnum_MUL : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MUL   ";
      AluCtrlEnum_MULH : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULH  ";
      AluCtrlEnum_MULHSU : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULHSU";
      AluCtrlEnum_MULHU : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULHU ";
      AluCtrlEnum_DIV : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIV   ";
      AluCtrlEnum_DIVU : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVU  ";
      AluCtrlEnum_REM_1 : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REM_1 ";
      AluCtrlEnum_REMU : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMU  ";
      AluCtrlEnum_MULW : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULW  ";
      AluCtrlEnum_DIVW : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVW  ";
      AluCtrlEnum_DIVUW : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVUW ";
      AluCtrlEnum_REMW : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMW  ";
      AluCtrlEnum_REMUW : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMUW ";
      default : iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op)
      BjuCtrlEnum_IDLE : iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "IDLE ";
      BjuCtrlEnum_AUIPC : iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "AUIPC";
      BjuCtrlEnum_JAL : iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "JAL  ";
      BjuCtrlEnum_JALR : iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "JALR ";
      BjuCtrlEnum_BEQ : iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BEQ  ";
      BjuCtrlEnum_BNE : iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BNE  ";
      BjuCtrlEnum_BLT : iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BLT  ";
      BjuCtrlEnum_BGE : iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BGE  ";
      BjuCtrlEnum_BLTU : iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BLTU ";
      BjuCtrlEnum_BGEU : iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BGEU ";
      BjuCtrlEnum_CSR : iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "CSR  ";
      default : iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "?????";
    endcase
  end
  always @(*) begin
    case(iss_dst_1_issue_src_micro_op_uop_bju_exp_ctrl_op)
      ExpCtrlEnum_IDLE : iss_dst_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "IDLE  ";
      ExpCtrlEnum_ECALL : iss_dst_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "ECALL ";
      ExpCtrlEnum_EBREAK : iss_dst_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "EBREAK";
      ExpCtrlEnum_MRET : iss_dst_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "MRET  ";
      ExpCtrlEnum_CSRRW : iss_dst_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRW ";
      ExpCtrlEnum_CSRRS : iss_dst_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRS ";
      ExpCtrlEnum_CSRRC : iss_dst_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRC ";
      ExpCtrlEnum_CSRRWI : iss_dst_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRWI";
      ExpCtrlEnum_CSRRSI : iss_dst_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRSI";
      ExpCtrlEnum_CSRRCI : iss_dst_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRCI";
      default : iss_dst_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op)
      LsuCtrlEnum_IDLE : iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "IDLE";
      LsuCtrlEnum_LB : iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LB  ";
      LsuCtrlEnum_LBU : iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LBU ";
      LsuCtrlEnum_LH : iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LH  ";
      LsuCtrlEnum_LHU : iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LHU ";
      LsuCtrlEnum_LW : iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LW  ";
      LsuCtrlEnum_LWU : iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LWU ";
      LsuCtrlEnum_LD : iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LD  ";
      LsuCtrlEnum_SB : iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SB  ";
      LsuCtrlEnum_SH : iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SH  ";
      LsuCtrlEnum_SW : iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SW  ";
      LsuCtrlEnum_SD : iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SD  ";
      default : iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "????";
    endcase
  end
  always @(*) begin
    case(iss_dst_1_issue_src_exe_sel)
      ExeSelEnum_IDLE : iss_dst_1_issue_src_exe_sel_string = "IDLE";
      ExeSelEnum_ALU : iss_dst_1_issue_src_exe_sel_string = "ALU ";
      ExeSelEnum_BJU : iss_dst_1_issue_src_exe_sel_string = "BJU ";
      ExeSelEnum_LSU : iss_dst_1_issue_src_exe_sel_string = "LSU ";
      ExeSelEnum_DIV : iss_dst_1_issue_src_exe_sel_string = "DIV ";
      default : iss_dst_1_issue_src_exe_sel_string = "????";
    endcase
  end
  always @(*) begin
    case(head_0_issue_src_micro_op_uop_alu_alu_ctrl_op)
      AluCtrlEnum_IDLE : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "IDLE  ";
      AluCtrlEnum_ADD : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "ADD   ";
      AluCtrlEnum_SUB : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SUB   ";
      AluCtrlEnum_SLT : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLT   ";
      AluCtrlEnum_SLTU : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLTU  ";
      AluCtrlEnum_XOR_1 : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "XOR_1 ";
      AluCtrlEnum_SLL_1 : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLL_1 ";
      AluCtrlEnum_SRL_1 : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SRL_1 ";
      AluCtrlEnum_SRA_1 : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SRA_1 ";
      AluCtrlEnum_AND_1 : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "AND_1 ";
      AluCtrlEnum_OR_1 : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "OR_1  ";
      AluCtrlEnum_LUI : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "LUI   ";
      AluCtrlEnum_MUL : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MUL   ";
      AluCtrlEnum_MULH : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULH  ";
      AluCtrlEnum_MULHSU : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULHSU";
      AluCtrlEnum_MULHU : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULHU ";
      AluCtrlEnum_DIV : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIV   ";
      AluCtrlEnum_DIVU : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVU  ";
      AluCtrlEnum_REM_1 : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REM_1 ";
      AluCtrlEnum_REMU : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMU  ";
      AluCtrlEnum_MULW : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULW  ";
      AluCtrlEnum_DIVW : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVW  ";
      AluCtrlEnum_DIVUW : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVUW ";
      AluCtrlEnum_REMW : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMW  ";
      AluCtrlEnum_REMUW : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMUW ";
      default : head_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(head_0_issue_src_micro_op_uop_bju_bju_ctrl_op)
      BjuCtrlEnum_IDLE : head_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "IDLE ";
      BjuCtrlEnum_AUIPC : head_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "AUIPC";
      BjuCtrlEnum_JAL : head_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "JAL  ";
      BjuCtrlEnum_JALR : head_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "JALR ";
      BjuCtrlEnum_BEQ : head_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BEQ  ";
      BjuCtrlEnum_BNE : head_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BNE  ";
      BjuCtrlEnum_BLT : head_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BLT  ";
      BjuCtrlEnum_BGE : head_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BGE  ";
      BjuCtrlEnum_BLTU : head_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BLTU ";
      BjuCtrlEnum_BGEU : head_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BGEU ";
      BjuCtrlEnum_CSR : head_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "CSR  ";
      default : head_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "?????";
    endcase
  end
  always @(*) begin
    case(head_0_issue_src_micro_op_uop_bju_exp_ctrl_op)
      ExpCtrlEnum_IDLE : head_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "IDLE  ";
      ExpCtrlEnum_ECALL : head_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "ECALL ";
      ExpCtrlEnum_EBREAK : head_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "EBREAK";
      ExpCtrlEnum_MRET : head_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "MRET  ";
      ExpCtrlEnum_CSRRW : head_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRW ";
      ExpCtrlEnum_CSRRS : head_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRS ";
      ExpCtrlEnum_CSRRC : head_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRC ";
      ExpCtrlEnum_CSRRWI : head_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRWI";
      ExpCtrlEnum_CSRRSI : head_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRSI";
      ExpCtrlEnum_CSRRCI : head_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRCI";
      default : head_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op)
      LsuCtrlEnum_IDLE : head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "IDLE";
      LsuCtrlEnum_LB : head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LB  ";
      LsuCtrlEnum_LBU : head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LBU ";
      LsuCtrlEnum_LH : head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LH  ";
      LsuCtrlEnum_LHU : head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LHU ";
      LsuCtrlEnum_LW : head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LW  ";
      LsuCtrlEnum_LWU : head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LWU ";
      LsuCtrlEnum_LD : head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LD  ";
      LsuCtrlEnum_SB : head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SB  ";
      LsuCtrlEnum_SH : head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SH  ";
      LsuCtrlEnum_SW : head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SW  ";
      LsuCtrlEnum_SD : head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SD  ";
      default : head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "????";
    endcase
  end
  always @(*) begin
    case(head_0_issue_src_exe_sel)
      ExeSelEnum_IDLE : head_0_issue_src_exe_sel_string = "IDLE";
      ExeSelEnum_ALU : head_0_issue_src_exe_sel_string = "ALU ";
      ExeSelEnum_BJU : head_0_issue_src_exe_sel_string = "BJU ";
      ExeSelEnum_LSU : head_0_issue_src_exe_sel_string = "LSU ";
      ExeSelEnum_DIV : head_0_issue_src_exe_sel_string = "DIV ";
      default : head_0_issue_src_exe_sel_string = "????";
    endcase
  end
  always @(*) begin
    case(head_1_issue_src_micro_op_uop_alu_alu_ctrl_op)
      AluCtrlEnum_IDLE : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "IDLE  ";
      AluCtrlEnum_ADD : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "ADD   ";
      AluCtrlEnum_SUB : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SUB   ";
      AluCtrlEnum_SLT : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLT   ";
      AluCtrlEnum_SLTU : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLTU  ";
      AluCtrlEnum_XOR_1 : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "XOR_1 ";
      AluCtrlEnum_SLL_1 : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLL_1 ";
      AluCtrlEnum_SRL_1 : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SRL_1 ";
      AluCtrlEnum_SRA_1 : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SRA_1 ";
      AluCtrlEnum_AND_1 : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "AND_1 ";
      AluCtrlEnum_OR_1 : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "OR_1  ";
      AluCtrlEnum_LUI : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "LUI   ";
      AluCtrlEnum_MUL : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MUL   ";
      AluCtrlEnum_MULH : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULH  ";
      AluCtrlEnum_MULHSU : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULHSU";
      AluCtrlEnum_MULHU : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULHU ";
      AluCtrlEnum_DIV : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIV   ";
      AluCtrlEnum_DIVU : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVU  ";
      AluCtrlEnum_REM_1 : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REM_1 ";
      AluCtrlEnum_REMU : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMU  ";
      AluCtrlEnum_MULW : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULW  ";
      AluCtrlEnum_DIVW : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVW  ";
      AluCtrlEnum_DIVUW : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVUW ";
      AluCtrlEnum_REMW : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMW  ";
      AluCtrlEnum_REMUW : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMUW ";
      default : head_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(head_1_issue_src_micro_op_uop_bju_bju_ctrl_op)
      BjuCtrlEnum_IDLE : head_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "IDLE ";
      BjuCtrlEnum_AUIPC : head_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "AUIPC";
      BjuCtrlEnum_JAL : head_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "JAL  ";
      BjuCtrlEnum_JALR : head_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "JALR ";
      BjuCtrlEnum_BEQ : head_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BEQ  ";
      BjuCtrlEnum_BNE : head_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BNE  ";
      BjuCtrlEnum_BLT : head_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BLT  ";
      BjuCtrlEnum_BGE : head_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BGE  ";
      BjuCtrlEnum_BLTU : head_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BLTU ";
      BjuCtrlEnum_BGEU : head_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BGEU ";
      BjuCtrlEnum_CSR : head_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "CSR  ";
      default : head_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "?????";
    endcase
  end
  always @(*) begin
    case(head_1_issue_src_micro_op_uop_bju_exp_ctrl_op)
      ExpCtrlEnum_IDLE : head_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "IDLE  ";
      ExpCtrlEnum_ECALL : head_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "ECALL ";
      ExpCtrlEnum_EBREAK : head_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "EBREAK";
      ExpCtrlEnum_MRET : head_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "MRET  ";
      ExpCtrlEnum_CSRRW : head_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRW ";
      ExpCtrlEnum_CSRRS : head_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRS ";
      ExpCtrlEnum_CSRRC : head_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRC ";
      ExpCtrlEnum_CSRRWI : head_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRWI";
      ExpCtrlEnum_CSRRSI : head_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRSI";
      ExpCtrlEnum_CSRRCI : head_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRCI";
      default : head_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op)
      LsuCtrlEnum_IDLE : head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "IDLE";
      LsuCtrlEnum_LB : head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LB  ";
      LsuCtrlEnum_LBU : head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LBU ";
      LsuCtrlEnum_LH : head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LH  ";
      LsuCtrlEnum_LHU : head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LHU ";
      LsuCtrlEnum_LW : head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LW  ";
      LsuCtrlEnum_LWU : head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LWU ";
      LsuCtrlEnum_LD : head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LD  ";
      LsuCtrlEnum_SB : head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SB  ";
      LsuCtrlEnum_SH : head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SH  ";
      LsuCtrlEnum_SW : head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SW  ";
      LsuCtrlEnum_SD : head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SD  ";
      default : head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "????";
    endcase
  end
  always @(*) begin
    case(head_1_issue_src_exe_sel)
      ExeSelEnum_IDLE : head_1_issue_src_exe_sel_string = "IDLE";
      ExeSelEnum_ALU : head_1_issue_src_exe_sel_string = "ALU ";
      ExeSelEnum_BJU : head_1_issue_src_exe_sel_string = "BJU ";
      ExeSelEnum_LSU : head_1_issue_src_exe_sel_string = "LSU ";
      ExeSelEnum_DIV : head_1_issue_src_exe_sel_string = "DIV ";
      default : head_1_issue_src_exe_sel_string = "????";
    endcase
  end
  always @(*) begin
    case(skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op)
      AluCtrlEnum_IDLE : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "IDLE  ";
      AluCtrlEnum_ADD : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "ADD   ";
      AluCtrlEnum_SUB : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SUB   ";
      AluCtrlEnum_SLT : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLT   ";
      AluCtrlEnum_SLTU : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLTU  ";
      AluCtrlEnum_XOR_1 : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "XOR_1 ";
      AluCtrlEnum_SLL_1 : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLL_1 ";
      AluCtrlEnum_SRL_1 : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SRL_1 ";
      AluCtrlEnum_SRA_1 : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SRA_1 ";
      AluCtrlEnum_AND_1 : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "AND_1 ";
      AluCtrlEnum_OR_1 : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "OR_1  ";
      AluCtrlEnum_LUI : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "LUI   ";
      AluCtrlEnum_MUL : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MUL   ";
      AluCtrlEnum_MULH : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULH  ";
      AluCtrlEnum_MULHSU : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULHSU";
      AluCtrlEnum_MULHU : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULHU ";
      AluCtrlEnum_DIV : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIV   ";
      AluCtrlEnum_DIVU : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVU  ";
      AluCtrlEnum_REM_1 : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REM_1 ";
      AluCtrlEnum_REMU : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMU  ";
      AluCtrlEnum_MULW : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULW  ";
      AluCtrlEnum_DIVW : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVW  ";
      AluCtrlEnum_DIVUW : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVUW ";
      AluCtrlEnum_REMW : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMW  ";
      AluCtrlEnum_REMUW : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMUW ";
      default : skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op)
      BjuCtrlEnum_IDLE : skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "IDLE ";
      BjuCtrlEnum_AUIPC : skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "AUIPC";
      BjuCtrlEnum_JAL : skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "JAL  ";
      BjuCtrlEnum_JALR : skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "JALR ";
      BjuCtrlEnum_BEQ : skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BEQ  ";
      BjuCtrlEnum_BNE : skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BNE  ";
      BjuCtrlEnum_BLT : skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BLT  ";
      BjuCtrlEnum_BGE : skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BGE  ";
      BjuCtrlEnum_BLTU : skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BLTU ";
      BjuCtrlEnum_BGEU : skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BGEU ";
      BjuCtrlEnum_CSR : skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "CSR  ";
      default : skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "?????";
    endcase
  end
  always @(*) begin
    case(skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op)
      ExpCtrlEnum_IDLE : skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "IDLE  ";
      ExpCtrlEnum_ECALL : skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "ECALL ";
      ExpCtrlEnum_EBREAK : skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "EBREAK";
      ExpCtrlEnum_MRET : skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "MRET  ";
      ExpCtrlEnum_CSRRW : skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRW ";
      ExpCtrlEnum_CSRRS : skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRS ";
      ExpCtrlEnum_CSRRC : skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRC ";
      ExpCtrlEnum_CSRRWI : skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRWI";
      ExpCtrlEnum_CSRRSI : skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRSI";
      ExpCtrlEnum_CSRRCI : skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRCI";
      default : skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op)
      LsuCtrlEnum_IDLE : skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "IDLE";
      LsuCtrlEnum_LB : skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LB  ";
      LsuCtrlEnum_LBU : skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LBU ";
      LsuCtrlEnum_LH : skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LH  ";
      LsuCtrlEnum_LHU : skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LHU ";
      LsuCtrlEnum_LW : skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LW  ";
      LsuCtrlEnum_LWU : skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LWU ";
      LsuCtrlEnum_LD : skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LD  ";
      LsuCtrlEnum_SB : skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SB  ";
      LsuCtrlEnum_SH : skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SH  ";
      LsuCtrlEnum_SW : skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SW  ";
      LsuCtrlEnum_SD : skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SD  ";
      default : skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "????";
    endcase
  end
  always @(*) begin
    case(skid_0_issue_src_exe_sel)
      ExeSelEnum_IDLE : skid_0_issue_src_exe_sel_string = "IDLE";
      ExeSelEnum_ALU : skid_0_issue_src_exe_sel_string = "ALU ";
      ExeSelEnum_BJU : skid_0_issue_src_exe_sel_string = "BJU ";
      ExeSelEnum_LSU : skid_0_issue_src_exe_sel_string = "LSU ";
      ExeSelEnum_DIV : skid_0_issue_src_exe_sel_string = "DIV ";
      default : skid_0_issue_src_exe_sel_string = "????";
    endcase
  end
  always @(*) begin
    case(skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op)
      AluCtrlEnum_IDLE : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "IDLE  ";
      AluCtrlEnum_ADD : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "ADD   ";
      AluCtrlEnum_SUB : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SUB   ";
      AluCtrlEnum_SLT : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLT   ";
      AluCtrlEnum_SLTU : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLTU  ";
      AluCtrlEnum_XOR_1 : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "XOR_1 ";
      AluCtrlEnum_SLL_1 : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SLL_1 ";
      AluCtrlEnum_SRL_1 : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SRL_1 ";
      AluCtrlEnum_SRA_1 : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "SRA_1 ";
      AluCtrlEnum_AND_1 : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "AND_1 ";
      AluCtrlEnum_OR_1 : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "OR_1  ";
      AluCtrlEnum_LUI : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "LUI   ";
      AluCtrlEnum_MUL : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MUL   ";
      AluCtrlEnum_MULH : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULH  ";
      AluCtrlEnum_MULHSU : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULHSU";
      AluCtrlEnum_MULHU : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULHU ";
      AluCtrlEnum_DIV : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIV   ";
      AluCtrlEnum_DIVU : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVU  ";
      AluCtrlEnum_REM_1 : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REM_1 ";
      AluCtrlEnum_REMU : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMU  ";
      AluCtrlEnum_MULW : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "MULW  ";
      AluCtrlEnum_DIVW : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVW  ";
      AluCtrlEnum_DIVUW : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "DIVUW ";
      AluCtrlEnum_REMW : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMW  ";
      AluCtrlEnum_REMUW : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "REMUW ";
      default : skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op)
      BjuCtrlEnum_IDLE : skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "IDLE ";
      BjuCtrlEnum_AUIPC : skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "AUIPC";
      BjuCtrlEnum_JAL : skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "JAL  ";
      BjuCtrlEnum_JALR : skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "JALR ";
      BjuCtrlEnum_BEQ : skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BEQ  ";
      BjuCtrlEnum_BNE : skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BNE  ";
      BjuCtrlEnum_BLT : skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BLT  ";
      BjuCtrlEnum_BGE : skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BGE  ";
      BjuCtrlEnum_BLTU : skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BLTU ";
      BjuCtrlEnum_BGEU : skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "BGEU ";
      BjuCtrlEnum_CSR : skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "CSR  ";
      default : skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op_string = "?????";
    endcase
  end
  always @(*) begin
    case(skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op)
      ExpCtrlEnum_IDLE : skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "IDLE  ";
      ExpCtrlEnum_ECALL : skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "ECALL ";
      ExpCtrlEnum_EBREAK : skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "EBREAK";
      ExpCtrlEnum_MRET : skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "MRET  ";
      ExpCtrlEnum_CSRRW : skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRW ";
      ExpCtrlEnum_CSRRS : skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRS ";
      ExpCtrlEnum_CSRRC : skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRC ";
      ExpCtrlEnum_CSRRWI : skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRWI";
      ExpCtrlEnum_CSRRSI : skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRSI";
      ExpCtrlEnum_CSRRCI : skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "CSRRCI";
      default : skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op_string = "??????";
    endcase
  end
  always @(*) begin
    case(skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op)
      LsuCtrlEnum_IDLE : skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "IDLE";
      LsuCtrlEnum_LB : skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LB  ";
      LsuCtrlEnum_LBU : skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LBU ";
      LsuCtrlEnum_LH : skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LH  ";
      LsuCtrlEnum_LHU : skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LHU ";
      LsuCtrlEnum_LW : skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LW  ";
      LsuCtrlEnum_LWU : skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LWU ";
      LsuCtrlEnum_LD : skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "LD  ";
      LsuCtrlEnum_SB : skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SB  ";
      LsuCtrlEnum_SH : skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SH  ";
      LsuCtrlEnum_SW : skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SW  ";
      LsuCtrlEnum_SD : skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "SD  ";
      default : skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op_string = "????";
    endcase
  end
  always @(*) begin
    case(skid_1_issue_src_exe_sel)
      ExeSelEnum_IDLE : skid_1_issue_src_exe_sel_string = "IDLE";
      ExeSelEnum_ALU : skid_1_issue_src_exe_sel_string = "ALU ";
      ExeSelEnum_BJU : skid_1_issue_src_exe_sel_string = "BJU ";
      ExeSelEnum_LSU : skid_1_issue_src_exe_sel_string = "LSU ";
      ExeSelEnum_DIV : skid_1_issue_src_exe_sel_string = "DIV ";
      default : skid_1_issue_src_exe_sel_string = "????";
    endcase
  end
  `endif

  assign skid_0_exe_sel_oh = 5'h0;
  assign skid_1_exe_sel_oh = 5'h0;
  assign head_0_ready = ((! head_0_valid) || iss_dst_0_ready); // @ Issue.scala l34
  assign head_0_update = (head_0_ready && head_1_ready); // @ Issue.scala l35
  assign skid_0_ready = ((! skid_0_valid) || head_0_update); // @ Issue.scala l110
  assign skid_0_update = (iss_src_0_valid && (((! skid_0_valid) && (! head_0_update)) || (skid_0_valid && head_0_update))); // @ Issue.scala l111
  assign iss_src_0_ready = skid_0_ready; // @ Issue.scala l122
  assign iss_dst_0_valid = head_0_valid; // @ Issue.scala l123
  assign iss_dst_0_issue_src_micro_op_uop_com_rd_wen = head_0_issue_src_micro_op_uop_com_rd_wen; // @ Issue.scala l125
  assign iss_dst_0_issue_src_micro_op_uop_com_src2_is_imm = head_0_issue_src_micro_op_uop_com_src2_is_imm; // @ Issue.scala l125
  assign iss_dst_0_issue_src_micro_op_uop_alu_alu_ctrl_op = head_0_issue_src_micro_op_uop_alu_alu_ctrl_op; // @ Issue.scala l125
  assign iss_dst_0_issue_src_micro_op_uop_alu_alu_is_word = head_0_issue_src_micro_op_uop_alu_alu_is_word; // @ Issue.scala l125
  assign iss_dst_0_issue_src_micro_op_uop_bju_bju_ctrl_op = head_0_issue_src_micro_op_uop_bju_bju_ctrl_op; // @ Issue.scala l125
  assign iss_dst_0_issue_src_micro_op_uop_bju_bju_rd_eq_rs1 = head_0_issue_src_micro_op_uop_bju_bju_rd_eq_rs1; // @ Issue.scala l125
  assign iss_dst_0_issue_src_micro_op_uop_bju_bju_rd_is_link = head_0_issue_src_micro_op_uop_bju_bju_rd_is_link; // @ Issue.scala l125
  assign iss_dst_0_issue_src_micro_op_uop_bju_bju_rs1_is_link = head_0_issue_src_micro_op_uop_bju_bju_rs1_is_link; // @ Issue.scala l125
  assign iss_dst_0_issue_src_micro_op_uop_bju_exp_ctrl_op = head_0_issue_src_micro_op_uop_bju_exp_ctrl_op; // @ Issue.scala l125
  assign iss_dst_0_issue_src_micro_op_uop_bju_exp_csr_addr = head_0_issue_src_micro_op_uop_bju_exp_csr_addr; // @ Issue.scala l125
  assign iss_dst_0_issue_src_micro_op_uop_bju_exp_csr_wen = head_0_issue_src_micro_op_uop_bju_exp_csr_wen; // @ Issue.scala l125
  assign iss_dst_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op = head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op; // @ Issue.scala l125
  assign iss_dst_0_issue_src_micro_op_uop_lsu_lsu_is_load = head_0_issue_src_micro_op_uop_lsu_lsu_is_load; // @ Issue.scala l125
  assign iss_dst_0_issue_src_micro_op_uop_lsu_lsu_is_store = head_0_issue_src_micro_op_uop_lsu_lsu_is_store; // @ Issue.scala l125
  assign iss_dst_0_issue_src_exe_sel = head_0_issue_src_exe_sel; // @ Issue.scala l125
  assign iss_dst_0_issue_src_rs1_addr = head_0_issue_src_rs1_addr; // @ Issue.scala l125
  assign iss_dst_0_issue_src_rs2_addr = head_0_issue_src_rs2_addr; // @ Issue.scala l125
  assign iss_dst_0_issue_src_rd_addr = head_0_issue_src_rd_addr; // @ Issue.scala l125
  assign iss_dst_0_issue_src_imm = head_0_issue_src_imm; // @ Issue.scala l125
  assign iss_dst_0_issue_src_pc = head_0_issue_src_pc; // @ Issue.scala l125
  assign iss_dst_0_issue_src_branch_pc = head_0_issue_src_branch_pc; // @ Issue.scala l125
  assign iss_dst_0_issue_src_branch_taken = head_0_issue_src_branch_taken; // @ Issue.scala l125
  assign iss_dst_0_issue_src_instr = head_0_issue_src_instr; // @ Issue.scala l125
  assign iss_dst_0_exe_sel_oh = head_0_exe_sel_oh; // @ Issue.scala l126
  assign head_1_ready = ((! head_1_valid) || iss_dst_1_ready); // @ Issue.scala l34
  assign head_1_update = (head_0_ready && head_1_ready); // @ Issue.scala l35
  assign skid_1_ready = ((! skid_1_valid) || head_1_update); // @ Issue.scala l110
  assign skid_1_update = (iss_src_1_valid && (((! skid_1_valid) && (! head_1_update)) || (skid_1_valid && head_1_update))); // @ Issue.scala l111
  assign iss_src_1_ready = skid_1_ready; // @ Issue.scala l122
  assign iss_dst_1_valid = head_1_valid; // @ Issue.scala l123
  assign iss_dst_1_issue_src_micro_op_uop_com_rd_wen = head_1_issue_src_micro_op_uop_com_rd_wen; // @ Issue.scala l125
  assign iss_dst_1_issue_src_micro_op_uop_com_src2_is_imm = head_1_issue_src_micro_op_uop_com_src2_is_imm; // @ Issue.scala l125
  assign iss_dst_1_issue_src_micro_op_uop_alu_alu_ctrl_op = head_1_issue_src_micro_op_uop_alu_alu_ctrl_op; // @ Issue.scala l125
  assign iss_dst_1_issue_src_micro_op_uop_alu_alu_is_word = head_1_issue_src_micro_op_uop_alu_alu_is_word; // @ Issue.scala l125
  assign iss_dst_1_issue_src_micro_op_uop_bju_bju_ctrl_op = head_1_issue_src_micro_op_uop_bju_bju_ctrl_op; // @ Issue.scala l125
  assign iss_dst_1_issue_src_micro_op_uop_bju_bju_rd_eq_rs1 = head_1_issue_src_micro_op_uop_bju_bju_rd_eq_rs1; // @ Issue.scala l125
  assign iss_dst_1_issue_src_micro_op_uop_bju_bju_rd_is_link = head_1_issue_src_micro_op_uop_bju_bju_rd_is_link; // @ Issue.scala l125
  assign iss_dst_1_issue_src_micro_op_uop_bju_bju_rs1_is_link = head_1_issue_src_micro_op_uop_bju_bju_rs1_is_link; // @ Issue.scala l125
  assign iss_dst_1_issue_src_micro_op_uop_bju_exp_ctrl_op = head_1_issue_src_micro_op_uop_bju_exp_ctrl_op; // @ Issue.scala l125
  assign iss_dst_1_issue_src_micro_op_uop_bju_exp_csr_addr = head_1_issue_src_micro_op_uop_bju_exp_csr_addr; // @ Issue.scala l125
  assign iss_dst_1_issue_src_micro_op_uop_bju_exp_csr_wen = head_1_issue_src_micro_op_uop_bju_exp_csr_wen; // @ Issue.scala l125
  assign iss_dst_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op = head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op; // @ Issue.scala l125
  assign iss_dst_1_issue_src_micro_op_uop_lsu_lsu_is_load = head_1_issue_src_micro_op_uop_lsu_lsu_is_load; // @ Issue.scala l125
  assign iss_dst_1_issue_src_micro_op_uop_lsu_lsu_is_store = head_1_issue_src_micro_op_uop_lsu_lsu_is_store; // @ Issue.scala l125
  assign iss_dst_1_issue_src_exe_sel = head_1_issue_src_exe_sel; // @ Issue.scala l125
  assign iss_dst_1_issue_src_rs1_addr = head_1_issue_src_rs1_addr; // @ Issue.scala l125
  assign iss_dst_1_issue_src_rs2_addr = head_1_issue_src_rs2_addr; // @ Issue.scala l125
  assign iss_dst_1_issue_src_rd_addr = head_1_issue_src_rd_addr; // @ Issue.scala l125
  assign iss_dst_1_issue_src_imm = head_1_issue_src_imm; // @ Issue.scala l125
  assign iss_dst_1_issue_src_pc = head_1_issue_src_pc; // @ Issue.scala l125
  assign iss_dst_1_issue_src_branch_pc = head_1_issue_src_branch_pc; // @ Issue.scala l125
  assign iss_dst_1_issue_src_branch_taken = head_1_issue_src_branch_taken; // @ Issue.scala l125
  assign iss_dst_1_issue_src_instr = head_1_issue_src_instr; // @ Issue.scala l125
  assign iss_dst_1_exe_sel_oh = head_1_exe_sel_oh; // @ Issue.scala l126
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      head_0_valid <= 1'b0; // @ Data.scala l400
      head_0_exe_sel_oh <= 5'h0; // @ Data.scala l400
      head_1_valid <= 1'b0; // @ Data.scala l400
      head_1_exe_sel_oh <= 5'h0; // @ Data.scala l400
      skid_0_valid <= 1'b0; // @ Data.scala l400
      skid_1_valid <= 1'b0; // @ Data.scala l400
    end else begin
      if(flush) begin
        head_0_valid <= 1'b0; // @ Issue.scala l25
      end else begin
        if((! skid_0_valid)) begin
          head_0_valid <= (head_0_update ? iss_src_0_valid : head_0_valid); // @ Issue.scala l28
        end else begin
          if(skid_0_valid) begin
            head_0_valid <= (head_0_update ? skid_0_valid : (head_0_ready ? 1'b0 : head_0_valid)); // @ Issue.scala l31
          end
        end
      end
      if(head_0_update) begin
        if(skid_0_valid) begin
          if((skid_0_issue_src_exe_sel == ExeSelEnum_BJU)) begin
            head_0_exe_sel_oh <= 5'h01; // @ Issue.scala l43
          end else begin
            if((skid_0_issue_src_exe_sel == ExeSelEnum_ALU)) begin
              head_0_exe_sel_oh <= 5'h02; // @ Issue.scala l46
            end else begin
              if((skid_0_issue_src_exe_sel == ExeSelEnum_DIV)) begin
                head_0_exe_sel_oh <= 5'h08; // @ Issue.scala l49
              end else begin
                if((skid_0_issue_src_exe_sel == ExeSelEnum_LSU)) begin
                  head_0_exe_sel_oh <= 5'h10; // @ Issue.scala l52
                end
              end
            end
          end
        end else begin
          if(iss_src_0_valid) begin
            if((iss_src_0_exe_sel == ExeSelEnum_BJU)) begin
              head_0_exe_sel_oh <= 5'h01; // @ Issue.scala l73
            end else begin
              if((iss_src_0_exe_sel == ExeSelEnum_ALU)) begin
                head_0_exe_sel_oh <= 5'h02; // @ Issue.scala l76
              end else begin
                if((iss_src_0_exe_sel == ExeSelEnum_DIV)) begin
                  head_0_exe_sel_oh <= 5'h08; // @ Issue.scala l79
                end else begin
                  if((iss_src_0_exe_sel == ExeSelEnum_LSU)) begin
                    head_0_exe_sel_oh <= 5'h10; // @ Issue.scala l82
                  end
                end
              end
            end
          end
        end
      end
      if(flush) begin
        skid_0_valid <= 1'b0; // @ Issue.scala l104
      end else begin
        if(((! head_0_update) || (head_0_update && skid_0_valid))) begin
          skid_0_valid <= (skid_0_ready ? iss_src_0_valid : skid_0_valid); // @ Issue.scala l107
        end
      end
      if(flush) begin
        head_1_valid <= 1'b0; // @ Issue.scala l25
      end else begin
        if((! skid_1_valid)) begin
          head_1_valid <= (head_1_update ? iss_src_1_valid : head_1_valid); // @ Issue.scala l28
        end else begin
          if(skid_1_valid) begin
            head_1_valid <= (head_1_update ? skid_1_valid : (head_1_ready ? 1'b0 : head_1_valid)); // @ Issue.scala l31
          end
        end
      end
      if(head_1_update) begin
        if(skid_1_valid) begin
          if((skid_1_issue_src_exe_sel == ExeSelEnum_BJU)) begin
            head_1_exe_sel_oh <= 5'h01; // @ Issue.scala l56
          end else begin
            if((skid_1_issue_src_exe_sel == ExeSelEnum_ALU)) begin
              head_1_exe_sel_oh <= 5'h04; // @ Issue.scala l59
            end else begin
              if((skid_1_issue_src_exe_sel == ExeSelEnum_DIV)) begin
                head_1_exe_sel_oh <= 5'h08; // @ Issue.scala l62
              end else begin
                if((skid_1_issue_src_exe_sel == ExeSelEnum_LSU)) begin
                  head_1_exe_sel_oh <= 5'h10; // @ Issue.scala l65
                end
              end
            end
          end
        end else begin
          if(iss_src_1_valid) begin
            if((iss_src_1_exe_sel == ExeSelEnum_BJU)) begin
              head_1_exe_sel_oh <= 5'h01; // @ Issue.scala l86
            end else begin
              if((iss_src_1_exe_sel == ExeSelEnum_ALU)) begin
                head_1_exe_sel_oh <= 5'h04; // @ Issue.scala l89
              end else begin
                if((iss_src_1_exe_sel == ExeSelEnum_DIV)) begin
                  head_1_exe_sel_oh <= 5'h08; // @ Issue.scala l92
                end else begin
                  if((iss_src_1_exe_sel == ExeSelEnum_LSU)) begin
                    head_1_exe_sel_oh <= 5'h10; // @ Issue.scala l95
                  end
                end
              end
            end
          end
        end
      end
      if(flush) begin
        skid_1_valid <= 1'b0; // @ Issue.scala l104
      end else begin
        if(((! head_1_update) || (head_1_update && skid_1_valid))) begin
          skid_1_valid <= (skid_1_ready ? iss_src_1_valid : skid_1_valid); // @ Issue.scala l107
        end
      end
    end
  end

  always @(posedge clk) begin
    if(head_0_update) begin
      if(skid_0_valid) begin
        head_0_issue_src_micro_op_uop_com_rd_wen <= skid_0_issue_src_micro_op_uop_com_rd_wen; // @ Issue.scala l40
        head_0_issue_src_micro_op_uop_com_src2_is_imm <= skid_0_issue_src_micro_op_uop_com_src2_is_imm; // @ Issue.scala l40
        head_0_issue_src_micro_op_uop_alu_alu_ctrl_op <= skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op; // @ Issue.scala l40
        head_0_issue_src_micro_op_uop_alu_alu_is_word <= skid_0_issue_src_micro_op_uop_alu_alu_is_word; // @ Issue.scala l40
        head_0_issue_src_micro_op_uop_bju_bju_ctrl_op <= skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op; // @ Issue.scala l40
        head_0_issue_src_micro_op_uop_bju_bju_rd_eq_rs1 <= skid_0_issue_src_micro_op_uop_bju_bju_rd_eq_rs1; // @ Issue.scala l40
        head_0_issue_src_micro_op_uop_bju_bju_rd_is_link <= skid_0_issue_src_micro_op_uop_bju_bju_rd_is_link; // @ Issue.scala l40
        head_0_issue_src_micro_op_uop_bju_bju_rs1_is_link <= skid_0_issue_src_micro_op_uop_bju_bju_rs1_is_link; // @ Issue.scala l40
        head_0_issue_src_micro_op_uop_bju_exp_ctrl_op <= skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op; // @ Issue.scala l40
        head_0_issue_src_micro_op_uop_bju_exp_csr_addr <= skid_0_issue_src_micro_op_uop_bju_exp_csr_addr; // @ Issue.scala l40
        head_0_issue_src_micro_op_uop_bju_exp_csr_wen <= skid_0_issue_src_micro_op_uop_bju_exp_csr_wen; // @ Issue.scala l40
        head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op <= skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op; // @ Issue.scala l40
        head_0_issue_src_micro_op_uop_lsu_lsu_is_load <= skid_0_issue_src_micro_op_uop_lsu_lsu_is_load; // @ Issue.scala l40
        head_0_issue_src_micro_op_uop_lsu_lsu_is_store <= skid_0_issue_src_micro_op_uop_lsu_lsu_is_store; // @ Issue.scala l40
        head_0_issue_src_exe_sel <= skid_0_issue_src_exe_sel; // @ Issue.scala l40
        head_0_issue_src_rs1_addr <= skid_0_issue_src_rs1_addr; // @ Issue.scala l40
        head_0_issue_src_rs2_addr <= skid_0_issue_src_rs2_addr; // @ Issue.scala l40
        head_0_issue_src_rd_addr <= skid_0_issue_src_rd_addr; // @ Issue.scala l40
        head_0_issue_src_imm <= skid_0_issue_src_imm; // @ Issue.scala l40
        head_0_issue_src_pc <= skid_0_issue_src_pc; // @ Issue.scala l40
        head_0_issue_src_branch_pc <= skid_0_issue_src_branch_pc; // @ Issue.scala l40
        head_0_issue_src_branch_taken <= skid_0_issue_src_branch_taken; // @ Issue.scala l40
        head_0_issue_src_instr <= skid_0_issue_src_instr; // @ Issue.scala l40
      end else begin
        if(iss_src_0_valid) begin
          head_0_issue_src_micro_op_uop_com_rd_wen <= iss_src_0_micro_op_uop_com_rd_wen; // @ Issue.scala l70
          head_0_issue_src_micro_op_uop_com_src2_is_imm <= iss_src_0_micro_op_uop_com_src2_is_imm; // @ Issue.scala l70
          head_0_issue_src_micro_op_uop_alu_alu_ctrl_op <= iss_src_0_micro_op_uop_alu_alu_ctrl_op; // @ Issue.scala l70
          head_0_issue_src_micro_op_uop_alu_alu_is_word <= iss_src_0_micro_op_uop_alu_alu_is_word; // @ Issue.scala l70
          head_0_issue_src_micro_op_uop_bju_bju_ctrl_op <= iss_src_0_micro_op_uop_bju_bju_ctrl_op; // @ Issue.scala l70
          head_0_issue_src_micro_op_uop_bju_bju_rd_eq_rs1 <= iss_src_0_micro_op_uop_bju_bju_rd_eq_rs1; // @ Issue.scala l70
          head_0_issue_src_micro_op_uop_bju_bju_rd_is_link <= iss_src_0_micro_op_uop_bju_bju_rd_is_link; // @ Issue.scala l70
          head_0_issue_src_micro_op_uop_bju_bju_rs1_is_link <= iss_src_0_micro_op_uop_bju_bju_rs1_is_link; // @ Issue.scala l70
          head_0_issue_src_micro_op_uop_bju_exp_ctrl_op <= iss_src_0_micro_op_uop_bju_exp_ctrl_op; // @ Issue.scala l70
          head_0_issue_src_micro_op_uop_bju_exp_csr_addr <= iss_src_0_micro_op_uop_bju_exp_csr_addr; // @ Issue.scala l70
          head_0_issue_src_micro_op_uop_bju_exp_csr_wen <= iss_src_0_micro_op_uop_bju_exp_csr_wen; // @ Issue.scala l70
          head_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op <= iss_src_0_micro_op_uop_lsu_lsu_ctrl_op; // @ Issue.scala l70
          head_0_issue_src_micro_op_uop_lsu_lsu_is_load <= iss_src_0_micro_op_uop_lsu_lsu_is_load; // @ Issue.scala l70
          head_0_issue_src_micro_op_uop_lsu_lsu_is_store <= iss_src_0_micro_op_uop_lsu_lsu_is_store; // @ Issue.scala l70
          head_0_issue_src_exe_sel <= iss_src_0_exe_sel; // @ Issue.scala l70
          head_0_issue_src_rs1_addr <= iss_src_0_rs1_addr; // @ Issue.scala l70
          head_0_issue_src_rs2_addr <= iss_src_0_rs2_addr; // @ Issue.scala l70
          head_0_issue_src_rd_addr <= iss_src_0_rd_addr; // @ Issue.scala l70
          head_0_issue_src_imm <= iss_src_0_imm; // @ Issue.scala l70
          head_0_issue_src_pc <= iss_src_0_pc; // @ Issue.scala l70
          head_0_issue_src_branch_pc <= iss_src_0_branch_pc; // @ Issue.scala l70
          head_0_issue_src_branch_taken <= iss_src_0_branch_taken; // @ Issue.scala l70
          head_0_issue_src_instr <= iss_src_0_instr; // @ Issue.scala l70
        end
      end
    end
    if(skid_0_update) begin
      skid_0_issue_src_micro_op_uop_com_rd_wen <= iss_src_0_micro_op_uop_com_rd_wen; // @ Issue.scala l114
      skid_0_issue_src_micro_op_uop_com_src2_is_imm <= iss_src_0_micro_op_uop_com_src2_is_imm; // @ Issue.scala l114
      skid_0_issue_src_micro_op_uop_alu_alu_ctrl_op <= iss_src_0_micro_op_uop_alu_alu_ctrl_op; // @ Issue.scala l114
      skid_0_issue_src_micro_op_uop_alu_alu_is_word <= iss_src_0_micro_op_uop_alu_alu_is_word; // @ Issue.scala l114
      skid_0_issue_src_micro_op_uop_bju_bju_ctrl_op <= iss_src_0_micro_op_uop_bju_bju_ctrl_op; // @ Issue.scala l114
      skid_0_issue_src_micro_op_uop_bju_bju_rd_eq_rs1 <= iss_src_0_micro_op_uop_bju_bju_rd_eq_rs1; // @ Issue.scala l114
      skid_0_issue_src_micro_op_uop_bju_bju_rd_is_link <= iss_src_0_micro_op_uop_bju_bju_rd_is_link; // @ Issue.scala l114
      skid_0_issue_src_micro_op_uop_bju_bju_rs1_is_link <= iss_src_0_micro_op_uop_bju_bju_rs1_is_link; // @ Issue.scala l114
      skid_0_issue_src_micro_op_uop_bju_exp_ctrl_op <= iss_src_0_micro_op_uop_bju_exp_ctrl_op; // @ Issue.scala l114
      skid_0_issue_src_micro_op_uop_bju_exp_csr_addr <= iss_src_0_micro_op_uop_bju_exp_csr_addr; // @ Issue.scala l114
      skid_0_issue_src_micro_op_uop_bju_exp_csr_wen <= iss_src_0_micro_op_uop_bju_exp_csr_wen; // @ Issue.scala l114
      skid_0_issue_src_micro_op_uop_lsu_lsu_ctrl_op <= iss_src_0_micro_op_uop_lsu_lsu_ctrl_op; // @ Issue.scala l114
      skid_0_issue_src_micro_op_uop_lsu_lsu_is_load <= iss_src_0_micro_op_uop_lsu_lsu_is_load; // @ Issue.scala l114
      skid_0_issue_src_micro_op_uop_lsu_lsu_is_store <= iss_src_0_micro_op_uop_lsu_lsu_is_store; // @ Issue.scala l114
      skid_0_issue_src_exe_sel <= iss_src_0_exe_sel; // @ Issue.scala l114
      skid_0_issue_src_rs1_addr <= iss_src_0_rs1_addr; // @ Issue.scala l114
      skid_0_issue_src_rs2_addr <= iss_src_0_rs2_addr; // @ Issue.scala l114
      skid_0_issue_src_rd_addr <= iss_src_0_rd_addr; // @ Issue.scala l114
      skid_0_issue_src_imm <= iss_src_0_imm; // @ Issue.scala l114
      skid_0_issue_src_pc <= iss_src_0_pc; // @ Issue.scala l114
      skid_0_issue_src_branch_pc <= iss_src_0_branch_pc; // @ Issue.scala l114
      skid_0_issue_src_branch_taken <= iss_src_0_branch_taken; // @ Issue.scala l114
      skid_0_issue_src_instr <= iss_src_0_instr; // @ Issue.scala l114
    end
    if(head_1_update) begin
      if(skid_1_valid) begin
        head_1_issue_src_micro_op_uop_com_rd_wen <= skid_1_issue_src_micro_op_uop_com_rd_wen; // @ Issue.scala l40
        head_1_issue_src_micro_op_uop_com_src2_is_imm <= skid_1_issue_src_micro_op_uop_com_src2_is_imm; // @ Issue.scala l40
        head_1_issue_src_micro_op_uop_alu_alu_ctrl_op <= skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op; // @ Issue.scala l40
        head_1_issue_src_micro_op_uop_alu_alu_is_word <= skid_1_issue_src_micro_op_uop_alu_alu_is_word; // @ Issue.scala l40
        head_1_issue_src_micro_op_uop_bju_bju_ctrl_op <= skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op; // @ Issue.scala l40
        head_1_issue_src_micro_op_uop_bju_bju_rd_eq_rs1 <= skid_1_issue_src_micro_op_uop_bju_bju_rd_eq_rs1; // @ Issue.scala l40
        head_1_issue_src_micro_op_uop_bju_bju_rd_is_link <= skid_1_issue_src_micro_op_uop_bju_bju_rd_is_link; // @ Issue.scala l40
        head_1_issue_src_micro_op_uop_bju_bju_rs1_is_link <= skid_1_issue_src_micro_op_uop_bju_bju_rs1_is_link; // @ Issue.scala l40
        head_1_issue_src_micro_op_uop_bju_exp_ctrl_op <= skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op; // @ Issue.scala l40
        head_1_issue_src_micro_op_uop_bju_exp_csr_addr <= skid_1_issue_src_micro_op_uop_bju_exp_csr_addr; // @ Issue.scala l40
        head_1_issue_src_micro_op_uop_bju_exp_csr_wen <= skid_1_issue_src_micro_op_uop_bju_exp_csr_wen; // @ Issue.scala l40
        head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op <= skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op; // @ Issue.scala l40
        head_1_issue_src_micro_op_uop_lsu_lsu_is_load <= skid_1_issue_src_micro_op_uop_lsu_lsu_is_load; // @ Issue.scala l40
        head_1_issue_src_micro_op_uop_lsu_lsu_is_store <= skid_1_issue_src_micro_op_uop_lsu_lsu_is_store; // @ Issue.scala l40
        head_1_issue_src_exe_sel <= skid_1_issue_src_exe_sel; // @ Issue.scala l40
        head_1_issue_src_rs1_addr <= skid_1_issue_src_rs1_addr; // @ Issue.scala l40
        head_1_issue_src_rs2_addr <= skid_1_issue_src_rs2_addr; // @ Issue.scala l40
        head_1_issue_src_rd_addr <= skid_1_issue_src_rd_addr; // @ Issue.scala l40
        head_1_issue_src_imm <= skid_1_issue_src_imm; // @ Issue.scala l40
        head_1_issue_src_pc <= skid_1_issue_src_pc; // @ Issue.scala l40
        head_1_issue_src_branch_pc <= skid_1_issue_src_branch_pc; // @ Issue.scala l40
        head_1_issue_src_branch_taken <= skid_1_issue_src_branch_taken; // @ Issue.scala l40
        head_1_issue_src_instr <= skid_1_issue_src_instr; // @ Issue.scala l40
      end else begin
        if(iss_src_1_valid) begin
          head_1_issue_src_micro_op_uop_com_rd_wen <= iss_src_1_micro_op_uop_com_rd_wen; // @ Issue.scala l70
          head_1_issue_src_micro_op_uop_com_src2_is_imm <= iss_src_1_micro_op_uop_com_src2_is_imm; // @ Issue.scala l70
          head_1_issue_src_micro_op_uop_alu_alu_ctrl_op <= iss_src_1_micro_op_uop_alu_alu_ctrl_op; // @ Issue.scala l70
          head_1_issue_src_micro_op_uop_alu_alu_is_word <= iss_src_1_micro_op_uop_alu_alu_is_word; // @ Issue.scala l70
          head_1_issue_src_micro_op_uop_bju_bju_ctrl_op <= iss_src_1_micro_op_uop_bju_bju_ctrl_op; // @ Issue.scala l70
          head_1_issue_src_micro_op_uop_bju_bju_rd_eq_rs1 <= iss_src_1_micro_op_uop_bju_bju_rd_eq_rs1; // @ Issue.scala l70
          head_1_issue_src_micro_op_uop_bju_bju_rd_is_link <= iss_src_1_micro_op_uop_bju_bju_rd_is_link; // @ Issue.scala l70
          head_1_issue_src_micro_op_uop_bju_bju_rs1_is_link <= iss_src_1_micro_op_uop_bju_bju_rs1_is_link; // @ Issue.scala l70
          head_1_issue_src_micro_op_uop_bju_exp_ctrl_op <= iss_src_1_micro_op_uop_bju_exp_ctrl_op; // @ Issue.scala l70
          head_1_issue_src_micro_op_uop_bju_exp_csr_addr <= iss_src_1_micro_op_uop_bju_exp_csr_addr; // @ Issue.scala l70
          head_1_issue_src_micro_op_uop_bju_exp_csr_wen <= iss_src_1_micro_op_uop_bju_exp_csr_wen; // @ Issue.scala l70
          head_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op <= iss_src_1_micro_op_uop_lsu_lsu_ctrl_op; // @ Issue.scala l70
          head_1_issue_src_micro_op_uop_lsu_lsu_is_load <= iss_src_1_micro_op_uop_lsu_lsu_is_load; // @ Issue.scala l70
          head_1_issue_src_micro_op_uop_lsu_lsu_is_store <= iss_src_1_micro_op_uop_lsu_lsu_is_store; // @ Issue.scala l70
          head_1_issue_src_exe_sel <= iss_src_1_exe_sel; // @ Issue.scala l70
          head_1_issue_src_rs1_addr <= iss_src_1_rs1_addr; // @ Issue.scala l70
          head_1_issue_src_rs2_addr <= iss_src_1_rs2_addr; // @ Issue.scala l70
          head_1_issue_src_rd_addr <= iss_src_1_rd_addr; // @ Issue.scala l70
          head_1_issue_src_imm <= iss_src_1_imm; // @ Issue.scala l70
          head_1_issue_src_pc <= iss_src_1_pc; // @ Issue.scala l70
          head_1_issue_src_branch_pc <= iss_src_1_branch_pc; // @ Issue.scala l70
          head_1_issue_src_branch_taken <= iss_src_1_branch_taken; // @ Issue.scala l70
          head_1_issue_src_instr <= iss_src_1_instr; // @ Issue.scala l70
        end
      end
    end
    if(skid_1_update) begin
      skid_1_issue_src_micro_op_uop_com_rd_wen <= iss_src_1_micro_op_uop_com_rd_wen; // @ Issue.scala l114
      skid_1_issue_src_micro_op_uop_com_src2_is_imm <= iss_src_1_micro_op_uop_com_src2_is_imm; // @ Issue.scala l114
      skid_1_issue_src_micro_op_uop_alu_alu_ctrl_op <= iss_src_1_micro_op_uop_alu_alu_ctrl_op; // @ Issue.scala l114
      skid_1_issue_src_micro_op_uop_alu_alu_is_word <= iss_src_1_micro_op_uop_alu_alu_is_word; // @ Issue.scala l114
      skid_1_issue_src_micro_op_uop_bju_bju_ctrl_op <= iss_src_1_micro_op_uop_bju_bju_ctrl_op; // @ Issue.scala l114
      skid_1_issue_src_micro_op_uop_bju_bju_rd_eq_rs1 <= iss_src_1_micro_op_uop_bju_bju_rd_eq_rs1; // @ Issue.scala l114
      skid_1_issue_src_micro_op_uop_bju_bju_rd_is_link <= iss_src_1_micro_op_uop_bju_bju_rd_is_link; // @ Issue.scala l114
      skid_1_issue_src_micro_op_uop_bju_bju_rs1_is_link <= iss_src_1_micro_op_uop_bju_bju_rs1_is_link; // @ Issue.scala l114
      skid_1_issue_src_micro_op_uop_bju_exp_ctrl_op <= iss_src_1_micro_op_uop_bju_exp_ctrl_op; // @ Issue.scala l114
      skid_1_issue_src_micro_op_uop_bju_exp_csr_addr <= iss_src_1_micro_op_uop_bju_exp_csr_addr; // @ Issue.scala l114
      skid_1_issue_src_micro_op_uop_bju_exp_csr_wen <= iss_src_1_micro_op_uop_bju_exp_csr_wen; // @ Issue.scala l114
      skid_1_issue_src_micro_op_uop_lsu_lsu_ctrl_op <= iss_src_1_micro_op_uop_lsu_lsu_ctrl_op; // @ Issue.scala l114
      skid_1_issue_src_micro_op_uop_lsu_lsu_is_load <= iss_src_1_micro_op_uop_lsu_lsu_is_load; // @ Issue.scala l114
      skid_1_issue_src_micro_op_uop_lsu_lsu_is_store <= iss_src_1_micro_op_uop_lsu_lsu_is_store; // @ Issue.scala l114
      skid_1_issue_src_exe_sel <= iss_src_1_exe_sel; // @ Issue.scala l114
      skid_1_issue_src_rs1_addr <= iss_src_1_rs1_addr; // @ Issue.scala l114
      skid_1_issue_src_rs2_addr <= iss_src_1_rs2_addr; // @ Issue.scala l114
      skid_1_issue_src_rd_addr <= iss_src_1_rd_addr; // @ Issue.scala l114
      skid_1_issue_src_imm <= iss_src_1_imm; // @ Issue.scala l114
      skid_1_issue_src_pc <= iss_src_1_pc; // @ Issue.scala l114
      skid_1_issue_src_branch_pc <= iss_src_1_branch_pc; // @ Issue.scala l114
      skid_1_issue_src_branch_taken <= iss_src_1_branch_taken; // @ Issue.scala l114
      skid_1_issue_src_instr <= iss_src_1_instr; // @ Issue.scala l114
    end
  end


endmodule
