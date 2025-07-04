module usb_axi_sync #(
    parameter AXI_ID_WIDTH = 2,
    parameter AXI_ADDR_WIDTH = 32,
    parameter AXI_USER_WIDTH = 1,
    parameter AXI_DATA_WIDTH = 32,
    parameter AXI_RESET_ADDR = 32'h8000_0000,
    parameter USB_DATA_WORD_NUM = 20'd65536
    ) (
    input               usb_clk_60m,   //FT232输出??60M时钟
    input               sys_rst_n,     //系统复位 ,低电??
    //FT232H                                
    input               usb_rxf_n,     //FT232H数据FIFO可读信号 
    input               usb_txe_n,     //FT232H数据FIFO可写信号
    output reg          usb_oe_n,      //FT232H数据输出使能
    output              usb_rd_n,      //FT232H FIFO读使能信??
    output              usb_wr_n,      //FT232H FIFO写使能信??
    inout    [7:0]      usb_data,      //FT232H 双向数据总线

    output [7:0] usb_data_out,

    // write address channel
    output [AXI_ID_WIDTH-1:0]           usb_aw_id_o,
    output reg [AXI_ADDR_WIDTH-1:0]     usb_aw_addr_o,
    output [7:0]                        usb_aw_len_o,
    output [2:0]                        usb_aw_size_o,
    output [1:0]                        usb_aw_burst_o,
    output                              usb_aw_lock_o,
    output [3:0]                        usb_aw_cache_o,
    output [2:0]                        usb_aw_prot_o,
    output [3:0]                        usb_aw_qos_o,
    output [3:0]                        usb_aw_region_o,
    output [AXI_USER_WIDTH-1:0]         usb_aw_user_o,
    output reg                          usb_aw_valid_o,
    input                               usb_aw_ready_i,

    // write data channel
    input                               usb_w_ready_i,
    output reg                          usb_w_valid_o,
    output reg [AXI_DATA_WIDTH-1:0]     usb_w_data_o,
    output [AXI_DATA_WIDTH/8-1:0]       usb_w_strb_o,
    output                              usb_w_last_o,
    output [AXI_USER_WIDTH-1:0]         usb_w_user_o,

    // write response channel
    output                              usb_b_ready_o,
    input                               usb_b_valid_i,
    input  [1:0]                        usb_b_resp_i,
    input  [AXI_ID_WIDTH-1:0]           usb_b_id_i,
    input  [AXI_USER_WIDTH-1:0]         usb_b_user_i,

    // read address channel
    input                               usb_ar_ready_i,
    output reg                          usb_ar_valid_o,
    output reg [AXI_ADDR_WIDTH-1:0]     usb_ar_addr_o,
    output [2:0]                        usb_ar_prot_o,
    output [AXI_ID_WIDTH-1:0]           usb_ar_id_o,
    output [AXI_USER_WIDTH-1:0]         usb_ar_user_o,
    output [7:0]                        usb_ar_len_o,
    output [2:0]                        usb_ar_size_o,
    output [1:0]                        usb_ar_burst_o,
    output                              usb_ar_lock_o,
    output [3:0]                        usb_ar_cache_o,
    output [3:0]                        usb_ar_qos_o,
    output [3:0]                        usb_ar_region_o,

    // read data channel
    output                              usb_r_ready_o,
    input                               usb_r_valid_i,
    input  [1:0]                        usb_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         usb_r_data_i,
    input                               usb_r_last_i,
    input  [AXI_ID_WIDTH-1:0]           usb_r_id_i,
    input  [AXI_USER_WIDTH-1:0]         usb_r_user_i,

    // for debug
    output reg                          usb_done,
    output reg                          check_error,

    // debug
    output [3:0] state,
    output [2:0] axi_read_state,
    output [2:0] axi_write_state,
    output [3:0] state_next,
    output [2:0] axi_read_state_next,
    output [2:0] axi_write_state_next,
    output [19:0] wdata_cnt,
    output [19:0] rdata_cnt,
    output axi_wdata_fifo_full,
    output axi_wdata_fifo_almost_full,
    output axi_wdata_fifo_wr_en,
    output axi_wdata_fifo_empty,
    output axi_wdata_fifo_almost_empty,
    output axi_wdata_fifo_rd_en,
    output axi_wdata_fifo_wr_rst_busy,
    output axi_wdata_fifo_rd_rst_busy,
    output axi_rdata_fifo_full,
    output axi_rdata_fifo_almost_full,
    output axi_rdata_fifo_wr_en,
    output axi_rdata_fifo_empty,
    output axi_rdata_fifo_almost_empty,
    output axi_rdata_fifo_rd_en,
    output axi_rdata_fifo_wr_rst_busy,
    output axi_rdata_fifo_rd_rst_busy,
    output [31:0] axi_rdata_fifo_dout

);
    
