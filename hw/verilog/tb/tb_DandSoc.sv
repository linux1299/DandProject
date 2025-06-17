module tb_DandSoc();
import "DPI-C" function void update_pixel(input int x, input int y, input int rgb);
import "DPI-C" function void refresh_screen();
import "DPI-C" function void init_display();
import "DPI-C" function void cleanup_display();

logic              clk_axi_in;
logic              rst_n;
logic              io_axi_frame_buff_aw_valid;
logic              io_axi_frame_buff_aw_ready;
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
logic              io_axi_frame_buff_w_ready;
logic     [31:0]   io_axi_frame_buff_w_payload_data;
logic     [3:0]    io_axi_frame_buff_w_payload_strb;
logic              io_axi_frame_buff_w_payload_last;
logic              io_axi_frame_buff_b_valid;
logic              io_axi_frame_buff_b_ready;
logic     [3:0]    io_axi_frame_buff_b_payload_id;
logic     [1:0]    io_axi_frame_buff_b_payload_resp;
logic              io_axi_frame_buff_ar_valid;
logic              io_axi_frame_buff_ar_ready;
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
logic              io_axi_frame_buff_r_valid;
logic              io_axi_frame_buff_r_ready;
logic     [31:0]   io_axi_frame_buff_r_payload_data;
logic     [3:0]    io_axi_frame_buff_r_payload_id;
logic     [1:0]    io_axi_frame_buff_r_payload_resp;
logic              io_axi_frame_buff_r_payload_last;

logic [19-1:0] axi_mem_wraddr;
logic [19-1:0] axi_mem_rdaddr;
logic          axi_mem_rden;
logic          axi_mem_wren;
logic [4-1:0]  axi_mem_wmask;
logic [32-1:0] axi_mem_wdata;
logic [32-1:0] axi_mem_rdata;

logic        send_psel;
logic        send_penable;
logic [2:0]  send_pprot;
logic        send_pready;
logic        send_pslverr;
logic [31:0] send_paddr;
logic        send_pwrite;
logic [31:0] send_prdata;
logic [31:0] send_pwdata;
logic [3:0]  send_pstrb;



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

logic [32-1:0] bit_mask;
genvar  k;
reg [32-1:0] frame_buff [0:(300*400-1)];

always@(*) begin
  axi_mem_rdata = frame_buff[axi_mem_rdaddr];
end

for(k=0; k<32/8; k=k+1) begin: assign_mask
  assign bit_mask[k*8+:8] = {8{axi_mem_wmask[k]}};
end

always @(posedge clk_axi_in) begin
  if (axi_mem_wren) begin
    frame_buff[axi_mem_wraddr] <= (axi_mem_wdata & bit_mask) | (frame_buff[axi_mem_wraddr] & ~bit_mask);
  end
end


// ============================== dump fsdb =============================
// initial begin
// 	$display("\n================== Time:%d, Dump Start ================\n",$time);
// 	$fsdbDumpfile("./simWorkspace/tb_DandSoc/tb_DandSoc.fsdb");
// 	$fsdbDumpvars(0, "tb_DandSoc", "+mda");
// end

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
  # 50
  rst_n = 1'b1;
end

// ========================== Time out =============================
initial begin
  init_display();
 #2000000000000000000
  $display("\n============== TimeOut ! Simulation finish ! ============\n");
  cleanup_display();
  $finish;
end

// display
wire [9:0] x;  // 0-399
wire [8:0] y;  // 0-299

wire [16:0]fb_addr;

// assign fb_addr = tb_DandSoc.u_DandSoc.axi_frame_buff.io_axi_arw_payload_addr[18:2];
assign fb_addr = tb_DandSoc.u_DandSoc.io_axi_frame_buff_aw_payload_addr[18:2];

assign x = fb_addr%400;
assign y = fb_addr/400;

