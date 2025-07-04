//****************************************Copyright (c)***********************************//
//ԭ�Ӹ����߽�ѧƽ̨��www.yuanzige.com
//����֧�֣�www.openedv.com
//�Ա����̣�http://openedv.taobao.com
//��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡZYNQ & FPGA & STM32 & LINUX���ϡ�
//��Ȩ���У�����ؾ���
//Copyright(C) ����ԭ�� 2018-2028
//All rights reserved
//----------------------------------------------------------------------------------------
// File name:           rd_id
// Last modified Date:  2020/05/28 20:28:08
// Last Version:        V1.0
// Descriptions:        ��ȡLCD IDģ��
//                      
//----------------------------------------------------------------------------------------
// Created by:          ����ԭ��
// Created date:        2020/05/28 20:28:08
// Version:             V1.0
// Descriptions:        The original version
//
//----------------------------------------------------------------------------------------
//****************************************************************************************//

module rd_id(
    input                   clk    ,    //ʱ��
    input                   rst_n  ,    //��λ���͵�ƽ��Ч
    output   reg    [15:0]  lcd_id     //LCD��ID
    );

//reg define
reg            rd_flag;  //��ID��־

//*****************************************************
//**                    main code
//*****************************************************

//��ȡLCD ID   M2:B7  M1:G7  M0:R7
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