//parameter define    
localparam USB_IDLE   = 0;                //FT232H 空闲
localparam USB_READ   = 1;                //FT232H 读状态，此时数据从FT232H?????到FPGA
localparam USB_WRITE  = 2;                //FT232H 写状态，此时数据从FPGA?????到FT232H

localparam AXI_WRITE_IDLE = 0;
localparam AXI_WRITE_START = 1;
localparam AXI_WRITE_DATA = 2;
localparam AXI_WRITE_ADDR = 3;
localparam AXI_WRITE_WAIT_BRESP = 4;

localparam AXI_READ_IDLE = 0;
localparam AXI_READ_START = 1;
localparam AXI_READ_WAIT_RDATA = 2;

// wire define
reg  usb_data_out_valid;
wire [7:0] usb_data_in;

wire axi_wdata_fifo_full;
wire axi_wdata_fifo_almost_full;
wire [31:0] axi_wdata_fifo_din;
reg  axi_wdata_fifo_wr_en;
wire axi_wdata_fifo_empty;
wire axi_wdata_fifo_almost_empty;
wire [31:0] axi_wdata_fifo_dout;
wire axi_wdata_fifo_rd_en;
reg  axi_wdata_fifo_rd_en_d0;
wire axi_wdata_fifo_wr_rst_busy;
wire axi_wdata_fifo_rd_rst_busy;

wire axi_rdata_fifo_full;
wire axi_rdata_fifo_almost_full;
wire [31:0] axi_rdata_fifo_din;
wire axi_rdata_fifo_wr_en;
wire axi_rdata_fifo_empty;
wire axi_rdata_fifo_almost_empty;
wire [31:0] axi_rdata_fifo_dout;
wire axi_rdata_fifo_rd_en;
wire axi_rdata_fifo_wr_rst_busy;
wire axi_rdata_fifo_rd_rst_busy;

wire axi_check_fifo_full;
wire axi_check_fifo_almost_full;
wire [31:0] axi_check_fifo_din;
wire axi_check_fifo_wr_en;
wire axi_check_fifo_empty;
wire axi_check_fifo_almost_empty;
wire [31:0] axi_check_fifo_dout;
wire axi_check_fifo_rd_en;
wire axi_check_fifo_wr_rst_busy;
wire axi_check_fifo_rd_rst_busy;

wire axi_w_fire = usb_w_valid_o && usb_w_ready_i;
wire axi_aw_fire= usb_aw_valid_o && usb_aw_ready_i;
wire axi_b_fire = usb_b_ready_o && usb_b_valid_i;
wire axi_r_fire = usb_r_valid_i && usb_r_ready_o;
wire axi_ar_fire= usb_ar_valid_o && usb_ar_ready_i;

