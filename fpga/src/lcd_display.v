//****************************************Copyright (c)***********************************//
//原子哥在线教学平台：www.yuanzige.com
//技术支持：www.openedv.com
//淘宝店铺：http://openedv.taobao.com
//关注微信公众平台微信号："正点原子"，免费获取ZYNQ & FPGA & STM32 & LINUX资料。
//版权所有，盗版必究。
//Copyright(C) 正点原子 2018-2028
//All rights reserved
//----------------------------------------------------------------------------------------
// File name:           lcd_display
// Last modified Date:  2020/05/28 20:28:08
// Last Version:        V1.0
// Descriptions:        RGB LCD字符和图片显示
//                      
//----------------------------------------------------------------------------------------
// Created by:          正点原子
// Created date:        2020/05/28 20:28:08
// Version:             V1.0
// Descriptions:        The original version
//
//----------------------------------------------------------------------------------------
//****************************************************************************************//
module lcd_display(
    input             sys_clk,
    input             lcd_pclk,     //时钟
    input             rst_n,        //复位，低电平有效

    input fb_ena,
    input [0:0]fb_wea,
    input [16:0]fb_addra,
    input [23:0]fb_dina,
                                    
    input      [10:0] pixel_xpos,   //像素点横坐标
    input      [10:0] pixel_ypos,   //像素点纵坐标    
    output reg [23:0] pixel_data    //像素点数据,
);                                   
                                     
//parameter define                   
localparam PIC_X_START = 11'd1;      //图片起始点横坐标
localparam PIC_Y_START = 11'd1;      //图片起始点纵坐标
localparam PIC_WIDTH   = 11'd400;    //图片宽度
localparam PIC_HEIGHT  = 11'd300;    //图片高度
                       
localparam CHAR_X_START= 11'd1;      //字符起始点横坐标
localparam CHAR_Y_START= 11'd110;    //字符起始点纵坐标
localparam CHAR_WIDTH  = 11'd128;    //字符宽度,4个字符:32*4
localparam CHAR_HEIGHT = 11'd32;     //字符高度
                       
localparam BACK_COLOR  = 24'hE0FFFF; //背景色，浅蓝色
localparam CHAR_COLOR  = 24'hff0000; //字符颜色，红色

//reg define
reg   [16:0]  rom_addr  ;  //ROM地址

//wire define   
wire  [10:0]  x_cnt;       //横坐标计数器
wire  [10:0]  y_cnt;       //纵坐标计数器
wire          rom_rd_en ;  //ROM读使能信号
wire  [23:0]  rom_rd_data ;//ROM数据

//*****************************************************
//**                    main code
//*****************************************************

assign  x_cnt = pixel_xpos - CHAR_X_START; //像素点相对于字符区域起始点水平坐标
assign  y_cnt = pixel_ypos - CHAR_Y_START; //像素点相对于字符区域起始点垂直坐标
assign  rom_rd_en = 1'b1;                  //读使能拉高，即一直读ROM数据


//为LCD不同显示区域绘制图片、字符和背景色
always @(posedge lcd_pclk or negedge rst_n) begin
    if (!rst_n)
        pixel_data <= BACK_COLOR;

    else if( (pixel_xpos >= PIC_X_START) && (pixel_xpos < PIC_X_START + PIC_WIDTH) 
          && (pixel_ypos >= PIC_Y_START) && (pixel_ypos < PIC_Y_START + PIC_HEIGHT) )
        pixel_data <= rom_rd_data ;  //显示图片

    else if((pixel_xpos >= CHAR_X_START) && (pixel_xpos < CHAR_X_START + CHAR_WIDTH)
         && (pixel_ypos >= CHAR_Y_START) && (pixel_ypos < CHAR_Y_START + CHAR_HEIGHT)) begin
 
            pixel_data <= BACK_COLOR;    //显示字符区域的背景色
    end
    else
        pixel_data <= BACK_COLOR;        //屏幕背景色
end

//根据当前扫描点的横纵坐标为ROM地址赋值
always @(posedge lcd_pclk or negedge rst_n) begin
    if(!rst_n)
        rom_addr <= 16'd0;
    //当横纵坐标位于图片显示区域时,累加ROM地址    
    else if((pixel_ypos >= PIC_Y_START) && (pixel_ypos < PIC_Y_START + PIC_HEIGHT) 
        && (pixel_xpos >= PIC_X_START) && (pixel_xpos < PIC_X_START + PIC_WIDTH)) 
        rom_addr <= rom_addr + 1'b1;
    //当横纵坐标位于图片区域最后一个像素点时,ROM地址清零    
    else if((pixel_ypos >= PIC_Y_START + PIC_HEIGHT))
        rom_addr <= 16'd0;
end

//ROM：存储图片
blk_mem_gen_0 u_blk_mem_gen_0(
    .clka  ( sys_clk  ),
    .ena   ( fb_ena   ),
    .wea   ( fb_wea   ),
    .addra ( fb_addra ),
    .dina  ( fb_dina  ),
    .clkb  ( lcd_pclk ),
    .enb   ( rom_rd_en),
    .addrb ( rom_addr ),
    .doutb ( rom_rd_data )
);


endmodule 