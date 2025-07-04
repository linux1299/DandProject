module test_usb_axi_ram (
    input usb_clk_60m,    // USB Clock
    // input sys_clk,
    input sys_rst_n,  // Asynchronous reset active low

    // USB
    input               usb_rxf_n,    //FT232Hæ•°æ®FIFOå¯è¯»æŒ‡ç¤ºä¿¡å· 
    input               usb_txe_n,    //FT232Hæ•°æ®FIFOå¯å†™ä¿¡å·
    output              usb_oe_n,     //FT232Hæ•°æ®è¾“å‡ºä½¿èƒ½
    output              usb_rd_n,     //FT232HFIFOè¯»ä½¿èƒ½ä¿¡å?
    output              usb_wr_n,     //FT232HFIFOå†™ä½¿èƒ½ä¿¡å?
    output              usb_siwu_n,   //send immediate/wake up
    inout[7:0]          usb_data      //FT232 æ•°æ®æ»çº¿
    
);

localparam AXI_ID_WIDTH = 2;
localparam AXI_ADDR_WIDTH = 32;
localparam AXI_USER_WIDTH = 1;
localparam AXI_DATA_WIDTH = 32;

assign usb_siwu_n = 1'b1;

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
wire axi_wdata_fifo_wr_en;
wire axi_wdata_fifo_empty;
wire axi_wdata_fifo_almost_empty;
wire axi_wdata_fifo_rd_en;
wire axi_wdata_fifo_wr_rst_busy;
wire axi_wdata_fifo_rd_rst_busy;
wire axi_rdata_fifo_full;
wire axi_rdata_fifo_almost_full;
wire axi_rdata_fifo_wr_en;
wire axi_rdata_fifo_empty;
wire axi_rdata_fifo_almost_empty;
wire axi_rdata_fifo_rd_en;
wire axi_rdata_fifo_wr_rst_busy;
wire axi_rdata_fifo_rd_rst_busy;

reg sys_rst_n_d0;
reg sys_rst_n_d1;

wire            ram_d_mem_read;
wire [10-1:0]   ram_d_mem_raddr;
wire [10-1:0]   ram_d_mem_waddr;
wire [32-1:0]   ram_d_mem_wdata;
wire [32/8-1:0] ram_d_mem_strb;
wire            ram_d_mem_write;
wire [32-1:0]   ram_d_mem_rdata;
reg  [32-1:0]   ram_d   [0:(1<<12)-1];

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


ila_0 ila (
    .clk(usb_clk_60m), // input wire clk
    .probe0(sys_rst_n),
    .probe1(usb_rxf_n),
    .probe2(usb_rd_n), 
    .probe3(usb_wr_n), 
    .probe4(usb_oe_n), 
    .probe5({1'b0,
    axi_rdata_fifo_full, axi_rdata_fifo_almost_full, axi_rdata_fifo_wr_en, axi_rdata_fifo_empty, 
    axi_rdata_fifo_almost_empty, axi_rdata_fifo_rd_en, axi_rdata_fifo_wr_rst_busy, axi_rdata_fifo_rd_rst_busy,
    axi_wdata_fifo_full, axi_wdata_fifo_almost_full, axi_wdata_fifo_wr_en, axi_wdata_fifo_empty, 
    axi_wdata_fifo_almost_empty, axi_wdata_fifo_rd_en, axi_wdata_fifo_wr_rst_busy, axi_wdata_fifo_rd_rst_busy,
    usb_aw_valid_o, usb_w_valid_o, usb_ar_valid_o, usb_r_valid_i, usb_b_valid_i,
    axi_read_state, axi_write_state, state}),
    .probe6(wdata_cnt),
    .probe7(rdata_cnt),
    .probe8(usb_aw_addr_o),
    .probe9(usb_ar_addr_o),
    .probe10(usb_w_data_o),
    .probe11(usb_r_data_i)


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

    .wdata_cnt                  (wdata_cnt),
    .rdata_cnt                  (rdata_cnt),

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
    .axi_rdata_fifo_rd_rst_busy(axi_rdata_fifo_rd_rst_busy)
);


