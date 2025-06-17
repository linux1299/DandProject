/* verilator lint_off EOFNEWLINE */

`define INSTR_R      7'b0110011

// Imm
`define INSTR_I      7'b0010011

// S type
`define INSTR_S      7'b0100011

// B type
`define INSTR_B      7'b1100011

// Jump and Link
`define INSTR_JAL    7'b1101111
`define INSTR_JALR   7'b1100111

// Load
`define INSTR_L      7'b0000011

// Load upper immediate
`define INSTR_LUI    7'b0110111

// Add upper immediate to pc
`define INSTR_AUIPC  7'b0010111

// fence
`define INSTR_FENCE  7'b0001111

// System
`define INSTR_SYS    7'b1110011

// ALU word op
`define INSTR_WORD   7'b0111011
`define INSTR_WORDI  7'b0011011

// CSR addr
`define ADDR_MSTATUS  12'h300
`define ADDR_MIE      12'h304
`define ADDR_MTVEC    12'h305
`define ADDR_MEPC     12'h341
`define ADDR_MCAUSE   12'h342
`define ADDR_MTVAL    12'h343
`define ADDR_MIP      12'h344
`define ADDR_MCYCLE   12'hb00
`define ADDR_MHARTID  12'hf14

`define ADDR_MTIMECMP 64'h200_4000
`define ADDR_MTIME    64'h200_bff8

// AXI
`define RW_DATA_WIDTH   64
`define RW_ADDR_WIDTH   64
`define AXI_DATA_WIDTH  64
`define AXI_ADDR_WIDTH  32
`define AXI_ID_WIDTH    4
`define AXI_USER_WIDTH  1

// PC
`define PC_START        64'h30000_0000

// Burst types
`define AXI_BURST_TYPE_FIXED                                2'b00
`define AXI_BURST_TYPE_INCR                                 2'b01
`define AXI_BURST_TYPE_WRAP                                 2'b10

// Access permissions
`define AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
`define AXI_PROT_PRIVILEGED_ACCESS                          3'b001
`define AXI_PROT_SECURE_ACCESS                              3'b000
`define AXI_PROT_NON_SECURE_ACCESS                          3'b010
`define AXI_PROT_DATA_ACCESS                                3'b000
`define AXI_PROT_INSTRUCTION_ACCESS                         3'b100

// Memory types (AR)
`define AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
`define AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
`define AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

// Memory types (AW)
`define AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
`define AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
`define AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
`define AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
`define AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

`define AXI_SIZE_BYTES_1                                    3'b000
`define AXI_SIZE_BYTES_2                                    3'b001
`define AXI_SIZE_BYTES_4                                    3'b010
`define AXI_SIZE_BYTES_8                                    3'b011
`define AXI_SIZE_BYTES_16                                   3'b100
`define AXI_SIZE_BYTES_32                                   3'b101
`define AXI_SIZE_BYTES_64                                   3'b110
`define AXI_SIZE_BYTES_128                                  3'b111

