module tb_DandSocV2();


logic              clk_axi_in;
logic              rst_n;
logic              io_axi_frame_buff_aw_valid;
logic              io_axi_frame_buff_aw_ready = 1;
logic     [31:0]   io_axi_frame_buff_aw_payload_addr;
logic     [3:0]    io_axi_frame_buff_aw_payload_id;
logic     [3:0]    io_axi_frame_buff_aw_payload_region;
logic     [7:0]    io_axi_frame_buff_aw_payload_len;
logic     [2:0]    io_axi_frame_buff_aw_payload_size;
logic     [1:0]    io_axi_frame_buff_aw_payload_burst;
logic     [0:0]    io_axi_frame_buff_aw_payload_lock;
logic     [3:0]    io_axi_frame_buff_aw_payload_cache;
logic     [3:0]    io_axi_frame_buff_aw_payload_qos;
logic     [2:0]    io_axi_frame_buff_aw_payload_prot;
logic              io_axi_frame_buff_w_valid;
logic              io_axi_frame_buff_w_ready = 1;
logic     [31:0]   io_axi_frame_buff_w_payload_data;
logic     [3:0]    io_axi_frame_buff_w_payload_strb;
logic              io_axi_frame_buff_w_payload_last;
logic              io_axi_frame_buff_b_valid = 0;
logic              io_axi_frame_buff_b_ready;
logic     [3:0]    io_axi_frame_buff_b_payload_id = 0;
logic     [1:0]    io_axi_frame_buff_b_payload_resp = 0;
logic              io_axi_frame_buff_ar_valid;
logic              io_axi_frame_buff_ar_ready = 1;
logic     [31:0]   io_axi_frame_buff_ar_payload_addr;
logic     [3:0]    io_axi_frame_buff_ar_payload_id;
logic     [3:0]    io_axi_frame_buff_ar_payload_region;
logic     [7:0]    io_axi_frame_buff_ar_payload_len;
logic     [2:0]    io_axi_frame_buff_ar_payload_size;
logic     [1:0]    io_axi_frame_buff_ar_payload_burst;
logic     [0:0]    io_axi_frame_buff_ar_payload_lock;
logic     [3:0]    io_axi_frame_buff_ar_payload_cache;
logic     [3:0]    io_axi_frame_buff_ar_payload_qos;
logic     [2:0]    io_axi_frame_buff_ar_payload_prot;
logic              io_axi_frame_buff_r_valid = 0;
logic              io_axi_frame_buff_r_ready;
logic     [31:0]   io_axi_frame_buff_r_payload_data = 0;
logic     [3:0]    io_axi_frame_buff_r_payload_id = 0;
logic     [1:0]    io_axi_frame_buff_r_payload_resp = 0;
logic              io_axi_frame_buff_r_payload_last = 0;

logic              io_axi_ddr_aw_valid;
logic              io_axi_ddr_aw_ready;
logic     [31:0]   io_axi_ddr_aw_payload_addr;
logic     [3:0]    io_axi_ddr_aw_payload_id;
logic     [3:0]    io_axi_ddr_aw_payload_region;
logic     [7:0]    io_axi_ddr_aw_payload_len;
logic     [2:0]    io_axi_ddr_aw_payload_size;
logic     [1:0]    io_axi_ddr_aw_payload_burst;
logic     [0:0]    io_axi_ddr_aw_payload_lock;
logic     [3:0]    io_axi_ddr_aw_payload_cache;
logic     [3:0]    io_axi_ddr_aw_payload_qos;
logic     [2:0]    io_axi_ddr_aw_payload_prot;
logic              io_axi_ddr_w_valid;
logic              io_axi_ddr_w_ready;
logic     [31:0]   io_axi_ddr_w_payload_data;
logic     [3:0]    io_axi_ddr_w_payload_strb;
logic              io_axi_ddr_w_payload_last;
logic              io_axi_ddr_b_valid;
logic              io_axi_ddr_b_ready;
logic     [3:0]    io_axi_ddr_b_payload_id;
logic     [1:0]    io_axi_ddr_b_payload_resp;
logic              io_axi_ddr_ar_valid;
logic              io_axi_ddr_ar_ready;
logic     [31:0]   io_axi_ddr_ar_payload_addr;
logic     [3:0]    io_axi_ddr_ar_payload_id;
logic     [3:0]    io_axi_ddr_ar_payload_region;
logic     [7:0]    io_axi_ddr_ar_payload_len;
logic     [2:0]    io_axi_ddr_ar_payload_size;
logic     [1:0]    io_axi_ddr_ar_payload_burst;
logic     [0:0]    io_axi_ddr_ar_payload_lock;
logic     [3:0]    io_axi_ddr_ar_payload_cache;
logic     [3:0]    io_axi_ddr_ar_payload_qos;
logic     [2:0]    io_axi_ddr_ar_payload_prot;
logic              io_axi_ddr_r_valid;
logic              io_axi_ddr_r_ready;
logic     [31:0]   io_axi_ddr_r_payload_data;
logic     [3:0]    io_axi_ddr_r_payload_id;
logic     [1:0]    io_axi_ddr_r_payload_resp;
logic              io_axi_ddr_r_payload_last;

