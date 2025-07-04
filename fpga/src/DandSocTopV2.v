module DandSocTopV2(
input           usb_clk_60m,    // USB Clock
input           clk_axi_in,
input           rst_n,
// LED
output          io_usb_done,
output          check_error,
// KEY
input           cpu_start_n,
// UART
output          io_uart_txd,
input           io_uart_rxd,
// LCD
output             lcd_hs  ,       //LCD è¡ŒåŒæ­¥ä¿¡å?
output             lcd_vs  ,       //LCD åœºåŒæ­¥ä¿¡å?
output             lcd_de  ,       //LCD æ•°æ®è¾�?�å�?�¥ä½¿èƒ�?
inout      [23:0]  lcd_rgb ,       //LCD RGB565é¢œè‰²æ�?�°æ�?
output             lcd_bl  ,       //LCD èƒŒå…�?�æŽ§åˆ¶ä¿¡å�?
output             lcd_rst,        //LCDå¤ä½
output             lcd_clk,         //LCD é‡�?�æ ·æ�?�¶é�?��?

// DDR3
    inout   [31:0]        ddr3_dq      ,  //DDR3 Ã¦â¢Â°Ã¦ÂÂ?
    inout   [3:0]         ddr3_dqs_n   ,  //DDR3 dqsÃ¨Â´?
    inout   [3:0]         ddr3_dqs_p   ,  //DDR3 dqsÃ¦Â­?  
    output  [13:0]        ddr3_addr    ,  //DDR3 Ã¥Å“Â°Ã¥ÂÂ�?   
    output  [2:0]         ddr3_ba      ,  //DDR3 banck Ã©Ââ°Ã¦â?¹Â?
    output                ddr3_ras_n   ,  //DDR3 Ã¨Â¡Å’Ã�??â°Ã¦â?¹Â?
    output                ddr3_cas_n   ,  //DDR3 Ã¥Ë†â�?”�???â°Ã¦â?¹Â?
    output                ddr3_we_n    ,  //DDR3 Ã¨Â¯Â»Ã¥â â„¢Ã©Â�?â°Ã¦â?¹Â?
    output                ddr3_reset_n ,  //DDR3 Ã¥Â¤ÂÃ¤Â½Â
    output  [0:0]         ddr3_ck_p    ,  //DDR3 Ã¦â”Â¶Ã©�??™Å¸Ã¦�???
    output  [0:0]         ddr3_ck_n    ,  //DDR3 Ã¦â”Â¶Ã©�??™Å¸Ã¨�???
    output  [0:0]         ddr3_cke     ,  //DDR3 Ã¦â”Â¶Ã©�??™Å¸Ã¤Â½Â¿Ã¨Æ�?��??
    output  [0:0]         ddr3_cs_n    ,  //DDR3 Ã§â°â?¡Ã???
    output  [3:0]         ddr3_dm      ,  //DDR3_dm
    output  [0:0]         ddr3_odt     ,  //DDR3_odt
// USB
    input               usb_rxf_n,    //FT232HÃ¦â¢Â°Ã¦ÂÂ®FIFOÃ¥ÂÂ¯Ã¨Â¯Â»Ã¦Å’â�?¡Ã§Â¤ÂºÃ¤Â¿Â¡Ã¥ÂÂ? 
    input               usb_txe_n,    //FT232HÃ¦â¢Â°Ã¦ÂÂ®FIFOÃ¥ÂÂ¯Ã¥â â„¢Ã¤Â¿Â¡Ã¥ÂÂ�?
    output              usb_oe_n,     //FT232HÃ¦â¢Â°Ã¦ÂÂ®Ã¨Â¾â?œÃ¥â?¡ÂºÃ¤Â½Â¿Ã¨Æ’�??
    output              usb_rd_n,     //FT232HFIFOÃ¨Â¯Â»Ã¤Â½Â¿Ã¨Æ’Â½Ã¤Â¿Â¡Ã¥Â�??
    output              usb_wr_n,     //FT232HFIFOÃ¥â â„¢Ã¤Â½Â¿Ã¨Æ�?�Â½Ã¤Â¿Â¡Ã¥Â�??
    output              usb_siwu_n,   //send immediate/wake up
    inout[7:0]          usb_data      //FT232 Ã¦â¢Â°Ã¦ÂÂ®Ã¦Â?Â»Ã§ÂºÂ¿
    
);

localparam AXI_ID_WIDTH = 2;
localparam AXI_ADDR_WIDTH = 32;
localparam AXI_USER_WIDTH = 1;
localparam AXI_DATA_WIDTH = 32;

assign usb_siwu_n = 1'b1;


wire              io_axi_frame_buff_aw_valid;
wire              io_axi_frame_buff_aw_ready;
wire     [31:0]   io_axi_frame_buff_aw_payload_addr;
wire     [3:0]    io_axi_frame_buff_aw_payload_id;
wire     [3:0]    io_axi_frame_buff_aw_payload_region;
wire     [7:0]    io_axi_frame_buff_aw_payload_len;
wire     [2:0]    io_axi_frame_buff_aw_payload_size;
wire     [1:0]    io_axi_frame_buff_aw_payload_burst;
wire     [0:0]    io_axi_frame_buff_aw_payload_lock;
wire     [3:0]    io_axi_frame_buff_aw_payload_cache;
wire     [3:0]    io_axi_frame_buff_aw_payload_qos;
wire     [2:0]    io_axi_frame_buff_aw_payload_prot;
wire              io_axi_frame_buff_w_valid;
wire              io_axi_frame_buff_w_ready;
wire     [31:0]   io_axi_frame_buff_w_payload_data;
wire     [3:0]    io_axi_frame_buff_w_payload_strb;
wire              io_axi_frame_buff_w_payload_last;
wire              io_axi_frame_buff_b_valid;
wire              io_axi_frame_buff_b_ready;
wire     [3:0]    io_axi_frame_buff_b_payload_id;
wire     [1:0]    io_axi_frame_buff_b_payload_resp;
wire              io_axi_frame_buff_ar_valid;
wire              io_axi_frame_buff_ar_ready;
wire     [31:0]   io_axi_frame_buff_ar_payload_addr;
wire     [3:0]    io_axi_frame_buff_ar_payload_id;
wire     [3:0]    io_axi_frame_buff_ar_payload_region;
wire     [7:0]    io_axi_frame_buff_ar_payload_len;
wire     [2:0]    io_axi_frame_buff_ar_payload_size;
wire     [1:0]    io_axi_frame_buff_ar_payload_burst;
wire     [0:0]    io_axi_frame_buff_ar_payload_lock;
wire     [3:0]    io_axi_frame_buff_ar_payload_cache;
wire     [3:0]    io_axi_frame_buff_ar_payload_qos;
wire     [2:0]    io_axi_frame_buff_ar_payload_prot;
wire              io_axi_frame_buff_r_valid;
wire              io_axi_frame_buff_r_ready;
wire     [31:0]   io_axi_frame_buff_r_payload_data;
wire     [3:0]    io_axi_frame_buff_r_payload_id;
wire     [1:0]    io_axi_frame_buff_r_payload_resp;
wire              io_axi_frame_buff_r_payload_last;