axi_slave_mem#(
    .AXI_DATA_WIDTH    ( AXI_DATA_WIDTH ),
    .AXI_ADDR_WIDTH    ( 32 ),
    .AXI_ID_WIDTH      ( 2 ),
    .AXI_STRB_WIDTH    ( AXI_DATA_WIDTH/8 ),
    .AXI_USER_WIDTH    ( 1 ),
    .WRITE_BUFFER_SIZE ( 4*1024 ),
    .READ_BUFFER_SIZE  ( 4*1024 )
)u_axi_slave_mem(
    .clk               ( usb_clk_60m   ),
    .rst_n             ( sys_rst_n ),
    .aw_addr           ( usb_aw_addr_o         ),
    .aw_prot           ( usb_aw_prot_o         ),
    .aw_region         ( usb_aw_region_o       ),
    .aw_len            ( usb_aw_len_o          ),
    .aw_size           ( usb_aw_size_o         ),
    .aw_burst          ( usb_aw_burst_o        ),
    .aw_lock           ( usb_aw_lock_o         ),
    .aw_cache          ( usb_aw_cache_o        ),
    .aw_qos            ( usb_aw_qos_o          ),
    .aw_id             ( usb_aw_id_o           ),
    .aw_user           ( usb_aw_user_o         ),
    .aw_ready          ( usb_aw_ready_i        ),
    .aw_valid          ( usb_aw_valid_o        ),
    .ar_addr           ( usb_ar_addr_o         ),
    .ar_prot           ( usb_ar_prot_o         ),
    .ar_region         ( usb_ar_region_o       ),
    .ar_len            ( usb_ar_len_o          ),
    .ar_size           ( usb_ar_size_o         ),
    .ar_burst          ( usb_ar_burst_o        ),
    .ar_lock           ( usb_ar_lock_o         ),
    .ar_cache          ( usb_ar_cache_o        ),
    .ar_qos            ( usb_ar_qos_o          ),
    .ar_id             ( usb_ar_id_o           ),
    .ar_user           ( usb_ar_user_o         ),
    .ar_ready          ( usb_ar_ready_i        ),
    .ar_valid          ( usb_ar_valid_o        ),
    .w_valid           ( usb_w_valid_o         ),
    .w_data            ( usb_w_data_o          ),
    .w_strb            ( usb_w_strb_o          ),
    .w_user            ( usb_w_user_o          ),
    .w_last            ( usb_w_last_o          ),
    .w_ready           ( usb_w_ready_i         ),
    .r_data            ( usb_r_data_i          ),
    .r_resp            ( usb_r_resp_i          ),
    .r_last            ( usb_r_last_i          ),
    .r_id              ( usb_r_id_i            ),
    .r_user            ( usb_r_user_i          ),
    .r_ready           ( usb_r_ready_o         ),
    .r_valid           ( usb_r_valid_i         ),
    .b_resp            ( usb_b_resp_i          ),
    .b_id              ( usb_b_id_i            ),
    .b_user            ( usb_b_user_i          ),
    .b_ready           ( usb_b_ready_o         ),
    .b_valid           ( usb_b_valid_i         ),
    .axi_mem_wraddr    ( ram_d_mem_waddr       ),
    .axi_mem_rdaddr    ( ram_d_mem_raddr       ),
    .axi_mem_rden      ( ram_d_mem_read        ),
    .axi_mem_wren      ( ram_d_mem_write       ),
    .axi_mem_wmask     ( ram_d_mem_strb        ),
    .axi_mem_wdata     ( ram_d_mem_wdata       ),
    .axi_mem_rdata     ( ram_d_mem_rdata       )
);

// ================== read ram ====================
assign ram_d_mem_rdata = ram_d[ram_d_mem_raddr];

// ================== write ram ====================
wire [32-1:0] mask;
genvar  k;
for(k=0; k<32/8; k=k+1) begin: assign_mask
  assign mask[k*8+:8] = {8{ram_d_mem_strb[k]}};
end
always @(posedge usb_clk_60m) begin
  if (ram_d_mem_write) begin
    ram_d[ram_d_mem_waddr] <= (ram_d_mem_wdata & mask) | (ram_d[ram_d_mem_waddr] & ~mask);
  end
end

endmodule