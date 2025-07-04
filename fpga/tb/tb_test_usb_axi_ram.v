`timescale 1ns/1ps

module tb_test_usb_axi_ram;

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
end

initial begin
    usb_rxf_n = 1;
    usb_txe_n = 1;
    usb_data_tmp = 8'bzzzz_zzzz;

    #1000
    @(posedge usb_clk_60m);
    usb_rxf_n <= 0;
    usb_data_tmp <= 8'd1;

    repeat(100) begin
      @(posedge usb_clk_60m);
      usb_data_tmp <= usb_data_tmp + 1;
    end

    #200000
    @(posedge usb_clk_60m);
    usb_rxf_n <= 1;


    #1000
    @(posedge usb_clk_60m);
    usb_txe_n <= 0;
end


assign usb_data = !usb_rxf_n ? usb_data_tmp : 8'bzzzz_zzzz;

test_usb_axi_ram  u_test_usb_axi_ram(
    .usb_clk_60m     ( usb_clk_60m     ),
    // .sys_clk         ( sys_clk         ),
    .sys_rst_n       ( sys_rst_n       ),
    .usb_rxf_n       ( usb_rxf_n       ),
    .usb_txe_n       ( usb_txe_n       ),
    .usb_oe_n        ( usb_oe_n        ),
    .usb_rd_n        ( usb_rd_n        ),
    .usb_wr_n        ( usb_wr_n        ),
    .usb_data        ( usb_data        )
);


endmodule