wire               io_axi_ddr_aw_valid;
wire               io_axi_ddr_aw_ready;
wire      [31:0]   io_axi_ddr_aw_payload_addr;
wire      [3:0]    io_axi_ddr_aw_payload_id;
wire      [3:0]    io_axi_ddr_aw_payload_region;
wire      [7:0]    io_axi_ddr_aw_payload_len;
wire      [2:0]    io_axi_ddr_aw_payload_size;
wire      [1:0]    io_axi_ddr_aw_payload_burst;
wire      [0:0]    io_axi_ddr_aw_payload_lock;
wire      [3:0]    io_axi_ddr_aw_payload_cache;
wire      [3:0]    io_axi_ddr_aw_payload_qos;
wire      [2:0]    io_axi_ddr_aw_payload_prot;
wire               io_axi_ddr_w_valid;
wire               io_axi_ddr_w_ready;
wire      [31:0]   io_axi_ddr_w_payload_data;
wire      [3:0]    io_axi_ddr_w_payload_strb;
wire               io_axi_ddr_w_payload_last;
wire               io_axi_ddr_b_valid;
wire               io_axi_ddr_b_ready;
wire      [3:0]    io_axi_ddr_b_payload_id;
wire      [1:0]    io_axi_ddr_b_payload_resp;
wire               io_axi_ddr_ar_valid;
wire               io_axi_ddr_ar_ready;
wire      [31:0]   io_axi_ddr_ar_payload_addr;
wire      [3:0]    io_axi_ddr_ar_payload_id;
wire      [3:0]    io_axi_ddr_ar_payload_region;
wire      [7:0]    io_axi_ddr_ar_payload_len;
wire      [2:0]    io_axi_ddr_ar_payload_size;
wire      [1:0]    io_axi_ddr_ar_payload_burst;
wire      [0:0]    io_axi_ddr_ar_payload_lock;
wire      [3:0]    io_axi_ddr_ar_payload_cache;
wire      [3:0]    io_axi_ddr_ar_payload_qos;
wire      [2:0]    io_axi_ddr_ar_payload_prot;

wire               io_axi_ddr_r_valid;
wire               io_axi_ddr_r_ready;
wire      [31:0]   io_axi_ddr_r_payload_data;
wire      [3:0]    io_axi_ddr_r_payload_id;
wire      [1:0]    io_axi_ddr_r_payload_resp;
wire               io_axi_ddr_r_payload_last;
wire               io_axi_usb_aw_valid;
wire               io_axi_usb_aw_ready;
wire      [31:0]   io_axi_usb_aw_payload_addr;
wire      [1:0]    io_axi_usb_aw_payload_id;
wire      [3:0]    io_axi_usb_aw_payload_region;
wire      [7:0]    io_axi_usb_aw_payload_len;
wire      [2:0]    io_axi_usb_aw_payload_size;
wire      [1:0]    io_axi_usb_aw_payload_burst;
wire      [0:0]    io_axi_usb_aw_payload_lock;
wire      [3:0]    io_axi_usb_aw_payload_cache;
wire      [3:0]    io_axi_usb_aw_payload_qos;
wire      [2:0]    io_axi_usb_aw_payload_prot;
wire               io_axi_usb_w_valid;
wire               io_axi_usb_w_ready;
wire      [31:0]   io_axi_usb_w_payload_data;
wire      [3:0]    io_axi_usb_w_payload_strb;
wire               io_axi_usb_w_payload_last;
wire               io_axi_usb_b_valid;
wire               io_axi_usb_b_ready;
wire      [1:0]    io_axi_usb_b_payload_id;
wire      [1:0]    io_axi_usb_b_payload_resp;
wire               io_axi_usb_ar_valid;
wire               io_axi_usb_ar_ready;
wire      [31:0]   io_axi_usb_ar_payload_addr;
wire      [1:0]    io_axi_usb_ar_payload_id;
wire      [3:0]    io_axi_usb_ar_payload_region;
wire      [7:0]    io_axi_usb_ar_payload_len;
wire      [2:0]    io_axi_usb_ar_payload_size;
wire      [1:0]    io_axi_usb_ar_payload_burst;
wire      [0:0]    io_axi_usb_ar_payload_lock;
wire      [3:0]    io_axi_usb_ar_payload_cache;
wire      [3:0]    io_axi_usb_ar_payload_qos;
wire      [2:0]    io_axi_usb_ar_payload_prot;
wire               io_axi_usb_r_valid;
wire               io_axi_usb_r_ready;
wire      [31:0]   io_axi_usb_r_payload_data;
wire      [1:0]    io_axi_usb_r_payload_id;
wire      [1:0]    io_axi_usb_r_payload_resp;
wire               io_axi_usb_r_payload_last;
reg                io_usb_done_sync_axi_clk_d0;
reg                io_usb_done_sync_axi_clk_d1;

// usb
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
wire                              usb_w_ready_i;
wire                              usb_w_valid_o;
wire [AXI_DATA_WIDTH-1:0]         usb_w_data_o;
wire [AXI_DATA_WIDTH/8-1:0]       usb_w_strb_o;
wire                              usb_w_last_o;
wire [AXI_USER_WIDTH-1:0]         usb_w_user_o;
wire                              usb_b_ready_o;
wire                              usb_b_valid_i;
wire [1:0]                        usb_b_resp_i;
wire [AXI_ID_WIDTH-1:0]           usb_b_id_i;
wire [AXI_USER_WIDTH-1:0]         usb_b_user_i;
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
wire                              usb_r_ready_o;
wire                              usb_r_valid_i;
wire [1:0]                        usb_r_resp_i;
wire [AXI_DATA_WIDTH-1:0]         usb_r_data_i;
wire                              usb_r_last_i;
wire [AXI_ID_WIDTH-1:0]           usb_r_id_i;
wire [AXI_USER_WIDTH-1:0]         usb_r_user_i;

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
reg [7:0] usb_data_reg;

