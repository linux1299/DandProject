`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/15 08:54:02
// Design Name: 
// Module Name: top_dandsoc_kbd_display
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module top_dandsoc_kbd_display(
  input               io_asyncResetn,
  input               io_axiClk,
  output              io_uart_txd,
  input               io_uart_rxd,
    output             lcd_hs  ,       //LCD 行同步信号
    output             lcd_vs  ,       //LCD 场同步信号
    output             lcd_de  ,       //LCD 数据输入使能
    inout      [23:0]  lcd_rgb ,       //LCD RGB565颜色数据
    output             lcd_bl  ,       //LCD 背光控制信号
    output             lcd_rst,        //LCD复位
    output             lcd_clk         //LCD 采样时钟

    );
    
    wire locked;
    wire clk_core;

    wire [19-1:0] axi_mem_wraddr;
    wire [19-1:0] axi_mem_rdaddr;
    wire          axi_mem_rden;
    wire          axi_mem_wren;
    wire [4-1:0]  axi_mem_wmask;
    wire [32-1:0] axi_mem_wdata;
    wire [32-1:0] axi_mem_rdata;

    clk_wiz_0 u_clk_wiz
   (
    // Clock out ports
    .clk_out1(clk_core),     // output clk_out1
    // Status and control signals
    .reset(1'b0), // input reset
    .locked(locked),       // output locked
   // Clock in ports
    .clk_in1(io_axiClk)      // input clk_in1
);

    
//    DandSocSimple u_dandsocsimple(

DandSocTop u_DandSocTop(
    .clk_axi_in     ( io_axiClk      ),
    .rst_n          ( io_asyncResetn ),
    .io_uart_txd    ( io_uart_txd    ),
    .io_uart_rxd    ( io_uart_rxd    ),
    .axi_mem_wraddr ( axi_mem_wraddr ),
    .axi_mem_rdaddr ( axi_mem_rdaddr ),
    .axi_mem_rden   ( axi_mem_rden   ),
    .axi_mem_wren   ( axi_mem_wren   ),
    .axi_mem_wmask  ( axi_mem_wmask  ),
    .axi_mem_wdata  ( axi_mem_wdata  ),
    .axi_mem_rdata  ( axi_mem_rdata  )
);

lcd_rgb_char u_lcd_rgb_char(
    .sys_clk         ( io_axiClk           ),
    .sys_rst_n       ( io_asyncResetn      ),
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

endmodule
