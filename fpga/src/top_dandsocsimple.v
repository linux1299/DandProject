`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/15 08:54:02
// Design Name: 
// Module Name: top_dandsocsimple
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


module top_dandsocsimple(
  input               io_asyncResetn,
  input               io_axiClk,
  output              io_uart_txd,
  input               io_uart_rxd

    );
    
    wire locked;
    wire clk_core;
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
DandSoc u_dandsocsimple(
     .io_asyncResetn(io_asyncResetn),
     .io_axiClk(clk_core),
     .io_uart_txd(io_uart_txd),
     .io_uart_rxd(io_uart_rxd)
    );
    /*
    ila_0 ila (
	.clk(io_axiClk), // input wire clk


	.probe0(io_asyncResetn), // input wire [0:0]  probe0  
	.probe1(clk_core), // input wire [0:0]  probe1 
	.probe2(io_uart_txd), // input wire [0:0]  probe2 
	.probe3(io_uart_rxd) // input wire [0:0]  probe3
);
*/
endmodule
