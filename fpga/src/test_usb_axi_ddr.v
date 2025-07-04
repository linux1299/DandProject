module test_usb_axi_ddr (
    input usb_clk_60m,    // USB Clock
    input sys_clk,
    input sys_rst_n,  // Asynchronous reset active low

    // DDR3
    inout   [31:0]        ddr3_dq      ,  //DDR3 数据
    inout   [3:0]         ddr3_dqs_n   ,  //DDR3 dqs�?
    inout   [3:0]         ddr3_dqs_p   ,  //DDR3 dqs�?  
    output  [13:0]        ddr3_addr    ,  //DDR3 地址   
    output  [2:0]         ddr3_ba      ,  //DDR3 banck 选择
    output                ddr3_ras_n   ,  //DDR3 行�?�择
    output                ddr3_cas_n   ,  //DDR3 列�?�择
    output                ddr3_we_n    ,  //DDR3 读写选择
    output                ddr3_reset_n ,  //DDR3 复位
    output  [0:0]         ddr3_ck_p    ,  //DDR3 时钟�?
    output  [0:0]         ddr3_ck_n    ,  //DDR3 时钟�?
    output  [0:0]         ddr3_cke     ,  //DDR3 时钟使能
    output  [0:0]         ddr3_cs_n    ,  //DDR3 片�??
    output  [3:0]         ddr3_dm      ,  //DDR3_dm
    output  [0:0]         ddr3_odt     ,  //DDR3_odt

    // USB
    input               usb_rxf_n,    //FT232H数据FIFO可读指示信号 
    input               usb_txe_n,    //FT232H数据FIFO可写信号
    output              usb_oe_n,     //FT232H数据输出使能
    output              usb_rd_n,     //FT232HFIFO读使能信�?
    output              usb_wr_n,     //FT232HFIFO写使能信�?
    output              usb_siwu_n,   //send immediate/wake up
    inout[7:0]          usb_data      //FT232 数据总线
    
);

localparam AXI_ID_WIDTH = 2;
localparam AXI_ADDR_WIDTH = 32;
localparam AXI_USER_WIDTH = 1;
localparam AXI_DATA_WIDTH = 32;

assign usb_siwu_n = 1'b1;

wire clk_50;
wire clk_ddr_ref;
wire locked;
wire ui_clk ;             //用户时钟
wire app_sr_active;       //保留
wire app_ref_ack;         //刷新请求
wire app_zq_ack;          //ZQ 校准请求
wire ui_clk_sync_rst;     //用户复位信号
wire mmcm_locked;


// write address channel
wire [AXI_ID_WIDTH-1:0]           usb_aw_id_o;
wire [AXI_ADDR_WIDTH-1:0]         usb_aw_addr_o;
wire [7:0]                        usb_aw_len_o;
wire [2:0]                        usb_aw_size_o;
wire [1:0]                        usb_aw_burst_o;
wire                              usb_aw_lock_o;
wire [3:0]                        usb_aw_cache_o;
wire [2:0]                        usb_aw_prot_o;
wire [3:0]                        usb_aw_qos_o;
wire [3:0]                        usb_aw_region_o;
wire [AXI_USER_WIDTH-1:0]         usb_aw_user_o;
wire                              usb_aw_valid_o;
wire                              usb_aw_ready_i;

// write data channel
wire                              usb_w_ready_i;
wire                              usb_w_valid_o;
wire [AXI_DATA_WIDTH-1:0]         usb_w_data_o;
wire [AXI_DATA_WIDTH/8-1:0]       usb_w_strb_o;
wire                              usb_w_last_o;
wire [AXI_USER_WIDTH-1:0]         usb_w_user_o;

// write response channel
wire                              usb_b_ready_o;
wire                              usb_b_valid_i;
wire [1:0]                        usb_b_resp_i;
wire [AXI_ID_WIDTH-1:0]           usb_b_id_i;
wire [AXI_USER_WIDTH-1:0]         usb_b_user_i;

