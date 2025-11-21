// Generator : SpinalHDL v1.8.1    git head : 2a7592004363e5b40ec43e1f122ed8641cd8965b
// Component : ALU
// Git hash  : f29d1de95b2b9aea3ec101573c63250a4bc0eea3

`timescale 1ns/1ps

module ALU (
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

  wire       [63:0]   tmp_add_result;
  wire       [63:0]   tmp_add_result_1;
  wire       [63:0]   tmp_sub_result;
  wire       [63:0]   tmp_sub_result_1;
  wire       [63:0]   tmp_slt_result;
  wire       [63:0]   tmp_slt_result_1;
  wire       [63:0]   tmp_sra_result;
  wire       [31:0]   tmp_addw_result_2;
  wire       [31:0]   tmp_subw_result_2;
  wire       [31:0]   tmp_sraw_temp;
  wire       [64:0]   tmp_mul_src2;
  wire       [64:0]   tmp_mul_src2_1;
  wire       [63:0]   tmp_mul_src2_2;
  wire       [63:0]   tmp_mul_temp_s;
  wire       [63:0]   tmp_mul_result_5;
  wire       [63:0]   tmp_mul_result_6;
  wire       [0:0]    tmp_mul_result_7;
  wire       [60:0]   tmp_mul_result_8;
  wire       [0:0]    tmp_mul_result_9;
  wire       [56:0]   tmp_mul_result_10;
  wire       [0:0]    tmp_mul_result_11;
  wire       [52:0]   tmp_mul_result_12;
  wire       [0:0]    tmp_mul_result_13;
  wire       [48:0]   tmp_mul_result_14;
  wire       [0:0]    tmp_mul_result_15;
  wire       [44:0]   tmp_mul_result_16;
  wire       [0:0]    tmp_mul_result_17;
  wire       [40:0]   tmp_mul_result_18;
  wire       [0:0]    tmp_mul_result_19;
  wire       [36:0]   tmp_mul_result_20;
  wire       [0:0]    tmp_mul_result_21;
  wire       [32:0]   tmp_mul_result_22;
  wire       [0:0]    tmp_mul_result_23;
  wire       [28:0]   tmp_mul_result_24;
  wire       [0:0]    tmp_mul_result_25;
  wire       [24:0]   tmp_mul_result_26;
  wire       [0:0]    tmp_mul_result_27;
  wire       [20:0]   tmp_mul_result_28;
  wire       [0:0]    tmp_mul_result_29;
  wire       [16:0]   tmp_mul_result_30;
  wire       [0:0]    tmp_mul_result_31;
  wire       [12:0]   tmp_mul_result_32;
  wire       [0:0]    tmp_mul_result_33;
  wire       [8:0]    tmp_mul_result_34;
  wire       [0:0]    tmp_mul_result_35;
  wire       [4:0]    tmp_mul_result_36;
  wire       [63:0]   tmp_mul_result_37;
  wire       [63:0]   tmp_mul_result_38;
  wire       [0:0]    tmp_mul_result_39;
  wire       [60:0]   tmp_mul_result_40;
  wire       [0:0]    tmp_mul_result_41;
  wire       [56:0]   tmp_mul_result_42;
  wire       [0:0]    tmp_mul_result_43;
  wire       [52:0]   tmp_mul_result_44;
  wire       [0:0]    tmp_mul_result_45;
  wire       [48:0]   tmp_mul_result_46;
  wire       [0:0]    tmp_mul_result_47;
  wire       [44:0]   tmp_mul_result_48;
  wire       [0:0]    tmp_mul_result_49;
  wire       [40:0]   tmp_mul_result_50;
  wire       [0:0]    tmp_mul_result_51;
  wire       [36:0]   tmp_mul_result_52;
  wire       [0:0]    tmp_mul_result_53;
  wire       [32:0]   tmp_mul_result_54;
  wire       [0:0]    tmp_mul_result_55;
  wire       [28:0]   tmp_mul_result_56;
  wire       [0:0]    tmp_mul_result_57;
  wire       [24:0]   tmp_mul_result_58;
  wire       [0:0]    tmp_mul_result_59;
  wire       [20:0]   tmp_mul_result_60;
  wire       [0:0]    tmp_mul_result_61;
  wire       [16:0]   tmp_mul_result_62;
  wire       [0:0]    tmp_mul_result_63;
  wire       [12:0]   tmp_mul_result_64;
  wire       [0:0]    tmp_mul_result_65;
  wire       [8:0]    tmp_mul_result_66;
  wire       [0:0]    tmp_mul_result_67;
  wire       [4:0]    tmp_mul_result_68;
  wire       [0:0]    tmp_mul_result_69;
  wire       [62:0]   tmp_mul_result_70;
  wire       [0:0]    tmp_mul_result_71;
  wire       [59:0]   tmp_mul_result_72;
  wire       [0:0]    tmp_mul_result_73;
  wire       [55:0]   tmp_mul_result_74;
  wire       [0:0]    tmp_mul_result_75;
  wire       [51:0]   tmp_mul_result_76;
  wire       [0:0]    tmp_mul_result_77;
  wire       [47:0]   tmp_mul_result_78;
  wire       [0:0]    tmp_mul_result_79;
  wire       [43:0]   tmp_mul_result_80;
  wire       [0:0]    tmp_mul_result_81;
  wire       [39:0]   tmp_mul_result_82;
  wire       [0:0]    tmp_mul_result_83;
  wire       [35:0]   tmp_mul_result_84;
  wire       [0:0]    tmp_mul_result_85;
  wire       [31:0]   tmp_mul_result_86;
  wire       [0:0]    tmp_mul_result_87;
  wire       [27:0]   tmp_mul_result_88;
  wire       [0:0]    tmp_mul_result_89;
  wire       [23:0]   tmp_mul_result_90;
  wire       [0:0]    tmp_mul_result_91;
  wire       [19:0]   tmp_mul_result_92;
  wire       [0:0]    tmp_mul_result_93;
  wire       [15:0]   tmp_mul_result_94;
  wire       [0:0]    tmp_mul_result_95;
  wire       [11:0]   tmp_mul_result_96;
  wire       [0:0]    tmp_mul_result_97;
  wire       [7:0]    tmp_mul_result_98;
  wire       [0:0]    tmp_mul_result_99;
  wire       [3:0]    tmp_mul_result_100;
  wire       [0:0]    tmp_mul_result_101;
  wire       [61:0]   tmp_mul_result_102;
  wire       [0:0]    tmp_mul_result_103;
  wire       [58:0]   tmp_mul_result_104;
  wire       [0:0]    tmp_mul_result_105;
  wire       [54:0]   tmp_mul_result_106;
  wire       [0:0]    tmp_mul_result_107;
  wire       [50:0]   tmp_mul_result_108;
  wire       [0:0]    tmp_mul_result_109;
  wire       [46:0]   tmp_mul_result_110;
  wire       [0:0]    tmp_mul_result_111;
  wire       [42:0]   tmp_mul_result_112;
  wire       [0:0]    tmp_mul_result_113;
  wire       [38:0]   tmp_mul_result_114;
  wire       [0:0]    tmp_mul_result_115;
  wire       [34:0]   tmp_mul_result_116;
  wire       [0:0]    tmp_mul_result_117;
  wire       [30:0]   tmp_mul_result_118;
  wire       [0:0]    tmp_mul_result_119;
  wire       [26:0]   tmp_mul_result_120;
  wire       [0:0]    tmp_mul_result_121;
  wire       [22:0]   tmp_mul_result_122;
  wire       [0:0]    tmp_mul_result_123;
  wire       [18:0]   tmp_mul_result_124;
  wire       [0:0]    tmp_mul_result_125;
  wire       [14:0]   tmp_mul_result_126;
  wire       [0:0]    tmp_mul_result_127;
  wire       [10:0]   tmp_mul_result_128;
  wire       [0:0]    tmp_mul_result_129;
  wire       [6:0]    tmp_mul_result_130;
  wire       [0:0]    tmp_mul_result_131;
  wire       [2:0]    tmp_mul_result_132;
  wire       [0:0]    tmp_mul_result_133;
  wire       [60:0]   tmp_mul_result_134;
  wire       [0:0]    tmp_mul_result_135;
  wire       [57:0]   tmp_mul_result_136;
  wire       [0:0]    tmp_mul_result_137;
  wire       [53:0]   tmp_mul_result_138;
  wire       [0:0]    tmp_mul_result_139;
  wire       [49:0]   tmp_mul_result_140;
  wire       [0:0]    tmp_mul_result_141;
  wire       [45:0]   tmp_mul_result_142;
  wire       [0:0]    tmp_mul_result_143;
  wire       [41:0]   tmp_mul_result_144;
  wire       [0:0]    tmp_mul_result_145;
  wire       [37:0]   tmp_mul_result_146;
  wire       [0:0]    tmp_mul_result_147;
  wire       [33:0]   tmp_mul_result_148;
  wire       [0:0]    tmp_mul_result_149;
  wire       [29:0]   tmp_mul_result_150;
  wire       [0:0]    tmp_mul_result_151;
  wire       [25:0]   tmp_mul_result_152;
  wire       [0:0]    tmp_mul_result_153;
  wire       [21:0]   tmp_mul_result_154;
  wire       [0:0]    tmp_mul_result_155;
  wire       [17:0]   tmp_mul_result_156;
  wire       [0:0]    tmp_mul_result_157;
  wire       [13:0]   tmp_mul_result_158;
  wire       [0:0]    tmp_mul_result_159;
  wire       [9:0]    tmp_mul_result_160;
  wire       [0:0]    tmp_mul_result_161;
  wire       [5:0]    tmp_mul_result_162;
  wire       [0:0]    tmp_mul_result_163;
  wire       [1:0]    tmp_mul_result_164;
  wire       [31:0]   src1_word;
  wire       [31:0]   src2_word;
  wire       [5:0]    shift_bits;
  wire       [63:0]   add_result;
  wire       [63:0]   sub_result;
  wire                slt_result;
  wire                sltu_result;
  wire       [63:0]   xor_result;
  wire       [63:0]   sll_result;
  wire       [63:0]   srl_result;
  wire       [63:0]   sra_result;
  wire       [63:0]   and_result;
  wire       [63:0]   or_result;
  wire                tmp_addw_result;
  reg        [31:0]   tmp_addw_result_1;
  wire       [63:0]   addw_result;
  wire                tmp_subw_result;
  reg        [31:0]   tmp_subw_result_1;
  wire       [63:0]   subw_result;
  wire       [31:0]   sllw_temp;
  wire                tmp_sllw_result;
  reg        [31:0]   tmp_sllw_result_1;
  wire       [63:0]   sllw_result;
  wire       [31:0]   srlw_temp;
  wire                tmp_srlw_result;
  reg        [31:0]   tmp_srlw_result_1;
  wire       [63:0]   srlw_result;
  wire       [31:0]   sraw_temp;
  wire                tmp_sraw_result;
  reg        [31:0]   tmp_sraw_result_1;
  wire       [63:0]   sraw_result;
  reg        [63:0]   alu_result;
  wire                mul_type_mul;
  wire                mul_type_mulh;
  wire                mul_type_mulhsu;
  wire                mul_type_mulhu;
  wire                mul_type_mulw;
  wire                alu_is_mul;
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
  wire       [62:0]   tmp_alu_result;
  wire       [62:0]   tmp_alu_result_1;
  wire                mul_src1_is_u;
  wire                mul_src2_is_u;
  wire       [64:0]   mulhsu_src2;
  wire       [64:0]   mul_src2;
  wire       [127:0]  mul_temp_u;
  wire       [128:0]  mul_temp_s;
  wire       [63:0]   mul_temp_u_high;
  wire       [63:0]   mul_temp_u_low;
  wire       [63:0]   mul_temp_s_high;
  wire       [63:0]   mul_temp_s_low;
  wire                tmp_mulw_result;
  reg        [31:0]   tmp_mulw_result_1;
  wire       [63:0]   mulw_result;
  wire       [4:0]    mul_sel;
  wire       [319:0]  mul_data;
  wire                tmp_mul_result;
  wire                tmp_mul_result_1;
  wire                tmp_mul_result_2;
  wire                tmp_mul_result_3;
  wire                tmp_mul_result_4;
  wire       [63:0]   mul_result;
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


  assign tmp_add_result = alu_src_src1_data;
  assign tmp_add_result_1 = alu_src_src2_data;
  assign tmp_sub_result = alu_src_src1_data;
  assign tmp_sub_result_1 = alu_src_src2_data;
  assign tmp_slt_result = alu_src_src1_data;
  assign tmp_slt_result_1 = alu_src_src2_data;
  assign tmp_sra_result = alu_src_src1_data;
  assign tmp_addw_result_2 = add_result[31 : 0];
  assign tmp_subw_result_2 = sub_result[31 : 0];
  assign tmp_sraw_temp = src1_word;
  assign tmp_mul_src2 = mulhsu_src2;
  assign tmp_mul_src2_2 = alu_src_src2_data;
  assign tmp_mul_src2_1 = {{1{tmp_mul_src2_2[63]}}, tmp_mul_src2_2};
  assign tmp_mul_temp_s = alu_src_src1_data;
  assign tmp_mul_result_5 = mul_data[63 : 0];
  assign tmp_mul_result_6 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result_7,tmp_mul_result_8}}};
  assign tmp_mul_result_37 = mul_data[127 : 64];
  assign tmp_mul_result_38 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_39,tmp_mul_result_40}}};
  assign tmp_mul_result_69 = tmp_mul_result_2;
  assign tmp_mul_result_70 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_71,tmp_mul_result_72}}};
  assign tmp_mul_result_101 = tmp_mul_result_3;
  assign tmp_mul_result_102 = {tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_103,tmp_mul_result_104}}};
  assign tmp_mul_result_133 = tmp_mul_result_4;
  assign tmp_mul_result_134 = {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_135,tmp_mul_result_136}}};
  assign tmp_mul_result_7 = tmp_mul_result;
  assign tmp_mul_result_8 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result,{tmp_mul_result_9,tmp_mul_result_10}}}};
  assign tmp_mul_result_39 = tmp_mul_result_1;
  assign tmp_mul_result_40 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_41,tmp_mul_result_42}}}};
  assign tmp_mul_result_71 = tmp_mul_result_2;
  assign tmp_mul_result_72 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_73,tmp_mul_result_74}}}};
  assign tmp_mul_result_103 = tmp_mul_result_3;
  assign tmp_mul_result_104 = {tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_105,tmp_mul_result_106}}}};
  assign tmp_mul_result_135 = tmp_mul_result_4;
  assign tmp_mul_result_136 = {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_137,tmp_mul_result_138}}}};
  assign tmp_mul_result_9 = tmp_mul_result;
  assign tmp_mul_result_10 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result,{tmp_mul_result_11,tmp_mul_result_12}}}};
  assign tmp_mul_result_41 = tmp_mul_result_1;
  assign tmp_mul_result_42 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_43,tmp_mul_result_44}}}};
  assign tmp_mul_result_73 = tmp_mul_result_2;
  assign tmp_mul_result_74 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_75,tmp_mul_result_76}}}};
  assign tmp_mul_result_105 = tmp_mul_result_3;
  assign tmp_mul_result_106 = {tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_107,tmp_mul_result_108}}}};
  assign tmp_mul_result_137 = tmp_mul_result_4;
  assign tmp_mul_result_138 = {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_139,tmp_mul_result_140}}}};
  assign tmp_mul_result_11 = tmp_mul_result;
  assign tmp_mul_result_12 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result,{tmp_mul_result_13,tmp_mul_result_14}}}};
  assign tmp_mul_result_43 = tmp_mul_result_1;
  assign tmp_mul_result_44 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_45,tmp_mul_result_46}}}};
  assign tmp_mul_result_75 = tmp_mul_result_2;
  assign tmp_mul_result_76 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_77,tmp_mul_result_78}}}};
  assign tmp_mul_result_107 = tmp_mul_result_3;
  assign tmp_mul_result_108 = {tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_109,tmp_mul_result_110}}}};
  assign tmp_mul_result_139 = tmp_mul_result_4;
  assign tmp_mul_result_140 = {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_141,tmp_mul_result_142}}}};
  assign tmp_mul_result_13 = tmp_mul_result;
  assign tmp_mul_result_14 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result,{tmp_mul_result_15,tmp_mul_result_16}}}};
  assign tmp_mul_result_45 = tmp_mul_result_1;
  assign tmp_mul_result_46 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_47,tmp_mul_result_48}}}};
  assign tmp_mul_result_77 = tmp_mul_result_2;
  assign tmp_mul_result_78 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_79,tmp_mul_result_80}}}};
  assign tmp_mul_result_109 = tmp_mul_result_3;
  assign tmp_mul_result_110 = {tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_111,tmp_mul_result_112}}}};
  assign tmp_mul_result_141 = tmp_mul_result_4;
  assign tmp_mul_result_142 = {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_143,tmp_mul_result_144}}}};
  assign tmp_mul_result_15 = tmp_mul_result;
  assign tmp_mul_result_16 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result,{tmp_mul_result_17,tmp_mul_result_18}}}};
  assign tmp_mul_result_47 = tmp_mul_result_1;
  assign tmp_mul_result_48 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_49,tmp_mul_result_50}}}};
  assign tmp_mul_result_79 = tmp_mul_result_2;
  assign tmp_mul_result_80 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_81,tmp_mul_result_82}}}};
  assign tmp_mul_result_111 = tmp_mul_result_3;
  assign tmp_mul_result_112 = {tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_113,tmp_mul_result_114}}}};
  assign tmp_mul_result_143 = tmp_mul_result_4;
  assign tmp_mul_result_144 = {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_145,tmp_mul_result_146}}}};
  assign tmp_mul_result_17 = tmp_mul_result;
  assign tmp_mul_result_18 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result,{tmp_mul_result_19,tmp_mul_result_20}}}};
  assign tmp_mul_result_49 = tmp_mul_result_1;
  assign tmp_mul_result_50 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_51,tmp_mul_result_52}}}};
  assign tmp_mul_result_81 = tmp_mul_result_2;
  assign tmp_mul_result_82 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_83,tmp_mul_result_84}}}};
  assign tmp_mul_result_113 = tmp_mul_result_3;
  assign tmp_mul_result_114 = {tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_115,tmp_mul_result_116}}}};
  assign tmp_mul_result_145 = tmp_mul_result_4;
  assign tmp_mul_result_146 = {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_147,tmp_mul_result_148}}}};
  assign tmp_mul_result_19 = tmp_mul_result;
  assign tmp_mul_result_20 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result,{tmp_mul_result_21,tmp_mul_result_22}}}};
  assign tmp_mul_result_51 = tmp_mul_result_1;
  assign tmp_mul_result_52 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_53,tmp_mul_result_54}}}};
  assign tmp_mul_result_83 = tmp_mul_result_2;
  assign tmp_mul_result_84 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_85,tmp_mul_result_86}}}};
  assign tmp_mul_result_115 = tmp_mul_result_3;
  assign tmp_mul_result_116 = {tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_117,tmp_mul_result_118}}}};
  assign tmp_mul_result_147 = tmp_mul_result_4;
  assign tmp_mul_result_148 = {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_149,tmp_mul_result_150}}}};
  assign tmp_mul_result_21 = tmp_mul_result;
  assign tmp_mul_result_22 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result,{tmp_mul_result_23,tmp_mul_result_24}}}};
  assign tmp_mul_result_53 = tmp_mul_result_1;
  assign tmp_mul_result_54 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_55,tmp_mul_result_56}}}};
  assign tmp_mul_result_85 = tmp_mul_result_2;
  assign tmp_mul_result_86 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_87,tmp_mul_result_88}}}};
  assign tmp_mul_result_117 = tmp_mul_result_3;
  assign tmp_mul_result_118 = {tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_119,tmp_mul_result_120}}}};
  assign tmp_mul_result_149 = tmp_mul_result_4;
  assign tmp_mul_result_150 = {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_151,tmp_mul_result_152}}}};
  assign tmp_mul_result_23 = tmp_mul_result;
  assign tmp_mul_result_24 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result,{tmp_mul_result_25,tmp_mul_result_26}}}};
  assign tmp_mul_result_55 = tmp_mul_result_1;
  assign tmp_mul_result_56 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_57,tmp_mul_result_58}}}};
  assign tmp_mul_result_87 = tmp_mul_result_2;
  assign tmp_mul_result_88 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_89,tmp_mul_result_90}}}};
  assign tmp_mul_result_119 = tmp_mul_result_3;
  assign tmp_mul_result_120 = {tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_121,tmp_mul_result_122}}}};
  assign tmp_mul_result_151 = tmp_mul_result_4;
  assign tmp_mul_result_152 = {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_153,tmp_mul_result_154}}}};
  assign tmp_mul_result_25 = tmp_mul_result;
  assign tmp_mul_result_26 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result,{tmp_mul_result_27,tmp_mul_result_28}}}};
  assign tmp_mul_result_57 = tmp_mul_result_1;
  assign tmp_mul_result_58 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_59,tmp_mul_result_60}}}};
  assign tmp_mul_result_89 = tmp_mul_result_2;
  assign tmp_mul_result_90 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_91,tmp_mul_result_92}}}};
  assign tmp_mul_result_121 = tmp_mul_result_3;
  assign tmp_mul_result_122 = {tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_123,tmp_mul_result_124}}}};
  assign tmp_mul_result_153 = tmp_mul_result_4;
  assign tmp_mul_result_154 = {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_155,tmp_mul_result_156}}}};
  assign tmp_mul_result_27 = tmp_mul_result;
  assign tmp_mul_result_28 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result,{tmp_mul_result_29,tmp_mul_result_30}}}};
  assign tmp_mul_result_59 = tmp_mul_result_1;
  assign tmp_mul_result_60 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_61,tmp_mul_result_62}}}};
  assign tmp_mul_result_91 = tmp_mul_result_2;
  assign tmp_mul_result_92 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_93,tmp_mul_result_94}}}};
  assign tmp_mul_result_123 = tmp_mul_result_3;
  assign tmp_mul_result_124 = {tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_125,tmp_mul_result_126}}}};
  assign tmp_mul_result_155 = tmp_mul_result_4;
  assign tmp_mul_result_156 = {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_157,tmp_mul_result_158}}}};
  assign tmp_mul_result_29 = tmp_mul_result;
  assign tmp_mul_result_30 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result,{tmp_mul_result_31,tmp_mul_result_32}}}};
  assign tmp_mul_result_61 = tmp_mul_result_1;
  assign tmp_mul_result_62 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_63,tmp_mul_result_64}}}};
  assign tmp_mul_result_93 = tmp_mul_result_2;
  assign tmp_mul_result_94 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_95,tmp_mul_result_96}}}};
  assign tmp_mul_result_125 = tmp_mul_result_3;
  assign tmp_mul_result_126 = {tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_127,tmp_mul_result_128}}}};
  assign tmp_mul_result_157 = tmp_mul_result_4;
  assign tmp_mul_result_158 = {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_159,tmp_mul_result_160}}}};
  assign tmp_mul_result_31 = tmp_mul_result;
  assign tmp_mul_result_32 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result,{tmp_mul_result_33,tmp_mul_result_34}}}};
  assign tmp_mul_result_63 = tmp_mul_result_1;
  assign tmp_mul_result_64 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_65,tmp_mul_result_66}}}};
  assign tmp_mul_result_95 = tmp_mul_result_2;
  assign tmp_mul_result_96 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_97,tmp_mul_result_98}}}};
  assign tmp_mul_result_127 = tmp_mul_result_3;
  assign tmp_mul_result_128 = {tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_129,tmp_mul_result_130}}}};
  assign tmp_mul_result_159 = tmp_mul_result_4;
  assign tmp_mul_result_160 = {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_161,tmp_mul_result_162}}}};
  assign tmp_mul_result_33 = tmp_mul_result;
  assign tmp_mul_result_34 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result,{tmp_mul_result_35,tmp_mul_result_36}}}};
  assign tmp_mul_result_65 = tmp_mul_result_1;
  assign tmp_mul_result_66 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_67,tmp_mul_result_68}}}};
  assign tmp_mul_result_97 = tmp_mul_result_2;
  assign tmp_mul_result_98 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_99,tmp_mul_result_100}}}};
  assign tmp_mul_result_129 = tmp_mul_result_3;
  assign tmp_mul_result_130 = {tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_3,{tmp_mul_result_131,tmp_mul_result_132}}}};
  assign tmp_mul_result_161 = tmp_mul_result_4;
  assign tmp_mul_result_162 = {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_163,tmp_mul_result_164}}}};
  assign tmp_mul_result_35 = tmp_mul_result;
  assign tmp_mul_result_36 = {tmp_mul_result,{tmp_mul_result,{tmp_mul_result,{tmp_mul_result,tmp_mul_result}}}};
  assign tmp_mul_result_67 = tmp_mul_result_1;
  assign tmp_mul_result_68 = {tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,{tmp_mul_result_1,tmp_mul_result_1}}}};
  assign tmp_mul_result_99 = tmp_mul_result_2;
  assign tmp_mul_result_100 = {tmp_mul_result_2,{tmp_mul_result_2,{tmp_mul_result_2,tmp_mul_result_2}}};
  assign tmp_mul_result_131 = tmp_mul_result_3;
  assign tmp_mul_result_132 = {tmp_mul_result_3,{tmp_mul_result_3,tmp_mul_result_3}};
  assign tmp_mul_result_163 = tmp_mul_result_4;
  assign tmp_mul_result_164 = {tmp_mul_result_4,tmp_mul_result_4};
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

  assign src1_word = alu_src_src1_data[31 : 0]; // @ BaseType.scala l299
  assign src2_word = alu_src_src2_data[31 : 0]; // @ BaseType.scala l299
  assign shift_bits = alu_src_src2_data[5 : 0]; // @ BaseType.scala l318
  assign add_result = ($signed(tmp_add_result) + $signed(tmp_add_result_1)); // @ BaseType.scala l299
  assign sub_result = ($signed(tmp_sub_result) - $signed(tmp_sub_result_1)); // @ BaseType.scala l299
  assign slt_result = ($signed(tmp_slt_result) < $signed(tmp_slt_result_1)); // @ BaseType.scala l305
  assign sltu_result = (alu_src_src1_data < alu_src_src2_data); // @ BaseType.scala l305
  assign xor_result = (alu_src_src1_data ^ alu_src_src2_data); // @ BaseType.scala l299
  assign sll_result = (alu_src_src1_data <<< shift_bits); // @ BaseType.scala l299
  assign srl_result = (alu_src_src1_data >>> shift_bits); // @ BaseType.scala l299
  assign sra_result = ($signed(tmp_sra_result) >>> shift_bits); // @ BaseType.scala l299
  assign and_result = (alu_src_src1_data & alu_src_src2_data); // @ BaseType.scala l299
  assign or_result = (alu_src_src1_data | alu_src_src2_data); // @ BaseType.scala l299
  assign tmp_addw_result = add_result[31]; // @ BaseType.scala l305
  always @(*) begin
    tmp_addw_result_1[31] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[30] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[29] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[28] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[27] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[26] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[25] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[24] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[23] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[22] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[21] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[20] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[19] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[18] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[17] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[16] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[15] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[14] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[13] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[12] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[11] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[10] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[9] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[8] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[7] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[6] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[5] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[4] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[3] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[2] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[1] = tmp_addw_result; // @ Literal.scala l87
    tmp_addw_result_1[0] = tmp_addw_result; // @ Literal.scala l87
  end

  assign addw_result = {tmp_addw_result_1,tmp_addw_result_2}; // @ BaseType.scala l299
  assign tmp_subw_result = sub_result[31]; // @ BaseType.scala l305
  always @(*) begin
    tmp_subw_result_1[31] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[30] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[29] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[28] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[27] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[26] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[25] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[24] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[23] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[22] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[21] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[20] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[19] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[18] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[17] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[16] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[15] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[14] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[13] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[12] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[11] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[10] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[9] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[8] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[7] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[6] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[5] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[4] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[3] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[2] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[1] = tmp_subw_result; // @ Literal.scala l87
    tmp_subw_result_1[0] = tmp_subw_result; // @ Literal.scala l87
  end

  assign subw_result = {tmp_subw_result_1,tmp_subw_result_2}; // @ BaseType.scala l299
  assign sllw_temp = (src1_word <<< shift_bits[4 : 0]); // @ BaseType.scala l299
  assign tmp_sllw_result = sllw_temp[31]; // @ BaseType.scala l305
  always @(*) begin
    tmp_sllw_result_1[31] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[30] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[29] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[28] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[27] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[26] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[25] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[24] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[23] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[22] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[21] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[20] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[19] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[18] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[17] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[16] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[15] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[14] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[13] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[12] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[11] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[10] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[9] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[8] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[7] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[6] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[5] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[4] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[3] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[2] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[1] = tmp_sllw_result; // @ Literal.scala l87
    tmp_sllw_result_1[0] = tmp_sllw_result; // @ Literal.scala l87
  end

  assign sllw_result = {tmp_sllw_result_1,sllw_temp}; // @ BaseType.scala l299
  assign srlw_temp = (src1_word >>> shift_bits[4 : 0]); // @ BaseType.scala l299
  assign tmp_srlw_result = srlw_temp[31]; // @ BaseType.scala l305
  always @(*) begin
    tmp_srlw_result_1[31] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[30] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[29] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[28] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[27] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[26] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[25] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[24] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[23] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[22] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[21] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[20] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[19] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[18] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[17] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[16] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[15] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[14] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[13] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[12] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[11] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[10] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[9] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[8] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[7] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[6] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[5] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[4] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[3] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[2] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[1] = tmp_srlw_result; // @ Literal.scala l87
    tmp_srlw_result_1[0] = tmp_srlw_result; // @ Literal.scala l87
  end

  assign srlw_result = {tmp_srlw_result_1,srlw_temp}; // @ BaseType.scala l299
  assign sraw_temp = ($signed(tmp_sraw_temp) >>> shift_bits[4 : 0]); // @ BaseType.scala l299
  assign tmp_sraw_result = sraw_temp[31]; // @ BaseType.scala l305
  always @(*) begin
    tmp_sraw_result_1[31] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[30] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[29] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[28] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[27] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[26] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[25] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[24] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[23] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[22] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[21] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[20] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[19] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[18] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[17] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[16] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[15] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[14] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[13] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[12] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[11] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[10] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[9] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[8] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[7] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[6] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[5] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[4] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[3] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[2] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[1] = tmp_sraw_result; // @ Literal.scala l87
    tmp_sraw_result_1[0] = tmp_sraw_result; // @ Literal.scala l87
  end

  assign sraw_result = {tmp_sraw_result_1,sraw_temp}; // @ BaseType.scala l299
  assign mul_type_mul = (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_MUL); // @ BaseType.scala l305
  assign mul_type_mulh = (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_MULH); // @ BaseType.scala l305
  assign mul_type_mulhsu = (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_MULHSU); // @ BaseType.scala l305
  assign mul_type_mulhu = (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_MULHU); // @ BaseType.scala l305
  assign mul_type_mulw = (alu_src_uop_alu_alu_ctrl_op == AluCtrlEnum_MULW); // @ BaseType.scala l305
  assign alu_is_mul = ((((mul_type_mul || mul_type_mulh) || mul_type_mulhsu) || mul_type_mulhu) || mul_type_mulw); // @ BaseType.scala l305
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
  always @(*) begin
    case(alu_src_uop_alu_alu_ctrl_op)
      AluCtrlEnum_ADD : begin
        if(alu_src_uop_alu_alu_is_word) begin
          alu_result = addw_result; // @ ALU.scala l67
        end else begin
          alu_result = add_result; // @ ALU.scala l69
        end
      end
      AluCtrlEnum_SUB : begin
        if(alu_src_uop_alu_alu_is_word) begin
          alu_result = subw_result; // @ ALU.scala l74
        end else begin
          alu_result = sub_result; // @ ALU.scala l76
        end
      end
      AluCtrlEnum_SLT : begin
        alu_result = {tmp_alu_result,slt_result}; // @ ALU.scala l80
      end
      AluCtrlEnum_SLTU : begin
        alu_result = {tmp_alu_result_1,sltu_result}; // @ ALU.scala l83
      end
      AluCtrlEnum_XOR_1 : begin
        alu_result = xor_result; // @ ALU.scala l86
      end
      AluCtrlEnum_SLL_1 : begin
        if(alu_src_uop_alu_alu_is_word) begin
          alu_result = sllw_result; // @ ALU.scala l90
        end else begin
          alu_result = sll_result; // @ ALU.scala l92
        end
      end
      AluCtrlEnum_SRL_1 : begin
        if(alu_src_uop_alu_alu_is_word) begin
          alu_result = srlw_result; // @ ALU.scala l97
        end else begin
          alu_result = srl_result; // @ ALU.scala l99
        end
      end
      AluCtrlEnum_SRA_1 : begin
        if(alu_src_uop_alu_alu_is_word) begin
          alu_result = sraw_result; // @ ALU.scala l104
        end else begin
          alu_result = sra_result; // @ ALU.scala l106
        end
      end
      AluCtrlEnum_AND_1 : begin
        alu_result = and_result; // @ ALU.scala l110
      end
      AluCtrlEnum_OR_1 : begin
        alu_result = or_result; // @ ALU.scala l113
      end
      AluCtrlEnum_LUI : begin
        alu_result = alu_src_src2_data; // @ ALU.scala l116
      end
      default : begin
        alu_result = 64'h0; // @ ALU.scala l119
      end
    endcase
  end

  assign tmp_alu_result[62 : 0] = 63'h0; // @ Literal.scala l88
  assign tmp_alu_result_1[62 : 0] = 63'h0; // @ Literal.scala l88
  assign mul_src1_is_u = ((mul_type_mul || mul_type_mulhu) || mul_type_mulw); // @ BaseType.scala l305
  assign mul_src2_is_u = (mul_type_mulhu || mul_type_mulw); // @ BaseType.scala l305
  assign mulhsu_src2 = {1'b0,alu_src_src2_data}; // @ BaseType.scala l299
  assign mul_src2 = (mul_type_mulhsu ? tmp_mul_src2 : tmp_mul_src2_1); // @ Expression.scala l1431
  assign mul_temp_u = (alu_src_src1_data * alu_src_src2_data); // @ BaseType.scala l299
  assign mul_temp_s = ($signed(tmp_mul_temp_s) * $signed(mul_src2)); // @ BaseType.scala l299
  assign mul_temp_u_high = mul_temp_u[127 : 64]; // @ BaseType.scala l299
  assign mul_temp_u_low = mul_temp_u[63 : 0]; // @ BaseType.scala l299
  assign mul_temp_s_high = mul_temp_s[127 : 64]; // @ BaseType.scala l299
  assign mul_temp_s_low = mul_temp_s[63 : 0]; // @ BaseType.scala l299
  assign tmp_mulw_result = mul_temp_u_low[31]; // @ BaseType.scala l305
  always @(*) begin
    tmp_mulw_result_1[31] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[30] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[29] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[28] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[27] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[26] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[25] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[24] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[23] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[22] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[21] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[20] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[19] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[18] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[17] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[16] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[15] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[14] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[13] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[12] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[11] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[10] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[9] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[8] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[7] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[6] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[5] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[4] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[3] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[2] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[1] = tmp_mulw_result; // @ Literal.scala l87
    tmp_mulw_result_1[0] = tmp_mulw_result; // @ Literal.scala l87
  end

  assign mulw_result = {tmp_mulw_result_1,mul_temp_u_low[31 : 0]}; // @ BaseType.scala l299
  assign mul_sel = {{{{mul_type_mul,mul_type_mulh},mul_type_mulhsu},mul_type_mulhu},mul_type_mulw}; // @ BaseType.scala l299
  assign mul_data = {{{{mul_temp_u_low,mul_temp_s_high},mul_temp_s_high},mul_temp_u_low},mulw_result}; // @ BaseType.scala l299
  assign tmp_mul_result = mul_sel[0]; // @ BaseType.scala l305
  assign tmp_mul_result_1 = mul_sel[1]; // @ BaseType.scala l305
  assign tmp_mul_result_2 = mul_sel[2]; // @ BaseType.scala l305
  assign tmp_mul_result_3 = mul_sel[3]; // @ BaseType.scala l305
  assign tmp_mul_result_4 = mul_sel[4]; // @ BaseType.scala l305
  assign mul_result = (((((tmp_mul_result_5 & tmp_mul_result_6) | (tmp_mul_result_37 & tmp_mul_result_38)) | (mul_data[191 : 128] & {tmp_mul_result_69,tmp_mul_result_70})) | (mul_data[255 : 192] & {tmp_mul_result_3,{tmp_mul_result_101,tmp_mul_result_102}})) | (mul_data[319 : 256] & {tmp_mul_result_4,{tmp_mul_result_4,{tmp_mul_result_133,tmp_mul_result_134}}})); // @ BaseType.scala l299
  assign src_stream_ready = dst_stream_ready; // @ ALU.scala l140
  assign dst_stream_valid = src_stream_valid; // @ ALU.scala l141
  assign dst_stream_rd_wen = src_stream_uop_com_rd_wen; // @ ALU.scala l142
  assign dst_stream_rd_data = (alu_is_mul ? mul_result : alu_result); // @ ALU.scala l143
  assign dst_stream_pc = src_stream_pc; // @ ALU.scala l144
  assign dst_stream_instr = src_stream_instr; // @ ALU.scala l145
  assign dst_stream_older = src_stream_older; // @ ALU.scala l146
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
