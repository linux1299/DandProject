
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

wire          icache_ar_valid           ; 
wire          icache_ar_ready           ; 
wire [63:0]   icache_ar_payload_addr    ; 
wire [3:0]    icache_ar_payload_id      ; 
wire [7:0]    icache_ar_payload_len     ; 
wire [2:0]    icache_ar_payload_size    ; 
wire [1:0]    icache_ar_payload_burst   ; 
wire          icache_r_valid            ; 
wire          icache_r_ready            ; 
wire [63 :0]  icache_r_payload_data     ; 
wire [3:0]    icache_r_payload_id       ; 
wire [1:0]    icache_r_payload_resp     ; 
wire          icache_r_payload_last     ; 
wire          dcache_ar_valid           ; 
wire          dcache_ar_ready           ; 
wire [63:0]   dcache_ar_payload_addr    ; 
wire [3:0]    dcache_ar_payload_id      ; 
wire [7:0]    dcache_ar_payload_len     ; 
wire [2:0]    dcache_ar_payload_size    ; 
wire [1:0]    dcache_ar_payload_burst   ; 
wire          dcache_r_valid            ; 
wire          dcache_r_ready            ; 
wire [63 :0]  dcache_r_payload_data     ; 
wire [3:0]    dcache_r_payload_id       ; 
wire [1:0]    dcache_r_payload_resp     ; 
wire          dcache_r_payload_last     ; 
wire          dcache_aw_valid           ; 
wire          dcache_aw_ready           ; 
wire [63:0]   dcache_aw_payload_addr    ; 
wire [3:0]    dcache_aw_payload_id      ; 
wire [7:0]    dcache_aw_payload_len     ; 
wire [2:0]    dcache_aw_payload_size    ; 
wire [1:0]    dcache_aw_payload_burst   ; 
wire          dcache_w_valid            ; 
wire          dcache_w_ready            ; 
wire [63 :0]  dcache_w_payload_data     ; 
wire [31:0]   dcache_w_payload_strb     ; 
wire          dcache_w_payload_last     ; 
wire          dcache_b_valid            ; 
wire          dcache_b_ready            ; 
wire [3:0]    dcache_b_payload_id       ; 
wire [1:0]    dcache_b_payload_resp     ; 

wire                   ram_i_mem_read;
wire [AddrWidth-1:0]   ram_i_mem_raddr;
wire [AddrWidth-1:0]   ram_i_mem_waddr;
wire [DataWidth-1:0]   ram_i_mem_wdata;
wire [DataWidth/8-1:0] ram_i_mem_strb;
wire                   ram_i_mem_write;
wire                   ram_i_mem_rvalid;
wire [DataWidth-1:0]   ram_i_mem_rdata;
wire                   ram_i_mem_rsp_valid;
wire [DataWidth-1:0]   ram_i_mem_rsp_rdata;

wire                   ram_d_mem_read;
wire [AddrWidth-1:0]   ram_d_mem_raddr;
wire [AddrWidth-1:0]   ram_d_mem_waddr;
wire [DataWidth-1:0]   ram_d_mem_wdata;
wire [DataWidth/8-1:0] ram_d_mem_strb;
wire                   ram_d_mem_write;
wire                   ram_d_mem_rvalid;
wire [DataWidth-1:0]   ram_d_mem_rdata;
wire                   ram_d_mem_rsp_valid;
wire [DataWidth-1:0]   ram_d_mem_rsp_rdata;

wire [27:0] iram_addr = ram_i_mem_raddr[27:0];
wire [27:0] dram_addr = ram_d_mem_read ? ram_d_mem_raddr[27:0] : ram_d_mem_waddr[27:0];
wire [63:0] dram_wmask={{8{ram_d_mem_strb[7]}}, 
                        {8{ram_d_mem_strb[6]}}, 
                        {8{ram_d_mem_strb[5]}}, 
                        {8{ram_d_mem_strb[4]}}, 
                        {8{ram_d_mem_strb[3]}}, 
                        {8{ram_d_mem_strb[2]}}, 
                        {8{ram_d_mem_strb[1]}}, 
                        {8{ram_d_mem_strb[0]}}};

