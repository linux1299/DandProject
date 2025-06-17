
`timescale 1ns / 1ps
// PC
`define PC_START        64'h8000_0000

// priv mode
`define RISCV_PRIV_MODE_U   0
`define RISCV_PRIV_MODE_S   1
`define RISCV_PRIV_MODE_M   3



module SimTop(
    input         clock,
    input         reset,

    input  [63:0] io_logCtrl_log_begin,
    input  [63:0] io_logCtrl_log_end,
    input  [63:0] io_logCtrl_log_level,
    input         io_perfInfo_clean,
    input         io_perfInfo_dump,

    output        io_uart_out_valid,
    output [7:0]  io_uart_out_ch,
    output        io_uart_in_valid,
    input  [7:0]  io_uart_in_ch
);

parameter AddrWidth = 32;
parameter AxiAddrWidth = 32;
parameter DataWidth = 64;
parameter AxiProt = 3'b000;
parameter AxiRegion = 4'b0000;
parameter AxiCache = 4'b0000;
parameter AxiQos = 4'b0000;

wire              io_interrupt;
wire              io_master_awready;
wire              io_master_awvalid;
wire     [31:0]   io_master_awaddr;
wire     [3:0]    io_master_awid;
wire     [7:0]    io_master_awlen;
wire     [2:0]    io_master_awsize;
wire     [1:0]    io_master_awburst;
wire              io_master_wready;
wire              io_master_wvalid;
wire     [63:0]   io_master_wdata;
wire     [7:0]    io_master_wstrb;
wire              io_master_wlast;
wire              io_master_bready;
wire              io_master_bvalid;
wire     [1:0]    io_master_bresp;
wire     [3:0]    io_master_bid;
wire              io_master_arready;
wire              io_master_arvalid;
wire     [31:0]   io_master_araddr;
wire     [3:0]    io_master_arid;
wire     [7:0]    io_master_arlen;
wire     [2:0]    io_master_arsize;
wire     [1:0]    io_master_arburst;
wire              io_master_rready;
wire              io_master_rvalid;
wire     [1:0]    io_master_rresp;
wire     [63:0]   io_master_rdata;
wire              io_master_rlast;
wire     [3:0]    io_master_rid;
wire              io_slave_awready;
wire              io_slave_awvalid;
wire     [31:0]   io_slave_awaddr;
wire     [3:0]    io_slave_awid;
wire     [7:0]    io_slave_awlen;
wire     [2:0]    io_slave_awsize;
wire     [1:0]    io_slave_awburst;
wire              io_slave_wready;
wire              io_slave_wvalid;
wire     [63:0]   io_slave_wdata;
wire     [7:0]    io_slave_wstrb;
wire              io_slave_wlast;
wire              io_slave_bready;
wire              io_slave_bvalid;
wire     [1:0]    io_slave_bresp;
wire     [3:0]    io_slave_bid;
wire              io_slave_arready;
wire              io_slave_arvalid;
wire     [31:0]   io_slave_araddr;
wire     [3:0]    io_slave_arid;
wire     [7:0]    io_slave_arlen;
wire     [2:0]    io_slave_arsize;
wire     [1:0]    io_slave_arburst;
wire              io_slave_rready;
wire              io_slave_rvalid;
wire     [1:0]    io_slave_rresp;
wire     [63:0]   io_slave_rdata;
wire              io_slave_rlast;
wire     [3:0]    io_slave_rid;

wire                   ram_mem_read;
wire [AddrWidth-1:0]   ram_mem_raddr;
wire [AddrWidth-1:0]   ram_mem_waddr;
wire [DataWidth-1:0]   ram_mem_wdata;
wire [DataWidth/8-1:0] ram_mem_strb;
wire                   ram_mem_write;
wire                   ram_mem_rvalid;
wire [DataWidth-1:0]   ram_mem_rdata;
wire                   ram_mem_rsp_valid;
wire [DataWidth-1:0]   ram_mem_rsp_rdata;

wire [27:0] ram_addr = ram_mem_read ? ram_mem_raddr[27:0] : ram_mem_waddr[27:0];
wire [63:0] ram_wmask= {{8{ram_mem_strb[7]}}, 
                        {8{ram_mem_strb[6]}}, 
                        {8{ram_mem_strb[5]}}, 
                        {8{ram_mem_strb[4]}}, 
                        {8{ram_mem_strb[3]}}, 
                        {8{ram_mem_strb[2]}}, 
                        {8{ram_mem_strb[1]}}, 
                        {8{ram_mem_strb[0]}}};

// ------------- cpu core -----------------
assign io_interrupt = 1'b0;

ysyx_210238 u_ysyx_210238(
    .clock             ( clock             ),
    .reset             ( reset             ),
    .io_interrupt      ( io_interrupt      ),
    .io_master_awready ( io_master_awready ),
    .io_master_awvalid ( io_master_awvalid ),
    .io_master_awaddr  ( io_master_awaddr  ),
    .io_master_awid    ( io_master_awid    ),
    .io_master_awlen   ( io_master_awlen   ),
    .io_master_awsize  ( io_master_awsize  ),
    .io_master_awburst ( io_master_awburst ),
    .io_master_wready  ( io_master_wready  ),
    .io_master_wvalid  ( io_master_wvalid  ),
    .io_master_wdata   ( io_master_wdata   ),
    .io_master_wstrb   ( io_master_wstrb   ),
    .io_master_wlast   ( io_master_wlast   ),
    .io_master_bready  ( io_master_bready  ),
    .io_master_bvalid  ( io_master_bvalid  ),
    .io_master_bresp   ( io_master_bresp   ),
    .io_master_bid     ( io_master_bid     ),
    .io_master_arready ( io_master_arready ),
    .io_master_arvalid ( io_master_arvalid ),
    .io_master_araddr  ( io_master_araddr  ),
    .io_master_arid    ( io_master_arid    ),
    .io_master_arlen   ( io_master_arlen   ),
    .io_master_arsize  ( io_master_arsize  ),
    .io_master_arburst ( io_master_arburst ),
    .io_master_rready  ( io_master_rready  ),
    .io_master_rvalid  ( io_master_rvalid  ),
    .io_master_rresp   ( io_master_rresp   ),
    .io_master_rdata   ( io_master_rdata   ),
    .io_master_rlast   ( io_master_rlast   ),
    .io_master_rid     ( io_master_rid     ),
    .io_slave_awready  ( io_slave_awready  ),
    .io_slave_awvalid  ( io_slave_awvalid  ),
    .io_slave_awaddr   ( io_slave_awaddr   ),
    .io_slave_awid     ( io_slave_awid     ),
    .io_slave_awlen    ( io_slave_awlen    ),
    .io_slave_awsize   ( io_slave_awsize   ),
    .io_slave_awburst  ( io_slave_awburst  ),
    .io_slave_wready   ( io_slave_wready   ),
    .io_slave_wvalid   ( io_slave_wvalid   ),
    .io_slave_wdata    ( io_slave_wdata    ),
    .io_slave_wstrb    ( io_slave_wstrb    ),
    .io_slave_wlast    ( io_slave_wlast    ),
    .io_slave_bready   ( io_slave_bready   ),
    .io_slave_bvalid   ( io_slave_bvalid   ),
    .io_slave_bresp    ( io_slave_bresp    ),
    .io_slave_bid      ( io_slave_bid      ),
    .io_slave_arready  ( io_slave_arready  ),
    .io_slave_arvalid  ( io_slave_arvalid  ),
    .io_slave_araddr   ( io_slave_araddr   ),
    .io_slave_arid     ( io_slave_arid     ),
    .io_slave_arlen    ( io_slave_arlen    ),
    .io_slave_arsize   ( io_slave_arsize   ),
    .io_slave_arburst  ( io_slave_arburst  ),
    .io_slave_rready   ( io_slave_rready   ),
    .io_slave_rvalid   ( io_slave_rvalid   ),
    .io_slave_rresp    ( io_slave_rresp    ),
    .io_slave_rdata    ( io_slave_rdata    ),
    .io_slave_rlast    ( io_slave_rlast    ),
    .io_slave_rid      ( io_slave_rid      )
);


// ----------------- ram ------------------
axi_slave_mem#(
    .AXI_DATA_WIDTH    ( DataWidth ),
    .AXI_ADDR_WIDTH    ( AxiAddrWidth ),
    .AXI_ID_WIDTH      ( 4 ),
    .AXI_STRB_WIDTH    ( DataWidth/8 ),
    .AXI_USER_WIDTH    ( 1 ),
    .WRITE_BUFFER_SIZE ( 2*1024*1024*1024 ),
    .READ_BUFFER_SIZE  ( 2*1024*1024*1024 )
)u_axi_slave_mem(
    .clk               ( clock               ),
    .rst_n             ( !reset             ),
    .aw_addr           ( io_master_awaddr    ),
    .aw_prot           ( AxiProt    ),
    .aw_region         ( AxiRegion    ),
    .aw_len            ( io_master_awlen    ),
    .aw_size           ( io_master_awsize    ),
    .aw_burst          ( io_master_awburst    ),
    .aw_lock           ( 1'b0    ),
    .aw_cache          ( AxiCache    ),
    .aw_qos            ( AxiQos    ),
    .aw_id             ( io_master_awid    ),
    .aw_user           ( 1'b0    ),
    .aw_ready          ( io_master_awready    ),
    .aw_valid          ( io_master_awvalid  ),
    .ar_addr           ( io_master_araddr    ),
    .ar_prot           ( AxiProt    ),
    .ar_region         ( AxiRegion    ),
    .ar_len            ( io_master_arlen    ),
    .ar_size           ( io_master_arsize    ),
    .ar_burst          ( io_master_arburst    ),
    .ar_lock           ( 1'b0    ),
    .ar_cache          ( AxiCache    ),
    .ar_qos            ( AxiQos    ),
    .ar_id             ( io_master_arid    ),
    .ar_user           ( 1'b0    ),
    .ar_ready          ( io_master_arready    ),
    .ar_valid          ( io_master_arvalid    ),
    .w_valid           ( io_master_wvalid    ),
    .w_data            ( io_master_wdata    ),
    .w_strb            ( io_master_wstrb    ),
    .w_user            ( 1'b0    ),
    .w_last            ( io_master_wlast    ),
    .w_ready           ( io_master_wready    ),
    .r_data            ( io_master_rdata    ),
    .r_resp            ( io_master_rresp    ),
    .r_last            ( io_master_rlast    ),
    .r_id              ( io_master_rid    ),
    .r_user            (     ),
    .r_ready           ( io_master_rready    ),
    .r_valid           ( io_master_rvalid    ),
    .b_resp            ( io_master_bresp    ),
    .b_id              ( io_master_bid    ),
    .b_user            (     ),
    .b_ready           ( io_master_bready    ),
    .b_valid           ( io_master_bvalid    ),
    .axi_mem_wraddr    ( ram_mem_waddr    ),
    .axi_mem_rdaddr    ( ram_mem_raddr    ),
    .axi_mem_rden      ( ram_mem_read  ),
    .axi_mem_wren      ( ram_mem_write    ),
    .axi_mem_wmask     ( ram_mem_strb    ),
    .axi_mem_wdata     ( ram_mem_wdata    ),
    .axi_mem_rdata     ( ram_mem_rsp_rdata)
);

RAMHelper RAMHelper_data(
    .clk   ( clock   ),
    .en    ( ram_mem_read | ram_mem_write),
    .rIdx  ( ram_mem_raddr[27:0] ),
    .rdata ( ram_mem_rsp_rdata ),
    .wIdx  ( ram_mem_waddr[27:0] ),
    .wdata ( ram_mem_wdata),
    .wmask ( ram_wmask),
    .wen   ( ram_mem_write)
);



// ------------ Difftest ----------------
reg        cmt_wen;
reg [7:0]  cmt_wdest;
reg [63:0] cmt_wdata;
reg [63:0] cmt_pc;
reg [31:0] cmt_inst;
reg        cmt_valid;
reg        trap;
reg [7:0]  trap_code;
reg [63:0] cycleCnt;
reg [63:0] instrCnt;
reg [63:0] regs_diff [0:31];

reg [63:0] writeback_pc;
reg        writeback_wen;
reg [31:0] writeback_inst;
reg        writeback_valid;
wire[63:0] regs_o [0:31];

assign regs_o[0]  = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_0;
assign regs_o[1]  = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_1;
assign regs_o[2]  = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_2;
assign regs_o[3]  = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_3;
assign regs_o[4]  = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_4;
assign regs_o[5]  = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_5;
assign regs_o[6]  = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_6;
assign regs_o[7]  = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_7;
assign regs_o[8]  = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_8;
assign regs_o[9]  = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_9;
assign regs_o[10] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_10;
assign regs_o[11] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_11;
assign regs_o[12] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_12;
assign regs_o[13] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_13;
assign regs_o[14] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_14;
assign regs_o[15] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_15;
assign regs_o[16] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_16;
assign regs_o[17] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_17;
assign regs_o[18] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_18;
assign regs_o[19] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_19;
assign regs_o[20] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_20;
assign regs_o[21] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_21;
assign regs_o[22] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_22;
assign regs_o[23] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_23;
assign regs_o[24] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_24;
assign regs_o[25] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_25;
assign regs_o[26] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_26;
assign regs_o[27] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_27;
assign regs_o[28] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_28;
assign regs_o[29] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_29;
assign regs_o[30] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_30;
assign regs_o[31] = u_ysyx_210238.core_cpu.regFileModule_1.reg_file_31;

reg branch_ebreak_ecall_mret;
always @(posedge clock) begin
    if (reset) begin
        branch_ebreak_ecall_mret <= 1'b0;
    end
    else begin
        branch_ebreak_ecall_mret <= 1'b0;
    end
end

always@(*) begin
  writeback_wen = u_ysyx_210238.core_cpu.writeback_RD_WEN & u_ysyx_210238.core_cpu.writeback_arbitration_isFiring;
  writeback_pc = u_ysyx_210238.core_cpu.writeback_PC[63:0];
  writeback_inst = u_ysyx_210238.core_cpu.writeback_INSTRUCTION[31:0];
end

always @(*) begin
  if (u_ysyx_210238.core_cpu.writeback_arbitration_isFiring)
    writeback_valid = 1;
  else if (branch_ebreak_ecall_mret)
    writeback_valid = 1;
  else
    writeback_valid = 0;
end

always @(posedge clock) begin
  if (reset) begin
    { cmt_wen, 
      cmt_wdest, 
      cmt_wdata, 
      cmt_pc, 
      cmt_inst, 
      cmt_valid, 
      trap, 
      trap_code, 
      cycleCnt, 
      instrCnt} <= 0;
  end
  else if (~trap) begin
    cmt_wen   <= writeback_wen;
    cmt_wdest <= {3'd0, u_ysyx_210238.core_cpu.writeback_RD_ADDR};
    cmt_wdata <= u_ysyx_210238.core_cpu.writeback_RD;
    cmt_pc    <= writeback_pc;
    cmt_inst  <= writeback_inst;
    cmt_valid <= writeback_valid;
    regs_diff <= regs_o;
    trap      <= writeback_inst[6:0] == 7'h6b && writeback_valid; // add valid
    trap_code <= u_ysyx_210238.core_cpu.regFileModule_1.reg_file_10[7:0];
    cycleCnt  <= cycleCnt + 1;
    instrCnt  <= instrCnt + writeback_valid;
  end
end

always@(posedge clock) begin
  if (cmt_valid) begin
    $display("pc:%h, inst:%h, cmt_wen:%b rd_addr:%h, rd_value:%h", cmt_pc, cmt_inst, cmt_wen, cmt_wdest, cmt_wdata);
  end
end

reg skip;
always @(posedge clock) begin
  if (reset)
    skip <= 0;
  else if (writeback_inst==32'h7b)
    skip <= 1;
  else
    skip <= 0; 
end

DifftestInstrCommit DifftestInstrCommit(
  .clock              (clock),
  .coreid             (0),
  .index              (0),
  .valid              (cmt_valid),
  .pc                 (cmt_pc),
  .instr              (cmt_inst),
  .skip               (skip),
  .isRVC              (0),
  .scFailed           (0),
  .wen                (cmt_wen),
  .wdest              (cmt_wdest),
  .wdata              (cmt_wdata)
);

DifftestArchIntRegState DifftestArchIntRegState (
  .clock              (clock),
  .coreid             (0),
  .gpr_0              (regs_o[0]),
  .gpr_1              (regs_o[1]),
  .gpr_2              (regs_o[2]),
  .gpr_3              (regs_o[3]),
  .gpr_4              (regs_o[4]),
  .gpr_5              (regs_o[5]),
  .gpr_6              (regs_o[6]),
  .gpr_7              (regs_o[7]),
  .gpr_8              (regs_o[8]),
  .gpr_9              (regs_o[9]),
  .gpr_10             (regs_o[10]),
  .gpr_11             (regs_o[11]),
  .gpr_12             (regs_o[12]),
  .gpr_13             (regs_o[13]),
  .gpr_14             (regs_o[14]),
  .gpr_15             (regs_o[15]),
  .gpr_16             (regs_o[16]),
  .gpr_17             (regs_o[17]),
  .gpr_18             (regs_o[18]),
  .gpr_19             (regs_o[19]),
  .gpr_20             (regs_o[20]),
  .gpr_21             (regs_o[21]),
  .gpr_22             (regs_o[22]),
  .gpr_23             (regs_o[23]),
  .gpr_24             (regs_o[24]),
  .gpr_25             (regs_o[25]),
  .gpr_26             (regs_o[26]),
  .gpr_27             (regs_o[27]),
  .gpr_28             (regs_o[28]),
  .gpr_29             (regs_o[29]),
  .gpr_30             (regs_o[30]),
  .gpr_31             (regs_o[31])
);

DifftestTrapEvent DifftestTrapEvent(
  .clock              (clock),
  .coreid             (0),
  .valid              (trap),
  .code               (trap_code),
  .pc                 (cmt_pc),
  .cycleCnt           (cycleCnt),
  .instrCnt           (instrCnt)
);

DifftestCSRState DifftestCSRState(
  .clock              (clock),
  .coreid             (0),
  .priviledgeMode     (`RISCV_PRIV_MODE_M),
  .mstatus            (u_ysyx_210238.core_cpu.csrRegfile_1.mstatus),
  .sstatus            (0),
  .mepc               (u_ysyx_210238.core_cpu.csrRegfile_1.mepc),
  .sepc               (0),
  .mtval              (0),
  .stval              (0),
  .mtvec              (u_ysyx_210238.core_cpu.csrRegfile_1.mtvec),
  .stvec              (0),
  .mcause             (u_ysyx_210238.core_cpu.csrRegfile_1.mcause),
  .scause             (0),
  .satp               (0),
  .mip                (u_ysyx_210238.core_cpu.csrRegfile_1.mip),
  .mie                (u_ysyx_210238.core_cpu.csrRegfile_1.mie),
  .mscratch           (u_ysyx_210238.core_cpu.csrRegfile_1.mscratch),
  .sscratch           (0),
  .mideleg            (0),
  .medeleg            (0)
);

DifftestArchFpRegState DifftestArchFpRegState(
  .clock              (clock),
  .coreid             (0),
  .fpr_0              (0),
  .fpr_1              (0),
  .fpr_2              (0),
  .fpr_3              (0),
  .fpr_4              (0),
  .fpr_5              (0),
  .fpr_6              (0),
  .fpr_7              (0),
  .fpr_8              (0),
  .fpr_9              (0),
  .fpr_10             (0),
  .fpr_11             (0),
  .fpr_12             (0),
  .fpr_13             (0),
  .fpr_14             (0),
  .fpr_15             (0),
  .fpr_16             (0),
  .fpr_17             (0),
  .fpr_18             (0),
  .fpr_19             (0),
  .fpr_20             (0),
  .fpr_21             (0),
  .fpr_22             (0),
  .fpr_23             (0),
  .fpr_24             (0),
  .fpr_25             (0),
  .fpr_26             (0),
  .fpr_27             (0),
  .fpr_28             (0),
  .fpr_29             (0),
  .fpr_30             (0),
  .fpr_31             (0)
);

endmodule