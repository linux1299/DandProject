`timescale 1ns/1ps

module tb_usb_axi;

parameter AXI_ID_WIDTH = 2;
parameter AXI_ADDR_WIDTH = 32;
parameter AXI_USER_WIDTH = 1;
parameter AXI_DATA_WIDTH = 32;
parameter AXI_RESET_ADDR = 32'h8000_0000;

reg usb_clk_60m;
reg sys_clk;
reg sys_rst_n;

//FT232H                                
reg               usb_rxf_n;     //FT232H数据FIFO可读信号 
reg               usb_txe_n;     //FT232H数据FIFO可写信号
wire              usb_oe_n;      //FT232H数据输出使能
wire              usb_rd_n;      //FT232H FIFO读使能信??
wire              usb_wr_n;      //FT232H FIFO写使能信??
wire   [7:0]      usb_data;      //FT232H 双向数据总线
reg    [7:0]      usb_data_tmp;  //FT232H 双向数据总线
reg    [32-1:0]   ram_d   [0:(1<<21)-1];

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

wire            ram_d_mem_read;
wire [32-1:0]   ram_d_mem_raddr;
wire [32-1:0]   ram_d_mem_waddr;
wire [32-1:0]   ram_d_mem_wdata;
wire [32/8-1:0] ram_d_mem_strb;
wire            ram_d_mem_write;
wire [32-1:0]   ram_d_mem_rdata;

// ========================== axi clk and reset =============================    
initial begin
  usb_clk_60m = 'b0     ;  
  forever begin
    #16.67
    usb_clk_60m = ~usb_clk_60m ;
  end
end

initial begin
  sys_clk = 'b0     ;  
  forever begin
    #20
    sys_clk = ~sys_clk ;
  end
end

initial begin
  sys_rst_n = 1'b0;
  # 50
  sys_rst_n = 1'b1;

  #10000
  sys_rst_n = 1'b0;
  # 5000
  sys_rst_n = 1'b1;
end

initial begin
    usb_rxf_n = 1;
    usb_txe_n = 1;
    usb_data_tmp = 8'bzzzz_zzzz;

    #600
    @(posedge usb_clk_60m);
    usb_rxf_n <= 0;
    usb_data_tmp <= 8'd1;
    @(posedge usb_clk_60m);
    usb_data_tmp <= 8'd2;
    @(posedge usb_clk_60m);
    usb_data_tmp <= 8'd3;
    @(posedge usb_clk_60m);
    usb_data_tmp <= 8'd4;
    #150
    @(posedge usb_clk_60m);
    usb_rxf_n <= 1;


    #1000
    @(posedge usb_clk_60m);
    usb_txe_n <= 0;
end


assign usb_data = !usb_rxf_n ? usb_data_tmp : 8'bzzzz_zzzz;

usb_axi#(
    .AXI_ID_WIDTH    ( 2 ),
    .AXI_ADDR_WIDTH  ( 32 ),
    .AXI_USER_WIDTH  ( 1 ),
    .AXI_DATA_WIDTH  ( 32 ),
    .AXI_RESET_ADDR  ( 32'h8000_0000 )
)u_usb_axi(
    .usb_clk_60m     ( usb_clk_60m     ),
    .sys_clk         ( sys_clk         ),
    .sys_rst_n       ( sys_rst_n       ),
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
    .usb_r_user_i    ( usb_r_user_i    )
);

axi_slave_mem#(
    .AXI_DATA_WIDTH    ( AXI_DATA_WIDTH ),
    .AXI_ADDR_WIDTH    ( 32 ),
    .AXI_ID_WIDTH      ( 2 ),
    .AXI_STRB_WIDTH    ( AXI_DATA_WIDTH/8 ),
    .AXI_USER_WIDTH    ( 1 ),
    .WRITE_BUFFER_SIZE ( 2*1024*1024 ),
    .READ_BUFFER_SIZE  ( 2*1024*1024 )
)u_axi_slave_mem(
    .clk               ( sys_clk   ),
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
    .axi_mem_rdata     (   32'haaaa_aaaa   )
);

// ================== read ram ====================
assign ram_d_mem_rdata = ram_d[ram_d_mem_raddr];

// ================== write ram ====================
wire [32-1:0] mask;
genvar  k;
for(k=0; k<32/8; k=k+1) begin: assign_mask
  assign mask[k*8+:8] = {8{ram_d_mem_strb[k]}};
end
always @(posedge sys_clk) begin
  if (ram_d_mem_write) begin
    ram_d[ram_d_mem_waddr] <= (ram_d_mem_wdata & mask) | (ram_d[ram_d_mem_waddr] & ~mask);
  end
end

endmodule