// read address channel
wire                              usb_ar_ready_i;
wire                              usb_ar_valid_o;
wire [AXI_ADDR_WIDTH-1:0]         usb_ar_addr_o;
wire [2:0]                        usb_ar_prot_o;
wire [AXI_ID_WIDTH-1:0]           usb_ar_id_o;
wire [AXI_USER_WIDTH-1:0]         usb_ar_user_o;
wire [7:0]                        usb_ar_len_o;
wire [2:0]                        usb_ar_size_o;
wire [1:0]                        usb_ar_burst_o;
wire                              usb_ar_lock_o;
wire [3:0]                        usb_ar_cache_o;
wire [3:0]                        usb_ar_qos_o;
wire [3:0]                        usb_ar_region_o;

// read data channel
wire                              usb_r_ready_o;
wire                              usb_r_valid_i;
wire [1:0]                        usb_r_resp_i;
wire [AXI_DATA_WIDTH-1:0]         usb_r_data_i;
wire                              usb_r_last_i;
wire [AXI_ID_WIDTH-1:0]           usb_r_id_i;
wire [AXI_USER_WIDTH-1:0]         usb_r_user_i;

wire  [1:0]s_axi_awid;
wire  [31:0]s_axi_awaddr;
wire  [7:0]s_axi_awlen;
wire  [2:0]s_axi_awsize;
wire  [1:0]s_axi_awburst;
wire  [0:0]s_axi_awlock;
wire  [3:0]s_axi_awcache;
wire  [2:0]s_axi_awprot;
wire  [3:0]s_axi_awqos;
wire  [3:0]s_axi_awregion;
wire       s_axi_awuser;
wire  s_axi_awvalid;
wire   s_axi_awready;
wire  [31:0]s_axi_wdata;
wire  [3:0]s_axi_wstrb;
wire  s_axi_wlast;
wire  s_axi_wvalid;
wire   s_axi_wready;
wire       s_axi_wuser;
wire  s_axi_bready;
wire   [1:0]s_axi_bid;
wire   [1:0]s_axi_bresp;
wire   s_axi_bvalid;
wire       s_axi_buser = 0;
wire  [1:0]s_axi_arid;
wire  [31:0]s_axi_araddr;
wire  [7:0]s_axi_arlen;
wire  [2:0]s_axi_arsize;
wire  [1:0]s_axi_arburst;
wire  [0:0]s_axi_arlock;
wire  [3:0]s_axi_arcache;
wire  [2:0]s_axi_arprot;
wire  [3:0]s_axi_arqos;
wire  [3:0]s_axi_arregion;
wire       s_axi_aruser;
wire  s_axi_arvalid;
wire   s_axi_arready;
wire  s_axi_rready;
wire   [1:0]s_axi_rid;
wire   [31:0]s_axi_rdata;
wire   [1:0]s_axi_rresp;
wire   s_axi_rlast;
wire   s_axi_rvalid;
wire       s_axi_ruser = 0;
wire   init_calib_complete;
wire  sys_rst;

wire [3:0] state;
wire [2:0] axi_read_state;
wire [2:0] axi_write_state;
wire [3:0] state_next;
wire [2:0] axi_read_state_next;
wire [2:0] axi_write_state_next;
wire [19:0] wdata_cnt;
wire [19:0] rdata_cnt;
wire axi_wdata_fifo_full;
wire axi_wdata_fifo_almost_full;
wire axi_wdata_fifo_empty;
wire axi_wdata_fifo_almost_empty;
wire axi_wdata_fifo_wr_rst_busy;
wire axi_wdata_fifo_rd_rst_busy;
wire axi_rdata_fifo_full;
wire axi_rdata_fifo_almost_full;
wire axi_rdata_fifo_empty;
wire axi_rdata_fifo_almost_empty;
wire axi_rdata_fifo_wr_rst_busy;
wire axi_rdata_fifo_rd_rst_busy;
wire [31:0] axi_rdata_fifo_dout;
wire [7:0] usb_data_out;

reg ui_clk_sync_rst_d0;
reg ui_clk_sync_rst_d1;
reg sys_rst_n_d0;
reg sys_rst_n_d1;
reg sys_rst_n_clk_ddr_ref_d0;
reg sys_rst_n_clk_ddr_ref_d1;
reg [7:0] usb_data_reg;