`timescale 1ns/1ns

module ysyx_210238 (
    input         clock,
    input         reset,

    /* verilator lint_off UNUSED */
    input         io_interrupt,
    input         io_master_awready,
    output        io_master_awvalid,
    output [31:0] io_master_awaddr,
    output [3:0]  io_master_awid,
    output [7:0]  io_master_awlen,
    output [2:0]  io_master_awsize,
    output [1:0]  io_master_awburst,
    input         io_master_wready,
    output        io_master_wvalid,
    output [63:0] io_master_wdata,
    output [7:0]  io_master_wstrb,
    output        io_master_wlast,
    output        io_master_bready,
    input         io_master_bvalid,
    input  [1:0]  io_master_bresp,
    input  [3:0]  io_master_bid,
    input         io_master_arready,
    output        io_master_arvalid,
    output [31:0] io_master_araddr,
    output [3:0]  io_master_arid,
    output [7:0]  io_master_arlen,
    output [2:0]  io_master_arsize,
    output [1:0]  io_master_arburst,
    output        io_master_rready,
    input         io_master_rvalid,
    input  [1:0]  io_master_rresp,
    input  [63:0] io_master_rdata,
    input         io_master_rlast,
    input  [3:0]  io_master_rid,
    
    output        io_slave_awready,
    input         io_slave_awvalid,
    input  [31:0] io_slave_awaddr,
    input  [3:0]  io_slave_awid,
    input  [7:0]  io_slave_awlen,
    input  [2:0]  io_slave_awsize,
    input  [1:0]  io_slave_awburst,
    output        io_slave_wready,
    input         io_slave_wvalid,
    input  [63:0] io_slave_wdata,
    input  [7:0]  io_slave_wstrb,
    input         io_slave_wlast,
    input         io_slave_bready,
    output        io_slave_bvalid,
    output [1:0]  io_slave_bresp,
    output [3:0]  io_slave_bid,
    output        io_slave_arready,
    input         io_slave_arvalid,
    input  [31:0] io_slave_araddr,
    input  [3:0]  io_slave_arid,
    input  [7:0]  io_slave_arlen,
    input  [2:0]  io_slave_arsize,
    input  [1:0]  io_slave_arburst,
    input         io_slave_rready,
    output        io_slave_rvalid,
    output [1:0]  io_slave_rresp,
    output [63:0] io_slave_rdata,
    output        io_slave_rlast,
    output [3:0]  io_slave_rid
);  

wire clk = clock;
wire rst_n = ~reset;

assign io_slave_awready = 1'b0;
assign io_slave_wready  = 1'b0;
assign io_slave_bvalid  = 1'b0;
assign io_slave_bresp   = 2'b00;
assign io_slave_bid     = 4'b0000;
assign io_slave_arready = 1'b0;
assign io_slave_rvalid  = 1'b0;
assign io_slave_rresp   = 2'b00;
assign io_slave_rdata   = 64'd0;
assign io_slave_rlast   = 1'b0;
assign io_slave_rid     = 4'b0000;

//==============S 1===================
wire [63:0] o_ifu_addr;
wire        o_ifu_valid;
wire        i_ifu_ready;
wire [31:0] i_ifu_rdata;
wire [2:0]  o_ifu_size;

wire        i_ifu_branch_jump;
wire [63:0] i_ifu_next_pc;
wire [31:0] o_ifu_instr;
wire        o_ifu_instr_valid;
wire [63:0] o_ifu_pc;

wire [31:0] if_id_instr;
wire [63:0] if_id_instr_addr;

//=============S 2======================
wire [63:0] i_idu_rs1_rdata;
wire [63:0] i_idu_rs2_rdata;

wire [4:0]  o_idu_rs1_addr;
wire [4:0]  o_idu_rs2_addr;
wire [4:0]  o_idu_idu_rd_addr;

wire        o_idu_rs1_cen;
wire        o_idu_rs2_cen;

wire [63:0] o_idu_imm;
wire [63:0] o_idu_rs1_rdata;
wire [63:0] o_idu_rs2_rdata;
wire [63:0] o_idu_pc;

wire [12:0] o_idu_alu_info;
wire [8:0]  o_idu_csr_info;
wire        o_idu_op2_is_imm;
wire        o_idu_op_is_jal;

wire [10:0] o_idu_ls_info;
wire        o_idu_mem_read;
wire        o_idu_mem_write;

wire        o_idu_rd_wen;
wire [4:0]  o_idu_rd_addr;
wire        o_idu_op_is_branch;

wire        o_idu_csr_wen;
wire [63:0] o_idu_csr_rdata;
wire [11:0] o_idu_csr_raddr;
wire [11:0] o_idu_csr_waddr;

wire [4:0]  id_ex_rs1_addr;
wire [4:0]  id_ex_rs2_addr;
wire        id_ex_rs1_cen;
wire        id_ex_rs2_cen;

wire [63:0] id_ex_imm;
wire [63:0] id_ex_rs1_rdata;
wire [63:0] id_ex_rs2_rdata;
wire [63:0] id_ex_pc;

wire [12:0] id_ex_alu_info;
wire        id_ex_op2_is_imm;
wire        id_ex_op_is_jal;

wire [10:0] id_ex_ls_info;
wire        id_ex_mem_read;
wire        id_ex_mem_write;

wire        id_ex_rd_wen;
wire [4:0]  id_ex_rd_addr;

wire        id_ex_csr_wen;
wire [63:0] id_ex_csr_rdata;
wire [11:0] id_ex_csr_raddr;
wire [11:0] id_ex_csr_waddr;
wire [5:0]  id_ex_csr_info;

//===================S 3====================
wire [63:0] o_exu_rd_data;
wire [4:0]  o_exu_rd_addr;
wire        o_exu_rd_wen;
wire [63:0] o_exu_mem_addr;
wire [63:0] o_exu_mem_wdata;
wire [10:0] o_exu_ls_info;
wire        o_exu_mem_read;
wire        o_exu_mem_write;

wire        i_forward_ex_rs1;
wire        i_forward_ex_rs2;
wire        i_forward_ls_rs1;
wire        i_forward_ls_rs2;

wire [63:0] o_exu_csr_wdata;
wire        o_exu_csr_wen;
wire [11:0] o_exu_csr_waddr;

wire [63:0] o_cpu_csr_rdata;
wire [63:0] o_clint_csr_mtvec;
wire [63:0] o_clint_csr_mepc;
wire [63:0] o_clint_csr_mstatus;
wire        o_global_int_en;
wire        o_mtime_int_en;
wire        o_mtime_int_pend;

wire [63:0] ex_ls_rd_data;
wire [4:0]  ex_ls_rd_addr;
wire        ex_ls_rd_wen;
wire        ex_ls_mem_cen;
wire        ex_ls_mem_wen;
wire [63:0] ex_ls_mem_addr;
wire [63:0] ex_ls_mem_wdata;
wire [10:0] ex_ls_ls_info;
wire        ex_ls_mem_read;
wire        ex_ls_mem_write;

//=================S 4=======================
wire [63:0] o_lsu_rd_data;
wire [4:0]  o_lsu_rd_addr;
wire        o_lsu_rd_wen;
wire [63:0] o_lsu_mem_rdata;
wire        o_lsu_mem_read;

wire [63:0] ls_wb_rd_data;
wire [4:0]  ls_wb_rd_addr;
wire        ls_wb_rd_wen;
wire [63:0] ls_wb_mem_rdata;
wire        ls_wb_mem_read;

wire [63:0] o_lsu_addr;
wire        o_lsu_wen;
wire        o_lsu_valid;

wire [63:0] o_lsu_wdata;
wire [2:0]  o_lsu_size;
wire        o_lsu_hold;

//=================S 5========================
wire        o_wbu_rd_wen;
wire [4:0]  o_wbu_rd_addr;
wire [63:0] o_wbu_rd_wdata;

//==============hazard dtection==============
wire        o_load_use;
wire        o_ctrl_forward_ex_rs1;
wire        o_ctrl_forward_ex_rs2;
wire        o_ctrl_forward_ls_rs1;
wire        o_ctrl_forward_ls_rs2;
wire        o_ctrl_load_use;

//==============Clint====================
wire [63:0] o_clint_int_addr;
wire        o_clint_int_valid;
wire        o_clint_hold;

wire        o_clint_csr_wen;
wire [11:0] o_clint_csr_waddr;
wire [63:0] o_clint_csr_wdata;

//==============Timer===================
wire        o_timer_int;
wire [63:0] o_timer_rdata;

//===========Ram Arbiter==================
wire        o_arb_ifu_ready;
wire [31:0] o_arb_ifu_rdata;

wire        o_arb_lsu_ready;
wire [63:0] o_arb_lsu_rdata;

wire [63:0] o_arb_timer_addr;
wire        o_arb_timer_wen;
wire        o_arb_timer_valid;
wire [63:0] o_arb_timer_wdata;

wire [63:0] o_arb_ram_addr;
wire        o_arb_ram_wen;
wire        o_arb_ram_valid;
wire [63:0] o_arb_ram_wdata;
wire [2:0]  o_arb_ram_size;


//===========AXI master interface=======
wire        o_rw_ready;
wire [63:0] o_rw_rdata;




//============Stage 1=====================
//-------ifu---------------
ysyx_210238_ifu u_ifu(
    .clk          ( clk          ),
    .rst_n        ( rst_n        ),

    .o_ram_addr   ( o_ifu_addr   ),
    .o_ram_valid  ( o_ifu_valid  ),
    .i_ram_ready  ( o_arb_ifu_ready  ),
    .i_ram_rdata  ( o_arb_ifu_rdata  ),
    .o_ram_size   ( o_ifu_size   ),

    .i_branch_jump( i_ifu_branch_jump & ~o_ctrl_load_use),
    .i_hold       ( o_load_use | o_lsu_hold | o_clint_hold ),
    .i_next_pc    ( i_ifu_next_pc    ),
    .o_instr      ( o_ifu_instr      ),
    .o_instr_valid( o_ifu_instr_valid),
    .o_pc         ( o_ifu_pc         ),

    .i_int_valid  ( o_clint_int_valid),
    .i_int_addr   ( o_clint_int_addr )
);

// when load use, stall
// when jump, flush
ysyx_210238_pipeline_reg#(
    .N     ( 32 )
)u0_if_id_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( (i_ifu_branch_jump & ~o_ctrl_load_use) | ~o_ifu_instr_valid),
    .hold  ( o_load_use | o_ctrl_load_use | o_lsu_hold | o_clint_hold ),
    .din   ( o_ifu_instr   ),
    .dout  ( if_id_instr  )
);

// when load use, stall
// when jump, flush
ysyx_210238_pipeline_reg#(
    .N     ( 64 )
)u1_if_id_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( (i_ifu_branch_jump & ~o_ctrl_load_use) | ~o_ifu_instr_valid),
    .hold  ( o_load_use | o_ctrl_load_use | o_lsu_hold | o_clint_hold ),
    .din   ( o_ifu_pc   ),
    .dout  ( if_id_instr_addr  )
);



//==============Stage 2========================
//---------reg_file---------
 ysyx_210238_reg_file u_reg_file(
    .clk         ( clk         ),
    .rst_n       ( rst_n       ),
    .i_wen       ( o_wbu_rd_wen     ),
    .i_addr      ( o_wbu_rd_addr    ),
    .i_wdata     ( o_wbu_rd_wdata   ),
    .i_rs1_addr  ( o_idu_rs1_addr   ),
    .i_rs2_addr  ( o_idu_rs2_addr   ),
    .i_rs1_cen   ( o_idu_rs1_cen    ),
    .i_rs2_cen   ( o_idu_rs2_cen    ),
    .o_rs1_rdata ( i_idu_rs1_rdata  ),
    .o_rs2_rdata ( i_idu_rs2_rdata  )
);

//-------idu----------
 ysyx_210238_idu u_idu(
    .i_instr        ( if_id_instr        ),
    .i_instr_addr   ( if_id_instr_addr   ),
    .o_next_pc      ( i_ifu_next_pc  ),
    .o_branch_jump  ( i_ifu_branch_jump  ),

    .i_rs1_rdata    ( i_idu_rs1_rdata    ),
    .i_rs2_rdata    ( i_idu_rs2_rdata    ),
    .o_rs1_addr     ( o_idu_rs1_addr     ),
    .o_rs2_addr     ( o_idu_rs2_addr     ),
    .o_rs1_cen      ( o_idu_rs1_cen      ),
    .o_rs2_cen      ( o_idu_rs2_cen      ),

    .o_imm          ( o_idu_imm          ),
    .o_rs1_rdata    ( o_idu_rs1_rdata    ),
    .o_rs2_rdata    ( o_idu_rs2_rdata    ),
    .o_pc           ( o_idu_pc           ),

    .o_alu_info     ( o_idu_alu_info     ),
    .o_csr_info     ( o_idu_csr_info     ),
    .o_op2_is_imm   ( o_idu_op2_is_imm   ),
    .o_op_is_jal    ( o_idu_op_is_jal    ),

    .o_ls_info      ( o_idu_ls_info      ),
    .o_mem_read     ( o_idu_mem_read     ),
    .o_mem_write    ( o_idu_mem_write    ),

    .o_rd_wen       ( o_idu_rd_wen       ),
    .o_rd_addr      ( o_idu_rd_addr      ),

    .o_op_is_branch  ( o_idu_op_is_branch ),
    .i_forward_ex_rs1( o_ctrl_forward_ex_rs1 ),
    .i_forward_ex_rs2( o_ctrl_forward_ex_rs2 ),
    .i_forward_ls_rs1( o_ctrl_forward_ls_rs1),
    .i_forward_ls_rs2( o_ctrl_forward_ls_rs2),
    .i_ex_ls_mem_read( ex_ls_mem_read),
    .i_exu_rd_data   ( o_exu_rd_data ),
    .i_lsu_rd_data   ( o_lsu_rd_data ),
    .i_lsu_mem_rdata ( o_lsu_mem_rdata),

    .i_csr_rdata     ( o_cpu_csr_rdata),
    .o_csr_wen       ( o_idu_csr_wen),
    .o_csr_rdata     ( o_idu_csr_rdata),
    .o_csr_raddr     ( o_idu_csr_raddr),
    .o_csr_waddr     ( o_idu_csr_waddr)
);

 ysyx_210238_pipeline_reg#(
    .N     ( 5 )
)u0_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold ),
    .din   ( o_idu_rs1_addr   ),
    .dout  ( id_ex_rs1_addr   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 5 )
)u1_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold  ),
    .din   ( o_idu_rs2_addr   ),
    .dout  ( id_ex_rs2_addr   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 1 )
)u2_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold  ),
    .din   ( o_idu_rs1_cen   ),
    .dout  ( id_ex_rs1_cen   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 1 )
)u3_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold  ),
    .din   ( o_idu_rs2_cen   ),
    .dout  ( id_ex_rs2_cen   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 64 )
)u4_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold  ),
    .din   ( o_idu_imm   ),
    .dout  ( id_ex_imm   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 64 )
)u5_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold  ),
    .din   ( o_idu_rs1_rdata   ),
    .dout  ( id_ex_rs1_rdata   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 64 )
)u6_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold  ),
    .din   ( o_idu_rs2_rdata   ),
    .dout  ( id_ex_rs2_rdata   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 64 )
)u7_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold  ),
    .din   ( o_idu_pc   ),
    .dout  ( id_ex_pc   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 13 )
)u8_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold  ),
    .din   ( o_idu_alu_info   ),
    .dout  ( id_ex_alu_info   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 1 )
)u9_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold  ),
    .din   ( o_idu_op2_is_imm   ),
    .dout  ( id_ex_op2_is_imm   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 1 )
)u10_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold  ),
    .din   ( o_idu_op_is_jal   ),
    .dout  ( id_ex_op_is_jal   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 11 )
)u11_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold  ),
    .din   ( o_idu_ls_info   ),
    .dout  ( id_ex_ls_info   )
);

// when load use, clear mem read signal
 ysyx_210238_pipeline_reg#(
    .N     ( 1 )
)u12_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( o_load_use | o_lsu_hold | o_clint_hold),
    .hold  ( 1'b0  ),
    .din   ( o_idu_mem_read   ),
    .dout  ( id_ex_mem_read   )
);

// when load use, clear mem write signal
 ysyx_210238_pipeline_reg#(
    .N     ( 1 )
)u13_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( o_load_use | o_lsu_hold | o_clint_hold),
    .hold  ( 1'b0  ),
    .din   ( o_idu_mem_write   ),
    .dout  ( id_ex_mem_write   )
);

// when load use, clear rd write signal
 ysyx_210238_pipeline_reg#(
    .N     ( 1 )
)u14_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( o_load_use | o_lsu_hold | o_clint_hold),
    .hold  ( 1'b0  ),
    .din   ( o_idu_rd_wen   ),
    .dout  ( id_ex_rd_wen   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 5 )
)u15_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold ),
    .din   ( o_idu_rd_addr   ),
    .dout  ( id_ex_rd_addr   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 1 )
)u16_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold  ),
    .din   ( o_idu_csr_wen   ),
    .dout  ( id_ex_csr_wen   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 64 )
)u17_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold  ),
    .din   ( o_idu_csr_rdata   ),
    .dout  ( id_ex_csr_rdata   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 12 )
)u18_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold ),
    .din   ( o_idu_csr_raddr   ),
    .dout  ( id_ex_csr_raddr   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 12 )
)u19_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold ),
    .din   ( o_idu_csr_waddr   ),
    .dout  ( id_ex_csr_waddr   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 6 )
)u20_id_ex_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold | o_clint_hold ),
    .din   ( o_idu_csr_info[5:0] ),
    .dout  ( id_ex_csr_info      )
);

//===============Stage 3======================
//---------ex-----------
ysyx_210238_exu u_exu(
    .i_imm         ( id_ex_imm     ),
    .i_rs1_rdata   ( id_ex_rs1_rdata   ),
    .i_rs2_rdata   ( id_ex_rs2_rdata   ),
    .i_csr_rdata   ( id_ex_csr_rdata   ),
    .i_pc          ( id_ex_pc          ),

    .i_alu_info    ( id_ex_alu_info    ),
    .i_csr_info    ( id_ex_csr_info    ),
    .i_op2_is_imm  ( id_ex_op2_is_imm  ),
    .i_op_is_jal   ( id_ex_op_is_jal   ),

    .i_rd_wen      ( id_ex_rd_wen      ),
    .o_rd_wen      ( o_exu_rd_wen      ),
    .i_rd_addr     ( id_ex_rd_addr     ),
    .o_rd_data     ( o_exu_rd_data     ),
    .o_rd_addr     ( o_exu_rd_addr     ),

    .o_mem_addr    ( o_exu_mem_addr    ),
    .o_mem_wdata   ( o_exu_mem_wdata   ),
    .i_ls_info     ( id_ex_ls_info     ),
    .i_mem_read    ( id_ex_mem_read    ),
    .i_mem_write   ( id_ex_mem_write   ),
    .o_ls_info     ( o_exu_ls_info     ),
    .o_mem_read    ( o_exu_mem_read    ),
    .o_mem_write   ( o_exu_mem_write   ),

    .i_forward_ex_rs1(i_forward_ex_rs1),
    .i_forward_ex_rs2(i_forward_ex_rs2),
    .i_forward_ls_rs1(i_forward_ls_rs1),
    .i_forward_ls_rs2(i_forward_ls_rs2),

    .i_ex_ls_rd_data (ex_ls_rd_data),
    .i_wbu_rd_wdata  (o_wbu_rd_wdata),

    .i_csr_wen       (id_ex_csr_wen),
    .i_csr_waddr     (id_ex_csr_waddr),
    .o_csr_wdata     (o_exu_csr_wdata),
    .o_csr_wen       (o_exu_csr_wen),
    .o_csr_waddr     (o_exu_csr_waddr)
);

//-------------CSR-----------------
ysyx_210238_csr_file u_csr_file(
    .clk                 ( clk                 ),
    .rst_n               ( rst_n               ),
    .i_cpu_csr_wen       ( o_exu_csr_wen       ),
    .i_cpu_csr_raddr     ( o_idu_csr_raddr     ),
    .i_cpu_csr_waddr     ( o_exu_csr_waddr     ),
    .i_cpu_csr_wdata     ( o_exu_csr_wdata     ),
    .o_cpu_csr_rdata     ( o_cpu_csr_rdata     ),

    .i_clint_csr_wen     ( o_clint_csr_wen     ),
    .i_clint_csr_waddr   ( o_clint_csr_waddr   ),
    .i_clint_csr_wdata   ( o_clint_csr_wdata   ),
    .o_clint_csr_mtvec   ( o_clint_csr_mtvec   ),
    .o_clint_csr_mepc    ( o_clint_csr_mepc    ),
    .o_clint_csr_mstatus ( o_clint_csr_mstatus ),
    .o_global_int_en     ( o_global_int_en     ),
    .o_mtime_int_en      ( o_mtime_int_en      ),
    .o_mtime_int_pend    ( o_mtime_int_pend    ),
    .i_timer_int         ( o_timer_int         )
);

//-------------Clint----------------
ysyx_210238_clint u_clint(
    .clk              ( clk              ),
    .rst_n            ( rst_n            ),
    .i_timer_int      ( o_timer_int      ),
    .i_expt_info      ( o_idu_csr_info[8:6] ),
    .i_instr_addr     ( if_id_instr_addr  ),
    .i_branch_jump    ( i_ifu_branch_jump ),
    .i_jump_addr      ( i_ifu_next_pc     ),
    .o_int_addr       ( o_clint_int_addr  ),
    .o_int_valid      ( o_clint_int_valid ),
    .o_hold           ( o_clint_hold      ),
    .i_global_int_en  ( o_global_int_en   ),
    .i_mtime_int_en   ( o_mtime_int_en    ),
    .i_mtime_int_pend ( o_mtime_int_pend  ),
    .i_csr_mtvec      ( o_clint_csr_mtvec ),
    .i_csr_mepc       ( o_clint_csr_mepc  ),
    .i_csr_mstatus    ( o_clint_csr_mstatus ),
    .o_csr_wen        ( o_clint_csr_wen  ),
    .o_csr_waddr      ( o_clint_csr_waddr),
    .o_csr_wdata      ( o_clint_csr_wdata)
);

 ysyx_210238_pipeline_reg#(
    .N     ( 64 )
)u0_ex_ls_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold ),
    .din   ( o_exu_rd_data   ),
    .dout  ( ex_ls_rd_data   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 5 )
)u1_ex_ls_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold ),
    .din   ( o_exu_rd_addr   ),
    .dout  ( ex_ls_rd_addr   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 1 )
)u2_ex_ls_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold ),
    .din   ( o_exu_rd_wen   ),
    .dout  ( ex_ls_rd_wen   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 64 )
)u3_ex_ls_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold ),
    .din   ( o_exu_mem_addr   ),
    .dout  ( ex_ls_mem_addr   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 64 )
)u4_ex_ls_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold ),
    .din   ( o_exu_mem_wdata   ),
    .dout  ( ex_ls_mem_wdata   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 11 )
)u5_ex_ls_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold ),
    .din   ( o_exu_ls_info   ),
    .dout  ( ex_ls_ls_info   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 1 )
)u6_ex_ls_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold ),
    .din   ( o_exu_mem_read   ),
    .dout  ( ex_ls_mem_read   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 1 )
)u7_ex_ls_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( o_lsu_hold ),
    .din   ( o_exu_mem_write   ),
    .dout  ( ex_ls_mem_write   )
);


//===================Stage 4=========================
//---------lsu------------
ysyx_210238_lsu u_lsu(
    .clk          ( clk               ),
    .rst_n        ( rst_n             ),
    .i_mem_addr   ( ex_ls_mem_addr    ),
    .i_mem_wdata  ( ex_ls_mem_wdata   ),
    .i_ls_info    ( ex_ls_ls_info     ),
    .i_mem_read   ( ex_ls_mem_read    ),
    .i_mem_write  ( ex_ls_mem_write   ),

    .o_ram_addr   ( o_lsu_addr),
    .o_ram_wen    ( o_lsu_wen),
    .o_ram_valid  ( o_lsu_valid),
    .i_ram_ready  ( o_arb_lsu_ready),
    .o_ram_wdata  ( o_lsu_wdata),
    .o_ram_size   ( o_lsu_size),
    .i_ram_rdata  ( o_arb_lsu_rdata),

    .i_rd_data    ( ex_ls_rd_data     ),
    .i_rd_addr    ( ex_ls_rd_addr     ),
    .o_rd_data    ( o_lsu_rd_data     ),
    .o_rd_addr    ( o_lsu_rd_addr     ),
    .o_mem_rdata  ( o_lsu_mem_rdata   ),

    .i_rd_wen     ( ex_ls_rd_wen      ),
    .o_rd_wen     ( o_lsu_rd_wen      ),
    .o_mem_read   ( o_lsu_mem_read    ),

    .o_hold       ( o_lsu_hold )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 64 )
)u0_ls_wb_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( 1'b0  ),
    .din   ( o_lsu_rd_data   ),
    .dout  ( ls_wb_rd_data   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 5 )
)u1_ls_wb_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( 1'b0  ),
    .din   ( o_lsu_rd_addr   ),
    .dout  ( ls_wb_rd_addr   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 1 )
)u2_ls_wb_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( 1'b0  ),
    .din   ( o_lsu_rd_wen   ),
    .dout  ( ls_wb_rd_wen   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 64 )
)u3_ls_wb_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( 1'b0  ),
    .din   ( o_lsu_mem_rdata   ),
    .dout  ( ls_wb_mem_rdata   )
);

 ysyx_210238_pipeline_reg#(
    .N     ( 1 )
)u5_ls_wb_reg(
    .clk   ( clk   ),
    .rst_n ( rst_n ),
    .clear ( 1'b0 ),
    .hold  ( 1'b0  ),
    .din   ( o_lsu_mem_read   ),
    .dout  ( ls_wb_mem_read   )
);

//=====================Stage 5====================
//------------wbu----------------
ysyx_210238_wbu u_wbu(
    .i_rd_data    ( ls_wb_rd_data   ),
    .i_rd_addr    ( ls_wb_rd_addr   ),
    .i_rd_wen     ( ls_wb_rd_wen    ),
    .i_mem_rdata  ( ls_wb_mem_rdata ),
    .i_mem_read   ( ls_wb_mem_read  ),
    .o_rd_wen     ( o_wbu_rd_wen    ),
    .o_rd_addr    ( o_wbu_rd_addr   ),
    .o_rd_wdata   ( o_wbu_rd_wdata  )
);


//------------hazard detect---------
ysyx_210238_hdu u_hdu(
    .i_id_ex_rs1      ( id_ex_rs1_addr ),
    .i_id_ex_rs2      ( id_ex_rs2_addr ),
    .i_id_ex_rs1_cen  ( id_ex_rs1_cen  ),
    .i_id_ex_rs2_cen  ( id_ex_rs2_cen  ),

    .i_if_id_rs1      ( o_idu_rs1_addr ),
    .i_if_id_rs2      ( o_idu_rs2_addr ),
    .i_if_id_rs1_cen  ( o_idu_rs1_cen  ),
    .i_if_id_rs2_cen  ( o_idu_rs2_cen  ),

    .i_id_ex_rd       ( id_ex_rd_addr  ),
    .i_ex_ls_rd       ( ex_ls_rd_addr  ),
    .i_ls_wb_rd       ( ls_wb_rd_addr  ),
    .i_ex_ls_rd_wen   ( ex_ls_rd_wen   ),
    .i_ls_wb_rd_wen   ( ls_wb_rd_wen   ),
    .i_id_ex_mem_read ( id_ex_mem_read ),
    .i_ls_wb_mem_read ( ls_wb_mem_read ),

    .o_forward_ex_rs1 ( i_forward_ex_rs1 ),
    .o_forward_ex_rs2 ( i_forward_ex_rs2 ),
    .o_forward_ls_rs1 ( i_forward_ls_rs1 ),
    .o_forward_ls_rs2 ( i_forward_ls_rs2 ),
    .o_load_use       ( o_load_use       ),
    .i_op_is_branch       (o_idu_op_is_branch),
    .i_id_ex_rd_wen       (id_ex_rd_wen),
    .i_ex_ls_mem_read     (ex_ls_mem_read),
    .o_ctrl_forward_ex_rs1(o_ctrl_forward_ex_rs1),
    .o_ctrl_forward_ex_rs2(o_ctrl_forward_ex_rs2),
    .o_ctrl_forward_ls_rs1(o_ctrl_forward_ls_rs1),
    .o_ctrl_forward_ls_rs2(o_ctrl_forward_ls_rs2),
    .o_ctrl_load_use      (o_ctrl_load_use)
);


//--------------timer---------------
ysyx_210238_timer u_timer(
    .clk         ( clk         ),
    .rst_n       ( rst_n       ),
    .o_timer_int ( o_timer_int ),
    .i_wen       ( o_arb_timer_wen ),
    .i_valid     ( o_arb_timer_valid ),
    .i_addr      ( o_arb_timer_addr  ),
    .i_wdata     ( o_arb_timer_wdata ),
    .o_rdata     ( o_timer_rdata     )
);


//---------------ram arbiter------------
ysyx_210238_ram_arbiter u_ram_arbiter(
    .clk           ( clk               ),
    .rst_n         ( rst_n             ),
    .i_ifu_addr    ( o_ifu_addr        ),
    .i_ifu_valid   ( o_ifu_valid       ),
    .o_ifu_ready   ( o_arb_ifu_ready   ),
    .i_ifu_size    ( o_ifu_size        ),
    .o_ifu_rdata   ( o_arb_ifu_rdata   ),

    .i_lsu_addr    ( o_lsu_addr        ),
    .i_lsu_wen     ( o_lsu_wen         ),
    .i_lsu_valid   ( o_lsu_valid       ),
    .o_lsu_ready   ( o_arb_lsu_ready   ),
    .i_lsu_wdata   ( o_lsu_wdata       ),
    .i_lsu_size    ( o_lsu_size        ),
    .o_lsu_rdata   ( o_arb_lsu_rdata   ),

    .o_timer_addr  ( o_arb_timer_addr  ),
    .o_timer_wen   ( o_arb_timer_wen   ),
    .o_timer_valid ( o_arb_timer_valid ),
    .o_timer_wdata ( o_arb_timer_wdata ),
    .i_timer_rdata ( o_timer_rdata     ),

    .o_ram_addr    ( o_arb_ram_addr    ),
    .o_ram_wen     ( o_arb_ram_wen     ),
    .o_ram_valid   ( o_arb_ram_valid   ),
    .i_ram_ready   ( o_rw_ready        ),
    .o_ram_wdata   ( o_arb_ram_wdata   ),
    .o_ram_size    ( o_arb_ram_size    ),
    .i_ram_rdata   ( o_rw_rdata        )
);

//-----------AXI master interface---------
ysyx_210238_axi_master_if#(
    .RW_DATA_WIDTH   ( 64 ),
    .RW_ADDR_WIDTH   ( 64 ),
    .AXI_DATA_WIDTH  ( 64 ),
    .AXI_ADDR_WIDTH  ( 32 ),
    .AXI_ID_WIDTH    ( 4 ),
    .AXI_USER_WIDTH  ( 1 )
)u_axi_master_if(
    .clk             ( clk             ),
    .rst_n           ( rst_n           ),
    .rw_id_i         ( 1'b0            ),
    .rw_valid_i      ( o_arb_ram_valid ),
    .rw_ready_o      ( o_rw_ready      ),
    .rw_req_i        ( o_arb_ram_wen   ),
    .rw_rdata_o      ( o_rw_rdata      ),
    .rw_wdata_i      ( o_arb_ram_wdata ),
    .rw_addr_i       ( o_arb_ram_addr  ),
    .rw_size_i       ( o_arb_ram_size  ),

    .axi_aw_id_o     ( io_master_awid     ),
    .axi_aw_addr_o   ( io_master_awaddr   ),
    .axi_aw_len_o    ( io_master_awlen    ),
    .axi_aw_size_o   ( io_master_awsize   ),
    .axi_aw_burst_o  ( io_master_awburst  ),
    .axi_aw_valid_o  ( io_master_awvalid  ),
    .axi_aw_ready_i  ( io_master_awready  ),

    .axi_w_ready_i   ( io_master_wready   ),
    .axi_w_valid_o   ( io_master_wvalid   ),
    .axi_w_data_o    ( io_master_wdata    ),
    .axi_w_strb_o    ( io_master_wstrb    ),
    .axi_w_last_o    ( io_master_wlast    ),

    .axi_b_ready_o   ( io_master_bready   ),
    .axi_b_valid_i   ( io_master_bvalid   ),
    .axi_b_resp_i    ( io_master_bresp    ),
    .axi_b_id_i      ( io_master_bid      ),

    .axi_ar_ready_i  ( io_master_arready  ),
    .axi_ar_valid_o  ( io_master_arvalid  ),
    .axi_ar_addr_o   ( io_master_araddr   ),
    .axi_ar_id_o     ( io_master_arid     ),
    .axi_ar_len_o    ( io_master_arlen    ),
    .axi_ar_size_o   ( io_master_arsize   ),
    .axi_ar_burst_o  ( io_master_arburst  ),

    .axi_r_ready_o   ( io_master_rready   ),
    .axi_r_valid_i   ( io_master_rvalid   ),
    .axi_r_resp_i    ( io_master_rresp    ),
    .axi_r_data_i    ( io_master_rdata    ),
    .axi_r_last_i    ( io_master_rlast    ),
    .axi_r_id_i      ( io_master_rid      )
);


endmodule





module ysyx_210238_axi_master_if # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_USER_WIDTH    = 1
)(
    input                               clk,
    input                               rst_n,

    // user port
    input                               rw_id_i,
    input                               rw_valid_i,
    output                              rw_ready_o,
    input                               rw_req_i,
    output reg [RW_DATA_WIDTH-1:0]      rw_rdata_o,
    input  [RW_DATA_WIDTH-1:0]          rw_wdata_i,
    input  [RW_ADDR_WIDTH-1:0]          rw_addr_i,
    input  [2:0]                        rw_size_i,

    //------------AXI port-------------------------
    // write address channel
    output [AXI_ID_WIDTH-1:0]           axi_aw_id_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o,
    output [7:0]                        axi_aw_len_o,
    output [2:0]                        axi_aw_size_o,
    output [1:0]                        axi_aw_burst_o,
    output                              axi_aw_valid_o,
    input                               axi_aw_ready_i,

    // write data channel
    input                               axi_w_ready_i,
    output                              axi_w_valid_o,
    output [AXI_DATA_WIDTH-1:0]         axi_w_data_o,
    output [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o,
    output                              axi_w_last_o,

    // write response channel
    output                              axi_b_ready_o,
    input                               axi_b_valid_i,
    input  [1:0]                        axi_b_resp_i,
    input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,

    // read address channel
    input                               axi_ar_ready_i,
    output                              axi_ar_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o,
    output [AXI_ID_WIDTH-1:0]           axi_ar_id_o,
    output [7:0]                        axi_ar_len_o,
    output [2:0]                        axi_ar_size_o,
    output [1:0]                        axi_ar_burst_o,

    // read data channel
    output                              axi_r_ready_o,
    input                               axi_r_valid_i,
    input  [1:0]                        axi_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i,
    input                               axi_r_last_i,
    input  [AXI_ID_WIDTH-1:0]           axi_r_id_i
);

    wire w_trans    = rw_req_i;
    wire r_trans    = ~rw_req_i;
    wire w_valid    = rw_valid_i & w_trans;
    wire r_valid    = rw_valid_i & r_trans;

    // handshake
    wire aw_hs      = axi_aw_ready_i & axi_aw_valid_o;
    wire w_hs       = axi_w_ready_i  & axi_w_valid_o;
    wire b_hs       = axi_b_ready_o  & axi_b_valid_i;
    wire ar_hs      = axi_ar_ready_i & axi_ar_valid_o;
    wire r_hs       = axi_r_ready_o  & axi_r_valid_i;

    wire w_done     = w_hs & axi_w_last_o;
    wire r_done     = r_hs & axi_r_last_i;
    wire trans_done = w_trans ? b_hs : r_done;


    // ------------------State Machine------------------
    localparam [2:0] W_STATE_IDLE  = 3'b000;
    localparam [2:0] W_STATE_ADDR  = 3'b001;
    localparam [2:0] W_STATE_WRITE = 3'b010;
    localparam [2:0] W_STATE_RESP  = 3'b011;
    localparam [2:0] W_STATE_DONE  = 3'b100;

    localparam [1:0] R_STATE_IDLE  = 2'b00;
    localparam [1:0] R_STATE_ADDR  = 2'b01;
    localparam [1:0] R_STATE_READ  = 2'b10;
    localparam [1:0] R_STATE_DONE  = 2'b11;

    reg [2:0] w_state;
    reg [1:0] r_state;

    wire w_state_idle  = w_state == W_STATE_IDLE;
    wire w_state_addr  = w_state == W_STATE_ADDR;
    wire w_state_write = w_state == W_STATE_WRITE;
    wire w_state_resp  = w_state == W_STATE_RESP;
    wire w_state_done  = w_state == W_STATE_DONE;

    wire r_state_idle  = r_state == R_STATE_IDLE;
    wire r_state_addr  = r_state == R_STATE_ADDR;
    wire r_state_read  = r_state == R_STATE_READ;
    wire r_state_done  = r_state == R_STATE_DONE;

    // Wirte State Machine
    always @(posedge clk) begin
        if (~rst_n) begin
            w_state <= W_STATE_IDLE;
        end
        else begin
            if (w_valid) begin
                case (w_state)
                    W_STATE_IDLE:               w_state <= W_STATE_ADDR;
                    W_STATE_ADDR:  if (aw_hs)   w_state <= W_STATE_WRITE;
                    W_STATE_WRITE: if (w_done)  w_state <= W_STATE_RESP;
                    W_STATE_RESP:  if (b_hs)    w_state <= W_STATE_DONE;
                    W_STATE_DONE:               w_state <= W_STATE_IDLE;
                    default     :               w_state <= w_state;
                endcase
            end
        end
    end

    // Read State Machine
    always @(posedge clk) begin
        if (~rst_n) begin
            r_state <= R_STATE_IDLE;
        end
        else begin
            if (r_valid) begin
                case (r_state)
                    R_STATE_IDLE:               r_state <= R_STATE_ADDR;
                    R_STATE_ADDR: if (ar_hs)    r_state <= R_STATE_READ;
                    R_STATE_READ: if (r_done)   r_state <= R_STATE_DONE;
                    R_STATE_DONE:               r_state <= R_STATE_IDLE;
                    default     :               r_state <= r_state;
                endcase
            end
        end
    end

    // ------------------Process Data------------------
    parameter ALIGNED_WIDTH = 3;
    parameter OFFSET_WIDTH  = 6;
    parameter MASK_WIDTH    = 128;
    parameter TRANS_LEN     = 1;

    wire aligned = rw_addr_i[2:0] == 0;
    wire size_b  = rw_size_i[1:0] == 2'b00;
    wire size_h  = rw_size_i[1:0] == 2'b01;
    wire size_w  = rw_size_i[1:0] == 2'b10;
    wire size_d  = rw_size_i[1:0] == 2'b11;

    wire [3:0]   addr_op1     = {1'b0, rw_addr_i[2:0]};

    wire [3:0]   addr_op2     =   ({4{size_b}} & {4'b0000})
                                | ({4{size_h}} & {4'b0001})
                                | ({4{size_w}} & {4'b0011})
                                | ({4{size_d}} & {4'b0111})
                                ;
    wire [3:0]   addr_end     = addr_op1 + addr_op2;
    wire         crossover    = addr_end[3]; // cross 8 byte boundry

    wire [7:0]   axi_len      = aligned ? 8'd0 : {7'b0, crossover}; // 0 or 1
    wire [2:0]   axi_size     = rw_size_i;

    wire [63:0]  axi_addr         = rw_addr_i;
    wire [5:0]   aligned_offset_l = {3'b0, rw_addr_i[2:0]} << 3;
    wire [5:0]   aligned_offset_h = 6'd63 - aligned_offset_l  + 6'd1;
    wire [127:0] mask             =    (({MASK_WIDTH{size_b}} & {{MASK_WIDTH-8{1'b0}},  8'hff})
                                      | ({MASK_WIDTH{size_h}} & {{MASK_WIDTH-16{1'b0}}, 16'hffff})
                                      | ({MASK_WIDTH{size_w}} & {{MASK_WIDTH-32{1'b0}}, 32'hffffffff})
                                      | ({MASK_WIDTH{size_d}} & {{MASK_WIDTH-64{1'b0}}, 64'hffffffff_ffffffff})
                                      ) << aligned_offset_l;

    wire [63:0] mask_l            = mask[63:0];
    wire [63:0] mask_h            = mask[127:64];

    wire [15:0] w_mask =    (({16{size_b}} & 16'b0000_0001)
                           | ({16{size_h}} & 16'b0000_0011)
                           | ({16{size_w}} & 16'b0000_1111)
                           | ({16{size_d}} & 16'b1111_1111)
                           ) << rw_addr_i[2:0];

    wire [7:0]  w_mask_l  = w_mask[7:0];
    wire [7:0]  w_mask_h  = w_mask[15:8];

    wire [AXI_ID_WIDTH-1:0]   axi_id            = {AXI_ID_WIDTH{1'b0}};
    wire [AXI_USER_WIDTH-1:0] axi_user          = {AXI_USER_WIDTH{1'b0}};

    reg  rw_ready;
    always @(posedge clk) begin
        if (~rst_n) begin
            rw_ready <= 0;
        end
        else if (trans_done) begin
            rw_ready <= 1;
        end
        else begin
            rw_ready <= 0;
        end
    end
    assign rw_ready_o = rw_ready;

    // ------------------Number of transmission------------------
    reg [7:0] len;
    wire len_rst        = ~rst_n | (w_trans & w_state_idle) | (r_trans & r_state_idle);
    wire len_incr_en    = (len != axi_len) & (w_hs | r_hs);
    always @(posedge clk) begin
        if (len_rst) begin
            len <= 0;
        end
        else if (len_incr_en) begin
            len <= len + 1;
        end
    end


    // ------------------Write Transaction------------------
    // Write address channel signals
    assign axi_aw_id_o      = axi_id;
    assign axi_aw_addr_o    = axi_addr[31:0];
    assign axi_aw_len_o     = axi_len;
    assign axi_aw_size_o    = axi_size;
    assign axi_aw_burst_o   = `AXI_BURST_TYPE_INCR;
    assign axi_aw_valid_o   = w_state_addr;

    // Write data channel signals
    reg  [63:0] w_data;
    reg  [7:0]  w_strb;

    wire [63:0] w_data_l    = (rw_wdata_i << aligned_offset_l) & mask_l;
    wire [63:0] w_data_h    = (rw_wdata_i >> aligned_offset_h) & mask_h;

    assign axi_w_valid_o    = w_state_write;
    assign axi_w_data_o     = w_data;
    assign axi_w_strb_o     = w_strb;
    assign axi_w_last_o     = w_state_write & (len == axi_len);

    always @(posedge clk) begin
        if (~rst_n) begin
            w_data <= 0;
            w_strb <= 0;
        end
        else if (len == 8'd0) begin
            w_data <= w_data_l;
            w_strb <= w_mask_l;
        end
        else if (len_incr_en || len == 8'd1) begin
            w_data <= w_data_h;
            w_strb <= w_mask_h;
        end
    end


    // Write resp channel signals
    assign axi_b_ready_o    = w_state_resp;

    // ------------------Read Transaction------------------

    // Read address channel signals
    assign axi_ar_valid_o   = r_state_addr;
    assign axi_ar_addr_o    = axi_addr[31:0];
    assign axi_ar_id_o      = axi_id;
    assign axi_ar_len_o     = axi_len;
    assign axi_ar_size_o    = axi_size;
    assign axi_ar_burst_o   = `AXI_BURST_TYPE_INCR;

    // Read data channel signals
    assign axi_r_ready_o    = r_state_read;

    wire [AXI_DATA_WIDTH-1:0] axi_r_data_l  = (axi_r_data_i & mask_l) >> aligned_offset_l;
    wire [AXI_DATA_WIDTH-1:0] axi_r_data_h  = (axi_r_data_i & mask_h) << aligned_offset_h;

    generate
        for (genvar i = 0; i < TRANS_LEN; i = i+1) begin
            always @(posedge clk) begin
                if (~rst_n) begin
                    rw_rdata_o[i*AXI_DATA_WIDTH+:AXI_DATA_WIDTH] <= 0;
                end
                else if (r_hs) begin
                    if (~aligned & crossover) begin
                        if (len[0]) begin // high data
                            rw_rdata_o[AXI_DATA_WIDTH-1:0] <= rw_rdata_o[AXI_DATA_WIDTH-1:0] | axi_r_data_h;
                        end
                        else begin // low data
                            rw_rdata_o[AXI_DATA_WIDTH-1:0] <= axi_r_data_l;
                        end
                    end
                    else if (len == i) begin
                        rw_rdata_o[i*AXI_DATA_WIDTH+:AXI_DATA_WIDTH] <= axi_r_data_l;
                    end
                end
            end
        end
    endgenerate

endmodule

// Copyright 2021 LinYouxu, linyouxu1997@foxmail.com
// Last edit: 2021.08.31
// Core local interruptor

module ysyx_210238_clint (
    input             clk,
    input             rst_n,

    // timer port
    input             i_timer_int,

    // idu port
    input      [2:0]  i_expt_info,
    input      [63:0] i_instr_addr,
    input             i_branch_jump,
    input      [63:0] i_jump_addr,
    output reg [63:0] o_int_addr,
    output reg        o_int_valid,
    output            o_hold,

    // csr port
    input             i_global_int_en,
    input             i_mtime_int_en,
    input             i_mtime_int_pend,

    input      [63:0] i_csr_mtvec,
    input      [63:0] i_csr_mepc,
    input      [63:0] i_csr_mstatus,

    output reg        o_csr_wen,
    output reg [11:0] o_csr_waddr,
    output reg [63:0] o_csr_wdata

);

//-------Exception or Interrupt Sate-----
localparam INT_IDLE = 0;
localparam INT_EXPT = 1;
localparam INT_TIME = 2;
localparam INT_MRET = 3;

//-------Write CSR state-----------
localparam CSR_IDLE    = 0;
localparam CSR_MSTATUS = 1;
localparam CSR_MEPC    = 2;
localparam CSR_MRET    = 3;
localparam CSR_MCAUSE  = 4;

reg  [1:0]  int_state;
reg  [2:0]  csr_state;
reg  [63:0] mepc_wdata;
reg  [63:0] mcause_wdata;

wire op_ecall   = i_expt_info[2];
wire op_ebreak  = i_expt_info[1];
wire op_mret    = i_expt_info[0];



//------Exception or Interrupt Sate transition----
always @(*) begin
    if(op_ecall || op_ebreak) begin
        int_state = INT_EXPT; // envirionment call or break
    end
    else if (i_global_int_en &
            ((i_timer_int & i_mtime_int_en) |
             (i_timer_int & i_mtime_int_pend)) ) begin

        int_state = INT_TIME; // timer interrupt
    end
    else if (op_mret) begin
        int_state = INT_MRET; // machine return
    end
    else begin
        int_state = INT_IDLE;
    end
end

//-------Write CSR state transition---------
always @(posedge clk) begin
    if(~rst_n) begin
        csr_state <= CSR_IDLE;
    end
    else begin
        case (csr_state)

            CSR_IDLE : begin
                if (int_state == INT_EXPT)
                    csr_state <= CSR_MEPC;

                else if (int_state == INT_TIME)
                    csr_state <= CSR_MEPC;

                else if (int_state == INT_MRET)
                    csr_state <= CSR_MRET;
            end

            CSR_MEPC :
                    csr_state <= CSR_MSTATUS;

            CSR_MSTATUS :
                    csr_state <= CSR_MCAUSE;

            CSR_MCAUSE :
                    csr_state <= CSR_IDLE;

            CSR_MRET :
                    csr_state <= CSR_IDLE;

            default :
                    csr_state <= CSR_IDLE;
        endcase
    end
end

//--------mepc mcause wdata------
always @(posedge clk) begin
    if(~rst_n) begin
        mepc_wdata <= 0;
    end
    else if (csr_state == CSR_IDLE) begin

        if (i_branch_jump & (int_state == INT_TIME))
            mepc_wdata <= i_jump_addr;
        else
            mepc_wdata <= i_instr_addr;
    end
end

always @(posedge clk) begin
    if(~rst_n) begin
        mcause_wdata <= 0;
    end
    else if (csr_state == CSR_IDLE) begin

        if (int_state == INT_EXPT) begin

            if (op_ecall)
                mcause_wdata <= 64'd11;

            else if (op_ebreak)
                mcause_wdata <= 64'd3;

            else
                mcause_wdata <= 64'd10;
        end
        else if (int_state == INT_TIME) begin

            mcause_wdata <= 64'h8000_0000_0000_0007;

        end

    end
end

always @(posedge clk) begin
    if(~rst_n) begin
        o_csr_wen   <= 0;
        o_csr_waddr <= 0;
        o_csr_wdata <= 0;
    end
    else begin
        case (csr_state)
            CSR_MEPC : begin
                o_csr_wen   <= 1'b1;
                o_csr_waddr <= `ADDR_MEPC;
                o_csr_wdata <= mepc_wdata;
            end

            CSR_MCAUSE : begin
                o_csr_wen   <= 1'b1;
                o_csr_waddr <= `ADDR_MCAUSE;
                o_csr_wdata <= mcause_wdata;
            end

            CSR_MSTATUS : begin
                o_csr_wen   <= 1'b1;
                o_csr_waddr <= `ADDR_MSTATUS;
                o_csr_wdata <= {i_csr_mstatus[63:4],
                                1'b0, // close global int
                                i_csr_mstatus[2:0]};
            end

            CSR_MRET : begin
                o_csr_wen   <= 1'b1;
                o_csr_waddr <= `ADDR_MSTATUS;
                o_csr_wdata <= {i_csr_mstatus[63:4],
                                i_csr_mstatus[7], // MIE=MPIE
                                i_csr_mstatus[2:0]};
            end

            default : begin
                o_csr_wen   <= 0;
                o_csr_waddr <= 0;
                o_csr_wdata <= 0;
            end
        endcase
    end
end

always @(posedge clk) begin
    if(~rst_n) begin
        o_int_addr  <= 0;
        o_int_valid <= 0;
    end
    else begin
        case (csr_state)
            CSR_MCAUSE : begin
                o_int_addr  <= i_csr_mtvec;
                o_int_valid <= 1'b1;
            end

            CSR_MRET : begin
                o_int_addr  <= i_csr_mepc;
                o_int_valid <= 1'b1;
            end
            default : begin
                o_int_addr  <= 0;
                o_int_valid <= 0;
            end
        endcase
    end
end

assign o_hold =  (int_state != INT_IDLE)
               | (csr_state != CSR_IDLE);

endmodule

// Copyright 2021 LinYouxu, linyouxu1997@foxmail.com
// Last edit: 2021.09.02
// Control and Status Registers File

module ysyx_210238_csr_file (
    input             clk,
    input             rst_n,

    // cpu port
    input             i_cpu_csr_wen,
    input      [11:0] i_cpu_csr_raddr,
    input      [11:0] i_cpu_csr_waddr,
    input      [63:0] i_cpu_csr_wdata,
    output reg [63:0] o_cpu_csr_rdata,

    // clint port
    input             i_clint_csr_wen,
    input      [11:0] i_clint_csr_waddr,
    input      [63:0] i_clint_csr_wdata,

    output     [63:0] o_clint_csr_mtvec,
    output     [63:0] o_clint_csr_mepc,
    output     [63:0] o_clint_csr_mstatus,

    output            o_global_int_en,
    output            o_mtime_int_en,
    output            o_mtime_int_pend,

    // timer port
    input             i_timer_int
);

//---------CSR--------
reg [63:0] mstatus;
reg [63:0] mie;
reg [63:0] mtvec;
reg [63:0] mepc;
reg [63:0] mcause;
reg [63:0] mtval;
reg [63:0] mip;
reg [63:0] mcycle;
reg [63:0] mhartid;


//---------mcycle---------------------------
always @(posedge clk) begin
    if(~rst_n) begin
        mcycle <= 0;
    end
    else begin
        mcycle <= mcycle + 1'b1;
    end
end

//--------------mip------------------------
always @(posedge clk) begin
    if(~rst_n) begin
        mip <= 0;
    end
    else begin
        mip <= {56'b0, i_timer_int, 7'b0};
    end
end

//----------Write CSR-----------------------
always @(posedge clk) begin
    if(~rst_n) begin
        mstatus <= {51'b0, 13'b11_0001_0000000}; // MPP=11, MPIE=1
        mie     <= 0;
        mtvec   <= 0;
        mepc    <= 0;
        mcause  <= 0;
        mtval   <= 0;
        mhartid <= 0;
    end
    else if (i_cpu_csr_wen) begin
        case (i_cpu_csr_waddr)
            `ADDR_MSTATUS : mstatus <= i_cpu_csr_wdata;

            `ADDR_MIE     : mie     <= i_cpu_csr_wdata;

            `ADDR_MTVEC   : mtvec   <= i_cpu_csr_wdata;

            `ADDR_MEPC    : mepc    <= i_cpu_csr_wdata;

            `ADDR_MCAUSE  : mcause  <= i_cpu_csr_wdata;

            `ADDR_MTVAL   : mtval   <= i_cpu_csr_wdata;

            `ADDR_MHARTID : mhartid <= i_cpu_csr_wdata;

            default : begin mstatus <= mstatus;
                            mie     <= mie;
                            mtvec   <= mtvec;
                            mepc    <= mepc;
                            mcause  <= mcause;
                            mtval   <= mtval;
                            mhartid <= mhartid;
            end

        endcase
    end
    else if (i_clint_csr_wen) begin
        case (i_clint_csr_waddr)
            `ADDR_MSTATUS : mstatus <= i_clint_csr_wdata;

            `ADDR_MIE     : mie     <= i_clint_csr_wdata;

            `ADDR_MTVEC   : mtvec   <= i_clint_csr_wdata;

            `ADDR_MEPC    : mepc    <= i_clint_csr_wdata;

            `ADDR_MCAUSE  : mcause  <= i_clint_csr_wdata;

            `ADDR_MTVAL   : mtval   <= i_clint_csr_wdata;

            `ADDR_MHARTID : mhartid <= i_clint_csr_wdata;

            default : begin mstatus <= mstatus;
                            mie     <= mie;
                            mtvec   <= mtvec;
                            mepc    <= mepc;
                            mcause  <= mcause;
                            mtval   <= mtval;
                            mhartid <= mhartid;
            end

        endcase
    end
end

//----------Read CSR---------------------
always @(*) begin
    if (i_cpu_csr_wen & (i_cpu_csr_raddr == i_cpu_csr_waddr)) begin
        o_cpu_csr_rdata = i_cpu_csr_wdata;
    end
    else begin
        case (i_cpu_csr_raddr)
            `ADDR_MSTATUS : o_cpu_csr_rdata = mstatus;

            `ADDR_MIE     : o_cpu_csr_rdata = mie;

            `ADDR_MTVEC   : o_cpu_csr_rdata = mtvec;

            `ADDR_MEPC    : o_cpu_csr_rdata = mepc;

            `ADDR_MCAUSE  : o_cpu_csr_rdata = mcause;

            `ADDR_MTVAL   : o_cpu_csr_rdata = mtval;

            `ADDR_MIP     : o_cpu_csr_rdata = mip;

            `ADDR_MCYCLE  : o_cpu_csr_rdata = mcycle;

            `ADDR_MHARTID : o_cpu_csr_rdata = mhartid;

            default       : o_cpu_csr_rdata = 0;
        endcase
    end
end

assign o_clint_csr_mtvec   = mtvec;
assign o_clint_csr_mepc    = mepc;
assign o_clint_csr_mstatus = mstatus;

assign o_global_int_en     = mstatus[3];
assign o_mtime_int_en      = mie[7];
assign o_mtime_int_pend    = mip[7];

endmodule


// Copyright 2021 LinYouxu, linyouxu1997@foxmail.com
// Last edit: 2021.07.18
// Execute unit
// As known as "EX"


module ysyx_210238_exu(
    // id
    input   [63:0] i_imm,
    input   [63:0] i_rs1_rdata,
    input   [63:0] i_rs2_rdata,
    input   [63:0] i_csr_rdata,
    input   [63:0] i_pc,

    // ex control
    input   [12:0] i_alu_info,
    input   [5:0]  i_csr_info,
    input          i_op2_is_imm,
    input          i_op_is_jal,

    // wb control
    input          i_rd_wen,
    output         o_rd_wen,
    // wb
    input   [4:0]  i_rd_addr,
    output  [63:0] o_rd_data,
    output  [4:0]  o_rd_addr,

    // ls
    output  [63:0] o_mem_addr,
    output  [63:0] o_mem_wdata,
    // ls control
    input   [10:0] i_ls_info,
    input          i_mem_read,
    input          i_mem_write,
    output  [10:0] o_ls_info,
    output         o_mem_read,
    output         o_mem_write,

    // forward control
    input          i_forward_ex_rs1,
    input          i_forward_ex_rs2,
    input          i_forward_ls_rs1,
    input          i_forward_ls_rs2,

    input   [63:0] i_ex_ls_rd_data,
    input   [63:0] i_wbu_rd_wdata,

    // csr
    input          i_csr_wen,
    input   [11:0] i_csr_waddr,
    output  [63:0] o_csr_wdata,
    output         o_csr_wen,
    output  [11:0] o_csr_waddr


);


//---------------Variables declaration------------------------
wire op_alu_or    = i_alu_info[12];
wire op_alu_add   = i_alu_info[11] & ~i_alu_info[0];
wire op_alu_sub   = i_alu_info[10] & ~i_alu_info[0];
wire op_alu_slt   = i_alu_info[ 9];
wire op_alu_sltu  = i_alu_info[ 8];
wire op_alu_xor   = i_alu_info[ 7];
wire op_alu_sll   = i_alu_info[ 6] & ~i_alu_info[0];
wire op_alu_srl   = i_alu_info[ 5] & ~i_alu_info[0];
wire op_alu_sra   = i_alu_info[ 4] & ~i_alu_info[0];
wire op_alu_and   = i_alu_info[ 3];
wire op_alu_lui   = i_alu_info[ 2];
wire op_alu_auipc = i_alu_info[ 1];
wire op_alu_word  = i_alu_info[ 0];
wire op_alu_addw  = i_alu_info[11] & i_alu_info[0];
wire op_alu_subw  = i_alu_info[10] & i_alu_info[0];
wire op_alu_sllw  = i_alu_info[ 6] & i_alu_info[0];
wire op_alu_srlw  = i_alu_info[ 5] & i_alu_info[0];
wire op_alu_sraw  = i_alu_info[ 4] & i_alu_info[0];

wire op_csr_csrrw = i_csr_info[5];
wire op_csr_csrrs = i_csr_info[4];
wire op_csr_csrrc = i_csr_info[3];
wire op_csr_csrrwi= i_csr_info[2];
wire op_csr_csrrsi= i_csr_info[1];
wire op_csr_csrrci= i_csr_info[0];
wire op_csr       = op_csr_csrrw
                  | op_csr_csrrs
                  | op_csr_csrrc
                  | op_csr_csrrwi
                  | op_csr_csrrsi
                  | op_csr_csrrci
                  ;


wire signed [63:0] add_rd_data;
wire signed [63:0] sub_rd_data;
wire        [63:0] slt_rd_data;
wire        [63:0] sltu_rd_data;
wire        [63:0] xor_rd_data;
wire        [63:0] sll_rd_data;
wire        [63:0] srl_rd_data;
wire signed [63:0] sra_rd_data;
wire        [63:0] and_rd_data;
wire        [63:0] or_rd_data;
wire        [63:0] lui_rd_data;
wire signed [63:0] auipc_rd_data;
wire        [63:0] addw_rd_data;
wire        [63:0] subw_rd_data;
wire        [63:0] sllw_rd_data;
wire        [63:0] srlw_rd_data;
wire        [63:0] sraw_rd_data;
wire        [63:0] jal_rd_data;

wire        [31:0] sllw_temp;
wire        [31:0] srlw_temp;
wire signed [31:0] sraw_temp;

wire        [63:0] csrrw_wdata;
wire        [63:0] csrrs_wdata;
wire        [63:0] csrrc_wdata;
wire        [63:0] csrrwi_wdata;
wire        [63:0] csrrsi_wdata;
wire        [63:0] csrrci_wdata;

reg         [63:0] op1;
reg         [63:0] op2;

wire signed [63:0] op1_signed;
wire signed [63:0] op2_signed;

wire        [31:0] op1_word;
wire signed [31:0] op1_word_signed;

wire signed [63:0] pc_signed;

wire op1_lt_op2_signed;
wire op1_lt_op2_unsigned;

wire [5:0] shift_bits;

//-----------------OP-------------------------
always @(*) begin
    case ({i_forward_ex_rs1, i_forward_ls_rs1})
        2'b10   : op1 = i_ex_ls_rd_data;
        2'b01   : op1 = i_wbu_rd_wdata;
        default : op1 = i_rs1_rdata;
    endcase
end

always @(*) begin
    casez ({i_forward_ex_rs2, i_forward_ls_rs2, i_op2_is_imm})
        3'b100  : op2 = i_ex_ls_rd_data;
        3'b010  : op2 = i_wbu_rd_wdata;
        3'b??1  : op2 = i_imm;
        default : op2 = i_rs2_rdata;
    endcase
end

assign op1_signed = $signed(op1);
assign op2_signed = $signed(op2);

assign op1_word        = op1[31:0];
assign op1_word_signed = $signed(op1_word);

assign pc_signed  = $signed(i_pc);
assign shift_bits = op2[5:0];


//----------------ALU---------------------

// add addi
assign add_rd_data   = op1_signed + op2_signed;

// sub subw
assign sub_rd_data   = op1_signed - op2_signed;

// slt slti
assign op1_lt_op2_signed = op1_signed < op2_signed;
assign slt_rd_data       = {{63{1'b0}}, op1_lt_op2_signed};

// sltu sltiu
assign op1_lt_op2_unsigned = op1 < op2;
assign sltu_rd_data        = {{63{1'b0}}, op1_lt_op2_unsigned};

// xor xori
assign xor_rd_data = op1 ^ op2;

// sll slli
assign sll_rd_data = op1 << shift_bits;

// srl srli
assign srl_rd_data = op1 >> shift_bits;

// sra srai
assign sra_rd_data = op1_signed >>> shift_bits;

// and andi
assign and_rd_data = op1 & op2;

// or ori
assign or_rd_data  = op1 | op2;

// lui
assign lui_rd_data = op2;

// auipc
assign auipc_rd_data = pc_signed + op2_signed;

// addw addiw
assign addw_rd_data = {{32{add_rd_data[31]}}, add_rd_data[31:0]};

// subw
assign subw_rd_data = {{32{sub_rd_data[31]}}, sub_rd_data[31:0]};

// sllw slliw
assign sllw_temp    = op1_word << shift_bits[4:0];
assign sllw_rd_data = {{32{sllw_temp[31]}}, sllw_temp};

// srlw srliw
assign srlw_temp    = op1_word >> shift_bits[4:0];
assign srlw_rd_data = {{32{srlw_temp[31]}}, srlw_temp};

// sraw sraiw
assign sraw_temp    = op1_word_signed >>> shift_bits[4:0];
assign sraw_rd_data = {{32{sraw_temp[31]}}, sraw_temp};

// jal
assign jal_rd_data  = i_pc + 4;


//------------------CSR wdata--------------
assign csrrw_wdata  =  i_rs1_rdata;

assign csrrs_wdata  =  i_rs1_rdata | i_csr_rdata;

assign csrrc_wdata  = ~i_rs1_rdata & i_csr_rdata;

assign csrrwi_wdata =  i_imm;

assign csrrsi_wdata =  i_imm | i_csr_rdata;

assign csrrci_wdata = ~i_imm & i_csr_rdata;




//----------output---------------------
assign o_rd_wen  = i_rd_wen;

assign o_rd_addr = i_rd_addr;

assign o_rd_data = ({64{op_alu_add}}   & add_rd_data)
                |  ({64{op_alu_sub}}   & sub_rd_data)
                |  ({64{op_alu_slt}}   & slt_rd_data)
                |  ({64{op_alu_sltu}}  & sltu_rd_data)
                |  ({64{op_alu_xor}}   & xor_rd_data)
                |  ({64{op_alu_sll}}   & sll_rd_data)
                |  ({64{op_alu_srl}}   & srl_rd_data)
                |  ({64{op_alu_sra}}   & sra_rd_data)
                |  ({64{op_alu_and}}   & and_rd_data)
                |  ({64{op_alu_or}}    & or_rd_data)
                |  ({64{op_alu_lui}}   & lui_rd_data)
                |  ({64{op_alu_auipc}} & auipc_rd_data)
                |  ({64{op_alu_addw}}  & addw_rd_data)
                |  ({64{op_alu_subw}}  & subw_rd_data)
                |  ({64{op_alu_sllw}}  & sllw_rd_data)
                |  ({64{op_alu_srlw}}  & srlw_rd_data)
                |  ({64{op_alu_sraw}}  & sraw_rd_data)
                |  ({64{i_op_is_jal}}  & jal_rd_data)
                |  ({64{op_csr}}       & i_csr_rdata)
                ;


assign o_mem_addr  = add_rd_data;
assign o_mem_wdata = i_forward_ls_rs2 ? i_wbu_rd_wdata :
                     i_forward_ex_rs2 ? i_ex_ls_rd_data : i_rs2_rdata;

assign o_ls_info   = i_ls_info;
assign o_mem_read  = i_mem_read;
assign o_mem_write = i_mem_write;

assign o_csr_waddr = i_csr_waddr;
assign o_csr_wen   = i_csr_wen;

assign o_csr_wdata = ({64{op_csr_csrrw }} & csrrw_wdata)
                  |  ({64{op_csr_csrrs }} & csrrs_wdata)
                  |  ({64{op_csr_csrrc }} & csrrc_wdata)
                  |  ({64{op_csr_csrrwi}} & csrrwi_wdata)
                  |  ({64{op_csr_csrrsi}} & csrrsi_wdata)
                  |  ({64{op_csr_csrrci}} & csrrci_wdata)
                  ;

endmodule

module ysyx_210238_fifo_depth_1 #(
    parameter FIFO_WIDTH = 32
)
(
    input                               clk,
    input                               rst_n,
    input                               read,
    input                               write,
    input       [FIFO_WIDTH - 1 : 0]    fifo_in,
    output      [FIFO_WIDTH - 1 : 0]    fifo_out,
    output  reg                         fifo_empty
);

reg     [FIFO_WIDTH - 1 : 0]    fifo_ram  ;

always @(posedge clk) begin
    if(!rst_n) begin
        fifo_empty <= 1'b1;
    end
    else begin
        if(read & ~write) begin
            fifo_empty <= 1'b1;
        end
        else if(~read & write) begin
            fifo_empty <= 1'b0;
        end
    end
end

always @(posedge clk) begin
    if(!rst_n) begin
        fifo_ram <= 0;
    end
    else if (fifo_empty & write) begin
        fifo_ram <= fifo_in;
    end
end

assign fifo_out = fifo_ram;


endmodule

// Copyright 2021 LinYouxu, linyouxu1997@foxmail.com
// Last edit: 2021.07.26
// Hazard detect unit

module ysyx_210238_hdu (
    // data hazard
    input  [4:0] i_id_ex_rs1,
    input  [4:0] i_id_ex_rs2,
    input        i_id_ex_rs1_cen,
    input        i_id_ex_rs2_cen,

    input  [4:0] i_if_id_rs1,
    input  [4:0] i_if_id_rs2,
    input        i_if_id_rs1_cen,
    input        i_if_id_rs2_cen,

    input  [4:0] i_id_ex_rd,
    input  [4:0] i_ex_ls_rd,
    input  [4:0] i_ls_wb_rd,
    input        i_ex_ls_rd_wen,
    input        i_ls_wb_rd_wen,
    input        i_id_ex_mem_read,
    input        i_ls_wb_mem_read,

    output       o_forward_ex_rs1,
    output       o_forward_ex_rs2,
    output       o_forward_ls_rs1,
    output       o_forward_ls_rs2,
    output       o_load_use,

    // control hazard
    input        i_op_is_branch,
    input        i_id_ex_rd_wen,
    input        i_ex_ls_mem_read,

    output       o_ctrl_forward_ex_rs1,
    output       o_ctrl_forward_ex_rs2,
    output       o_ctrl_forward_ls_rs1,
    output       o_ctrl_forward_ls_rs2,
    output       o_ctrl_load_use

);

//--------------data hazard detect-------------------
assign o_forward_ex_rs1 = i_ex_ls_rd_wen
                        & (i_ex_ls_rd != 5'b0)
                        & (i_ex_ls_rd == i_id_ex_rs1)
                        //& i_id_ex_rs1_cen
                        ;

assign o_forward_ex_rs2 = i_ex_ls_rd_wen
                        & (i_ex_ls_rd != 5'b0)
                        & (i_ex_ls_rd == i_id_ex_rs2)
                        //& i_id_ex_rs2_cen
                        ;

assign o_forward_ls_rs1 = i_ls_wb_rd_wen
                        & (i_ls_wb_rd != 5'b0)
                        & (i_ls_wb_rd == i_id_ex_rs1)
                        & ((i_ex_ls_rd != i_id_ex_rs1) | i_ls_wb_mem_read)
                        //& i_id_ex_rs1_cen
                        ;

assign o_forward_ls_rs2 = i_ls_wb_rd_wen
                        & (i_ls_wb_rd != 5'b0)
                        & (i_ls_wb_rd == i_id_ex_rs2)
                        & ((i_ex_ls_rd != i_id_ex_rs2) | i_ls_wb_mem_read)
                        //& i_id_ex_rs2_cen
                        ;

assign o_load_use = i_id_ex_mem_read
                  & ( (i_if_id_rs1_cen & (i_if_id_rs1 == i_id_ex_rd))
                    | (i_if_id_rs2_cen & (i_if_id_rs2 == i_id_ex_rd)) )
                  ;


//--------------control hazard detect-------------------
assign o_ctrl_forward_ex_rs1 = i_op_is_branch
                            &  i_id_ex_rd_wen
                            & (i_id_ex_rd != 5'b0)
                            & (i_id_ex_rd == i_if_id_rs1)
                            ;

assign o_ctrl_forward_ex_rs2 = i_op_is_branch
                            &  i_id_ex_rd_wen
                            & (i_id_ex_rd != 5'b0)
                            & (i_id_ex_rd == i_if_id_rs2)
                            ;

assign o_ctrl_forward_ls_rs1 = i_op_is_branch
                            &  i_ex_ls_rd_wen
                            & (i_ex_ls_rd != 5'b0)
                            & (i_ex_ls_rd == i_if_id_rs1)
                            & ((i_id_ex_rd != i_if_id_rs1) | i_ex_ls_mem_read)
                            ;

assign o_ctrl_forward_ls_rs2 = i_op_is_branch
                            &  i_ex_ls_rd_wen
                            & (i_ex_ls_rd != 5'b0)
                            & (i_ex_ls_rd == i_if_id_rs2)
                            & ((i_id_ex_rd != i_if_id_rs2) | i_ex_ls_mem_read)
                            ;

assign o_ctrl_load_use = i_op_is_branch
                      &  i_id_ex_mem_read
                      &  ( (i_if_id_rs1 == i_id_ex_rd)
                         | (i_if_id_rs2 == i_id_ex_rd) )
                      ;

endmodule

// Copyright 2021 LinYouxu, linyouxu1997@foxmail.com
// Last edit: 2021.08.31
// Instruction Decode Unit module
// Pure combinational logic
// branch and jump at id

module ysyx_210238_idu(
    // if
    input [31:0]  i_instr,
    input [63:0]  i_instr_addr,
    output[63:0]  o_next_pc,

    // if control
    output        o_branch_jump,

    // reg_file
    input  [63:0] i_rs1_rdata,
    input  [63:0] i_rs2_rdata,
    output [4:0]  o_rs1_addr,
    output [4:0]  o_rs2_addr,
    output        o_rs1_cen,
    output        o_rs2_cen,

    // ex
    output [63:0] o_imm,
    output [63:0] o_rs1_rdata,
    output [63:0] o_rs2_rdata,
    output [63:0] o_pc,

    // ex control
    output [12:0] o_alu_info,
    output [8:0]  o_csr_info,
    output        o_op2_is_imm,
    output        o_op_is_jal,

    // ls control
    output [10:0] o_ls_info,
    output        o_mem_read,
    output        o_mem_write,

    // wb control
    output        o_rd_wen,
    output [4:0]  o_rd_addr,

    // ctrl hazard
    output        o_op_is_branch,
    input         i_forward_ex_rs1,
    input         i_forward_ex_rs2,
    input         i_forward_ls_rs1,
    input         i_forward_ls_rs2,
    input         i_ex_ls_mem_read,

    input [63:0]  i_exu_rd_data,
    input [63:0]  i_lsu_rd_data,
    input [63:0]  i_lsu_mem_rdata,

    // csr
    input  [63:0] i_csr_rdata,
    output        o_csr_wen,
    output [63:0] o_csr_rdata,
    output [11:0] o_csr_raddr,
    output [11:0] o_csr_waddr

);


//----------Pre decode--------------
wire [6:0]  opcode = i_instr[6:0];
wire [4:0]  rd     = i_instr[11:7];
wire [4:0]  rs1    = i_instr[19:15];
wire [4:0]  rs2    = i_instr[24:20];
wire [2:0]  func3  = i_instr[14:12];
wire [6:0]  func7  = i_instr[31:25];
wire [11:0] csr    = i_instr[31:20];


wire instr_op_is_imm   = (opcode == `INSTR_I);
wire instr_op_is_alu   = (opcode == `INSTR_R);
wire instr_op_is_load  = (opcode == `INSTR_L);
wire instr_op_is_store = (opcode == `INSTR_S);
wire instr_op_is_jal   = (opcode == `INSTR_JAL);
wire instr_op_is_jalr  = (opcode == `INSTR_JALR);
wire instr_op_is_branch= (opcode == `INSTR_B);
wire instr_op_is_lui   = (opcode == `INSTR_LUI);
wire instr_op_is_auipc = (opcode == `INSTR_AUIPC);
wire instr_op_is_fence = (opcode == `INSTR_FENCE);
wire instr_op_is_sys   = (opcode == `INSTR_SYS);
wire instr_op_is_word  = (opcode == `INSTR_WORD);
wire instr_op_is_wordi = (opcode == `INSTR_WORDI);


wire func3_is_000 = (func3 == 3'b000);
wire func3_is_001 = (func3 == 3'b001);
wire func3_is_010 = (func3 == 3'b010);
wire func3_is_011 = (func3 == 3'b011);
wire func3_is_100 = (func3 == 3'b100);
wire func3_is_101 = (func3 == 3'b101);
wire func3_is_110 = (func3 == 3'b110);
wire func3_is_111 = (func3 == 3'b111);


wire func7_is_0000000 = (func7 == 7'b0000000);
wire func7_is_0100000 = (func7 == 7'b0100000);
wire func7_is_0011000 = (func7 == 7'b0011000);



//--------------ALU and imm ALU imm Instruction------------------------
wire instr_add    = instr_op_is_alu & func3_is_000 & func7_is_0000000;
wire instr_and    = instr_op_is_alu & func3_is_111 & func7_is_0000000;
wire instr_or     = instr_op_is_alu & func3_is_110 & func7_is_0000000;
wire instr_sll    = instr_op_is_alu & func3_is_001 & func7_is_0000000;
wire instr_slt    = instr_op_is_alu & func3_is_010 & func7_is_0000000;
wire instr_sltu   = instr_op_is_alu & func3_is_011 & func7_is_0000000;
wire instr_sra    = instr_op_is_alu & func3_is_101 & func7_is_0100000;
wire instr_srl    = instr_op_is_alu & func3_is_101 & func7_is_0000000;
wire instr_sub    = instr_op_is_alu & func3_is_000 & func7_is_0100000;
wire instr_xor    = instr_op_is_alu & func3_is_100 & func7_is_0000000;
wire instr_subw   = instr_op_is_word & func3_is_000 & func7_is_0100000;
wire instr_srlw   = instr_op_is_word & func3_is_101 & func7_is_0000000;
wire instr_sraw   = instr_op_is_word & func3_is_101 & func7_is_0100000;
wire instr_addw   = instr_op_is_word & func3_is_000 & func7_is_0000000;
wire instr_sllw   = instr_op_is_word & func3_is_001 & func7_is_0000000;

wire instr_tmp_0  = (i_instr[31:26] == 6'b000000);
wire instr_tmp_1  = (i_instr[31:26] == 6'b010000);

wire instr_addi   = instr_op_is_imm & func3_is_000;
wire instr_andi   = instr_op_is_imm & func3_is_111;
wire instr_ori    = instr_op_is_imm & func3_is_110;
wire instr_slli   = instr_op_is_imm & func3_is_001 & instr_tmp_0;
wire instr_slti   = instr_op_is_imm & func3_is_010;
wire instr_sltiu  = instr_op_is_imm & func3_is_011;
wire instr_srai   = instr_op_is_imm & func3_is_101 & instr_tmp_1;
wire instr_srli   = instr_op_is_imm & func3_is_101 & instr_tmp_0;
wire instr_xori   = instr_op_is_imm & func3_is_100;
wire instr_srliw  = instr_op_is_wordi & func3_is_101 & instr_tmp_0;
wire instr_sraiw  = instr_op_is_wordi & func3_is_101 & instr_tmp_1;
wire instr_addiw  = instr_op_is_wordi & func3_is_000;
wire instr_slliw  = instr_op_is_wordi & func3_is_001 & instr_tmp_0;


//---------Load and store-----------------------
wire instr_lb     = instr_op_is_load & func3_is_000;
wire instr_lbu    = instr_op_is_load & func3_is_100;
wire instr_ld     = instr_op_is_load & func3_is_011;
wire instr_lh     = instr_op_is_load & func3_is_001;
wire instr_lhu    = instr_op_is_load & func3_is_101;
wire instr_lw     = instr_op_is_load & func3_is_010;
wire instr_lwu    = instr_op_is_load & func3_is_110;
wire instr_sb     = instr_op_is_store & func3_is_000;
wire instr_sd     = instr_op_is_store & func3_is_011;
wire instr_sh     = instr_op_is_store & func3_is_001;
wire instr_sw     = instr_op_is_store & func3_is_010;
wire instr_load   = instr_op_is_load;
wire instr_store  = instr_op_is_store;


//-------------Exception or CSR----------------------
wire instr_ebreak = instr_op_is_sys & func3_is_000 & func7_is_0000000 & (rs2 == 5'b1);
wire instr_ecall  = instr_op_is_sys & func3_is_000 & func7_is_0000000 & (rs2 == 5'b0);
wire instr_mret   = instr_op_is_sys & func3_is_000 & func7_is_0011000 & (rs2 == 5'b10);

wire instr_csrrw  = instr_op_is_sys & func3_is_001;
wire instr_csrrs  = instr_op_is_sys & func3_is_010;
wire instr_csrrc  = instr_op_is_sys & func3_is_011;
wire instr_csrrwi = instr_op_is_sys & func3_is_101;
wire instr_csrrsi = instr_op_is_sys & func3_is_110;
wire instr_csrrci = instr_op_is_sys & func3_is_111;

wire instr_csri    =  instr_csrrwi
                    | instr_csrrsi
                    | instr_csrrci
                    ;

//--------------Branch jal jalr----------------
wire instr_beq    = instr_op_is_branch & func3_is_000;
wire instr_bge    = instr_op_is_branch & func3_is_101;
wire instr_bgeu   = instr_op_is_branch & func3_is_111;
wire instr_blt    = instr_op_is_branch & func3_is_100;
wire instr_bltu   = instr_op_is_branch & func3_is_110;
wire instr_bne    = instr_op_is_branch & func3_is_001;
wire instr_jal    = instr_op_is_jal;
wire instr_jalr   = instr_op_is_jalr;


//-----------Instruction's type-----------------------
wire instr_type_i = instr_op_is_imm
                  | instr_op_is_jalr
                  | instr_op_is_load
                  | instr_op_is_wordi;     // I type

wire instr_type_s = instr_op_is_store;     // S type

wire instr_type_b = instr_op_is_branch;    // B type

wire instr_type_u = instr_op_is_lui
                  | instr_op_is_auipc;     // U type

wire instr_type_j = instr_op_is_jal;       // J type


//-------------operation is ALU ------------------------
wire op_alu_add   = instr_add | instr_addi | instr_addw | instr_addiw;
wire op_alu_sub   = instr_sub | instr_subw;
wire op_alu_slt   = instr_slt | instr_slti;
wire op_alu_sltu  = instr_sltu| instr_sltiu;
wire op_alu_xor   = instr_xor | instr_xori;
wire op_alu_sll   = instr_sll | instr_slli | instr_sllw | instr_slliw;
wire op_alu_srl   = instr_srl | instr_srli | instr_srlw | instr_srliw;
wire op_alu_sra   = instr_sra | instr_srai | instr_sraw | instr_sraiw;
wire op_alu_and   = instr_and | instr_andi;
wire op_alu_or    = instr_or  | instr_ori;

wire op_alu_lui   = instr_op_is_lui;

wire op_alu_auipc = instr_op_is_auipc;

wire op_alu_word  = instr_op_is_word | instr_op_is_wordi;

wire [12:0]op_alu_info = {
                    op_alu_or,
                    op_alu_add,
                    op_alu_sub,
                    op_alu_slt,
                    op_alu_sltu,
                    op_alu_xor,
                    op_alu_sll,
                    op_alu_srl,
                    op_alu_sra,
                    op_alu_and,
                    op_alu_lui,
                    op_alu_auipc,
                    op_alu_word
                    };


//-----------operation is load/store--------
wire [12:0] op_ls_info = {
                    instr_load,
                    instr_store,
                    instr_lb ,
                    instr_lbu,
                    instr_ld ,
                    instr_lh ,
                    instr_lhu,
                    instr_lw ,
                    instr_lwu,
                    instr_sb ,
                    instr_sd ,
                    instr_sh ,
                    instr_sw
                    };


//-------------operation is Exception or CSR----------
wire [8:0] op_csr_info = {
                         instr_ecall,
                         instr_ebreak,
                         instr_mret,
                         instr_csrrw,
                         instr_csrrs,
                         instr_csrrc,
                         instr_csrrwi,
                         instr_csrrsi,
                         instr_csrrci
                        };


//---------Immediate number---------------

wire op2_is_imm =     instr_type_i
                    | instr_type_s
                    | instr_type_u
                    | instr_type_j;

wire [63:0] i_imm = {{52{i_instr[31]}},
                         i_instr[31:20]};

wire [63:0] s_imm = {{52{i_instr[31]}},
                         i_instr[31:25],
                         i_instr[11:7]};

wire [63:0] b_imm = {{51{i_instr[31]}},
                         i_instr[31],
                         i_instr[7],
                         i_instr[30:25],
                         i_instr[11:8],
                         1'b0};

wire [63:0] u_imm = {{32{i_instr[31]}},
                         i_instr[31:12],
                         12'b0};

wire [63:0] j_imm = {{43{i_instr[31]}},
                         i_instr[31],
                         i_instr[19:12],
                         i_instr[20],
                         i_instr[30:21],
                         1'b0};

wire [63:0] csr_imm = {59'b0, rs1};

wire [63:0] imm =
                  ({64{instr_type_i}} & i_imm)
                | ({64{instr_type_s}} & s_imm)
                | ({64{instr_type_b}} & b_imm)
                | ({64{instr_type_u}} & u_imm)
                | ({64{instr_type_j}} & j_imm)
                | ({64{instr_csri}}   & csr_imm)
                ;


//------------branch/jal/jalr------------

wire signed [63:0] imm_signed = $signed(imm);
wire signed [63:0] pc_signed  = $signed(i_instr_addr);

reg         [63:0] branch_op1;
reg         [63:0] branch_op2;
wire signed [63:0] branch_op1_signed = $signed(branch_op1);
wire signed [63:0] branch_op2_signed = $signed(branch_op2);

wire               forward_lsu_rs1_rd;
wire               forward_lsu_rs2_rd;
wire               forward_lsu_rs1_mem;
wire               forward_lsu_rs2_mem;

assign forward_lsu_rs1_rd = ~i_ex_ls_mem_read & i_forward_ls_rs1;
assign forward_lsu_rs2_rd = ~i_ex_ls_mem_read & i_forward_ls_rs2;
assign forward_lsu_rs1_mem = i_ex_ls_mem_read & i_forward_ls_rs1;
assign forward_lsu_rs2_mem = i_ex_ls_mem_read & i_forward_ls_rs2;


always @(*) begin
case ({i_forward_ex_rs1, forward_lsu_rs1_rd, forward_lsu_rs1_mem})
    3'b100  : branch_op1 = i_exu_rd_data;
    3'b010  : branch_op1 = i_lsu_rd_data;
    3'b001  : branch_op1 = i_lsu_mem_rdata;
    default : branch_op1 = i_rs1_rdata;
endcase
end

always @(*) begin
case ({i_forward_ex_rs2, forward_lsu_rs2_rd, forward_lsu_rs2_mem})
    3'b100  : branch_op2 = i_exu_rd_data;
    3'b010  : branch_op2 = i_lsu_rd_data;
    3'b001  : branch_op2 = i_lsu_mem_rdata;
    default : branch_op2 = i_rs2_rdata;
endcase
end

// beq
wire flag_beq = instr_beq & (branch_op1 == branch_op2);

// bne
wire flag_bne = instr_bne & (branch_op1 != branch_op2);

// blt
wire flag_blt = instr_blt & (branch_op1_signed < branch_op2_signed);

// bge
wire flag_bge = instr_bge & (branch_op1_signed >= branch_op2_signed);

// bltu
wire flag_bltu = instr_bltu & (branch_op1 < branch_op2);

// bgeu
wire flag_bgeu = instr_bgeu & (branch_op1 >= branch_op2);

wire flag_branch = flag_beq | flag_bne | flag_blt
                  |flag_bge | flag_bltu| flag_bgeu;


// branch jal next pc
wire signed[63:0] bjal_next_pc = pc_signed + imm_signed;

// jalr
wire signed[63:0] temp_jalr_next_pc = branch_op1_signed + imm_signed;
wire signed[63:0] jalr_next_pc = {temp_jalr_next_pc[63:1], 1'b0};



//-----------Output----------------
assign o_branch_jump = flag_branch | instr_jal | instr_jalr;

assign o_next_pc = ({64{flag_branch | instr_jal}} & bjal_next_pc)
                |  ({64{instr_jalr}}              & jalr_next_pc);

assign o_rs1_addr   = rs1;
assign o_rs2_addr   = rs2;
assign o_rs1_cen    = ~(instr_type_u | instr_type_j);
assign o_rs2_cen    = ~(instr_type_u | instr_type_j | instr_type_i);

assign o_imm        = imm;
assign o_rs1_rdata  = i_rs1_rdata;
assign o_rs2_rdata  = i_rs2_rdata;
assign o_pc         = i_instr_addr;

assign o_alu_info   = op_alu_info;
assign o_csr_info   = op_csr_info;
assign o_op2_is_imm = op2_is_imm;
assign o_op_is_jal  = instr_jal | instr_jalr;

assign o_ls_info    = op_ls_info[10:0];
assign o_mem_read   = op_ls_info[12];
assign o_mem_write  = op_ls_info[11];

assign o_rd_wen     = (~instr_type_s) &
                      (~instr_type_b) &
                      (~instr_ebreak) &
                      (~instr_ecall ) &
                      (~instr_mret  ) &
                      (~instr_op_is_fence) &
                      ~(i_instr == 32'd0)
                    ;

assign o_rd_addr    = rd;

assign o_op_is_branch = instr_op_is_branch | instr_op_is_jalr;


assign o_csr_raddr  = csr;
assign o_csr_waddr  = csr;
assign o_csr_rdata  = i_csr_rdata;

assign o_csr_wen    = instr_csrrw
                    | instr_csrrs
                    | instr_csrrc;


endmodule

// Copyright 2021 LinYouxu, linyouxu1997@foxmail.com
// Last edit: 2021.08.18
// Instruction Fetch unit

module ysyx_210238_ifu(
    input            clk,
    input            rst_n,

    // ram port
    output    [63:0] o_ram_addr,
    output           o_ram_valid,
    // ready also indicates rdata is valid
    input            i_ram_ready,
    input     [31:0] i_ram_rdata,
    output    [2:0]  o_ram_size,

    // cpu port
    input            i_branch_jump,
    input            i_hold,
    input     [63:0] i_next_pc,
    output    [31:0] o_instr,
    output           o_instr_valid,
    output    [63:0] o_pc,

    // clint port
    input            i_int_valid,
    input     [63:0] i_int_addr
);

reg [1:0]  state;

localparam IDLE = 2'd0;
localparam START= 2'd1;
localparam REQ  = 2'd2;
localparam WAIT = 2'd3;

//-------------State machine-----------
always @(posedge clk) begin
    if(~rst_n) begin
        state <= IDLE;
    end
    else begin
        case (state)
            IDLE : begin
                state <= START;
            end

            START : begin
                if (i_hold)
                    state <= START;
                else
                    state <= REQ;
            end

            REQ  : begin
                if (i_branch_jump | i_int_valid)
                    state <= REQ;
                else
                    state <= WAIT;
            end

            WAIT : begin
                if (i_hold)
                    state <= START;
                else if (i_ram_ready)
                    state <= REQ;
                else
                    state <= WAIT;
            end

            default : state <= IDLE;
        endcase
    end
end

//--------------output----------------------
reg  [63:0] ram_addr_r0;
reg  [63:0] ram_addr_r1;
reg         ram_valid_r0;

always @(posedge clk) begin
    if(~rst_n) begin
        ram_addr_r0 <= `PC_START;
    end

    else if(i_hold) begin
        ram_addr_r0 <= ram_addr_r0;
    end

    else if (i_int_valid) begin
        ram_addr_r0 <= i_int_addr;
    end

    else if(i_branch_jump) begin
        ram_addr_r0 <= i_next_pc;
    end

    // wait for ready
    else if(i_ram_ready) begin
        ram_addr_r0 <= ram_addr_r0 + 4;
    end
end

always @(posedge clk) begin
    if(~rst_n) begin
        ram_addr_r1 <= 0;
    end
    else begin
        ram_addr_r1 <= ram_addr_r0;
    end
end

always @(posedge clk) begin
    if(~rst_n) begin
        ram_valid_r0 <= 0;
    end
    else begin
        ram_valid_r0 <= (state == REQ) &
                        ~i_branch_jump &
                        ~i_hold;
    end
end

assign o_ram_addr    = ram_addr_r1;

assign o_ram_valid   = ram_valid_r0;

assign o_ram_size    = 3'b010;

assign o_pc          = o_ram_addr;

assign o_instr       = i_ram_rdata;

assign o_instr_valid = i_ram_ready & ~i_hold;

endmodule

// Copyright 2021 LinYouxu, linyouxu1997@foxmail.com
// Last edit: 2021.09.07
// Load Store unit
// as known as "MEM"


module ysyx_210238_lsu(
    input            clk,
    input            rst_n,

    // ls
    input     [63:0] i_mem_addr,
    input     [63:0] i_mem_wdata,
    input     [10:0] i_ls_info,
    input            i_mem_read,
    input            i_mem_write,

    // ram port
    output    [63:0] o_ram_addr,
    output           o_ram_wen,
    output           o_ram_valid,
    // ready also indicates rdata is valid
    input            i_ram_ready,
    output    [63:0] o_ram_wdata,
    output    [2:0]  o_ram_size,
    input     [63:0] i_ram_rdata,

    // wb
    input     [63:0] i_rd_data,
    input     [4:0]  i_rd_addr,
    output    [63:0] o_rd_data,
    output    [4:0]  o_rd_addr,
    output    [63:0] o_mem_rdata,
    // wb control
    input            i_rd_wen,
    output           o_rd_wen,
    output           o_mem_read,

    output           o_hold
);


wire op_ls_lb  = i_ls_info[10];
wire op_ls_lbu = i_ls_info[9];
wire op_ls_ld  = i_ls_info[8];
wire op_ls_lh  = i_ls_info[7];
wire op_ls_lhu = i_ls_info[6];
wire op_ls_lw  = i_ls_info[5];
wire op_ls_lwu = i_ls_info[4];
wire op_ls_sb  = i_ls_info[3];
wire op_ls_sd  = i_ls_info[2];
wire op_ls_sh  = i_ls_info[1];
wire op_ls_sw  = i_ls_info[0];

wire [63:0] lb_rdata;
wire [63:0] lh_rdata;
wire [63:0] lw_rdata;
wire [63:0] lbu_rdata;
wire [63:0] lhu_rdata;
wire [63:0] lwu_rdata;
wire [63:0] rdata;

wire [63:0] sb_wdata;
wire [63:0] sh_wdata;
wire [63:0] sw_wdata;
wire [63:0] wdata;

wire [2:0]  b_size = 3'b000;
wire [2:0]  h_size = 3'b001;
wire [2:0]  w_size = 3'b010;
wire [2:0]  d_size = 3'b011;
wire [2:0]  size;

wire        i_mem_cen = i_mem_read | i_mem_write;

reg  [1:0]  state;

localparam IDLE = 2'd0;
localparam REQ  = 2'd1;
localparam WAIT = 2'd2;

//-------------State machine-----------
always @(posedge clk) begin
    if(~rst_n) begin
        state <= IDLE;
    end
    else begin
        case (state)
            IDLE : begin
                if (i_mem_cen)
                    state <= REQ;
                else
                    state <= IDLE;
                end
            REQ  : begin
                if (i_ram_ready)
                    state <= IDLE;
                else
                    state <= WAIT;
                end
            WAIT : begin
                if (i_ram_ready)
                    state <= IDLE;
                else
                    state <= WAIT;
                end
            default : state <= IDLE;
        endcase
    end
end

//---------------------------store-----------------------------
assign sb_wdata = {56'd0, i_mem_wdata[7:0]};

assign sh_wdata = {48'b0, i_mem_wdata[15:0]};

assign sw_wdata = {32'b0, i_mem_wdata[31:0]};


assign wdata = ({64{op_ls_sb}} & sb_wdata )

              |({64{op_ls_sh}} & sh_wdata )

              |({64{op_ls_sw}} & sw_wdata )

              |({64{op_ls_sd}} & i_mem_wdata)
                ;

assign size  = ({3{op_ls_sb | op_ls_lb | op_ls_lbu}} & b_size )

              |({3{op_ls_sh | op_ls_lh | op_ls_lhu}} & h_size )

              |({3{op_ls_sw | op_ls_lw | op_ls_lwu}} & w_size )

              |({3{op_ls_sd | op_ls_ld}}             & d_size)
            ;

//------------------------load----------------------------------------
assign lb_rdata  = {{56{i_ram_rdata[7]}}, i_ram_rdata[7:0]};
assign lbu_rdata = { 56'b0,               i_ram_rdata[7:0]};

assign lh_rdata  = {{48{i_ram_rdata[15]}},i_ram_rdata[15:0]};
assign lhu_rdata = { 48'b0,               i_ram_rdata[15:0]};

assign lw_rdata  = {{32{i_ram_rdata[31]}},i_ram_rdata[31:0]};
assign lwu_rdata = { 32'b0,               i_ram_rdata[31:0]};

assign rdata = ({64{op_ls_lb }} & lb_rdata )

            |  ({64{op_ls_lbu}} & lbu_rdata )

            |  ({64{op_ls_lh }} & lh_rdata )

            |  ({64{op_ls_lhu}} & lhu_rdata )

            |  ({64{op_ls_lw }} & lw_rdata )

            |  ({64{op_ls_lwu}} & lwu_rdata )

            |  ({64{op_ls_ld }} & i_ram_rdata)
                  ;


//---------------ram port-------------
assign o_ram_addr  = i_mem_addr;

assign o_ram_wen   = i_mem_write;

assign o_ram_valid = (state == REQ);

assign o_ram_wdata = wdata;

assign o_ram_size  = size;

//--------------cpu port------------
assign o_rd_data   = i_rd_data;

assign o_rd_addr   = i_rd_addr;

assign o_rd_wen    = i_mem_read ?
                     i_ram_ready : i_rd_wen;

assign o_mem_read  = i_mem_read;

assign o_mem_rdata = rdata;

//-----------pipeline hold---------
assign o_hold = i_mem_cen & ~i_ram_ready;

endmodule

// Copyright 2021 LinYouxu, linyouxu1997@foxmail.com
// Last edit: 2021.07.19
// Pipeline register

module ysyx_210238_pipeline_reg #(parameter N = 1)
    (
    input              clk,
    input              rst_n,
    input              clear,
    input              hold,
    input      [N-1:0] din,
    output reg [N-1:0] dout
);

always @(posedge clk) begin
    if (~rst_n)
        dout <= {N{1'b0}};
    else if (clear)
        dout <= {N{1'b0}};
    else if (hold)
        dout <= dout;
    else
        dout <= din;
end


endmodule

// Copyright 2021 LinYouxu, linyouxu1997@foxmail.com
// Last edit: 2021.08.18
// Access RAM arbiter

module ysyx_210238_ram_arbiter (
    input clk,
    input rst_n,

    // ifu port
    input     [63:0] i_ifu_addr,
    input            i_ifu_valid,
    output           o_ifu_ready,
    input     [2:0]  i_ifu_size,
    output    [31:0] o_ifu_rdata,

    // lsu port
    input     [63:0] i_lsu_addr,
    input            i_lsu_wen,
    input            i_lsu_valid,
    output           o_lsu_ready,
    input     [63:0] i_lsu_wdata,
    input     [2:0]  i_lsu_size,
    output    [63:0] o_lsu_rdata,

    // timer port
    output    [63:0] o_timer_addr,
    output           o_timer_wen,
    output           o_timer_valid,
    output    [63:0] o_timer_wdata,

    input     [63:0] i_timer_rdata,

    // ram port
    output reg[63:0] o_ram_addr,
    output reg       o_ram_wen,
    output reg       o_ram_valid,
    input            i_ram_ready,

    output reg[63:0] o_ram_wdata,
    output reg[2:0]  o_ram_size,

    input     [63:0] i_ram_rdata
);

localparam IDLE    = 3'd0;
localparam IF_REQ  = 3'd1;
localparam IF_WAIT = 3'd2;
localparam LS_REQ  = 3'd3;
localparam LS_WAIT = 3'd4;

reg  [2:0]  cur_state;
reg  [2:0]  nxt_state;

wire        ifu_read;
wire        ifu_write;

//i_ifu_addr[63:0], i_ifu_size[2:0]
wire [66:0] ifu_fifo_in;
wire [66:0] ifu_fifo_out;
wire [63:0] ifu_addr;
wire [2:0]  ifu_size;
wire        ifu_empty;
wire        lsu_read;
wire        lsu_write;

//i_lsu_wen[0], i_lsu_wdata[63:0],
//i_lsu_addr[63:0], i_lsu_size[2:0]
wire [131:0] lsu_fifo_in;
wire [131:0] lsu_fifo_out;
wire         lsu_wen;
wire [63:0]  lsu_wdata;
wire [63:0]  lsu_addr;
wire [2:0]   lsu_size;
wire         lsu_empty;

wire         req_to_timer;

reg          req_to_ifu;

//-----------state machine-----------
always @(posedge clk) begin
    if(~rst_n) begin
        cur_state <= IDLE;
    end
    else begin
        cur_state <= nxt_state;
    end
end

always @(posedge clk) begin
    if(~rst_n) begin
        req_to_ifu <= 0;
    end
    else if (cur_state == LS_REQ
          || cur_state == IF_REQ) begin

        req_to_ifu <= ~req_to_ifu;
    end
end

always @(*) begin
    case (cur_state)
        IDLE : begin
            if (req_to_ifu) begin
                if (~ifu_empty)
                    nxt_state = IF_REQ;
                else if (~lsu_empty)
                    nxt_state = LS_REQ;
                else
                    nxt_state = IDLE;
            end
            else begin
                if (~lsu_empty)
                    nxt_state = LS_REQ;
                else if (~ifu_empty)
                    nxt_state = IF_REQ;
                else
                    nxt_state = IDLE;
            end
        end

        IF_REQ : begin
            if (i_ram_ready & ~lsu_empty)
                nxt_state = LS_REQ;

            else if (i_ram_ready)
                nxt_state = IDLE;
            else
                nxt_state = IF_WAIT;
        end

        IF_WAIT : begin
            if (i_ram_ready & ~lsu_empty)
                nxt_state = LS_REQ;

            else if (i_ram_ready)
                nxt_state = IDLE;
            else
                nxt_state = IF_WAIT;
        end

        LS_REQ : begin
            if (req_to_timer)
                nxt_state = IDLE;

            else if (i_ram_ready & ~ifu_empty)
                nxt_state = IF_REQ;

            else if (i_ram_ready)
                nxt_state = IDLE;
            else
                nxt_state = LS_WAIT;
        end

        LS_WAIT : begin
            if (i_ram_ready & ~ifu_empty)
                nxt_state = IF_REQ;

            else if (i_ram_ready)
                nxt_state = IDLE;
            else
                nxt_state = LS_WAIT;
        end

        default : nxt_state = IDLE;
    endcase
end

// ---------req of ifu and lsu into fifo-------
assign ifu_write   = i_ifu_valid;
assign ifu_read    = (nxt_state == IF_REQ);

assign ifu_fifo_in = {i_ifu_addr, i_ifu_size};
assign ifu_addr    = ifu_fifo_out[66:3];
assign ifu_size    = ifu_fifo_out[2:0];

assign lsu_write   = i_lsu_valid;
assign lsu_read    = (nxt_state == LS_REQ);

assign lsu_fifo_in = {i_lsu_wen, i_lsu_wdata, i_lsu_addr, i_lsu_size};
assign lsu_wen     = lsu_fifo_out[131];
assign lsu_wdata   = lsu_fifo_out[130:67];
assign lsu_addr    = lsu_fifo_out[66:3];
assign lsu_size    = lsu_fifo_out[2:0];

 ysyx_210238_fifo_depth_1#(
    .FIFO_WIDTH ( 67 )
)u_fifo_ifu(
    .clk         ( clk          ),
    .rst_n       ( rst_n        ),
    .read        ( ifu_read     ),
    .write       ( ifu_write    ),
    .fifo_in     ( ifu_fifo_in  ),
    .fifo_out    ( ifu_fifo_out ),
    .fifo_empty  ( ifu_empty    )
);

 ysyx_210238_fifo_depth_1#(
    .FIFO_WIDTH ( 132 )
)u_fifo_lsu(
    .clk         ( clk      ),
    .rst_n       ( rst_n    ),
    .read        ( lsu_read     ),
    .write       ( lsu_write    ),
    .fifo_in     ( lsu_fifo_in  ),
    .fifo_out    ( lsu_fifo_out ),
    .fifo_empty  ( lsu_empty    )
);



//----------ifu port---------
assign o_ifu_ready   =  (cur_state == IF_REQ || cur_state == IF_WAIT)
                      & i_ram_ready;

assign o_ifu_rdata   = i_ram_rdata[31:0];

//-----------lsu port------------
assign o_lsu_ready   = (cur_state == LS_REQ || cur_state == LS_WAIT)
                      & i_ram_ready;

assign o_lsu_rdata   = i_ram_rdata;

//-----------timer port----------
assign req_to_timer  = (lsu_addr == `ADDR_MTIME)
                    || (lsu_addr == `ADDR_MTIMECMP);

assign o_timer_addr  = lsu_addr;

assign o_timer_wen   = lsu_wen;

assign o_timer_valid = req_to_timer;

assign o_timer_wdata = lsu_wdata;

//-----------ram port--------------
always @(posedge clk) begin
    if(~rst_n) begin
        o_ram_addr  <= 0;
        o_ram_wen   <= 0;
        o_ram_valid <= 0;
        o_ram_wdata <= 0;
        o_ram_size  <= 0;
    end
    else begin
        case (nxt_state)
            IF_REQ, IF_WAIT : begin
                o_ram_addr  <= ifu_addr;
                o_ram_wen   <= 0;
                o_ram_valid <= 1;
                o_ram_wdata <= 0;
                o_ram_size  <= ifu_size;
            end

            LS_REQ, LS_WAIT : begin
                o_ram_addr  <= lsu_addr;
                o_ram_wen   <= lsu_wen;
                o_ram_valid <= 1;
                o_ram_wdata <= lsu_wdata;
                o_ram_size  <= lsu_size;
            end

            default : begin
                o_ram_addr  <= 0;
                o_ram_wen   <= 0;
                o_ram_valid <= 0;
                o_ram_wdata <= 0;
                o_ram_size  <= 0;
            end
        endcase
    end
end



endmodule

// Copyright 2021 LinYouxu, linyouxu1997@foxmail.com
// Last edit: 2021.07.21
// Registers File

module ysyx_210238_reg_file(
    input   clk,
    input   rst_n,

    // write port
    input        i_wen,
    input [4:0]  i_addr,
    input [63:0] i_wdata,

    // read port
    input     [4:0]  i_rs1_addr,
    input     [4:0]  i_rs2_addr,
    input            i_rs1_cen,
    input            i_rs2_cen,
    output reg[63:0] o_rs1_rdata,
    output reg[63:0] o_rs2_rdata
);

reg [63:0] regs [0:31];
integer i;

//---------Write reg_file--------------
always @(posedge clk) begin
    if(~rst_n) begin
        for (i = 0; i < 32; i=i+1) begin
            regs[i] <= 64'b0;
        end
    end
    else if(i_wen & (i_addr != 5'd0)) begin
        regs[i_addr] <= i_wdata;
    end
end

//----------Read reg_file to rs1----------------
always @(*) begin
    if(i_rs1_addr == 5'b0) begin
        o_rs1_rdata = 64'b0;
    end
    else if(i_wen & (i_addr == i_rs1_addr) & i_rs1_cen) begin
        o_rs1_rdata = i_wdata;
    end
    else if(i_rs1_cen) begin
        o_rs1_rdata = regs[i_rs1_addr];
    end
    else begin
        o_rs1_rdata = 64'b0;
    end
end

//----------Read reg_file to rs2----------------
always @(*) begin
    if(i_rs2_addr == 5'b0) begin
        o_rs2_rdata = 64'b0;
    end
    else if(i_wen & (i_addr == i_rs2_addr) & i_rs2_cen) begin
        o_rs2_rdata = i_wdata;
    end
    else if(i_rs2_cen) begin
        o_rs2_rdata = regs[i_rs2_addr];
    end
    else begin
        o_rs2_rdata = 64'b0;
    end
end

endmodule

// Copyright 2021 LinYouxu, linyouxu1997@foxmail.com
// Last edit: 2021.07.19
// RVCPU top module


// Copyright 2021 LinYouxu, linyouxu1997@foxmail.com
// Last edit: 2021.09.02
// Timer interruptor


module ysyx_210238_timer (
    input             clk,
    input             rst_n,

    output            o_timer_int,

    // cpu port
    input             i_wen,
    input             i_valid,
    input      [63:0] i_addr,
    input      [63:0] i_wdata,
    output reg [63:0] o_rdata

);

reg  [63:0] mtime;
reg  [63:0] mtimecmp;

always @(posedge clk) begin
    if(~rst_n) begin
        mtime    <= 0;
        mtimecmp <= 0;
    end
    else if (i_wen & i_valid) begin
        case (i_addr)
            `ADDR_MTIME :    mtime    <= i_wdata;

            `ADDR_MTIMECMP : mtimecmp <= i_wdata;
        endcase
    end
    else begin
        mtime    <= mtime + 1'b1;
        mtimecmp <= mtimecmp;
    end
end

always @(*) begin
    case (i_addr)
        `ADDR_MTIME :    o_rdata = mtime;

        `ADDR_MTIMECMP : o_rdata = mtimecmp;

        default :        o_rdata = 0;
    endcase
end

assign o_timer_int = (mtime >= mtimecmp);

endmodule

// Copyright 2021 LinYouxu, linyouxu1997@foxmail.com
// Last edit: 2021.07.18
// Write Back unit
// as known as "WB"

module ysyx_210238_wbu(
    // wb
    input  [63:0] i_rd_data,
    input  [4:0]  i_rd_addr,
    input  [63:0] i_mem_rdata,

    // wb control
    input         i_rd_wen,
    input         i_mem_read,

    // reg_file
    output        o_rd_wen,
    output [4:0]  o_rd_addr,
    output [63:0] o_rd_wdata
);

assign o_rd_wen   = i_rd_wen;

assign o_rd_addr  = i_rd_addr;

assign o_rd_wdata = i_mem_read ? i_mem_rdata : i_rd_data;



endmodule // wbu
/* verilator lint_off EOFNEWLINE */
