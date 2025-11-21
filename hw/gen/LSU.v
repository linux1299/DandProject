// Generator : SpinalHDL v1.8.1    git head : 2a7592004363e5b40ec43e1f122ed8641cd8965b
// Component : LSU
// Git hash  : f29d1de95b2b9aea3ec101573c63250a4bc0eea3

`timescale 1ns/1ps

module LSU (
  input               flush,
  output              timer_int,
  input               lsu_src_valid,
  output reg          lsu_src_ready,
  input               lsu_src_uop_com_rd_wen,
  input               lsu_src_uop_com_src2_is_imm,
  input      [63:0]   lsu_src_src1_data,
  input      [63:0]   lsu_src_src2_data,
  input      [4:0]    lsu_src_rd_addr,
  input      [31:0]   lsu_src_pc,
  input      [31:0]   lsu_src_instr,
  input               lsu_src_older,
  input      [63:0]   lsu_src_imm,
  input      [3:0]    lsu_src_uop_lsu_lsu_ctrl_op,
  input               lsu_src_uop_lsu_lsu_is_load,
  input               lsu_src_uop_lsu_lsu_is_store,
  output              lsu_dst_valid,
  input               lsu_dst_ready,
  output     [63:0]   lsu_dst_rd_data,
  output     [4:0]    lsu_dst_rd_addr,
  output              lsu_dst_rd_wen,
  output     [31:0]   lsu_dst_pc,
  output     [31:0]   lsu_dst_instr,
  output              lsu_dst_older,
  output              dcache_ports_cmd_valid,
  input               dcache_ports_cmd_ready,
  output     [31:0]   dcache_ports_cmd_addr,
  output              dcache_ports_cmd_wen,
  output     [63:0]   dcache_ports_cmd_wdata,
  output     [7:0]    dcache_ports_cmd_wstrb,
  output     [2:0]    dcache_ports_cmd_size,
  input               dcache_ports_rsp_valid,
  input      [63:0]   dcache_ports_rsp_data,
  input               clk,
  input               reset
);
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

  wire       [63:0]   timer_1_rdata;
  wire                timer_1_timer_int;
  wire       [5:0]    tmp_dcache_rdata;
  wire       [5:0]    tmp_dcache_wdata;
  wire       [5:0]    tmp_dcache_wdata_1;
  wire       [5:0]    tmp_dcache_wdata_2;
  wire       [5:0]    tmp_dcache_wdata_3;
  wire                dcache_ports_stall;
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
  wire       [3:0]    src_stream_uop_lsu_lsu_ctrl_op;
  wire                src_stream_uop_lsu_lsu_is_load;
  wire                src_stream_uop_lsu_lsu_is_store;
  wire                dst_stream_valid;
  reg                 dst_stream_ready;
  wire       [63:0]   dst_stream_rd_data;
  wire       [4:0]    dst_stream_rd_addr;
  wire                dst_stream_rd_wen;
  wire       [31:0]   dst_stream_pc;
  wire       [31:0]   dst_stream_instr;
  wire                dst_stream_older;
  wire                dcache_stream_valid;
  wire                dcache_stream_ready;
  wire       [31:0]   dcache_stream_addr;
  wire                dcache_stream_wen;
  wire       [63:0]   dcache_stream_wdata;
  wire       [7:0]    dcache_stream_wstrb;
  wire       [2:0]    dcache_stream_size;
  wire                lsu_cen;
  wire       [63:0]   lsu_addr;
  wire       [2:0]    lsu_addr_offset;
  wire                lsu_addr_is_timer;
  wire                tmp_lsu_wdata_byte;
  reg        [55:0]   tmp_lsu_wdata_byte_1;
  wire       [63:0]   lsu_wdata_byte;
  wire                tmp_lsu_wdata_half;
  reg        [47:0]   tmp_lsu_wdata_half_1;
  wire       [63:0]   lsu_wdata_half;
  wire                tmp_lsu_wdata_word;
  reg        [31:0]   tmp_lsu_wdata_word_1;
  wire       [63:0]   lsu_wdata_word;
  wire                dcache_cen;
  wire       [63:0]   dcache_addr;
  reg        [63:0]   dcache_wdata;
  reg        [7:0]    dcache_wstrb;
  reg        [2:0]    dcache_size;
  wire                lsu_src_fire;
  reg        [2:0]    lsu_addr_offset_reg;
  wire       [63:0]   dcache_rdata;
  wire                tmp_dcache_rdata_lb;
  reg        [55:0]   tmp_dcache_rdata_lb_1;
  wire       [63:0]   dcache_rdata_lb;
  reg        [55:0]   tmp_dcache_rdata_lbu;
  wire       [63:0]   dcache_rdata_lbu;
  wire                tmp_dcache_rdata_lh;
  reg        [47:0]   tmp_dcache_rdata_lh_1;
  wire       [63:0]   dcache_rdata_lh;
  reg        [47:0]   tmp_dcache_rdata_lhu;
  wire       [63:0]   dcache_rdata_lhu;
  wire                tmp_dcache_rdata_lw;
  reg        [31:0]   tmp_dcache_rdata_lw_1;
  wire       [63:0]   dcache_rdata_lw;
  reg        [31:0]   tmp_dcache_rdata_lwu;
  wire       [63:0]   dcache_rdata_lwu;
  reg        [63:0]   lsu_rdata;
  wire                lsu_src_fire_1;
  reg        [3:0]    lsu_ctrl_op_reg;
  wire                timer_cen;
  reg        [7:0]    tmp_dcache_wstrb;
  reg        [7:0]    tmp_dcache_wstrb_1;
  reg        [7:0]    tmp_dcache_wstrb_2;
  wire       [7:0]    tmp_dcache_wstrb_3;
  reg                 rd_wen_reg;
  reg        [4:0]    rd_addr_reg;
  reg                 older_reg;
  reg        [31:0]   pc_reg;
  reg        [31:0]   instr_reg;
  wire                src_stream_fire;
  wire                dst_stream_m2sPipe_valid;
  wire                dst_stream_m2sPipe_ready;
  wire       [63:0]   dst_stream_m2sPipe_rd_data;
  wire       [4:0]    dst_stream_m2sPipe_rd_addr;
  wire                dst_stream_m2sPipe_rd_wen;
  wire       [31:0]   dst_stream_m2sPipe_pc;
  wire       [31:0]   dst_stream_m2sPipe_instr;
  wire                dst_stream_m2sPipe_older;
  reg                 dst_stream_rValid;
  reg        [63:0]   dst_stream_rData_rd_data;
  reg        [4:0]    dst_stream_rData_rd_addr;
  reg                 dst_stream_rData_rd_wen;
  reg        [31:0]   dst_stream_rData_pc;
  reg        [31:0]   dst_stream_rData_instr;
  reg                 dst_stream_rData_older;
  `ifndef SYNTHESIS
  reg [31:0] lsu_src_uop_lsu_lsu_ctrl_op_string;
  reg [31:0] src_stream_uop_lsu_lsu_ctrl_op_string;
  reg [31:0] lsu_ctrl_op_reg_string;
  `endif

  function [55:0] zz_tmp_dcache_rdata_lbu(input dummy);
    begin
      zz_tmp_dcache_rdata_lbu[55] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[54] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[53] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[52] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[51] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[50] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[49] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[48] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[47] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[46] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[45] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[44] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[43] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[42] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[41] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[40] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[39] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[38] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[37] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[36] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[35] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[34] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[33] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[32] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[31] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[30] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[29] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[28] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[27] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[26] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[25] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[24] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[23] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[22] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[21] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[20] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[19] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[18] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[17] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[16] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[15] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[14] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[13] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[12] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[11] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[10] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[9] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[8] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[7] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[6] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[5] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[4] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[3] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[2] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[1] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lbu[0] = 1'b0; // @ Literal.scala l87
    end
  endfunction
  wire [55:0] tmp_1;
  function [47:0] zz_tmp_dcache_rdata_lhu(input dummy);
    begin
      zz_tmp_dcache_rdata_lhu[47] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[46] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[45] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[44] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[43] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[42] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[41] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[40] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[39] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[38] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[37] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[36] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[35] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[34] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[33] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[32] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[31] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[30] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[29] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[28] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[27] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[26] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[25] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[24] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[23] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[22] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[21] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[20] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[19] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[18] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[17] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[16] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[15] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[14] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[13] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[12] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[11] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[10] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[9] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[8] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[7] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[6] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[5] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[4] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[3] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[2] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[1] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lhu[0] = 1'b0; // @ Literal.scala l87
    end
  endfunction
  wire [47:0] tmp_2;
  function [31:0] zz_tmp_dcache_rdata_lwu(input dummy);
    begin
      zz_tmp_dcache_rdata_lwu[31] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[30] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[29] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[28] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[27] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[26] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[25] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[24] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[23] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[22] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[21] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[20] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[19] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[18] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[17] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[16] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[15] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[14] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[13] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[12] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[11] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[10] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[9] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[8] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[7] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[6] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[5] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[4] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[3] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[2] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[1] = 1'b0; // @ Literal.scala l87
      zz_tmp_dcache_rdata_lwu[0] = 1'b0; // @ Literal.scala l87
    end
  endfunction
  wire [31:0] tmp_3;
  function [7:0] zz_tmp_dcache_wstrb(input dummy);
    begin
      zz_tmp_dcache_wstrb = 8'h0; // @ BitVector.scala l492
      zz_tmp_dcache_wstrb[0] = 1'b1; // @ Literal.scala l83
    end
  endfunction
  wire [7:0] tmp_4;
  function [7:0] zz_tmp_dcache_wstrb_1(input dummy);
    begin
      zz_tmp_dcache_wstrb_1 = 8'h0; // @ BitVector.scala l492
      zz_tmp_dcache_wstrb_1[1 : 0] = 2'b11; // @ Literal.scala l88
    end
  endfunction
  wire [7:0] tmp_5;
  function [7:0] zz_tmp_dcache_wstrb_2(input dummy);
    begin
      zz_tmp_dcache_wstrb_2 = 8'h0; // @ BitVector.scala l492
      zz_tmp_dcache_wstrb_2[3 : 0] = 4'b1111; // @ Literal.scala l88
    end
  endfunction
  wire [7:0] tmp_6;

  assign tmp_dcache_rdata = ({3'd0,lsu_addr_offset_reg} <<< 3);
  assign tmp_dcache_wdata = ({3'd0,lsu_addr_offset} <<< 3);
  assign tmp_dcache_wdata_1 = ({3'd0,lsu_addr_offset} <<< 3);
  assign tmp_dcache_wdata_2 = ({3'd0,lsu_addr_offset} <<< 3);
  assign tmp_dcache_wdata_3 = ({3'd0,lsu_addr_offset} <<< 3);
  Timer timer_1 (
    .cen       (timer_cen                   ), //i
    .wen       (lsu_src_uop_lsu_lsu_is_store), //i
    .addr      (dcache_addr[63:0]           ), //i
    .wdata     (dcache_wdata[63:0]          ), //i
    .rdata     (timer_1_rdata[63:0]         ), //o
    .timer_int (timer_1_timer_int           ), //o
    .clk       (clk                         ), //i
    .reset     (reset                       )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(lsu_src_uop_lsu_lsu_ctrl_op)
      LsuCtrlEnum_IDLE : lsu_src_uop_lsu_lsu_ctrl_op_string = "IDLE";
      LsuCtrlEnum_LB : lsu_src_uop_lsu_lsu_ctrl_op_string = "LB  ";
      LsuCtrlEnum_LBU : lsu_src_uop_lsu_lsu_ctrl_op_string = "LBU ";
      LsuCtrlEnum_LH : lsu_src_uop_lsu_lsu_ctrl_op_string = "LH  ";
      LsuCtrlEnum_LHU : lsu_src_uop_lsu_lsu_ctrl_op_string = "LHU ";
      LsuCtrlEnum_LW : lsu_src_uop_lsu_lsu_ctrl_op_string = "LW  ";
      LsuCtrlEnum_LWU : lsu_src_uop_lsu_lsu_ctrl_op_string = "LWU ";
      LsuCtrlEnum_LD : lsu_src_uop_lsu_lsu_ctrl_op_string = "LD  ";
      LsuCtrlEnum_SB : lsu_src_uop_lsu_lsu_ctrl_op_string = "SB  ";
      LsuCtrlEnum_SH : lsu_src_uop_lsu_lsu_ctrl_op_string = "SH  ";
      LsuCtrlEnum_SW : lsu_src_uop_lsu_lsu_ctrl_op_string = "SW  ";
      LsuCtrlEnum_SD : lsu_src_uop_lsu_lsu_ctrl_op_string = "SD  ";
      default : lsu_src_uop_lsu_lsu_ctrl_op_string = "????";
    endcase
  end
  always @(*) begin
    case(src_stream_uop_lsu_lsu_ctrl_op)
      LsuCtrlEnum_IDLE : src_stream_uop_lsu_lsu_ctrl_op_string = "IDLE";
      LsuCtrlEnum_LB : src_stream_uop_lsu_lsu_ctrl_op_string = "LB  ";
      LsuCtrlEnum_LBU : src_stream_uop_lsu_lsu_ctrl_op_string = "LBU ";
      LsuCtrlEnum_LH : src_stream_uop_lsu_lsu_ctrl_op_string = "LH  ";
      LsuCtrlEnum_LHU : src_stream_uop_lsu_lsu_ctrl_op_string = "LHU ";
      LsuCtrlEnum_LW : src_stream_uop_lsu_lsu_ctrl_op_string = "LW  ";
      LsuCtrlEnum_LWU : src_stream_uop_lsu_lsu_ctrl_op_string = "LWU ";
      LsuCtrlEnum_LD : src_stream_uop_lsu_lsu_ctrl_op_string = "LD  ";
      LsuCtrlEnum_SB : src_stream_uop_lsu_lsu_ctrl_op_string = "SB  ";
      LsuCtrlEnum_SH : src_stream_uop_lsu_lsu_ctrl_op_string = "SH  ";
      LsuCtrlEnum_SW : src_stream_uop_lsu_lsu_ctrl_op_string = "SW  ";
      LsuCtrlEnum_SD : src_stream_uop_lsu_lsu_ctrl_op_string = "SD  ";
      default : src_stream_uop_lsu_lsu_ctrl_op_string = "????";
    endcase
  end
  always @(*) begin
    case(lsu_ctrl_op_reg)
      LsuCtrlEnum_IDLE : lsu_ctrl_op_reg_string = "IDLE";
      LsuCtrlEnum_LB : lsu_ctrl_op_reg_string = "LB  ";
      LsuCtrlEnum_LBU : lsu_ctrl_op_reg_string = "LBU ";
      LsuCtrlEnum_LH : lsu_ctrl_op_reg_string = "LH  ";
      LsuCtrlEnum_LHU : lsu_ctrl_op_reg_string = "LHU ";
      LsuCtrlEnum_LW : lsu_ctrl_op_reg_string = "LW  ";
      LsuCtrlEnum_LWU : lsu_ctrl_op_reg_string = "LWU ";
      LsuCtrlEnum_LD : lsu_ctrl_op_reg_string = "LD  ";
      LsuCtrlEnum_SB : lsu_ctrl_op_reg_string = "SB  ";
      LsuCtrlEnum_SH : lsu_ctrl_op_reg_string = "SH  ";
      LsuCtrlEnum_SW : lsu_ctrl_op_reg_string = "SW  ";
      LsuCtrlEnum_SD : lsu_ctrl_op_reg_string = "SD  ";
      default : lsu_ctrl_op_reg_string = "????";
    endcase
  end
  `endif

  always @(*) begin
    src_stream_valid = lsu_src_valid; // @ Stream.scala l294
    if(flush) begin
      src_stream_valid = 1'b0; // @ Stream.scala l439
    end
  end

  always @(*) begin
    lsu_src_ready = src_stream_ready; // @ Stream.scala l295
    if(flush) begin
      lsu_src_ready = 1'b1; // @ Stream.scala l440
    end
  end

  assign src_stream_uop_com_rd_wen = lsu_src_uop_com_rd_wen; // @ Stream.scala l296
  assign src_stream_uop_com_src2_is_imm = lsu_src_uop_com_src2_is_imm; // @ Stream.scala l296
  assign src_stream_src1_data = lsu_src_src1_data; // @ Stream.scala l296
  assign src_stream_src2_data = lsu_src_src2_data; // @ Stream.scala l296
  assign src_stream_rd_addr = lsu_src_rd_addr; // @ Stream.scala l296
  assign src_stream_pc = lsu_src_pc; // @ Stream.scala l296
  assign src_stream_instr = lsu_src_instr; // @ Stream.scala l296
  assign src_stream_older = lsu_src_older; // @ Stream.scala l296
  assign src_stream_imm = lsu_src_imm; // @ Stream.scala l296
  assign src_stream_uop_lsu_lsu_ctrl_op = lsu_src_uop_lsu_lsu_ctrl_op; // @ Stream.scala l296
  assign src_stream_uop_lsu_lsu_is_load = lsu_src_uop_lsu_lsu_is_load; // @ Stream.scala l296
  assign src_stream_uop_lsu_lsu_is_store = lsu_src_uop_lsu_lsu_is_store; // @ Stream.scala l296
  assign lsu_cen = (lsu_src_uop_lsu_lsu_is_load || lsu_src_uop_lsu_lsu_is_store); // @ BaseType.scala l305
  assign lsu_addr = (lsu_src_src1_data + lsu_src_imm); // @ BaseType.scala l299
  assign lsu_addr_offset = lsu_addr[2 : 0]; // @ BaseType.scala l299
  assign lsu_addr_is_timer = ((lsu_addr == 64'h000000000200bff8) || (lsu_addr == 64'h0000000002004000)); // @ BaseType.scala l305
  assign tmp_lsu_wdata_byte = lsu_src_src2_data[7]; // @ BaseType.scala l305
  always @(*) begin
    tmp_lsu_wdata_byte_1[55] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[54] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[53] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[52] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[51] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[50] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[49] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[48] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[47] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[46] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[45] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[44] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[43] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[42] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[41] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[40] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[39] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[38] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[37] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[36] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[35] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[34] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[33] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[32] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[31] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[30] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[29] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[28] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[27] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[26] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[25] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[24] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[23] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[22] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[21] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[20] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[19] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[18] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[17] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[16] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[15] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[14] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[13] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[12] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[11] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[10] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[9] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[8] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[7] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[6] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[5] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[4] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[3] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[2] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[1] = tmp_lsu_wdata_byte; // @ Literal.scala l87
    tmp_lsu_wdata_byte_1[0] = tmp_lsu_wdata_byte; // @ Literal.scala l87
  end

  assign lsu_wdata_byte = {tmp_lsu_wdata_byte_1,lsu_src_src2_data[7 : 0]}; // @ BaseType.scala l299
  assign tmp_lsu_wdata_half = lsu_src_src2_data[15]; // @ BaseType.scala l305
  always @(*) begin
    tmp_lsu_wdata_half_1[47] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[46] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[45] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[44] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[43] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[42] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[41] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[40] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[39] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[38] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[37] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[36] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[35] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[34] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[33] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[32] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[31] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[30] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[29] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[28] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[27] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[26] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[25] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[24] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[23] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[22] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[21] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[20] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[19] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[18] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[17] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[16] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[15] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[14] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[13] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[12] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[11] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[10] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[9] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[8] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[7] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[6] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[5] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[4] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[3] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[2] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[1] = tmp_lsu_wdata_half; // @ Literal.scala l87
    tmp_lsu_wdata_half_1[0] = tmp_lsu_wdata_half; // @ Literal.scala l87
  end

  assign lsu_wdata_half = {tmp_lsu_wdata_half_1,lsu_src_src2_data[15 : 0]}; // @ BaseType.scala l299
  assign tmp_lsu_wdata_word = lsu_src_src2_data[31]; // @ BaseType.scala l305
  always @(*) begin
    tmp_lsu_wdata_word_1[31] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[30] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[29] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[28] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[27] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[26] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[25] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[24] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[23] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[22] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[21] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[20] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[19] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[18] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[17] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[16] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[15] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[14] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[13] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[12] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[11] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[10] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[9] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[8] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[7] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[6] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[5] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[4] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[3] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[2] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[1] = tmp_lsu_wdata_word; // @ Literal.scala l87
    tmp_lsu_wdata_word_1[0] = tmp_lsu_wdata_word; // @ Literal.scala l87
  end

  assign lsu_wdata_word = {tmp_lsu_wdata_word_1,lsu_src_src2_data[31 : 0]}; // @ BaseType.scala l299
  assign dcache_cen = ((! lsu_addr_is_timer) && lsu_cen); // @ BaseType.scala l305
  assign dcache_addr = lsu_addr; // @ Data.scala l450
  assign lsu_src_fire = (lsu_src_valid && lsu_src_ready); // @ BaseType.scala l305
  assign dcache_rdata = (dcache_ports_rsp_data >>> tmp_dcache_rdata); // @ BaseType.scala l299
  assign tmp_dcache_rdata_lb = dcache_rdata[7]; // @ BaseType.scala l305
  always @(*) begin
    tmp_dcache_rdata_lb_1[55] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[54] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[53] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[52] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[51] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[50] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[49] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[48] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[47] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[46] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[45] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[44] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[43] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[42] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[41] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[40] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[39] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[38] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[37] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[36] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[35] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[34] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[33] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[32] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[31] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[30] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[29] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[28] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[27] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[26] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[25] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[24] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[23] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[22] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[21] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[20] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[19] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[18] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[17] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[16] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[15] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[14] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[13] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[12] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[11] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[10] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[9] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[8] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[7] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[6] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[5] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[4] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[3] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[2] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[1] = tmp_dcache_rdata_lb; // @ Literal.scala l87
    tmp_dcache_rdata_lb_1[0] = tmp_dcache_rdata_lb; // @ Literal.scala l87
  end

  assign dcache_rdata_lb = {tmp_dcache_rdata_lb_1,dcache_rdata[7 : 0]}; // @ BaseType.scala l299
  assign tmp_1 = zz_tmp_dcache_rdata_lbu(1'b0);
  always @(*) tmp_dcache_rdata_lbu = tmp_1;
  assign dcache_rdata_lbu = {tmp_dcache_rdata_lbu,dcache_rdata[7 : 0]}; // @ BaseType.scala l299
  assign tmp_dcache_rdata_lh = dcache_rdata[15]; // @ BaseType.scala l305
  always @(*) begin
    tmp_dcache_rdata_lh_1[47] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[46] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[45] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[44] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[43] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[42] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[41] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[40] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[39] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[38] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[37] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[36] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[35] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[34] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[33] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[32] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[31] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[30] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[29] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[28] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[27] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[26] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[25] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[24] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[23] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[22] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[21] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[20] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[19] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[18] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[17] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[16] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[15] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[14] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[13] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[12] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[11] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[10] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[9] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[8] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[7] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[6] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[5] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[4] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[3] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[2] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[1] = tmp_dcache_rdata_lh; // @ Literal.scala l87
    tmp_dcache_rdata_lh_1[0] = tmp_dcache_rdata_lh; // @ Literal.scala l87
  end

  assign dcache_rdata_lh = {tmp_dcache_rdata_lh_1,dcache_rdata[15 : 0]}; // @ BaseType.scala l299
  assign tmp_2 = zz_tmp_dcache_rdata_lhu(1'b0);
  always @(*) tmp_dcache_rdata_lhu = tmp_2;
  assign dcache_rdata_lhu = {tmp_dcache_rdata_lhu,dcache_rdata[15 : 0]}; // @ BaseType.scala l299
  assign tmp_dcache_rdata_lw = dcache_rdata[31]; // @ BaseType.scala l305
  always @(*) begin
    tmp_dcache_rdata_lw_1[31] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[30] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[29] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[28] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[27] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[26] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[25] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[24] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[23] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[22] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[21] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[20] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[19] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[18] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[17] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[16] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[15] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[14] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[13] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[12] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[11] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[10] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[9] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[8] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[7] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[6] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[5] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[4] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[3] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[2] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[1] = tmp_dcache_rdata_lw; // @ Literal.scala l87
    tmp_dcache_rdata_lw_1[0] = tmp_dcache_rdata_lw; // @ Literal.scala l87
  end

  assign dcache_rdata_lw = {tmp_dcache_rdata_lw_1,dcache_rdata[31 : 0]}; // @ BaseType.scala l299
  assign tmp_3 = zz_tmp_dcache_rdata_lwu(1'b0);
  always @(*) tmp_dcache_rdata_lwu = tmp_3;
  assign dcache_rdata_lwu = {tmp_dcache_rdata_lwu,dcache_rdata[31 : 0]}; // @ BaseType.scala l299
  assign lsu_src_fire_1 = (lsu_src_valid && lsu_src_ready); // @ BaseType.scala l305
  assign timer_cen = (lsu_addr_is_timer && lsu_cen); // @ BaseType.scala l305
  assign timer_int = timer_1_timer_int; // @ LSU.scala l105
  assign dcache_stream_valid = (dcache_cen && src_stream_valid); // @ LSU.scala l108
  assign dcache_stream_addr = dcache_addr[31:0]; // @ LSU.scala l109
  assign dcache_stream_wen = lsu_src_uop_lsu_lsu_is_store; // @ LSU.scala l110
  assign dcache_stream_wdata = dcache_wdata; // @ LSU.scala l111
  assign dcache_stream_wstrb = dcache_wstrb; // @ LSU.scala l112
  assign dcache_stream_size = dcache_size; // @ LSU.scala l113
  assign dcache_ports_cmd_valid = dcache_stream_valid; // @ Stream.scala l294
  assign dcache_stream_ready = dcache_ports_cmd_ready; // @ Stream.scala l295
  assign dcache_ports_cmd_addr = dcache_stream_addr; // @ Stream.scala l296
  assign dcache_ports_cmd_wen = dcache_stream_wen; // @ Stream.scala l296
  assign dcache_ports_cmd_wdata = dcache_stream_wdata; // @ Stream.scala l296
  assign dcache_ports_cmd_wstrb = dcache_stream_wstrb; // @ Stream.scala l296
  assign dcache_ports_cmd_size = dcache_stream_size; // @ Stream.scala l296
  always @(*) begin
    case(lsu_src_uop_lsu_lsu_ctrl_op)
      LsuCtrlEnum_SB : begin
        dcache_wdata = (lsu_wdata_byte <<< tmp_dcache_wdata); // @ LSU.scala l118
      end
      LsuCtrlEnum_SH : begin
        dcache_wdata = (lsu_wdata_half <<< tmp_dcache_wdata_1); // @ LSU.scala l122
      end
      LsuCtrlEnum_SW : begin
        dcache_wdata = (lsu_wdata_word <<< tmp_dcache_wdata_2); // @ LSU.scala l126
      end
      LsuCtrlEnum_SD : begin
        dcache_wdata = (lsu_src_src2_data <<< tmp_dcache_wdata_3); // @ LSU.scala l130
      end
      default : begin
        dcache_wdata = 64'h0; // @ LSU.scala l134
      end
    endcase
  end

  assign tmp_4 = zz_tmp_dcache_wstrb(1'b0);
  always @(*) tmp_dcache_wstrb = tmp_4;
  always @(*) begin
    case(lsu_src_uop_lsu_lsu_ctrl_op)
      LsuCtrlEnum_SB : begin
        dcache_wstrb = (tmp_dcache_wstrb <<< lsu_addr_offset); // @ LSU.scala l119
      end
      LsuCtrlEnum_SH : begin
        dcache_wstrb = (tmp_dcache_wstrb_1 <<< lsu_addr_offset); // @ LSU.scala l123
      end
      LsuCtrlEnum_SW : begin
        dcache_wstrb = (tmp_dcache_wstrb_2 <<< lsu_addr_offset); // @ LSU.scala l127
      end
      LsuCtrlEnum_SD : begin
        dcache_wstrb = (tmp_dcache_wstrb_3 <<< lsu_addr_offset); // @ LSU.scala l131
      end
      default : begin
        dcache_wstrb = 8'h0; // @ LSU.scala l135
      end
    endcase
  end

  assign tmp_5 = zz_tmp_dcache_wstrb_1(1'b0);
  always @(*) tmp_dcache_wstrb_1 = tmp_5;
  assign tmp_6 = zz_tmp_dcache_wstrb_2(1'b0);
  always @(*) tmp_dcache_wstrb_2 = tmp_6;
  assign tmp_dcache_wstrb_3[7 : 0] = 8'hff; // @ Literal.scala l88
  always @(*) begin
    case(lsu_src_uop_lsu_lsu_ctrl_op)
      LsuCtrlEnum_SB : begin
        dcache_size = 3'b000; // @ LSU.scala l141
      end
      LsuCtrlEnum_SH : begin
        dcache_size = 3'b001; // @ LSU.scala l144
      end
      LsuCtrlEnum_SW : begin
        dcache_size = 3'b010; // @ LSU.scala l147
      end
      LsuCtrlEnum_SD : begin
        dcache_size = 3'b011; // @ LSU.scala l150
      end
      LsuCtrlEnum_LB : begin
        dcache_size = 3'b000; // @ LSU.scala l153
      end
      LsuCtrlEnum_LBU : begin
        dcache_size = 3'b000; // @ LSU.scala l156
      end
      LsuCtrlEnum_LH : begin
        dcache_size = 3'b001; // @ LSU.scala l159
      end
      LsuCtrlEnum_LHU : begin
        dcache_size = 3'b001; // @ LSU.scala l162
      end
      LsuCtrlEnum_LW : begin
        dcache_size = 3'b010; // @ LSU.scala l165
      end
      LsuCtrlEnum_LWU : begin
        dcache_size = 3'b010; // @ LSU.scala l168
      end
      LsuCtrlEnum_LD : begin
        dcache_size = 3'b011; // @ LSU.scala l171
      end
      default : begin
        dcache_size = 3'b000; // @ LSU.scala l174
      end
    endcase
  end

  always @(*) begin
    case(lsu_ctrl_op_reg)
      LsuCtrlEnum_LB : begin
        lsu_rdata = dcache_rdata_lb; // @ LSU.scala l182
      end
      LsuCtrlEnum_LBU : begin
        lsu_rdata = dcache_rdata_lbu; // @ LSU.scala l185
      end
      LsuCtrlEnum_LH : begin
        lsu_rdata = dcache_rdata_lh; // @ LSU.scala l188
      end
      LsuCtrlEnum_LHU : begin
        lsu_rdata = dcache_rdata_lhu; // @ LSU.scala l191
      end
      LsuCtrlEnum_LW : begin
        lsu_rdata = dcache_rdata_lw; // @ LSU.scala l194
      end
      LsuCtrlEnum_LWU : begin
        lsu_rdata = dcache_rdata_lwu; // @ LSU.scala l197
      end
      LsuCtrlEnum_LD : begin
        lsu_rdata = dcache_rdata; // @ LSU.scala l200
      end
      default : begin
        lsu_rdata = 64'h0; // @ LSU.scala l203
      end
    endcase
  end

  assign src_stream_fire = (src_stream_valid && src_stream_ready); // @ BaseType.scala l305
  assign src_stream_ready = dcache_stream_ready; // @ LSU.scala l231
  assign dst_stream_valid = dcache_ports_rsp_valid; // @ LSU.scala l232
  assign dst_stream_rd_data = (lsu_addr_is_timer ? timer_1_rdata : lsu_rdata); // @ LSU.scala l233
  assign dst_stream_rd_wen = rd_wen_reg; // @ LSU.scala l234
  assign dst_stream_rd_addr = rd_addr_reg; // @ LSU.scala l235
  assign dst_stream_older = older_reg; // @ LSU.scala l236
  assign dst_stream_pc = pc_reg; // @ LSU.scala l237
  assign dst_stream_instr = instr_reg; // @ LSU.scala l238
  always @(*) begin
    dst_stream_ready = dst_stream_m2sPipe_ready; // @ Stream.scala l367
    if((! dst_stream_m2sPipe_valid)) begin
      dst_stream_ready = 1'b1; // @ Stream.scala l368
    end
  end

  assign dst_stream_m2sPipe_valid = dst_stream_rValid; // @ Stream.scala l370
  assign dst_stream_m2sPipe_rd_data = dst_stream_rData_rd_data; // @ Stream.scala l371
  assign dst_stream_m2sPipe_rd_addr = dst_stream_rData_rd_addr; // @ Stream.scala l371
  assign dst_stream_m2sPipe_rd_wen = dst_stream_rData_rd_wen; // @ Stream.scala l371
  assign dst_stream_m2sPipe_pc = dst_stream_rData_pc; // @ Stream.scala l371
  assign dst_stream_m2sPipe_instr = dst_stream_rData_instr; // @ Stream.scala l371
  assign dst_stream_m2sPipe_older = dst_stream_rData_older; // @ Stream.scala l371
  assign lsu_dst_valid = dst_stream_m2sPipe_valid; // @ Stream.scala l294
  assign dst_stream_m2sPipe_ready = lsu_dst_ready; // @ Stream.scala l295
  assign lsu_dst_rd_data = dst_stream_m2sPipe_rd_data; // @ Stream.scala l296
  assign lsu_dst_rd_addr = dst_stream_m2sPipe_rd_addr; // @ Stream.scala l296
  assign lsu_dst_rd_wen = dst_stream_m2sPipe_rd_wen; // @ Stream.scala l296
  assign lsu_dst_pc = dst_stream_m2sPipe_pc; // @ Stream.scala l296
  assign lsu_dst_instr = dst_stream_m2sPipe_instr; // @ Stream.scala l296
  assign lsu_dst_older = dst_stream_m2sPipe_older; // @ Stream.scala l296
  always @(posedge clk) begin
    if(lsu_src_fire) begin
      lsu_addr_offset_reg <= lsu_addr_offset; // @ LSU.scala l82
    end
    if(lsu_src_fire_1) begin
      lsu_ctrl_op_reg <= lsu_src_uop_lsu_lsu_ctrl_op; // @ LSU.scala l91
    end
    if(dst_stream_ready) begin
      dst_stream_rData_rd_data <= dst_stream_rd_data; // @ Stream.scala l362
      dst_stream_rData_rd_addr <= dst_stream_rd_addr; // @ Stream.scala l362
      dst_stream_rData_rd_wen <= dst_stream_rd_wen; // @ Stream.scala l362
      dst_stream_rData_pc <= dst_stream_pc; // @ Stream.scala l362
      dst_stream_rData_instr <= dst_stream_instr; // @ Stream.scala l362
      dst_stream_rData_older <= dst_stream_older; // @ Stream.scala l362
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      rd_wen_reg <= 1'b0; // @ Data.scala l400
      rd_addr_reg <= 5'h0; // @ Data.scala l400
      older_reg <= 1'b0; // @ Data.scala l400
      pc_reg <= 32'h0; // @ Data.scala l400
      instr_reg <= 32'h0; // @ Data.scala l400
      dst_stream_rValid <= 1'b0; // @ Data.scala l400
    end else begin
      if(flush) begin
        rd_wen_reg <= 1'b0; // @ LSU.scala l217
        rd_addr_reg <= 5'h0; // @ LSU.scala l218
        older_reg <= 1'b0; // @ LSU.scala l219
        pc_reg <= 32'h0; // @ LSU.scala l220
        instr_reg <= 32'h0; // @ LSU.scala l221
      end else begin
        if(src_stream_fire) begin
          rd_wen_reg <= lsu_src_uop_com_rd_wen; // @ LSU.scala l224
          rd_addr_reg <= lsu_src_rd_addr; // @ LSU.scala l225
          older_reg <= lsu_src_older; // @ LSU.scala l226
          pc_reg <= lsu_src_pc; // @ LSU.scala l227
          instr_reg <= lsu_src_instr; // @ LSU.scala l228
        end
      end
      if(dst_stream_ready) begin
        dst_stream_rValid <= dst_stream_valid; // @ Stream.scala l361
      end
    end
  end


endmodule

module Timer (
  input               cen,
  input               wen,
  input      [63:0]   addr,
  input      [63:0]   wdata,
  output reg [63:0]   rdata,
  output              timer_int,
  input               clk,
  input               reset
);

  wire       [63:0]   tmp_mtime;
  reg        [63:0]   mtime;
  reg        [63:0]   mtimecmp;

  assign tmp_mtime = (mtime + 64'h0000000000000001);
  always @(*) begin
    if((addr == 64'h000000000200bff8)) begin
      rdata = mtime; // @ LSU.scala l34
    end else begin
      if((addr == 64'h0000000002004000)) begin
        rdata = mtimecmp; // @ LSU.scala l36
      end else begin
        rdata = 64'h0; // @ LSU.scala l38
      end
    end
  end

  assign timer_int = (mtimecmp <= mtime); // @ LSU.scala l41
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      mtime <= 64'h0; // @ Data.scala l400
      mtimecmp <= 64'hffffffffffffffff; // @ Data.scala l400
    end else begin
      if((wen && cen)) begin
        case(addr)
          64'h000000000200bff8 : begin
            mtime <= wdata; // @ LSU.scala l23
          end
          64'h0000000002004000 : begin
            mtimecmp <= wdata; // @ LSU.scala l26
          end
          default : begin
          end
        endcase
      end else begin
        mtime <= tmp_mtime; // @ LSU.scala l30
      end
    end
  end


endmodule