always@(posedge ui_clk or posedge ui_clk_sync_rst)begin
    if(ui_clk_sync_rst) begin
        ui_clk_sync_rst_d0 <= 1'b1;
        ui_clk_sync_rst_d1 <= 1'b1;
    end
    else begin
        ui_clk_sync_rst_d0 <= 1'b0;
        ui_clk_sync_rst_d1 <= ui_clk_sync_rst_d0;
    end
end

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        sys_rst_n_d0 <= 1'b0;
        sys_rst_n_d1 <= 1'b0;
    end
    else begin
        sys_rst_n_d0 <= 1'b1;
        sys_rst_n_d1 <= sys_rst_n_d0;
    end
end

always@(posedge clk_ddr_ref or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        sys_rst_n_clk_ddr_ref_d0 <= 1'b0;
        sys_rst_n_clk_ddr_ref_d1 <= 1'b0;
    end
    else begin
        sys_rst_n_clk_ddr_ref_d0 <= 1'b1;
        sys_rst_n_clk_ddr_ref_d1 <= sys_rst_n_clk_ddr_ref_d0;
    end
end

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        usb_data_reg <= 8'b0;
    end
    else if(!usb_wr_n) begin
        usb_data_reg <= usb_data_out;
    end
    else begin
        usb_data_reg <= 8'b0;
    end
end



// assign  s_axi_awid = usb_aw_id_o;
// assign  s_axi_awaddr = usb_aw_addr_o[28:0];
// assign  s_axi_awlen = usb_aw_len_o;
// assign  s_axi_awsize = usb_aw_size_o;
// assign  s_axi_awburst = usb_aw_burst_o;
// assign  s_axi_awlock = usb_aw_lock_o;
// assign  s_axi_awcache = usb_aw_cache_o;
// assign  s_axi_awprot = usb_aw_prot_o;
// assign  s_axi_awqos = usb_aw_qos_o;
// assign  s_axi_awvalid = usb_aw_valid_o;
// assign  usb_aw_ready_i = s_axi_awready;
// assign  s_axi_wdata = usb_w_data_o;
// assign  s_axi_wstrb = usb_w_strb_o;
// assign  s_axi_wlast = usb_w_last_o;
// assign  s_axi_wvalid = usb_w_valid_o;
// assign  usb_w_ready_i = s_axi_wready;
// assign  s_axi_bready = usb_b_ready_o;
// assign  usb_b_id_i = s_axi_bid;
// assign  usb_b_resp_i = s_axi_bresp;
// assign  usb_b_valid_i = s_axi_bvalid;
// assign  s_axi_arid = usb_ar_id_o;
// assign  s_axi_araddr = usb_ar_addr_o[28:0];
// assign  s_axi_arlen = usb_ar_len_o;
// assign  s_axi_arsize = usb_ar_size_o;
// assign  s_axi_arburst = usb_ar_burst_o;
// assign  s_axi_arlock = usb_ar_lock_o;
// assign  s_axi_arcache = usb_ar_cache_o;
// assign  s_axi_arprot = usb_ar_prot_o;
// assign  s_axi_arqos = usb_ar_qos_o;
// assign  s_axi_arvalid = usb_ar_valid_o;
// assign  usb_ar_ready_i = s_axi_arready;
// assign  s_axi_rready = usb_r_ready_o;
// assign  usb_r_id_i = s_axi_rid;
// assign  usb_r_data_i = s_axi_rdata;
// assign  usb_r_resp_i = s_axi_rresp;
// assign  usb_r_last_i = s_axi_rlast;
// assign  usb_r_valid_i = s_axi_rvalid;

//PLL模块 
clk_wiz_0 u_clk_wiz_0
   (
    // Clock out ports
    .clk_out1(clk_50),     // output clk_out1
    .clk_out2(clk_ddr_ref),
    // Status and control signals
    .reset(1'b0), // input resetn
    .locked(locked),        // output locked
   // Clock in ports
    .clk_in1(sys_clk)
    );  


// ila_0 ila (
//     .clk(usb_clk_60m), // input wire clk
//     .probe0(sys_rst_n),
//     .probe1(usb_rxf_n),
//     .probe2(usb_rd_n), 
//     .probe3(usb_wr_n), 
//     .probe4(usb_oe_n), 
//     .probe5({1'b0,
//     axi_rdata_fifo_full, axi_rdata_fifo_almost_full, axi_rdata_fifo_wr_en, axi_rdata_fifo_empty, 
//     axi_rdata_fifo_almost_empty, axi_rdata_fifo_rd_en, axi_rdata_fifo_wr_rst_busy, axi_rdata_fifo_rd_rst_busy,
//     axi_wdata_fifo_full, axi_wdata_fifo_almost_full, axi_wdata_fifo_wr_en, axi_wdata_fifo_empty, 
//     axi_wdata_fifo_almost_empty, axi_wdata_fifo_rd_en, axi_wdata_fifo_wr_rst_busy, axi_wdata_fifo_rd_rst_busy,
//     usb_aw_valid_o, usb_w_valid_o, usb_ar_valid_o, usb_r_valid_i, usb_b_valid_i,
//     axi_read_state, axi_write_state, state}),
//     .probe6({usb_data_reg, wdata_cnt}),
//     .probe7(rdata_cnt),
//     .probe8(usb_aw_addr_o),
//     .probe9(usb_ar_addr_o),
//     .probe10(axi_rdata_fifo_dout),
//     .probe11(usb_r_data_i)
// );

ila_0 ila (
    .clk(ui_clk), // input wire clk
    .probe0(s_axi_rvalid),
    .probe1(s_axi_awvalid),
    .probe2(s_axi_wvalid), 
    .probe3(s_axi_bvalid), 
    .probe4(s_axi_arvalid), 
    .probe5({25'b0, init_calib_complete, mmcm_locked, ui_clk_sync_rst_d1, 
                    s_axi_awready, s_axi_wready, s_axi_rready, s_axi_arready}),
    .probe6({31'b0, ui_clk_sync_rst}),
    .probe7({31'b0, sys_rst_n}),
    .probe8(s_axi_awaddr),
    .probe9(s_axi_wdata),
    .probe10(s_axi_araddr),
    .probe11(s_axi_rdata)
);

usb_axi_sync#(
    .AXI_ID_WIDTH    ( 2 ),
    .AXI_ADDR_WIDTH  ( 32 ),
    .AXI_USER_WIDTH  ( 1 ),
    .AXI_DATA_WIDTH  ( 32 ),
    .AXI_RESET_ADDR  ( 32'h8000_0000 )
)u_usb_axi(
    .usb_clk_60m     ( usb_clk_60m     ),
    // .sys_clk         ( sys_clk         ),
    .sys_rst_n       ( sys_rst_n_d1    ),
    .usb_rxf_n       ( usb_rxf_n       ),
    .usb_txe_n       ( usb_txe_n       ),
    .usb_oe_n        ( usb_oe_n        ),
    .usb_rd_n        ( usb_rd_n        ),
    .usb_wr_n        ( usb_wr_n        ),
    .usb_data        ( usb_data        ),
    .usb_aw_id_o     ( usb_aw_id_o     ),
    .usb_aw_addr_o   ( usb_aw_addr_o   ),
    .usb_aw_len_o    ( usb_aw_len_o    ),
    .usb_aw_size_o   ( usb_aw_size_o   ),
    .usb_aw_burst_o  ( usb_aw_burst_o  ),
    .usb_aw_lock_o   ( usb_aw_lock_o   ),
    .usb_aw_cache_o  ( usb_aw_cache_o  ),
    .usb_aw_prot_o   ( usb_aw_prot_o   ),
    .usb_aw_qos_o    ( usb_aw_qos_o    ),
    .usb_aw_region_o ( usb_aw_region_o ),
    .usb_aw_user_o   ( usb_aw_user_o   ),
    .usb_aw_valid_o  ( usb_aw_valid_o  ),
    .usb_aw_ready_i  ( usb_aw_ready_i  ),
    .usb_w_ready_i   ( usb_w_ready_i   ),
    .usb_w_valid_o   ( usb_w_valid_o   ),
    .usb_w_data_o    ( usb_w_data_o    ),
    .usb_w_strb_o    ( usb_w_strb_o    ),
    .usb_w_last_o    ( usb_w_last_o    ),
    .usb_w_user_o    ( usb_w_user_o    ),
    .usb_b_ready_o   ( usb_b_ready_o   ),
    .usb_b_valid_i   ( usb_b_valid_i   ),
    .usb_b_resp_i    ( usb_b_resp_i    ),
    .usb_b_id_i      ( usb_b_id_i      ),
    .usb_b_user_i    ( usb_b_user_i    ),
    .usb_ar_ready_i  ( usb_ar_ready_i  ),
    .usb_ar_valid_o  ( usb_ar_valid_o  ),
    .usb_ar_addr_o   ( usb_ar_addr_o   ),
    .usb_ar_prot_o   ( usb_ar_prot_o   ),
    .usb_ar_id_o     ( usb_ar_id_o     ),
    .usb_ar_user_o   ( usb_ar_user_o   ),
    .usb_ar_len_o    ( usb_ar_len_o    ),
    .usb_ar_size_o   ( usb_ar_size_o   ),
    .usb_ar_burst_o  ( usb_ar_burst_o  ),
    .usb_ar_lock_o   ( usb_ar_lock_o   ),
    .usb_ar_cache_o  ( usb_ar_cache_o  ),
    .usb_ar_qos_o    ( usb_ar_qos_o    ),
    .usb_ar_region_o ( usb_ar_region_o ),
    .usb_r_ready_o   ( usb_r_ready_o   ),
    .usb_r_valid_i   ( usb_r_valid_i   ),
    .usb_r_resp_i    ( usb_r_resp_i    ),
    .usb_r_data_i    ( usb_r_data_i    ),
    .usb_r_last_i    ( usb_r_last_i    ),
    .usb_r_id_i      ( usb_r_id_i      ),
    .usb_r_user_i    ( usb_r_user_i    ),

    .state(state),
    .axi_read_state(axi_read_state),
    .axi_write_state(axi_write_state),
    .state_next(state_next),
    .axi_read_state_next(axi_read_state_next),
    .axi_write_state_next(axi_write_state_next),
    .wdata_cnt(wdata_cnt),
    .rdata_cnt(rdata_cnt),
    .axi_wdata_fifo_full(axi_wdata_fifo_full),
    .axi_wdata_fifo_almost_full(axi_wdata_fifo_almost_full),
    .axi_wdata_fifo_wr_en(axi_wdata_fifo_wr_en),
    .axi_wdata_fifo_empty(axi_wdata_fifo_empty),
    .axi_wdata_fifo_almost_empty(axi_wdata_fifo_almost_empty),
    .axi_wdata_fifo_rd_en(axi_wdata_fifo_rd_en),
    .axi_wdata_fifo_wr_rst_busy(axi_wdata_fifo_wr_rst_busy),
    .axi_wdata_fifo_rd_rst_busy(axi_wdata_fifo_rd_rst_busy),
    .axi_rdata_fifo_full(axi_rdata_fifo_full),
    .axi_rdata_fifo_almost_full(axi_rdata_fifo_almost_full),
    .axi_rdata_fifo_wr_en(axi_rdata_fifo_wr_en),
    .axi_rdata_fifo_empty(axi_rdata_fifo_empty),
    .axi_rdata_fifo_almost_empty(axi_rdata_fifo_almost_empty),
    .axi_rdata_fifo_rd_en(axi_rdata_fifo_rd_en),
    .axi_rdata_fifo_wr_rst_busy(axi_rdata_fifo_wr_rst_busy),
    .axi_rdata_fifo_rd_rst_busy(axi_rdata_fifo_rd_rst_busy),
    .axi_rdata_fifo_dout(axi_rdata_fifo_dout),
    .usb_data_out(usb_data_out)
);

axi_clock_converter_0 u_axi_clock_converter_0(
    .s_axi_aclk     ( usb_clk_60m ),
    .s_axi_aresetn  ( sys_rst_n_d1 ),
    .s_axi_awid     ( usb_aw_id_o ),
    .s_axi_awaddr   ( usb_aw_addr_o ),
    .s_axi_awlen    ( usb_aw_len_o ),
    .s_axi_awsize   ( usb_aw_size_o ),
    .s_axi_awburst  ( usb_aw_burst_o ),
    .s_axi_awlock   ( usb_aw_lock_o ),
    .s_axi_awcache  ( usb_aw_cache_o ),
    .s_axi_awprot   ( usb_aw_prot_o ),
    .s_axi_awregion ( usb_aw_region_o ),
    .s_axi_awqos    ( usb_aw_qos_o ),
    .s_axi_awuser   ( usb_aw_user_o ),
    .s_axi_awvalid  ( usb_aw_valid_o ),
    .s_axi_awready  ( usb_aw_ready_i ),
    .s_axi_wdata    ( usb_w_data_o ),
    .s_axi_wstrb    ( usb_w_strb_o ),
    .s_axi_wlast    ( usb_w_last_o ),
    .s_axi_wuser    ( usb_w_user_o ),
    .s_axi_wvalid   ( usb_w_valid_o ),
    .s_axi_wready   ( usb_w_ready_i ),
    .s_axi_bid      ( usb_b_id_i ),
    .s_axi_bresp    ( usb_b_resp_i ),
    .s_axi_buser    ( usb_b_user_i ),
    .s_axi_bvalid   ( usb_b_valid_i ),
    .s_axi_bready   ( usb_b_ready_o ),
    .s_axi_arid     ( usb_ar_id_o ),
    .s_axi_araddr   ( usb_ar_addr_o ),
    .s_axi_arlen    ( usb_ar_len_o ),
    .s_axi_arsize   ( usb_ar_size_o ),
    .s_axi_arburst  ( usb_ar_burst_o ),
    .s_axi_arlock   ( usb_ar_lock_o ),
    .s_axi_arcache  ( usb_ar_cache_o ),
    .s_axi_arprot   ( usb_ar_prot_o ),
    .s_axi_arregion ( usb_ar_region_o ),
    .s_axi_arqos    ( usb_ar_qos_o ),
    .s_axi_aruser   ( usb_ar_user_o ),
    .s_axi_arvalid  ( usb_ar_valid_o ),
    .s_axi_arready  ( usb_ar_ready_i ),
    .s_axi_rid      ( usb_r_id_i ),
    .s_axi_rdata    ( usb_r_data_i ),
    .s_axi_rresp    ( usb_r_resp_i ),
    .s_axi_rlast    ( usb_r_last_i ),
    .s_axi_ruser    ( usb_r_user_i ),
    .s_axi_rvalid   ( usb_r_valid_i ),
    .s_axi_rready   ( usb_r_ready_o ),
    .m_axi_aclk     ( ui_clk ),
    .m_axi_aresetn  ( !ui_clk_sync_rst_d1 ),
    .m_axi_awid     ( s_axi_awid ),
    .m_axi_awaddr   ( s_axi_awaddr ),
    .m_axi_awlen    ( s_axi_awlen ),
    .m_axi_awsize   ( s_axi_awsize ),
    .m_axi_awburst  ( s_axi_awburst ),
    .m_axi_awlock   ( s_axi_awlock ),
    .m_axi_awcache  ( s_axi_awcache ),
    .m_axi_awprot   ( s_axi_awprot ),
    .m_axi_awregion ( s_axi_awregion ),
    .m_axi_awqos    ( s_axi_awqos ),
    .m_axi_awuser   ( s_axi_awuser ),
    .m_axi_awvalid  ( s_axi_awvalid ),
    .m_axi_awready  ( s_axi_awready ),
    .m_axi_wdata    ( s_axi_wdata ),
    .m_axi_wstrb    ( s_axi_wstrb ),
    .m_axi_wlast    ( s_axi_wlast ),
    .m_axi_wuser    ( s_axi_wuser ),
    .m_axi_wvalid   ( s_axi_wvalid ),
    .m_axi_wready   ( s_axi_wready ),
    .m_axi_bid      ( s_axi_bid ),
    .m_axi_bresp    ( s_axi_bresp ),
    .m_axi_buser    ( s_axi_buser ),
    .m_axi_bvalid   ( s_axi_bvalid ),
    .m_axi_bready   ( s_axi_bready ),
    .m_axi_arid     ( s_axi_arid ),
    .m_axi_araddr   ( s_axi_araddr ),
    .m_axi_arlen    ( s_axi_arlen ),
    .m_axi_arsize   ( s_axi_arsize ),
    .m_axi_arburst  ( s_axi_arburst ),
    .m_axi_arlock   ( s_axi_arlock ),
    .m_axi_arcache  ( s_axi_arcache ),
    .m_axi_arprot   ( s_axi_arprot ),
    .m_axi_arregion ( s_axi_arregion ),
    .m_axi_arqos    ( s_axi_arqos ),
    .m_axi_aruser   ( s_axi_aruser ),
    .m_axi_arvalid  ( s_axi_arvalid ),
    .m_axi_arready  ( s_axi_arready ),
    .m_axi_rid      ( s_axi_rid ),
    .m_axi_rdata    ( s_axi_rdata ),
    .m_axi_rresp    ( s_axi_rresp ),
    .m_axi_rlast    ( s_axi_rlast ),
    .m_axi_ruser    ( s_axi_ruser ),
    .m_axi_rvalid   ( s_axi_rvalid ),
    .m_axi_rready   ( s_axi_rready )
);


mig_7series_0 u_mig_7series_0 (
    // Memory interface ports
    .ddr3_addr                      (ddr3_addr),  // output [13:0]		ddr3_addr
    .ddr3_ba                        (ddr3_ba),  // output [2:0]		ddr3_ba
    .ddr3_cas_n                     (ddr3_cas_n),  // output			ddr3_cas_n
    .ddr3_ck_n                      (ddr3_ck_n),  // output [0:0]		ddr3_ck_n
    .ddr3_ck_p                      (ddr3_ck_p),  // output [0:0]		ddr3_ck_p
    .ddr3_cke                       (ddr3_cke),  // output [0:0]		ddr3_cke
    .ddr3_ras_n                     (ddr3_ras_n),  // output			ddr3_ras_
    .ddr3_reset_n                   (ddr3_reset_n),  // output			ddr3_reset_n
    .ddr3_we_n                      (ddr3_we_n),  // output			ddr3_we_n
    .ddr3_dq                        (ddr3_dq),  // inout [31:0]		ddr3_dq
    .ddr3_dqs_n                     (ddr3_dqs_n),  // inout [3:0]		ddr3_dqs_n
    .ddr3_dqs_p                     (ddr3_dqs_p),  // inout [3:0]		ddr3_dqs_p
    .init_calib_complete            (init_calib_complete),  // output			init_calib_complete
	.ddr3_cs_n                      (ddr3_cs_n),  // output [0:0]		ddr3_cs_n
    .ddr3_dm                        (ddr3_dm),  // output [3:0]		ddr3_dm
    .ddr3_odt                       (ddr3_odt),  // output [0:0]		ddr3_odt
    // Application interface ports
    .ui_clk                         (ui_clk),  // output			ui_clk
    .ui_clk_sync_rst                (ui_clk_sync_rst),  // output			ui_clk_sync_rst
    .mmcm_locked                    (mmcm_locked),  // output			mmcm_locked
    .aresetn                        (!ui_clk_sync_rst_d1),  // input			aresetn
    .app_sr_req                     (1'b0),  // input			app_sr_req
    .app_ref_req                    (1'b0),  // input			app_ref_req
    .app_zq_req                     (1'b0),  // input			app_zq_req
    .app_sr_active                  (app_sr_active),  // output			app_sr_active
    .app_ref_ack                    (app_ref_ack),  // output			app_ref_ack
    .app_zq_ack                     (app_zq_ack),  // output			app_zq_ack
    // Slave Interface Write Address Ports
    .s_axi_awid                     (s_axi_awid),  // input [1:0]			s_axi_awid
    .s_axi_awaddr                   (s_axi_awaddr[28:0]),  // input [28:0]			s_axi_awaddr
    .s_axi_awlen                    (s_axi_awlen),  // input [7:0]			s_axi_awlen
    .s_axi_awsize                   (s_axi_awsize),  // input [2:0]			s_axi_awsize
    .s_axi_awburst                  (s_axi_awburst),  // input [1:0]			s_axi_awburst
    .s_axi_awlock                   (s_axi_awlock),  // input [0:0]			s_axi_awlock
    .s_axi_awcache                  (s_axi_awcache),  // input [3:0]			s_axi_awcache
    .s_axi_awprot                   (s_axi_awprot),  // input [2:0]			s_axi_awprot
    .s_axi_awqos                    (s_axi_awqos),  // input [3:0]			s_axi_awqos
    .s_axi_awvalid                  (s_axi_awvalid),  // input			s_axi_awvalid
    .s_axi_awready                  (s_axi_awready),  // output			s_axi_awready
    // Slave Interface Write Data Ports
    .s_axi_wdata                    (s_axi_wdata),  // input [31:0]			s_axi_wdata
    .s_axi_wstrb                    (s_axi_wstrb),  // input [3:0]			s_axi_wstrb
    .s_axi_wlast                    (s_axi_wlast),  // input			s_axi_wlast
    .s_axi_wvalid                   (s_axi_wvalid),  // input			s_axi_wvalid
    .s_axi_wready                   (s_axi_wready),  // output			s_axi_wready
    // Slave Interface Write Response Ports
    .s_axi_bid                      (s_axi_bid),  // output [1:0]			s_axi_bid
    .s_axi_bresp                    (s_axi_bresp),  // output [1:0]			s_axi_bresp
    .s_axi_bvalid                   (s_axi_bvalid),  // output			s_axi_bvalid
    .s_axi_bready                   (s_axi_bready),  // input			s_axi_bready
    // Slave Interface Read Address Ports
    .s_axi_arid                     (s_axi_arid),  // input [1:0]			s_axi_arid
    .s_axi_araddr                   (s_axi_araddr[28:0]),  // input [28:0]			s_axi_araddr
    .s_axi_arlen                    (s_axi_arlen),  // input [7:0]			s_axi_arlen
    .s_axi_arsize                   (s_axi_arsize),  // input [2:0]			s_axi_arsize
    .s_axi_arburst                  (s_axi_arburst),  // input [1:0]			s_axi_arburst
    .s_axi_arlock                   (s_axi_arlock),  // input [0:0]			s_axi_arlock
    .s_axi_arcache                  (s_axi_arcache),  // input [3:0]			s_axi_arcache
    .s_axi_arprot                   (s_axi_arprot),  // input [2:0]			s_axi_arprot
    .s_axi_arqos                    (s_axi_arqos),  // input [3:0]			s_axi_arqos
    .s_axi_arvalid                  (s_axi_arvalid),  // input			s_axi_arvalid
    .s_axi_arready                  (s_axi_arready),  // output			s_axi_arready
    // Slave Interface Read Data Ports
    .s_axi_rid                      (s_axi_rid),  // output [1:0]			s_axi_rid
    .s_axi_rdata                    (s_axi_rdata),  // output [31:0]			s_axi_rdata
    .s_axi_rresp                    (s_axi_rresp),  // output [1:0]			s_axi_rresp
    .s_axi_rlast                    (s_axi_rlast),  // output			s_axi_rlast
    .s_axi_rvalid                   (s_axi_rvalid),  // output			s_axi_rvalid
    .s_axi_rready                   (s_axi_rready),  // input			s_axi_rready
    // System Clock Ports
    .sys_clk_i                      (clk_ddr_ref),
    // Reference Clock Ports
    .clk_ref_i                      (clk_ddr_ref),
    .sys_rst                        (sys_rst_n_clk_ddr_ref_d1) // input sys_rst
    );

endmodule