logic              io_axi_usb_aw_valid = 0;
logic              io_axi_usb_aw_ready;
logic     [31:0]   io_axi_usb_aw_payload_addr = 0;
logic     [1:0]    io_axi_usb_aw_payload_id = 0;
logic     [3:0]    io_axi_usb_aw_payload_region = 0;
logic     [7:0]    io_axi_usb_aw_payload_len = 0;
logic     [2:0]    io_axi_usb_aw_payload_size = 0;
logic     [1:0]    io_axi_usb_aw_payload_burst = 0;
logic     [0:0]    io_axi_usb_aw_payload_lock = 0;
logic     [3:0]    io_axi_usb_aw_payload_cache = 0;
logic     [3:0]    io_axi_usb_aw_payload_qos = 0;
logic     [2:0]    io_axi_usb_aw_payload_prot = 0;
logic              io_axi_usb_w_valid = 0;
logic              io_axi_usb_w_ready;
logic     [31:0]   io_axi_usb_w_payload_data = 0;
logic     [3:0]    io_axi_usb_w_payload_strb = 0;
logic              io_axi_usb_w_payload_last = 0;
logic              io_axi_usb_b_valid;
logic              io_axi_usb_b_ready = 1;
logic     [1:0]    io_axi_usb_b_payload_id;
logic     [1:0]    io_axi_usb_b_payload_resp;
logic              io_axi_usb_ar_valid = 0;
logic              io_axi_usb_ar_ready;
logic     [31:0]   io_axi_usb_ar_payload_addr = 0;
logic     [1:0]    io_axi_usb_ar_payload_id = 0;
logic     [3:0]    io_axi_usb_ar_payload_region = 0;
logic     [7:0]    io_axi_usb_ar_payload_len = 0;
logic     [2:0]    io_axi_usb_ar_payload_size = 0;
logic     [1:0]    io_axi_usb_ar_payload_burst = 0;
logic     [0:0]    io_axi_usb_ar_payload_lock = 0;
logic     [3:0]    io_axi_usb_ar_payload_cache = 0;
logic     [3:0]    io_axi_usb_ar_payload_qos = 0;
logic     [2:0]    io_axi_usb_ar_payload_prot = 0;
logic              io_axi_usb_r_valid;
logic              io_axi_usb_r_ready = 1;
logic     [31:0]   io_axi_usb_r_payload_data;
logic     [1:0]    io_axi_usb_r_payload_id;
logic     [1:0]    io_axi_usb_r_payload_resp;
logic              io_axi_usb_r_payload_last;

logic [19-1:0] axi_mem_wraddr;
logic [19-1:0] axi_mem_rdaddr;
logic          axi_mem_rden;
logic          axi_mem_wren;
logic [4-1:0]  axi_mem_wmask;
logic [32-1:0] axi_mem_wdata;
logic [32-1:0] axi_mem_rdata;

reg cpu_start_n;
reg cpu_start_flag_d0;
reg cpu_start_flag_d1;

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