wire  [3:0]s_axi_awid;
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
wire       s_axi_awvalid;
wire       s_axi_awready;
wire  [31:0]s_axi_wdata;
wire  [3:0]s_axi_wstrb;
wire       s_axi_wlast;
wire       s_axi_wvalid;
wire       s_axi_wready;
wire       s_axi_wuser;
wire       s_axi_bready;
wire   [3:0]s_axi_bid;
wire   [1:0]s_axi_bresp;
wire       s_axi_bvalid;
wire       s_axi_buser = 1'b0;
wire  [3:0]s_axi_arid;
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
wire       s_axi_arvalid;
wire       s_axi_arready;
wire       s_axi_rready;
wire   [3:0]s_axi_rid;
wire   [31:0]s_axi_rdata;
wire   [1:0]s_axi_rresp;
wire       s_axi_rlast;
wire       s_axi_rvalid;
wire       s_axi_ruser = 1'b0;



wire [19-1:0] axi_mem_wraddr;
wire [19-1:0] axi_mem_rdaddr;
wire          axi_mem_rden;
wire          axi_mem_wren;
wire [4-1:0]  axi_mem_wmask;
wire [32-1:0] axi_mem_wdata;
wire [32-1:0] axi_mem_rdata;

// reset sync
reg rst_n_usb_clk_d0;
reg rst_n_usb_clk_d1;
reg rst_n_axi_clk_d0;
reg rst_n_axi_clk_d1;
reg cpu_start_flag_d0;
reg cpu_start_flag_d1;
reg ui_clk_sync_rst_d0;
reg ui_clk_sync_rst_d1;
reg rst_n_ddr_clk_d0;
reg rst_n_ddr_clk_d1;


// clock
wire clk_50;
wire clk_ddr_ref; // 200MHz
wire locked;
wire ui_clk ; // 100MHz

// ddr            
wire app_sr_active;       
wire app_ref_ack;         
wire app_zq_ack;          
wire ui_clk_sync_rst;   
wire mmcm_locked;
wire init_calib_complete;

always@(posedge usb_clk_60m or negedge rst_n)begin
    if(!rst_n) begin
        rst_n_usb_clk_d0 <= 1'b0;
        rst_n_usb_clk_d1 <= 1'b0;
    end
    else begin
        rst_n_usb_clk_d0 <= 1'b1;
        rst_n_usb_clk_d1 <= rst_n_usb_clk_d0;
    end
end

always@(posedge clk_axi_in or negedge rst_n)begin
    if(!rst_n) begin
        rst_n_axi_clk_d0 <= 1'b0;
        rst_n_axi_clk_d1 <= 1'b0;
    end
    else begin
        rst_n_axi_clk_d0 <= 1'b1;
        rst_n_axi_clk_d1 <= rst_n_axi_clk_d0;
    end
end

