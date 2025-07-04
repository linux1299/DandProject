`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/15 09:58:58
// Design Name: 
// Module Name: tb_top_dandsocsimple
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


module tb_top_dandsocsimple;
    
    reg io_asyncResetn;
    reg io_axiClk;
    wire io_uart_txd;
    wire io_uart_rxd;
    
    initial begin
    io_axiClk = 0;
   
    #50
    
    forever begin
    #2
    io_axiClk = ~io_axiClk;
    end
    end
    
    initial begin
     io_asyncResetn = 0;
     #1000
     io_asyncResetn = 1;
     end
    
    
    
    top_dandsocsimple u_top_dand(
     .io_asyncResetn(io_asyncResetn),
     .io_axiClk(io_axiClk),
     .io_uart_txd(io_uart_txd),
     .io_uart_rxd(io_uart_rxd)
);
endmodule