// ------------- cpu core -----------------
DandRiscvSimple u_DandRiscvSimple(
    .icache_ar_valid         ( icache_ar_valid                ),
    .icache_ar_ready         ( icache_ar_ready                ),
    .icache_ar_payload_addr  ( icache_ar_payload_addr         ),
    .icache_ar_payload_id    ( icache_ar_payload_id           ),
    .icache_ar_payload_len   ( icache_ar_payload_len          ),
    .icache_ar_payload_size  ( icache_ar_payload_size         ),
    .icache_ar_payload_burst ( icache_ar_payload_burst        ),
    .icache_r_valid          ( icache_r_valid                 ),
    .icache_r_ready          ( icache_r_ready                 ),
    .icache_r_payload_data   ( icache_r_payload_data          ),
    .icache_r_payload_id     ( icache_r_payload_id            ),
    .icache_r_payload_resp   ( icache_r_payload_resp          ),
    .icache_r_payload_last   ( icache_r_payload_last          ),
    .dcache_ar_valid         ( dcache_ar_valid                ),
    .dcache_ar_ready         ( dcache_ar_ready                ),
    .dcache_ar_payload_addr  ( dcache_ar_payload_addr         ),
    .dcache_ar_payload_id    ( dcache_ar_payload_id           ),
    .dcache_ar_payload_len   ( dcache_ar_payload_len          ),
    .dcache_ar_payload_size  ( dcache_ar_payload_size         ),
    .dcache_ar_payload_burst ( dcache_ar_payload_burst        ),
    .dcache_r_valid          ( dcache_r_valid                 ),
    .dcache_r_ready          ( dcache_r_ready                 ),
    .dcache_r_payload_data   ( dcache_r_payload_data          ),
    .dcache_r_payload_id     ( dcache_r_payload_id            ),
    .dcache_r_payload_resp   ( dcache_r_payload_resp          ),
    .dcache_r_payload_last   ( dcache_r_payload_last          ),
    .dcache_aw_valid         ( dcache_aw_valid                ),
    .dcache_aw_ready         ( dcache_aw_ready                ),
    .dcache_aw_payload_addr  ( dcache_aw_payload_addr         ),
    .dcache_aw_payload_id    ( dcache_aw_payload_id           ),
    .dcache_aw_payload_len   ( dcache_aw_payload_len          ),
    .dcache_aw_payload_size  ( dcache_aw_payload_size         ),
    .dcache_aw_payload_burst ( dcache_aw_payload_burst        ),
    .dcache_w_valid          ( dcache_w_valid                 ),
    .dcache_w_ready          ( dcache_w_ready                 ),
    .dcache_w_payload_data   ( dcache_w_payload_data          ),
    .dcache_w_payload_strb   ( dcache_w_payload_strb          ),
    .dcache_w_payload_last   ( dcache_w_payload_last          ),
    .dcache_b_valid          ( dcache_b_valid                 ),
    .dcache_b_ready          ( dcache_b_ready                 ),
    .dcache_b_payload_id     ( dcache_b_payload_id            ),
    .dcache_b_payload_resp   ( dcache_b_payload_resp          ),
    .clk                     ( clock                          ),
    .reset                   ( reset                          )
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
)u_axi_slave_mem_i(
    .clk               ( clock               ),
    .rst_n             ( !reset             ),
    .aw_addr           ( 'b0    ),
    .aw_prot           ( AxiProt    ),
    .aw_region         ( AxiRegion    ),
    .aw_len            ( 'b0  ),
    .aw_size           ( 'b0   ),
    .aw_burst          ( 'b0    ),
    .aw_lock           ( 1'b0    ),
    .aw_cache          ( AxiCache    ),
    .aw_qos            ( AxiQos    ),
    .aw_id             ( 'b0    ),
    .aw_user           ( 1'b0    ),
    .aw_ready          (      ),
    .aw_valid          ( 'b0    ),
    .ar_addr           ( icache_ar_payload_addr    ),
    .ar_prot           ( AxiProt    ),
    .ar_region         ( AxiRegion    ),
    .ar_len            ( icache_ar_payload_len    ),
    .ar_size           ( icache_ar_payload_size    ),
    .ar_burst          ( icache_ar_payload_burst    ),
    .ar_lock           ( 1'b0    ),
    .ar_cache          ( AxiCache    ),
    .ar_qos            ( AxiQos    ),
    .ar_id             ( icache_ar_payload_id    ),
    .ar_user           ( 1'b0    ),
    .ar_ready          ( icache_ar_ready    ),
    .ar_valid          ( icache_ar_valid    ),
    .w_valid           ( 'b0    ),
    .w_data            ( 'b0    ),
    .w_strb            ( 'b0    ),
    .w_user            ( 1'b0    ),
    .w_last            ( 'b0    ),
    .w_ready           (     ),
    .r_data            ( icache_r_payload_data    ),
    .r_resp            ( icache_r_payload_resp    ),
    .r_last            ( icache_r_payload_last    ),
    .r_id              ( icache_r_payload_id    ),
    .r_user            (     ),
    .r_ready           ( icache_r_ready    ),
    .r_valid           ( icache_r_valid    ),
    .b_resp            (     ),
    .b_id              (     ),
    .b_user            (     ),
    .b_ready           ( 'b0    ),
    .b_valid           (     ),
    .axi_mem_wraddr    ( ram_i_mem_waddr    ),
    .axi_mem_rdaddr    ( ram_i_mem_raddr    ),
    .axi_mem_rden      ( ram_i_mem_read  ),
    .axi_mem_wren      ( ram_i_mem_write    ),
    .axi_mem_wmask     ( ram_i_mem_strb    ),
    .axi_mem_wdata     ( ram_i_mem_wdata    ),
    .axi_mem_rdata     ( ram_i_mem_rsp_rdata )
);

axi_slave_mem#(
    .AXI_DATA_WIDTH    ( DataWidth ),
    .AXI_ADDR_WIDTH    ( AxiAddrWidth ),
    .AXI_ID_WIDTH      ( 4 ),
    .AXI_STRB_WIDTH    ( DataWidth/8 ),
    .AXI_USER_WIDTH    ( 1 ),
    .WRITE_BUFFER_SIZE ( 2*1024*1024*1024 ),
    .READ_BUFFER_SIZE  ( 2*1024*1024*1024 )
)u_axi_slave_mem_d(
    .clk               ( clock               ),
    .rst_n             ( !reset             ),
    .aw_addr           ( dcache_aw_payload_addr    ),
    .aw_prot           ( AxiProt    ),
    .aw_region         ( AxiRegion    ),
    .aw_len            ( dcache_aw_payload_len    ),
    .aw_size           ( dcache_aw_payload_size    ),
    .aw_burst          ( dcache_aw_payload_burst    ),
    .aw_lock           ( 1'b0    ),
    .aw_cache          ( AxiCache    ),
    .aw_qos            ( AxiQos    ),
    .aw_id             ( dcache_aw_payload_id    ),
    .aw_user           ( 1'b0    ),
    .aw_ready          ( dcache_aw_ready    ),
    .aw_valid          ( dcache_aw_valid    ),
    .ar_addr           ( dcache_ar_payload_addr    ),
    .ar_prot           ( AxiProt    ),
    .ar_region         ( AxiRegion    ),
    .ar_len            ( dcache_ar_payload_len    ),
    .ar_size           ( dcache_ar_payload_size    ),
    .ar_burst          ( dcache_ar_payload_burst    ),
    .ar_lock           ( 1'b0    ),
    .ar_cache          ( AxiCache    ),
    .ar_qos            ( AxiQos    ),
    .ar_id             ( dcache_ar_payload_id    ),
    .ar_user           ( 1'b0    ),
    .ar_ready          ( dcache_ar_ready    ),
    .ar_valid          ( dcache_ar_valid    ),
    .w_valid           ( dcache_w_valid    ),
    .w_data            ( dcache_w_payload_data    ),
    .w_strb            ( dcache_w_payload_strb    ),
    .w_user            ( 1'b0    ),
    .w_last            ( dcache_w_payload_last    ),
    .w_ready           ( dcache_w_ready    ),
    .r_data            ( dcache_r_payload_data    ),
    .r_resp            ( dcache_r_payload_resp    ),
    .r_last            ( dcache_r_payload_last    ),
    .r_id              ( dcache_r_payload_id    ),
    .r_user            (     ),
    .r_ready           ( dcache_r_ready    ),
    .r_valid           ( dcache_r_valid    ),
    .b_resp            ( dcache_b_payload_resp    ),
    .b_id              ( dcache_b_payload_id    ),
    .b_user            (     ),
    .b_ready           ( dcache_b_ready    ),
    .b_valid           ( dcache_b_valid    ),
    .axi_mem_wraddr    ( ram_d_mem_waddr    ),
    .axi_mem_rdaddr    ( ram_d_mem_raddr    ),
    .axi_mem_rden      ( ram_d_mem_read  ),
    .axi_mem_wren      ( ram_d_mem_write    ),
    .axi_mem_wmask     ( ram_d_mem_strb    ),
    .axi_mem_wdata     ( ram_d_mem_wdata    ),
    .axi_mem_rdata     ( ram_d_mem_rsp_rdata)
);

RAMHelper RAMHelper_instruction(
    .clk   ( clock   ),
    .en    ( ram_i_mem_read    ),
    .rIdx  ( ram_i_mem_raddr ),
    .rdata ( ram_i_mem_rsp_rdata ),
    .wIdx  ( ram_i_mem_raddr ),
    .wdata ( 63'b0     ),
    .wmask ( 8'b0      ),
    .wen   ( 1'b0      )
);



RAMHelper RAMHelper_data(
    .clk   ( clock   ),
    .en    ( ram_d_mem_read || ram_d_mem_write ),
    .rIdx  ( dram_addr ),
    .rdata ( ram_d_mem_rsp_rdata ),
    .wIdx  ( dram_addr ),
    .wdata ( ram_d_mem_wdata),
    .wmask ( dram_wmask),
    .wen   ( ram_d_mem_write)
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

assign regs_o[0] = u_DandRiscvSimple.regFileModule_1.reg_file_0;
assign regs_o[1] = u_DandRiscvSimple.regFileModule_1.reg_file_1;
assign regs_o[2] = u_DandRiscvSimple.regFileModule_1.reg_file_2;
assign regs_o[3] = u_DandRiscvSimple.regFileModule_1.reg_file_3;
assign regs_o[4] = u_DandRiscvSimple.regFileModule_1.reg_file_4;
assign regs_o[5] = u_DandRiscvSimple.regFileModule_1.reg_file_5;
assign regs_o[6] = u_DandRiscvSimple.regFileModule_1.reg_file_6;
assign regs_o[7] = u_DandRiscvSimple.regFileModule_1.reg_file_7;
assign regs_o[8] = u_DandRiscvSimple.regFileModule_1.reg_file_8;
assign regs_o[9] = u_DandRiscvSimple.regFileModule_1.reg_file_9;
assign regs_o[10] = u_DandRiscvSimple.regFileModule_1.reg_file_10;
assign regs_o[11] = u_DandRiscvSimple.regFileModule_1.reg_file_11;
assign regs_o[12] = u_DandRiscvSimple.regFileModule_1.reg_file_12;
assign regs_o[13] = u_DandRiscvSimple.regFileModule_1.reg_file_13;
assign regs_o[14] = u_DandRiscvSimple.regFileModule_1.reg_file_14;
assign regs_o[15] = u_DandRiscvSimple.regFileModule_1.reg_file_15;
assign regs_o[16] = u_DandRiscvSimple.regFileModule_1.reg_file_16;
assign regs_o[17] = u_DandRiscvSimple.regFileModule_1.reg_file_17;
assign regs_o[18] = u_DandRiscvSimple.regFileModule_1.reg_file_18;
assign regs_o[19] = u_DandRiscvSimple.regFileModule_1.reg_file_19;
assign regs_o[20] = u_DandRiscvSimple.regFileModule_1.reg_file_20;
assign regs_o[21] = u_DandRiscvSimple.regFileModule_1.reg_file_21;
assign regs_o[22] = u_DandRiscvSimple.regFileModule_1.reg_file_22;
assign regs_o[23] = u_DandRiscvSimple.regFileModule_1.reg_file_23;
assign regs_o[24] = u_DandRiscvSimple.regFileModule_1.reg_file_24;
assign regs_o[25] = u_DandRiscvSimple.regFileModule_1.reg_file_25;
assign regs_o[26] = u_DandRiscvSimple.regFileModule_1.reg_file_26;
assign regs_o[27] = u_DandRiscvSimple.regFileModule_1.reg_file_27;
assign regs_o[28] = u_DandRiscvSimple.regFileModule_1.reg_file_28;
assign regs_o[29] = u_DandRiscvSimple.regFileModule_1.reg_file_29;
assign regs_o[30] = u_DandRiscvSimple.regFileModule_1.reg_file_30;
assign regs_o[31] = u_DandRiscvSimple.regFileModule_1.reg_file_31;

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
  writeback_wen = u_DandRiscvSimple.writeback_RD_WEN & u_DandRiscvSimple.writeback_arbitration_isFiring;
  writeback_pc = u_DandRiscvSimple.writeback_PC[63:0];
  writeback_inst = u_DandRiscvSimple.writeback_INSTRUCTION[31:0];
end

always @(*) begin
  if (u_DandRiscvSimple.writeback_arbitration_isFiring)
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
    cmt_wdest <= {3'd0, u_DandRiscvSimple.writeback_RD_ADDR};
    cmt_wdata <= u_DandRiscvSimple.writeback_RD;
    cmt_pc    <= writeback_pc;
    cmt_inst  <= writeback_inst;
    cmt_valid <= writeback_valid;
    regs_diff <= regs_o;
    trap      <= writeback_inst[6:0] == 7'h6b && writeback_valid; // add valid
    trap_code <= u_DandRiscvSimple.regFileModule_1.reg_file_10[7:0];
    cycleCnt  <= cycleCnt + 1;
    instrCnt  <= instrCnt + writeback_valid;
  end
end

always@(posedge clock) begin
  if (cmt_valid)
    $display("pc:%h, inst:%h, cmt_wen:%b rd_addr:%h, rd_value:%h, mcause:%h", cmt_pc, cmt_inst, cmt_wen, cmt_wdest, cmt_wdata, u_DandRiscvSimple.csrRegfile_1.mcause);

  // if(u_DandRiscvSimple.csrRegfile_1.cpu_ports_wen)
  //   $display("waddr:%h, wdata:%h", u_DandRiscvSimple.csrRegfile_1.cpu_ports_waddr, u_DandRiscvSimple.csrRegfile_1.cpu_ports_wdata);
    // $display("waddr:%h, wdata:%h, pc:%h", u_DandRiscvSimple.csrRegfile_1.cpu_ports_waddr, u_DandRiscvSimple.csrRegfile_1.cpu_ports_wdata, cmt_pc);
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
  .mstatus            (u_DandRiscvSimple.csrRegfile_1.mstatus),
  .sstatus            (0),
  .mepc               (u_DandRiscvSimple.csrRegfile_1.mepc),
  .sepc               (0),
  .mtval              (0),
  .stval              (0),
  .mtvec              (u_DandRiscvSimple.csrRegfile_1.mtvec),
  .stvec              (0),
  .mcause             (u_DandRiscvSimple.csrRegfile_1.mcause),
  .scause             (0),
  .satp               (0),
  .mip                (u_DandRiscvSimple.csrRegfile_1.mip),
  .mie                (u_DandRiscvSimple.csrRegfile_1.mie),
  .mscratch           (u_DandRiscvSimple.csrRegfile_1.mscratch),
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