always @(posedge clk_axi_in) begin
    // if (tb_DandSoc.u_DandSoc.axi_frame_buff.io_axi_w_valid) begin
    if (tb_DandSoc.u_DandSoc.io_axi_frame_buff_w_payload_data) begin
        // $display("x = %d, y = %d, pixel is %h", x, y, tb_DandSoc.u_DandSoc.axi_frame_buff.io_axi_w_payload_data[31:0]);
        // update_pixel(x, y, tb_DandSoc.u_DandSoc.axi_frame_buff.io_axi_w_payload_data[31:0]);
        // $display("x = %d, y = %d, pixel is %h", x, y, tb_DandSoc.u_DandSoc.io_axi_frame_buff_w_payload_data[31:0]);
        update_pixel(x, y, tb_DandSoc.u_DandSoc.io_axi_frame_buff_w_payload_data[31:0]);
        refresh_screen();
    end
end

uart_apb u_uart_apb(
    .resetn      ( rst_n         ),
    .clk         ( clk_axi_in    ),
    .in_psel     ( send_psel     ),
    .in_penable  ( send_penable  ),
    .in_pprot    ( send_pprot    ),
    .in_pready   ( send_pready   ),
    .in_pslverr  ( send_pslverr  ),
    .in_paddr    ( send_paddr    ),
    .in_pwrite   ( send_pwrite   ),
    .in_prdata   ( send_prdata   ),
    .in_pwdata   ( send_pwdata   ),
    .in_pstrb    ( send_pstrb    ),
    .uart_rx     ( io_uart_txd   ),
    .uart_tx     ( io_uart_rxd   )
);

// ==================== write file ========================
// integer file_handle;
// initial begin
//     file_handle = $fopen("nes.log", "w");  // "w"表示写入模式
//     if (!file_handle) begin
//         $display("Error: Failed to open file!");
//         $finish;
//     end
// end
// always @(posedge clk_axi_in) begin
//     if (tb_DandSoc.u_DandSoc.axi_cpu.control_1.write_back_fire && tb_DandSoc.u_DandSoc.axi_cpu.control_1.write_back_payload_rd_wen) begin
//         $fwrite(file_handle, "pc=%h, rd=%h, rd_wdata=%h\n", tb_DandSoc.u_DandSoc.axi_cpu.control_1.write_back_payload_pc, 
//                                                             tb_DandSoc.u_DandSoc.axi_cpu.control_1.write_back_payload_rd_addr, 
//                                                             tb_DandSoc.u_DandSoc.axi_cpu.control_1.write_back_payload_rd_data); 
//     end else if (tb_DandSoc.u_DandSoc.axi_cpu.control_1.write_back_fire) begin
//         $fwrite(file_handle, "pc=%h\n", tb_DandSoc.u_DandSoc.axi_cpu.control_1.write_back_payload_pc);
//     end
// end
// final begin
//     $fclose(file_handle);
//     $display("File closed.");
// end

reg [31:0] cnt=0;
always @(posedge clk_axi_in) begin
    if (tb_DandSoc.u_DandSoc.axi_cpu.control_1.write_back_fire && tb_DandSoc.u_DandSoc.axi_cpu.control_1.write_back_payload_pc==32'h80003300) begin
        cnt <= cnt +1;
        $display("cnt=%d", cnt); 
    end
end


task write_send_uart(
  input [31:0] addr,
  input [31:0] data
);

@(posedge clk_axi_in) begin
  send_psel <= 1'b1;
  send_penable <= 1'b1;
  send_pprot <= 3'b0;
  send_paddr <= addr;
  send_pwrite <= 1'b1;
  send_pwdata <= data;
  send_pstrb  <= 4'b1111;
end
@(posedge clk_axi_in) begin
  send_psel <= 1'b0;
  send_penable <= 1'b0;
  send_pwrite <= 1'b0;
end
  
endtask //automatic

initial begin
  #10
  @(posedge clk_axi_in);
  send_psel <= 1'b0;
  send_penable <= 1'b0;
  send_pprot <= 3'b0;
  send_paddr <= 32'b0;
  send_pwrite <= 1'b1;
  send_pwdata <= 32'b0;
  send_pstrb  <= 4'b1111;
  #10000
  write_send_uart(0, 32'd73);
#100000
  write_send_uart(0, 32'd0);
end



endmodule