always@(posedge clk_axi_in or negedge rst_n)begin
    if(!rst_n) begin
        cpu_start_flag_d0 <= 1'b0;
        cpu_start_flag_d1 <= 1'b0;
    end
    else if (cpu_start_n==1'b0) begin
        cpu_start_flag_d0 <= 1'b1;
        cpu_start_flag_d1 <= cpu_start_flag_d0;
    end
end

always@(posedge clk_ddr_ref or negedge rst_n)begin
    if(!rst_n) begin
        rst_n_ddr_clk_d0 <= 1'b0;
        rst_n_ddr_clk_d1 <= 1'b0;
    end
    else begin
        rst_n_ddr_clk_d0 <= 1'b1;
        rst_n_ddr_clk_d1 <= rst_n_ddr_clk_d0;
    end
end

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

always@(posedge clk_axi_in)begin
    io_usb_done_sync_axi_clk_d0 <= io_usb_done;
    io_usb_done_sync_axi_clk_d1 <= io_usb_done_sync_axi_clk_d0;
end

clk_wiz_0 u_clk_wiz_0
   (
    // Clock out ports
    .clk_out1(clk_50),     // output clk_out1
    .clk_out2(clk_ddr_ref),
    // Status and control signals
    .reset(1'b0), // input resetn
    .locked(locked),        // output locked
   // Clock in ports
    .clk_in1(clk_axi_in)
    ); 

DandSocV2 u_DandSocV2(
    .io_asyncResetn                      ( rst_n_axi_clk_d1                    ),
    .io_axiClk                           ( clk_axi_in                          ),
    .io_uart_txd                         ( io_uart_txd                         ),
    .io_uart_rxd                         ( io_uart_rxd                         ),
    .io_axi_frame_buff_aw_valid          ( io_axi_frame_buff_aw_valid          ),
    .io_axi_frame_buff_aw_ready          ( io_axi_frame_buff_aw_ready          ),
    .io_axi_frame_buff_aw_payload_addr   ( io_axi_frame_buff_aw_payload_addr   ),
    .io_axi_frame_buff_aw_payload_id     ( io_axi_frame_buff_aw_payload_id     ),
    .io_axi_frame_buff_aw_payload_region ( io_axi_frame_buff_aw_payload_region ),
    .io_axi_frame_buff_aw_payload_len    ( io_axi_frame_buff_aw_payload_len    ),
    .io_axi_frame_buff_aw_payload_size   ( io_axi_frame_buff_aw_payload_size   ),
    .io_axi_frame_buff_aw_payload_burst  ( io_axi_frame_buff_aw_payload_burst  ),
    .io_axi_frame_buff_aw_payload_lock   ( io_axi_frame_buff_aw_payload_lock   ),
    .io_axi_frame_buff_aw_payload_cache  ( io_axi_frame_buff_aw_payload_cache  ),
    .io_axi_frame_buff_aw_payload_qos    ( io_axi_frame_buff_aw_payload_qos    ),
    .io_axi_frame_buff_aw_payload_prot   ( io_axi_frame_buff_aw_payload_prot   ),
    .io_axi_frame_buff_w_valid           ( io_axi_frame_buff_w_valid           ),
    .io_axi_frame_buff_w_ready           ( io_axi_frame_buff_w_ready           ),
    .io_axi_frame_buff_w_payload_data    ( io_axi_frame_buff_w_payload_data    ),
    .io_axi_frame_buff_w_payload_strb    ( io_axi_frame_buff_w_payload_strb    ),
    .io_axi_frame_buff_w_payload_last    ( io_axi_frame_buff_w_payload_last    ),
    .io_axi_frame_buff_b_valid           ( io_axi_frame_buff_b_valid           ),
    .io_axi_frame_buff_b_ready           ( io_axi_frame_buff_b_ready           ),
    .io_axi_frame_buff_b_payload_id      ( io_axi_frame_buff_b_payload_id      ),
    .io_axi_frame_buff_b_payload_resp    ( io_axi_frame_buff_b_payload_resp    ),
    .io_axi_frame_buff_ar_valid          ( io_axi_frame_buff_ar_valid          ),
    .io_axi_frame_buff_ar_ready          ( io_axi_frame_buff_ar_ready          ),
    .io_axi_frame_buff_ar_payload_addr   ( io_axi_frame_buff_ar_payload_addr   ),
    .io_axi_frame_buff_ar_payload_id     ( io_axi_frame_buff_ar_payload_id     ),
    .io_axi_frame_buff_ar_payload_region ( io_axi_frame_buff_ar_payload_region ),
    .io_axi_frame_buff_ar_payload_len    ( io_axi_frame_buff_ar_payload_len    ),
    .io_axi_frame_buff_ar_payload_size   ( io_axi_frame_buff_ar_payload_size   ),
    .io_axi_frame_buff_ar_payload_burst  ( io_axi_frame_buff_ar_payload_burst  ),
    .io_axi_frame_buff_ar_payload_lock   ( io_axi_frame_buff_ar_payload_lock   ),
    .io_axi_frame_buff_ar_payload_cache  ( io_axi_frame_buff_ar_payload_cache  ),
    .io_axi_frame_buff_ar_payload_qos    ( io_axi_frame_buff_ar_payload_qos    ),
    .io_axi_frame_buff_ar_payload_prot   ( io_axi_frame_buff_ar_payload_prot   ),
    .io_axi_frame_buff_r_valid           ( io_axi_frame_buff_r_valid           ),
    .io_axi_frame_buff_r_ready           ( io_axi_frame_buff_r_ready           ),
    .io_axi_frame_buff_r_payload_data    ( io_axi_frame_buff_r_payload_data    ),
    .io_axi_frame_buff_r_payload_id      ( io_axi_frame_buff_r_payload_id      ),
    .io_axi_frame_buff_r_payload_resp    ( io_axi_frame_buff_r_payload_resp    ),
    .io_axi_frame_buff_r_payload_last    ( io_axi_frame_buff_r_payload_last    ),
    .io_axi_ddr_aw_valid                 ( io_axi_ddr_aw_valid                 ),
    .io_axi_ddr_aw_ready                 ( io_axi_ddr_aw_ready                 ),
    .io_axi_ddr_aw_payload_addr          ( io_axi_ddr_aw_payload_addr          ),
    .io_axi_ddr_aw_payload_id            ( io_axi_ddr_aw_payload_id            ),
    .io_axi_ddr_aw_payload_region        ( io_axi_ddr_aw_payload_region        ),
    .io_axi_ddr_aw_payload_len           ( io_axi_ddr_aw_payload_len           ),
    .io_axi_ddr_aw_payload_size          ( io_axi_ddr_aw_payload_size          ),
    .io_axi_ddr_aw_payload_burst         ( io_axi_ddr_aw_payload_burst         ),
    .io_axi_ddr_aw_payload_lock          ( io_axi_ddr_aw_payload_lock          ),
    .io_axi_ddr_aw_payload_cache         ( io_axi_ddr_aw_payload_cache         ),
    .io_axi_ddr_aw_payload_qos           ( io_axi_ddr_aw_payload_qos           ),
    .io_axi_ddr_aw_payload_prot          ( io_axi_ddr_aw_payload_prot          ),
    .io_axi_ddr_w_valid                  ( io_axi_ddr_w_valid                  ),
    .io_axi_ddr_w_ready                  ( io_axi_ddr_w_ready                  ),
    .io_axi_ddr_w_payload_data           ( io_axi_ddr_w_payload_data           ),
    .io_axi_ddr_w_payload_strb           ( io_axi_ddr_w_payload_strb           ),
    .io_axi_ddr_w_payload_last           ( io_axi_ddr_w_payload_last           ),
    .io_axi_ddr_b_valid                  ( io_axi_ddr_b_valid                  ),
    .io_axi_ddr_b_ready                  ( io_axi_ddr_b_ready                  ),
    .io_axi_ddr_b_payload_id             ( io_axi_ddr_b_payload_id             ),
    .io_axi_ddr_b_payload_resp           ( io_axi_ddr_b_payload_resp           ),
    .io_axi_ddr_ar_valid                 ( io_axi_ddr_ar_valid                 ),
    .io_axi_ddr_ar_ready                 ( io_axi_ddr_ar_ready                 ),
    .io_axi_ddr_ar_payload_addr          ( io_axi_ddr_ar_payload_addr          ),
    .io_axi_ddr_ar_payload_id            ( io_axi_ddr_ar_payload_id            ),
    .io_axi_ddr_ar_payload_region        ( io_axi_ddr_ar_payload_region        ),
    .io_axi_ddr_ar_payload_len           ( io_axi_ddr_ar_payload_len           ),
    .io_axi_ddr_ar_payload_size          ( io_axi_ddr_ar_payload_size          ),
    .io_axi_ddr_ar_payload_burst         ( io_axi_ddr_ar_payload_burst         ),
    .io_axi_ddr_ar_payload_lock          ( io_axi_ddr_ar_payload_lock          ),
    .io_axi_ddr_ar_payload_cache         ( io_axi_ddr_ar_payload_cache         ),
    .io_axi_ddr_ar_payload_qos           ( io_axi_ddr_ar_payload_qos           ),
    .io_axi_ddr_ar_payload_prot          ( io_axi_ddr_ar_payload_prot          ),
    .io_axi_ddr_r_valid                  ( io_axi_ddr_r_valid                  ),
    .io_axi_ddr_r_ready                  ( io_axi_ddr_r_ready                  ),
    .io_axi_ddr_r_payload_data           ( io_axi_ddr_r_payload_data           ),
    .io_axi_ddr_r_payload_id             ( io_axi_ddr_r_payload_id             ),
    .io_axi_ddr_r_payload_resp           ( io_axi_ddr_r_payload_resp           ),
    .io_axi_ddr_r_payload_last           ( io_axi_ddr_r_payload_last           ),
    .io_axi_usb_aw_valid                 ( io_axi_usb_aw_valid                 ),
    .io_axi_usb_aw_ready                 ( io_axi_usb_aw_ready                 ),
    .io_axi_usb_aw_payload_addr          ( io_axi_usb_aw_payload_addr          ),
    .io_axi_usb_aw_payload_id            ( io_axi_usb_aw_payload_id            ),
    .io_axi_usb_aw_payload_region        ( io_axi_usb_aw_payload_region        ),
    .io_axi_usb_aw_payload_len           ( io_axi_usb_aw_payload_len           ),
    .io_axi_usb_aw_payload_size          ( io_axi_usb_aw_payload_size          ),
    .io_axi_usb_aw_payload_burst         ( io_axi_usb_aw_payload_burst         ),
    .io_axi_usb_aw_payload_lock          ( io_axi_usb_aw_payload_lock          ),
    .io_axi_usb_aw_payload_cache         ( io_axi_usb_aw_payload_cache         ),
    .io_axi_usb_aw_payload_qos           ( io_axi_usb_aw_payload_qos           ),
    .io_axi_usb_aw_payload_prot          ( io_axi_usb_aw_payload_prot          ),
    .io_axi_usb_w_valid                  ( io_axi_usb_w_valid                  ),
    .io_axi_usb_w_ready                  ( io_axi_usb_w_ready                  ),
    .io_axi_usb_w_payload_data           ( io_axi_usb_w_payload_data           ),
    .io_axi_usb_w_payload_strb           ( io_axi_usb_w_payload_strb           ),
    .io_axi_usb_w_payload_last           ( io_axi_usb_w_payload_last           ),
    .io_axi_usb_b_valid                  ( io_axi_usb_b_valid                  ),
    .io_axi_usb_b_ready                  ( io_axi_usb_b_ready                  ),
    .io_axi_usb_b_payload_id             ( io_axi_usb_b_payload_id             ),
    .io_axi_usb_b_payload_resp           ( io_axi_usb_b_payload_resp           ),
    .io_axi_usb_ar_valid                 ( io_axi_usb_ar_valid                 ),
    .io_axi_usb_ar_ready                 ( io_axi_usb_ar_ready                 ),
    .io_axi_usb_ar_payload_addr          ( io_axi_usb_ar_payload_addr          ),
    .io_axi_usb_ar_payload_id            ( io_axi_usb_ar_payload_id            ),
    .io_axi_usb_ar_payload_region        ( io_axi_usb_ar_payload_region        ),
    .io_axi_usb_ar_payload_len           ( io_axi_usb_ar_payload_len           ),
    .io_axi_usb_ar_payload_size          ( io_axi_usb_ar_payload_size          ),
    .io_axi_usb_ar_payload_burst         ( io_axi_usb_ar_payload_burst         ),
    .io_axi_usb_ar_payload_lock          ( io_axi_usb_ar_payload_lock          ),
    .io_axi_usb_ar_payload_cache         ( io_axi_usb_ar_payload_cache         ),
    .io_axi_usb_ar_payload_qos           ( io_axi_usb_ar_payload_qos           ),
    .io_axi_usb_ar_payload_prot          ( io_axi_usb_ar_payload_prot          ),
    .io_axi_usb_r_valid                  ( io_axi_usb_r_valid                  ),
    .io_axi_usb_r_ready                  ( io_axi_usb_r_ready                  ),
    .io_axi_usb_r_payload_data           ( io_axi_usb_r_payload_data           ),
    .io_axi_usb_r_payload_id             ( io_axi_usb_r_payload_id             ),
    .io_axi_usb_r_payload_resp           ( io_axi_usb_r_payload_resp           ),
    .io_axi_usb_r_payload_last           ( io_axi_usb_r_payload_last           ),
    .io_usb_done                         (  cpu_start_flag_d1                  )
    );


axi_slave_mem#(
    .AXI_DATA_WIDTH    ( 32 ),
    .AXI_ADDR_WIDTH    ( 32 ),
    .AXI_ID_WIDTH      ( 4  ),
    .AXI_STRB_WIDTH    ( 32/8 ),
    .AXI_USER_WIDTH    ( 1 ),
    .WRITE_BUFFER_SIZE ( 2*1024*1024 ),
    .READ_BUFFER_SIZE  ( 2*1024*1024 )
)u_axi_frame_buff(
    .clk               ( clk_axi_in        ),
    .rst_n             ( rst_n             ),
    .aw_addr           ( io_axi_frame_buff_aw_payload_addr           ),
    .aw_prot           ( io_axi_frame_buff_aw_payload_prot           ),
    .aw_region         ( io_axi_frame_buff_aw_payload_region         ),
    .aw_len            ( io_axi_frame_buff_aw_payload_len            ),
    .aw_size           ( io_axi_frame_buff_aw_payload_size           ),
    .aw_burst          ( io_axi_frame_buff_aw_payload_burst          ),
    .aw_lock           ( io_axi_frame_buff_aw_payload_lock           ),
    .aw_cache          ( io_axi_frame_buff_aw_payload_cache          ),
    .aw_qos            ( io_axi_frame_buff_aw_payload_qos            ),
    .aw_id             ( io_axi_frame_buff_aw_payload_id             ),
    .aw_user           ( 1'b0                                        ),
    .aw_ready          ( io_axi_frame_buff_aw_ready                  ),
    .aw_valid          ( io_axi_frame_buff_aw_valid                  ),
    .ar_addr           ( io_axi_frame_buff_ar_payload_addr           ),
    .ar_prot           ( io_axi_frame_buff_ar_payload_prot           ),
    .ar_region         ( io_axi_frame_buff_ar_payload_region         ),
    .ar_len            ( io_axi_frame_buff_ar_payload_len            ),
    .ar_size           ( io_axi_frame_buff_ar_payload_size           ),
    .ar_burst          ( io_axi_frame_buff_ar_payload_burst          ),
    .ar_lock           ( io_axi_frame_buff_ar_payload_lock           ),
    .ar_cache          ( io_axi_frame_buff_ar_payload_cache          ),
    .ar_qos            ( io_axi_frame_buff_ar_payload_qos            ),
    .ar_id             ( io_axi_frame_buff_ar_payload_id             ),
    .ar_user           ( 1'b0                                        ),
    .ar_ready          ( io_axi_frame_buff_ar_ready                  ),
    .ar_valid          ( io_axi_frame_buff_ar_valid                  ),
    .w_valid           ( io_axi_frame_buff_w_valid                   ),
    .w_data            ( io_axi_frame_buff_w_payload_data            ),
    .w_strb            ( io_axi_frame_buff_w_payload_strb            ),
    .w_user            ( 1'b0                                        ),
    .w_last            ( io_axi_frame_buff_w_payload_last            ),
    .w_ready           ( io_axi_frame_buff_w_ready                   ),
    .r_data            ( io_axi_frame_buff_r_payload_data            ),
    .r_resp            ( io_axi_frame_buff_r_payload_resp            ),
    .r_last            ( io_axi_frame_buff_r_payload_last            ),
    .r_id              ( io_axi_frame_buff_r_payload_id              ),
    .r_user            ( io_axi_frame_buff_r_payload_user            ),
    .r_ready           ( io_axi_frame_buff_r_ready                   ),
    .r_valid           ( io_axi_frame_buff_r_valid                   ),
    .b_resp            ( io_axi_frame_buff_b_payload_resp            ),
    .b_id              ( io_axi_frame_buff_b_payload_id              ),
    .b_user            ( io_axi_frame_buff_b_payload_user            ),
    .b_ready           ( io_axi_frame_buff_b_ready                   ),
    .b_valid           ( io_axi_frame_buff_b_valid                   ),
    .axi_mem_wraddr    ( axi_mem_wraddr    ),
    .axi_mem_rdaddr    ( axi_mem_rdaddr    ),
    .axi_mem_rden      ( axi_mem_rden      ),
    .axi_mem_wren      ( axi_mem_wren      ),
    .axi_mem_wmask     ( axi_mem_wmask     ),
    .axi_mem_wdata     ( axi_mem_wdata     ),
    .axi_mem_rdata     ( axi_mem_rdata     )
);

lcd_rgb_char u_lcd_rgb_char(
    .sys_clk         ( clk_axi_in          ),
    .sys_rst_n       ( rst_n               ),
    .fb_ena          ( axi_mem_wren        ),
    .fb_wea          ( axi_mem_wren        ),
    .fb_addra        ( axi_mem_wraddr[16:0]),
    .fb_dina         ( axi_mem_wdata[23:0] ),
    .lcd_hs          ( lcd_hs          ),
    .lcd_vs          ( lcd_vs          ),
    .lcd_de          ( lcd_de          ),
    .lcd_rgb         ( lcd_rgb         ),
    .lcd_bl          ( lcd_bl          ),
    .lcd_rst         ( lcd_rst         ),
    .lcd_clk         ( lcd_clk         )
);

usb_axi_sync#(
    .AXI_ID_WIDTH    ( 2 ),
    .AXI_ADDR_WIDTH  ( 32 ),
    .AXI_USER_WIDTH  ( 1 ),
    .AXI_DATA_WIDTH  ( 32 ),
    .AXI_RESET_ADDR  ( 32'h8000_0000 )
)u_usb_axi(
    .usb_clk_60m     ( usb_clk_60m     ),
    .sys_rst_n       ( rst_n_usb_clk_d1),
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
    .usb_done        ( io_usb_done     ),
    .check_error     ( check_error     ),

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


axi_clock_converter_0 u_usb_axi_clock_converter_0(
    .s_axi_aclk     ( usb_clk_60m ),
    .s_axi_aresetn  ( rst_n_usb_clk_d1 ),
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
    .m_axi_aclk     ( clk_axi_in ),
    .m_axi_aresetn  ( rst_n_axi_clk_d1 ),
    .m_axi_awid     ( io_axi_usb_aw_payload_id ),
    .m_axi_awaddr   ( io_axi_usb_aw_payload_addr ),
    .m_axi_awlen    ( io_axi_usb_aw_payload_len ),
    .m_axi_awsize   ( io_axi_usb_aw_payload_size ),
    .m_axi_awburst  ( io_axi_usb_aw_payload_burst ),
    .m_axi_awlock   ( io_axi_usb_aw_payload_lock ),
    .m_axi_awcache  ( io_axi_usb_aw_payload_cache ),
    .m_axi_awprot   ( io_axi_usb_aw_payload_prot ),
    .m_axi_awregion ( io_axi_usb_aw_payload_region ),
    .m_axi_awqos    ( io_axi_usb_aw_payload_qos ),
    .m_axi_awuser   (  ),
    .m_axi_awvalid  ( io_axi_usb_aw_valid ),
    .m_axi_awready  ( io_axi_usb_aw_ready ),
    .m_axi_wdata    ( io_axi_usb_w_payload_data ),
    .m_axi_wstrb    ( io_axi_usb_w_payload_strb ),
    .m_axi_wlast    ( io_axi_usb_w_payload_last ),
    .m_axi_wuser    (  ),
    .m_axi_wvalid   ( io_axi_usb_w_valid ),
    .m_axi_wready   ( io_axi_usb_w_ready ),
    .m_axi_bid      ( io_axi_usb_b_payload_id ),
    .m_axi_bresp    ( io_axi_usb_b_payload_resp ),
    .m_axi_buser    ( 1'b0 ),
    .m_axi_bvalid   ( io_axi_usb_b_valid ),
    .m_axi_bready   ( io_axi_usb_b_ready ),
    .m_axi_arid     ( io_axi_usb_ar_payload_id ),
    .m_axi_araddr   ( io_axi_usb_ar_payload_addr ),
    .m_axi_arlen    ( io_axi_usb_ar_payload_len ),
    .m_axi_arsize   ( io_axi_usb_ar_payload_size ),
    .m_axi_arburst  ( io_axi_usb_ar_payload_burst ),
    .m_axi_arlock   ( io_axi_usb_ar_payload_lock ),
    .m_axi_arcache  ( io_axi_usb_ar_payload_cache ),
    .m_axi_arprot   ( io_axi_usb_ar_payload_prot ),
    .m_axi_arregion ( io_axi_usb_ar_payload_region ),
    .m_axi_arqos    ( io_axi_usb_ar_payload_qos ),
    .m_axi_aruser   (  ),
    .m_axi_arvalid  ( io_axi_usb_ar_valid ),
    .m_axi_arready  ( io_axi_usb_ar_ready ),
    .m_axi_rid      ( io_axi_usb_r_payload_id ),
    .m_axi_rdata    ( io_axi_usb_r_payload_data ),
    .m_axi_rresp    ( io_axi_usb_r_payload_resp ),
    .m_axi_rlast    ( io_axi_usb_r_payload_last ),
    .m_axi_ruser    ( 1'b0 ),
    .m_axi_rvalid   ( io_axi_usb_r_valid ),
    .m_axi_rready   ( io_axi_usb_r_ready )
);

axi_clock_converter_0 u_ddr_clock_converter_0(
    .s_axi_aclk     ( clk_axi_in ),
    .s_axi_aresetn  ( rst_n_axi_clk_d1 ),
    .s_axi_awid     ( io_axi_ddr_aw_payload_id ),
    .s_axi_awaddr   ( io_axi_ddr_aw_payload_addr ),
    .s_axi_awlen    ( io_axi_ddr_aw_payload_len ),
    .s_axi_awsize   ( io_axi_ddr_aw_payload_size ),
    .s_axi_awburst  ( io_axi_ddr_aw_payload_burst ),
    .s_axi_awlock   ( io_axi_ddr_aw_payload_lock ),
    .s_axi_awcache  ( io_axi_ddr_aw_payload_cache ),
    .s_axi_awprot   ( io_axi_ddr_aw_payload_prot ),
    .s_axi_awregion ( io_axi_ddr_aw_payload_region ),
    .s_axi_awqos    ( io_axi_ddr_aw_payload_qos ),
    .s_axi_awuser   ( 1'b0 ),
    .s_axi_awvalid  ( io_axi_ddr_aw_valid ),
    .s_axi_awready  ( io_axi_ddr_aw_ready ),
    .s_axi_wdata    ( io_axi_ddr_w_payload_data ),
    .s_axi_wstrb    ( io_axi_ddr_w_payload_strb ),
    .s_axi_wlast    ( io_axi_ddr_w_payload_last ),
    .s_axi_wuser    ( 1'b0 ),
    .s_axi_wvalid   ( io_axi_ddr_w_valid ),
    .s_axi_wready   ( io_axi_ddr_w_ready ),
    .s_axi_bid      ( io_axi_ddr_b_payload_id ),
    .s_axi_bresp    ( io_axi_ddr_b_payload_resp ),
    .s_axi_buser    (  ),
    .s_axi_bvalid   ( io_axi_ddr_b_valid ),
    .s_axi_bready   ( io_axi_ddr_b_ready ),
    .s_axi_arid     ( io_axi_ddr_ar_payload_id ),
    .s_axi_araddr   ( io_axi_ddr_ar_payload_addr ),
    .s_axi_arlen    ( io_axi_ddr_ar_payload_len ),
    .s_axi_arsize   ( io_axi_ddr_ar_payload_size ),
    .s_axi_arburst  ( io_axi_ddr_ar_payload_burst ),
    .s_axi_arlock   ( io_axi_ddr_ar_payload_lock ),
    .s_axi_arcache  ( io_axi_ddr_ar_payload_cache ),
    .s_axi_arprot   ( io_axi_ddr_ar_payload_prot ),
    .s_axi_arregion ( io_axi_ddr_ar_payload_region ),
    .s_axi_arqos    ( io_axi_ddr_ar_payload_qos ),
    .s_axi_aruser   ( 1'b0 ),
    .s_axi_arvalid  ( io_axi_ddr_ar_valid ),
    .s_axi_arready  ( io_axi_ddr_ar_ready ),
    .s_axi_rid      ( io_axi_ddr_r_payload_id ),
    .s_axi_rdata    ( io_axi_ddr_r_payload_data ),
    .s_axi_rresp    ( io_axi_ddr_r_payload_resp ),
    .s_axi_rlast    ( io_axi_ddr_r_payload_last ),
    .s_axi_ruser    (  ),
    .s_axi_rvalid   ( io_axi_ddr_r_valid ),
    .s_axi_rready   ( io_axi_ddr_r_ready ),
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
    .ddr3_addr                      (ddr3_addr),  // output [13:0]      ddr3_addr
    .ddr3_ba                        (ddr3_ba),  // output [2:0]     ddr3_ba
    .ddr3_cas_n                     (ddr3_cas_n),  // output            ddr3_cas_n
    .ddr3_ck_n                      (ddr3_ck_n),  // output [0:0]       ddr3_ck_n
    .ddr3_ck_p                      (ddr3_ck_p),  // output [0:0]       ddr3_ck_p
    .ddr3_cke                       (ddr3_cke),  // output [0:0]        ddr3_cke
    .ddr3_ras_n                     (ddr3_ras_n),  // output            ddr3_ras_
    .ddr3_reset_n                   (ddr3_reset_n),  // output          ddr3_reset_n
    .ddr3_we_n                      (ddr3_we_n),  // output         ddr3_we_n
    .ddr3_dq                        (ddr3_dq),  // inout [31:0]     ddr3_dq
    .ddr3_dqs_n                     (ddr3_dqs_n),  // inout [3:0]       ddr3_dqs_n
    .ddr3_dqs_p                     (ddr3_dqs_p),  // inout [3:0]       ddr3_dqs_p
    .init_calib_complete            (init_calib_complete),  // output           init_calib_complete
    .ddr3_cs_n                      (ddr3_cs_n),  // output [0:0]       ddr3_cs_n
    .ddr3_dm                        (ddr3_dm),  // output [3:0]     ddr3_dm
    .ddr3_odt                       (ddr3_odt),  // output [0:0]        ddr3_odt
    // Application interface ports
    .ui_clk                         (ui_clk),  // output            ui_clk
    .ui_clk_sync_rst                (ui_clk_sync_rst),  // output           ui_clk_sync_rst
    .mmcm_locked                    (mmcm_locked),  // output           mmcm_locked
    .aresetn                        (!ui_clk_sync_rst_d1),  // input            aresetn
    .app_sr_req                     (1'b0),  // input           app_sr_req
    .app_ref_req                    (1'b0),  // input           app_ref_req
    .app_zq_req                     (1'b0),  // input           app_zq_req
    .app_sr_active                  (app_sr_active),  // output         app_sr_active
    .app_ref_ack                    (app_ref_ack),  // output           app_ref_ack
    .app_zq_ack                     (app_zq_ack),  // output            app_zq_ack
    // Slave Interface Write Address Ports
    .s_axi_awid                     (s_axi_awid),  // input [1:0]           s_axi_awid
    .s_axi_awaddr                   (s_axi_awaddr[28:0]),  // input [28:0]          s_axi_awaddr
    .s_axi_awlen                    (s_axi_awlen),  // input [7:0]          s_axi_awlen
    .s_axi_awsize                   (s_axi_awsize),  // input [2:0]         s_axi_awsize
    .s_axi_awburst                  (s_axi_awburst),  // input [1:0]            s_axi_awburst
    .s_axi_awlock                   (s_axi_awlock),  // input [0:0]         s_axi_awlock
    .s_axi_awcache                  (s_axi_awcache),  // input [3:0]            s_axi_awcache
    .s_axi_awprot                   (s_axi_awprot),  // input [2:0]         s_axi_awprot
    .s_axi_awqos                    (s_axi_awqos),  // input [3:0]          s_axi_awqos
    .s_axi_awvalid                  (s_axi_awvalid),  // input          s_axi_awvalid
    .s_axi_awready                  (s_axi_awready),  // output         s_axi_awready
    // Slave Interface Write Data Ports
    .s_axi_wdata                    (s_axi_wdata),  // input [31:0]         s_axi_wdata
    .s_axi_wstrb                    (s_axi_wstrb),  // input [3:0]          s_axi_wstrb
    .s_axi_wlast                    (s_axi_wlast),  // input            s_axi_wlast
    .s_axi_wvalid                   (s_axi_wvalid),  // input           s_axi_wvalid
    .s_axi_wready                   (s_axi_wready),  // output          s_axi_wready
    // Slave Interface Write Response Ports
    .s_axi_bid                      (s_axi_bid),  // output [1:0]           s_axi_bid
    .s_axi_bresp                    (s_axi_bresp),  // output [1:0]         s_axi_bresp
    .s_axi_bvalid                   (s_axi_bvalid),  // output          s_axi_bvalid
    .s_axi_bready                   (s_axi_bready),  // input           s_axi_bready
    // Slave Interface Read Address Ports
    .s_axi_arid                     (s_axi_arid),  // input [1:0]           s_axi_arid
    .s_axi_araddr                   (s_axi_araddr[28:0]),  // input [28:0]          s_axi_araddr
    .s_axi_arlen                    (s_axi_arlen),  // input [7:0]          s_axi_arlen
    .s_axi_arsize                   (s_axi_arsize),  // input [2:0]         s_axi_arsize
    .s_axi_arburst                  (s_axi_arburst),  // input [1:0]            s_axi_arburst
    .s_axi_arlock                   (s_axi_arlock),  // input [0:0]         s_axi_arlock
    .s_axi_arcache                  (s_axi_arcache),  // input [3:0]            s_axi_arcache
    .s_axi_arprot                   (s_axi_arprot),  // input [2:0]         s_axi_arprot
    .s_axi_arqos                    (s_axi_arqos),  // input [3:0]          s_axi_arqos
    .s_axi_arvalid                  (s_axi_arvalid),  // input          s_axi_arvalid
    .s_axi_arready                  (s_axi_arready),  // output         s_axi_arready
    // Slave Interface Read Data Ports
    .s_axi_rid                      (s_axi_rid),  // output [1:0]           s_axi_rid
    .s_axi_rdata                    (s_axi_rdata),  // output [31:0]            s_axi_rdata
    .s_axi_rresp                    (s_axi_rresp),  // output [1:0]         s_axi_rresp
    .s_axi_rlast                    (s_axi_rlast),  // output           s_axi_rlast
    .s_axi_rvalid                   (s_axi_rvalid),  // output          s_axi_rvalid
    .s_axi_rready                   (s_axi_rready),  // input           s_axi_rready
    // System Clock Ports
    .sys_clk_i                      (clk_ddr_ref),
    // Reference Clock Ports
    .clk_ref_i                      (clk_ddr_ref),
    .sys_rst                        (rst_n_ddr_clk_d1) // input sys_rst
    );

// ila_0 ila (
//     .clk(ui_clk), // input wire clk
//     .probe0(s_axi_rvalid),
//     .probe1(s_axi_awvalid),
//     .probe2(s_axi_wvalid), 
//     .probe3(s_axi_bvalid), 
//     .probe4(s_axi_arvalid), 
//     .probe5({25'b0, init_calib_complete, mmcm_locked, ui_clk_sync_rst_d1, 
//                     s_axi_awready, s_axi_wready, s_axi_rready, s_axi_arready}),
//     .probe6({31'b0, ui_clk_sync_rst}),
//     .probe7({31'b0, rst_n}),
//     .probe8(s_axi_awaddr),
//     .probe9(s_axi_wdata),
//     .probe10(s_axi_araddr),
//     .probe11(s_axi_rdata)
// );

// ila_0 ila (
//     .clk(usb_clk_60m), // input wire clk
//     .probe0(rst_n),
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

// ila_0 ila (
//     .clk(clk_axi_in), // input wire clk
//     .probe0(rst_n),
//     .probe1(cpu_start_flag_d1),
//     .probe2(u_DandSocV2.axi_cpu_area_cpu.icache_ar_valid), 
//     .probe3(u_DandSocV2.axi_cpu_area_cpu.icache_ar_ready), 
//     .probe4(u_DandSocV2.axi_cpu_area_cpu.icache_r_valid), 
//     .probe5(u_DandSocV2.axi_cpu_area_cpu.icache_r_payload_data),
//     .probe6(u_DandSocV2.axi_cpu_area_cpu.icache_ar_payload_addr),
//     .probe7({26'b0, check_error, 
//     io_axi_usb_aw_valid, io_axi_usb_aw_ready, io_axi_usb_w_valid, io_axi_usb_b_valid, io_axi_usb_r_valid}),
//     .probe8(io_axi_usb_aw_payload_addr),
//     .probe9(io_axi_usb_w_payload_data),
//     .probe10(io_axi_usb_ar_payload_addr),
//     .probe11(io_axi_usb_r_payload_data)
// );

ila_0 ila (
    .clk(clk_axi_in), // input wire clk
    .probe0(rst_n),
    .probe1(cpu_start_flag_d1),
    // .probe2(u_DandSocV2.axi_cpu_area_cpu.icache_ar_valid), 
    // .probe3(u_DandSocV2.axi_cpu_area_cpu.icache_ar_ready), 
    // .probe4(u_DandSocV2.axi_cpu_area_cpu.icache_r_valid), 
    // .probe5(u_DandSocV2.axi_cpu_area_cpu.icache_ar_payload_addr),
    // .probe6(u_DandSocV2.axi_cpu_area_cpu.icache_r_payload_data[31:0]),
    // .probe7(u_DandSocV2.axi_cpu_area_cpu.icache_r_payload_data[63:32]),

    .probe2(u_DandSocV2.axi_cpu_area_cpu.dcache_ar_valid), 
    .probe3(u_DandSocV2.axi_cpu_area_cpu.dcache_ar_ready), 
    .probe4(u_DandSocV2.axi_cpu_area_cpu.dcache_r_valid), 
    .probe5(u_DandSocV2.axi_cpu_area_cpu.dcache_ar_payload_addr),
    .probe6(u_DandSocV2.axi_cpu_area_cpu.dcache_r_payload_data[31:0]),
    .probe7(u_DandSocV2.axi_cpu_area_cpu.dcache_r_payload_data[63:32]),

    .probe8({25'b0, u_DandSocV2.axi_cpu_area_cpu.control_1.write_back_fire,
    u_DandSocV2.axi_cpu_area_cpu.control_1.write_back_payload_rd_addr, u_DandSocV2.axi_cpu_area_cpu.control_1.write_back_payload_rd_wen}),
    .probe9(u_DandSocV2.axi_cpu_area_cpu.control_1.write_back_payload_pc),
    .probe10(u_DandSocV2.axi_cpu_area_cpu.control_1.write_back_payload_rd_data[31:0]),
    .probe11(u_DandSocV2.axi_cpu_area_cpu.control_1.write_back_payload_rd_data[63:31])
);

always@(posedge usb_clk_60m or negedge rst_n)begin
    if(!rst_n) begin
        usb_data_reg <= 8'b0;
    end
    else if(!usb_wr_n) begin
        usb_data_reg <= usb_data_out;
    end
    else begin
        usb_data_reg <= 8'b0;
    end
end


endmodule