DandSocV2 u_DandSocV2(
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
)u_axi_slave_mem(
    .clk               ( clk_axi_in        ),
    .rst_n             ( rst_n             ),
    .aw_addr           ( io_axi_ddr_aw_payload_addr           ),
    .aw_prot           ( io_axi_ddr_aw_payload_prot           ),
    .aw_region         ( io_axi_ddr_aw_payload_region         ),
    .aw_len            ( io_axi_ddr_aw_payload_len            ),
    .aw_size           ( io_axi_ddr_aw_payload_size           ),
    .aw_burst          ( io_axi_ddr_aw_payload_burst          ),
    .aw_lock           ( io_axi_ddr_aw_payload_lock           ),
    .aw_cache          ( io_axi_ddr_aw_payload_cache          ),
    .aw_qos            ( io_axi_ddr_aw_payload_qos            ),
    .aw_id             ( io_axi_ddr_aw_payload_id             ),
    .aw_user           ( 1'b0                                 ),
    .aw_ready          ( io_axi_ddr_aw_ready                  ),
    .aw_valid          ( io_axi_ddr_aw_valid                  ),
    .ar_addr           ( io_axi_ddr_ar_payload_addr           ),
    .ar_prot           ( io_axi_ddr_ar_payload_prot           ),
    .ar_region         ( io_axi_ddr_ar_payload_region         ),
    .ar_len            ( io_axi_ddr_ar_payload_len            ),
    .ar_size           ( io_axi_ddr_ar_payload_size           ),
    .ar_burst          ( io_axi_ddr_ar_payload_burst          ),
    .ar_lock           ( io_axi_ddr_ar_payload_lock           ),
    .ar_cache          ( io_axi_ddr_ar_payload_cache          ),
    .ar_qos            ( io_axi_ddr_ar_payload_qos            ),
    .ar_id             ( io_axi_ddr_ar_payload_id             ),
    .ar_user           ( 1'b0                                 ),
    .ar_ready          ( io_axi_ddr_ar_ready                  ),
    .ar_valid          ( io_axi_ddr_ar_valid                  ),
    .w_valid           ( io_axi_ddr_w_valid                   ),
    .w_data            ( io_axi_ddr_w_payload_data            ),
    .w_strb            ( io_axi_ddr_w_payload_strb            ),
    .w_user            ( 1'b0                                 ),
    .w_last            ( io_axi_ddr_w_payload_last            ),
    .w_ready           ( io_axi_ddr_w_ready                   ),
    .r_data            ( io_axi_ddr_r_payload_data            ),
    .r_resp            ( io_axi_ddr_r_payload_resp            ),
    .r_last            ( io_axi_ddr_r_payload_last            ),
    .r_id              ( io_axi_ddr_r_payload_id              ),
    .r_user            ( io_axi_ddr_r_payload_user            ),
    .r_ready           ( io_axi_ddr_r_ready                   ),
    .r_valid           ( io_axi_ddr_r_valid                   ),
    .b_resp            ( io_axi_ddr_b_payload_resp            ),
    .b_id              ( io_axi_ddr_b_payload_id              ),
    .b_user            ( io_axi_ddr_b_payload_user            ),
    .b_ready           ( io_axi_ddr_b_ready                   ),
    .b_valid           ( io_axi_ddr_b_valid                   ),
    .axi_mem_wraddr    ( axi_mem_wraddr    ),
    .axi_mem_rdaddr    ( axi_mem_rdaddr    ),
    .axi_mem_rden      ( axi_mem_rden      ),
    .axi_mem_wren      ( axi_mem_wren      ),
    .axi_mem_wmask     ( axi_mem_wmask     ),
    .axi_mem_wdata     ( axi_mem_wdata     ),
    .axi_mem_rdata     ( axi_mem_rdata     )
);

logic [32-1:0] bit_mask;
genvar  k;
reg [32-1:0] ddr [0:(2*1024*1024/4-1)];

always@(*) begin
  axi_mem_rdata = ddr[axi_mem_rdaddr];
end

for(k=0; k<32/8; k=k+1) begin: assign_mask
  assign bit_mask[k*8+:8] = {8{axi_mem_wmask[k]}};
end

always @(posedge clk_axi_in) begin
  if (axi_mem_wren) begin
    ddr[axi_mem_wraddr] <= (axi_mem_wdata & bit_mask) | (ddr[axi_mem_wraddr] & ~bit_mask);
  end
end


// ============================== dump fsdb =============================
initial begin
	$display("\n================== Time:%d, Dump Start ================\n",$time);
	$fsdbDumpfile("./simWorkspace/tb_DandSocV2/tb_DandSocV2.fsdb");
	$fsdbDumpvars(0, "tb_DandSocV2", "+mda");
end

// ========================== axi clk and reset =============================	 
initial begin
  clk_axi_in = 1'b0     ;  
  forever begin
    #1
    clk_axi_in = ~clk_axi_in ;
  end
end
initial begin
  rst_n = 1'b0;
  cpu_start_n = 1'b1;
  # 50
  rst_n = 1'b1;
  # 100
  cpu_start_n = 1'b0;
end

// ========================== Time out =============================
initial begin
 #20000000
  $display("\n============== TimeOut ! Simulation finish ! ============\n");
  $finish;
end


// ==================== write file ========================
integer file_handle;
initial begin
    file_handle = $fopen("pc.log", "w");
    if (!file_handle) begin
        $display("Error: Failed to open file!");
        $finish;
    end
end
always @(posedge clk_axi_in) begin
    if (tb_DandSocV2.u_DandSocV2.axi_cpu_area_cpu.control_1.write_back_fire) begin
        $fwrite(file_handle, "pc=%h, rd=%h, rd_wdata=%h, rd_wen=%h\n", 
                              tb_DandSocV2.u_DandSocV2.axi_cpu_area_cpu.control_1.write_back_payload_pc, 
                              tb_DandSocV2.u_DandSocV2.axi_cpu_area_cpu.control_1.write_back_payload_rd_addr, 
                              tb_DandSocV2.u_DandSocV2.axi_cpu_area_cpu.control_1.write_back_payload_rd_data,
                              tb_DandSocV2.u_DandSocV2.axi_cpu_area_cpu.control_1.write_back_payload_rd_wen); 
    end
end
final begin
    $fclose(file_handle);
    $display("File closed.");
end


// ==================== init ram ========================
reg [7:0] ram_tmp [0 : 2*1024*1024-1]; // 2MB
integer fd;
integer tmp;
integer i;
integer j;

initial begin
  fd = $fopen ("/home/lin/DandProject/sw/am-kernels/benchmarks/coremark/build/coremark-riscv64-nemu.bin", "rb");
  tmp = $fread(ram_tmp, fd);
  for (i = 0; i < (2*1024*1024/4); i = i + 1) begin
    ddr[i][7:0]   = ram_tmp[i*(32/8) + 0];
    ddr[i][15:8]  = ram_tmp[i*(32/8) + 1];
    ddr[i][23:16] = ram_tmp[i*(32/8) + 2];
    ddr[i][31:24] = ram_tmp[i*(32/8) + 3];
  end
end

endmodule



