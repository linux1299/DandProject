//****************************************Copyright (c)***********************************//
//原子哥在线教学平台：www.yuanzige.com
//技术支持：www.openedv.com
//淘宝店铺：http://openedv.taobao.com
//关注微信公众平台微信号："正点原子"，免费获取ZYNQ & FPGA & STM32 & LINUX资料。
//版权所有，盗版必究。
//Copyright(C) 正点原子 2018-2028
//All rights reserved
//----------------------------------------------------------------------------------------
// File name:           rd_id
// Last modified Date:  2020/05/28 20:28:08
// Last Version:        V1.0
// Descriptions:        读取LCD ID模块
//                      
//----------------------------------------------------------------------------------------
// Created by:          正点原子
// Created date:        2020/05/28 20:28:08
// Version:             V1.0
// Descriptions:        The original version
//
//----------------------------------------------------------------------------------------
//****************************************************************************************//

module rd_id(
    input                   clk    ,    //时钟
    input                   rst_n  ,    //复位，低电平有效
    output   reg    [15:0]  lcd_id     //LCD屏ID
    );

//reg define
reg            rd_flag;  //读ID标志

//*****************************************************
//**                    main code
//*****************************************************

//获取LCD ID   M2:B7  M1:G7  M0:R7
always @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin
        rd_flag <= 1'b0;
        lcd_id <= 16'd0;
    end    
    else begin
        if(rd_flag == 1'b0) begin
            rd_flag <= 1'b1; 
            lcd_id <= 16'h4384;    //4.3' RGB LCD  RES:800x480   
        end
    end    
end

endmodule
