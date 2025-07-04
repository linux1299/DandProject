module DandSocTop(
input           clk_axi_in,
input           rst_n,
output          io_uart_txd,
input           io_uart_rxd,
output [19-1:0] axi_mem_wraddr,
output [19-1:0] axi_mem_rdaddr,
output          axi_mem_rden,
output          axi_mem_wren,
output [4-1:0]  axi_mem_wmask,
output [32-1:0] axi_mem_wdata,
input  [32-1:0] axi_mem_rdata
);


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


DandSoc u_DandSoc(
    .io_asyncResetn                      ( rst_n                               ),
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
    .io_axi_frame_buff_r_payload_last    ( io_axi_frame_buff_r_payload_last    )
);

axi_slave_mem#(
    .AXI_DATA_WIDTH    ( 32 ),
    .AXI_ADDR_WIDTH    ( 32 ),
    .AXI_ID_WIDTH      ( 4  ),
    .AXI_STRB_WIDTH    ( 32/8 ),
    .AXI_USER_WIDTH    ( 1 ),
    .WRITE_BUFFER_SIZE ( 2*1024*1024 ),
    .READ_BUFFER_SIZE  ( 2*1024*1024 )
)u_axi_slave_mem(
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




endmodule