//reg define
reg[3:0]  state;                      //读写?????
reg[3:0]  state_next;
reg usb_oe_n_d0;                      //usb_oe_n下一??
reg [31:0] axi_wdata_buffer;
reg [1:0] usb_data_in_cnt;
reg [1:0] usb_data_out_cnt;
reg [2:0] axi_write_state;
reg [2:0] axi_write_state_next;
reg [2:0] axi_read_state;
reg [2:0] axi_read_state_next;
reg [19:0] wdata_cnt;
reg [19:0] rdata_cnt;

wire usb_data_in_4byte = (usb_data_in_cnt==2'b11 && usb_data_in_valid);
wire wdata_fifo_ready = !axi_wdata_fifo_wr_rst_busy && !axi_wdata_fifo_rd_rst_busy;
wire rdata_fifo_ready = !axi_rdata_fifo_wr_rst_busy && !axi_rdata_fifo_rd_rst_busy;


//*****************************************************
//**        control axi write,  USB read
//*****************************************************

assign usb_rd_n = usb_oe_n_d0;

assign usb_data_in = (state == USB_READ) ? usb_data : 8'hzz;


//产生FT232H数据输出使能usb_oe_n
always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n)
        usb_oe_n <= 1'b1;
    else if(usb_rxf_n || (usb_data_in_cnt==2'b10 && usb_data_in_valid))
        usb_oe_n <= 1'b1;
    else if (state_next==USB_READ)
        usb_oe_n <= 1'b0;
    
end

//FT232H数据输出使能usb_oe_n打一??
always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n)
        usb_oe_n_d0 <= 1'b1;
    else 
        usb_oe_n_d0 <= usb_oe_n;
end


assign usb_data_in_valid = (usb_rd_n == 1'b0) && (usb_rxf_n == 1'b0);

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n)
        usb_data_in_cnt <= 2'b0;
    else if(usb_data_in_4byte) begin
        usb_data_in_cnt <= 2'b0;
    end
    else if(usb_data_in_valid) begin
        usb_data_in_cnt <= usb_data_in_cnt + 1;
    end
