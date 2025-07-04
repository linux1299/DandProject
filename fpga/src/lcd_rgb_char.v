//****************************************Copyright (c)***********************************//
//原子哥在线教学平台：www.yuanzige.com
//技术支持：www.openedv.com
//淘宝店铺：http://openedv.taobao.com
//关注微信公众平台微信号："正点原子"，免费获取ZYNQ & FPGA & STM32 & LINUX资料。
//版权所有，盗版必究。
//Copyright(C) 正点原子 2018-2028
//All rights reserved
//----------------------------------------------------------------------------------------
// File name:           lcd_rgb_char
// Last modified Date:  2020/05/28 20:28:08
// Last Version:        V1.0
// Descriptions:        RGB LCD字符和图片显示顶层模块
//                      
//----------------------------------------------------------------------------------------
// Created by:          正点原子
// Created date:        2020/05/28 20:28:08
// Version:             V1.0
// Descriptions:        The original version
//
//----------------------------------------------------------------------------------------
//****************************************************************************************//

module  lcd_rgb_char(
    input              sys_clk ,       //系统时钟
    input              sys_rst_n ,     //系统复位
    
    input fb_ena,
    input [0:0]fb_wea,
    input [16:0]fb_addra,
    input [23:0]fb_dina,

    //RGB LCD接口 
    output             lcd_hs  ,       //LCD 行同步信号
    output             lcd_vs  ,       //LCD 场同步信号
    output             lcd_de  ,       //LCD 数据输入使能
    inout      [23:0]  lcd_rgb ,       //LCD RGB565颜色数据
    output             lcd_bl  ,       //LCD 背光控制信号
    output             lcd_rst,        //LCD复位
    output             lcd_clk         //LCD 采样时钟
);
    
//wire define    
wire  [15:0]  lcd_id    ;    //LCD屏ID
wire          lcd_pclk  ;    //LCD像素时钟
              
wire  [10:0]  pixel_xpos;    //当前像素点横坐标
wire  [10:0]  pixel_ypos;    //当前像素点纵坐标
wire  [10:0]  h_disp    ;    //LCD屏水平分辨率
wire  [10:0]  v_disp    ;    //LCD屏垂直分辨率
wire  [23:0]  pixel_data;    //像素数据
wire  [23:0]  lcd_rgb_o ;    //输出的像素数据

//*****************************************************
//**                    main code
//*****************************************************

//像素数据方向切换
assign lcd_rgb = lcd_de ?  lcd_rgb_o :  {24{1'bz}};

//读LCD ID模块
rd_id u_rd_id(
    .clk          (sys_clk  ),
    .rst_n        (sys_rst_n),
    .lcd_id       (lcd_id   )
    );    

//时钟分频模块    
clk_div u_clk_div(
    .clk           (sys_clk  ),
    .rst_n         (sys_rst_n),
    .lcd_id        (lcd_id   ),
    .lcd_pclk      (lcd_pclk )
    );    

//LCD显示模块    
lcd_display u_lcd_display(
    .sys_clk        (sys_clk   ),
    .lcd_pclk       (lcd_pclk  ),
    .rst_n          (sys_rst_n ),
    .fb_ena         ( fb_ena   ),
    .fb_wea         ( fb_wea   ),
    .fb_addra       ( fb_addra ),
    .fb_dina        ( fb_dina  ),
    .pixel_xpos     (pixel_xpos),
    .pixel_ypos     (pixel_ypos),
    .pixel_data     (pixel_data)
    );    

//LCD驱动模块
lcd_driver u_lcd_driver(
    .lcd_pclk      (lcd_pclk  ),
    .rst_n         (sys_rst_n ),
    .pixel_data    (pixel_data),
    .pixel_xpos    (pixel_xpos),
    .pixel_ypos    (pixel_ypos),
    .h_disp        (h_disp    ),
    .v_disp        (v_disp    ),

    .lcd_de        (lcd_de    ),
    .lcd_hs        (lcd_hs    ),
    .lcd_vs        (lcd_vs    ),
    .lcd_bl        (lcd_bl    ),
    .lcd_clk       (lcd_clk   ),
    .lcd_rst       (lcd_rst),
    .lcd_rgb       (lcd_rgb_o )
    );

endmodule