end

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n)
        axi_wdata_buffer <= 32'b0;
    else if(usb_data_in_valid) begin
        if(usb_data_in_cnt==2'b00)
            axi_wdata_buffer <= {axi_wdata_buffer[31:8], usb_data_in};
        else if(usb_data_in_cnt==2'b01)
            axi_wdata_buffer <= {axi_wdata_buffer[31:16], usb_data_in, axi_wdata_buffer[7:0]};
        else if(usb_data_in_cnt==2'b10)
            axi_wdata_buffer <= {axi_wdata_buffer[31:24], usb_data_in, axi_wdata_buffer[15:0]};
        else if(usb_data_in_cnt==2'b11)
            axi_wdata_buffer <= {usb_data_in, axi_wdata_buffer[23:0]};
    end
end

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n)
        axi_wdata_fifo_wr_en <= 1'b0;
    else if(usb_data_in_4byte) begin
        axi_wdata_fifo_wr_en <= 1'b1;
    end
    else begin
        axi_wdata_fifo_wr_en <= 1'b0;
    end
end

assign axi_wdata_fifo_din = axi_wdata_buffer;
assign axi_wdata_fifo_rd_en = (axi_write_state==AXI_WRITE_IDLE) && (axi_write_state_next==AXI_WRITE_START);

fifo_generator_0 axi_wdata_fifo (
  .rst(!sys_rst_n),
  .wr_clk(usb_clk_60m),
  .rd_clk(usb_clk_60m),
  .din(axi_wdata_fifo_din),
  .wr_en(axi_wdata_fifo_wr_en),
  .rd_en(axi_wdata_fifo_rd_en),
  .dout(axi_wdata_fifo_dout),
  .full(axi_wdata_fifo_full),
  .empty(axi_wdata_fifo_empty),
  .almost_full(axi_wdata_fifo_almost_full),
  .almost_empty(axi_wdata_fifo_almost_empty),
  .wr_rst_busy(axi_wdata_fifo_wr_rst_busy),
  .rd_rst_busy(axi_wdata_fifo_rd_rst_busy)
);

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n)
        axi_write_state <= AXI_WRITE_IDLE;
    else
        axi_write_state <= axi_write_state_next;
end

always @(*) begin
    case (axi_write_state)
        AXI_WRITE_IDLE : begin
            if (!axi_wdata_fifo_empty && wdata_fifo_ready)
                axi_write_state_next = AXI_WRITE_START;
            else
                axi_write_state_next = AXI_WRITE_IDLE;
        end

        AXI_WRITE_START : begin
            if(axi_aw_fire && axi_w_fire)
                axi_write_state_next = AXI_WRITE_WAIT_BRESP;
            else if (axi_aw_fire)
                axi_write_state_next = AXI_WRITE_DATA;
            else if (axi_w_fire)
                axi_write_state_next = AXI_WRITE_ADDR;
            else
                axi_write_state_next = AXI_WRITE_START;
        end

        AXI_WRITE_ADDR : begin
            if(axi_aw_fire)
                axi_write_state_next = AXI_WRITE_WAIT_BRESP;
            else
                axi_write_state_next = AXI_WRITE_ADDR;
        end

        AXI_WRITE_DATA : begin
            if(axi_w_fire)
                axi_write_state_next = AXI_WRITE_WAIT_BRESP;
            else
                axi_write_state_next = AXI_WRITE_DATA;
        end

        AXI_WRITE_WAIT_BRESP : begin
            if(axi_b_fire)
                axi_write_state_next = AXI_WRITE_IDLE;
            else
                axi_write_state_next = AXI_WRITE_WAIT_BRESP;
        end
    
        default : axi_write_state_next = AXI_WRITE_IDLE;
    endcase
end

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        usb_aw_valid_o <= 1'b0;
    end
    else if(axi_write_state_next==AXI_WRITE_ADDR || axi_write_state_next==AXI_WRITE_START) begin
        usb_aw_valid_o <= 1'b1;
    end
    else begin
        usb_aw_valid_o <= 1'b0;
    end
end

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        usb_aw_addr_o  <= AXI_RESET_ADDR;
    end
    else if(axi_aw_fire) begin
        usb_aw_addr_o  <= usb_aw_addr_o + 4;
    end
end

assign usb_aw_id_o = {AXI_ID_WIDTH{1'b0}};
assign usb_aw_len_o= 8'd0;
assign usb_aw_size_o = 3'd2;
assign usb_aw_burst_o = 2'd0;
assign usb_aw_lock_o = 1'b0;
assign usb_aw_cache_o = 4'b0;
assign usb_aw_prot_o = 3'b0;
assign usb_aw_qos_o = 4'b0;
assign usb_aw_region_o = 4'b0;
assign usb_aw_user_o = 1'b0;

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        axi_wdata_fifo_rd_en_d0 <= 1'b0;
    end
    else begin
        axi_wdata_fifo_rd_en_d0 <= axi_wdata_fifo_rd_en;
    end
end

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        usb_w_valid_o <= 1'b0;
    end
    else if(axi_wdata_fifo_rd_en_d0) begin
        usb_w_valid_o <= 1'b1;
    end
    else if (usb_w_valid_o && !usb_w_ready_i) begin
        usb_w_valid_o <= 1'b1;
    end
    else begin
        usb_w_valid_o <= 1'b0;
    end
end

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        usb_w_data_o  <= 32'b0;
    end
    else if(axi_wdata_fifo_rd_en_d0) begin
        usb_w_data_o  <= axi_wdata_fifo_dout;
    end
end

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        wdata_cnt <= 20'b0;
    end
    else if(axi_b_fire) begin
        wdata_cnt <= wdata_cnt + 1;
    end
end

assign usb_w_strb_o = 4'b1111;
assign usb_w_last_o = 1'b1;
assign usb_w_user_o = 1'b0;

assign usb_b_ready_o = 1'b1;


//*****************************************************
//**            control axi read, USB write
//*****************************************************

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        usb_data_out_valid <= 1'b0;
    end
    else if(usb_data_out_valid && usb_data_out_cnt==2'd3) begin
        usb_data_out_valid <= 1'b0;
    end
    else if(axi_rdata_fifo_rd_en) begin
        usb_data_out_valid <= 1'b1;
    end
end

//在FT232H写状态，且usb_txe_n为低，且usb_data_out_valid时，使能FT232H FIFO??
assign usb_wr_n = !usb_data_out_valid;

assign usb_data_out = usb_data_out_cnt==2'd0 ? axi_rdata_fifo_dout[7:0] :
                      usb_data_out_cnt==2'd1 ? axi_rdata_fifo_dout[15:8] :
                      usb_data_out_cnt==2'd2 ? axi_rdata_fifo_dout[23:16] :
                      usb_data_out_cnt==2'd3 ? axi_rdata_fifo_dout[31:24] : 8'b0;
assign usb_data = usb_data_out_valid ? usb_data_out : 8'hzz;


assign axi_rdata_fifo_din  = usb_r_data_i;
assign axi_rdata_fifo_wr_en = usb_r_valid_i;
assign axi_rdata_fifo_rd_en = (state==USB_IDLE) && (state_next==USB_WRITE);

fifo_generator_0 axi_rdata_fifo (
  .rst(!sys_rst_n),
  .wr_clk(usb_clk_60m),
  .rd_clk(usb_clk_60m),
  .din(axi_rdata_fifo_din),
  .wr_en(axi_rdata_fifo_wr_en),
  .rd_en(axi_rdata_fifo_rd_en),
  .dout(axi_rdata_fifo_dout),
  .full(axi_rdata_fifo_full),
  .empty(axi_rdata_fifo_empty),
  .almost_full(axi_rdata_fifo_almost_full),
  .almost_empty(axi_rdata_fifo_almost_empty),
  .wr_rst_busy(axi_rdata_fifo_wr_rst_busy),
  .rd_rst_busy(axi_rdata_fifo_rd_rst_busy)
);


always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        usb_data_out_cnt <= 2'b0;
    end
    else if(axi_rdata_fifo_rd_en || (usb_data_out_valid && usb_data_out_cnt==2'd3)) begin
        usb_data_out_cnt <= 2'b0;
    end
    else if(usb_data_out_valid) begin
        usb_data_out_cnt <= usb_data_out_cnt + 1;
    end
end

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n)
        axi_read_state <= AXI_READ_IDLE;
    else
        axi_read_state <= axi_read_state_next;
end

always @(*) begin
    case (axi_read_state)
        AXI_READ_IDLE : begin
            // if (rdata_fifo_ready && !axi_rdata_fifo_almost_full && (rdata_cnt < 20'd1024) && (rdata_cnt < wdata_cnt))
            if (rdata_fifo_ready && !axi_rdata_fifo_almost_full && (rdata_cnt < wdata_cnt))
                axi_read_state_next = AXI_READ_START;
            else
                axi_read_state_next = AXI_READ_IDLE;
        end

        AXI_READ_START : begin
            if (axi_ar_fire)
                axi_read_state_next = AXI_READ_WAIT_RDATA;
            else
                axi_read_state_next = AXI_READ_START;
        end

        AXI_READ_WAIT_RDATA : begin
            if (axi_r_fire)
                axi_read_state_next = AXI_READ_IDLE;
            else
                axi_read_state_next = AXI_READ_WAIT_RDATA;
        end

        default : axi_read_state_next = AXI_READ_IDLE;
    endcase
end

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        usb_ar_valid_o <= 1'b0;
    end
    else if(axi_read_state_next==AXI_READ_START) begin
        usb_ar_valid_o <= 1'b1;
    end
    else begin
        usb_ar_valid_o <= 1'b0;
    end
end

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        usb_ar_addr_o  <= AXI_RESET_ADDR;
    end
    else if(axi_ar_fire) begin
        usb_ar_addr_o  <= usb_ar_addr_o + 4;
    end
end

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        rdata_cnt <= 20'b0;
    end
    else if(axi_r_fire) begin
        rdata_cnt <= rdata_cnt + 1;
    end
end

assign usb_ar_id_o = {AXI_ID_WIDTH{1'b0}};
assign usb_ar_len_o= 8'd0;
assign usb_ar_size_o = 3'd2;
assign usb_ar_burst_o = 2'd0;
assign usb_ar_lock_o = 1'b0;
assign usb_ar_cache_o = 4'b0;
assign usb_ar_prot_o = 3'b0;
assign usb_ar_qos_o = 4'b0;
assign usb_ar_region_o = 4'b0;
assign usb_ar_user_o = 1'b0;

assign usb_r_ready_o = !axi_rdata_fifo_full;


//*****************************************************
//**                    FSM
//*****************************************************
//读写?????????
always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n)
        state <= USB_IDLE;
    else
        state <= state_next;
end

always @(*) begin
    case(state)
        USB_IDLE:begin 
            if(usb_rxf_n == 1'b0 && !axi_wdata_fifo_almost_full && wdata_fifo_ready && !axi_check_fifo_full)
                state_next = USB_READ;
            else if(usb_txe_n == 1'b0 && !axi_rdata_fifo_empty && rdata_fifo_ready)
                state_next = USB_WRITE;
            else
                state_next = USB_IDLE;
        end
        USB_READ: begin         
            if(usb_data_in_4byte || usb_rxf_n)
                state_next = USB_IDLE;
            else
                state_next = USB_READ;
        end
        USB_WRITE: begin
            if(usb_data_out_valid == 1'b0)  
                state_next = USB_IDLE;
            else
                state_next = USB_WRITE;
        end
        default:
            state_next = USB_IDLE;
    endcase
end  

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        usb_done <= 1'b0;
    end
    else if((rdata_cnt == wdata_cnt) && (rdata_cnt >= USB_DATA_WORD_NUM)) begin
        usb_done <= 1'b1;
    end
end


// check
assign axi_check_fifo_din = usb_w_data_o;
assign axi_check_fifo_wr_en = axi_w_fire;
assign axi_check_fifo_rd_en = axi_r_fire;
reg axi_check_fifo_rd_en_d0;
reg [31:0] usb_r_data_i_d0;

fifo_generator_0 axi_check_fifo (
  .rst(!sys_rst_n),
  .wr_clk(usb_clk_60m),
  .rd_clk(usb_clk_60m),
  .din(axi_check_fifo_din),
  .wr_en(axi_check_fifo_wr_en),
  .rd_en(axi_check_fifo_rd_en),
  .dout(axi_check_fifo_dout),
  .full(axi_check_fifo_full),
  .empty(axi_check_fifo_empty),
  .almost_full(axi_check_fifo_almost_full),
  .almost_empty(axi_check_fifo_almost_empty),
  .wr_rst_busy(axi_check_fifo_wr_rst_busy),
  .rd_rst_busy(axi_check_fifo_rd_rst_busy)
);

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        axi_check_fifo_rd_en_d0 <= 1'b0;
        usb_r_data_i_d0 <= 32'b0;
    end
    else begin
        axi_check_fifo_rd_en_d0 <= axi_check_fifo_rd_en;
        usb_r_data_i_d0 <= usb_r_data_i;
    end
end

always@(posedge usb_clk_60m or negedge sys_rst_n)begin
    if(!sys_rst_n) begin
        check_error <= 1'b0;
    end
    else if(axi_check_fifo_rd_en_d0 && (usb_r_data_i_d0 != axi_check_fifo_dout)) begin
        check_error <= 1'b1;
    end
end

endmodule
