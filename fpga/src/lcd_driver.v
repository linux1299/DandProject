//****************************************Copyright (c)***********************************//
//ԭ�Ӹ����߽�ѧƽ̨��www.yuanzige.com
//����֧�֣�www.openedv.com
//�Ա����̣�http://openedv.taobao.com
//��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡZYNQ & FPGA & STM32 & LINUX���ϡ�
//��Ȩ���У�����ؾ���
//Copyright(C) ����ԭ�� 2018-2028
//All rights reserved
//----------------------------------------------------------------------------------------
// File name:           lcd_driver
// Last modified Date:  2020/05/28 20:28:08
// Last Version:        V1.0
// Descriptions:        LCD����
//                      
//----------------------------------------------------------------------------------------
// Created by:          ����ԭ��
// Created date:        2020/05/28 20:28:08
// Version:             V1.0
// Descriptions:        The original version
//
//----------------------------------------------------------------------------------------
//****************************************************************************************//

module lcd_driver(
    input                lcd_pclk,    //ʱ��
    input                rst_n,       //��λ���͵�ƽ��Ч
    input        [23:0]  pixel_data,  //��������
    output       [10:0]  pixel_xpos,  //��ǰ���ص������
    output       [10:0]  pixel_ypos,  //��ǰ���ص�������   
    output  reg  [10:0]  h_disp,      //LCD��ˮƽ�ֱ���
    output  reg  [10:0]  v_disp,      //LCD����ֱ�ֱ���   
    //RGB LCD�ӿ�
    output               lcd_de,      //LCD ����ʹ���ź�
    output               lcd_hs,      //LCD ��ͬ���ź�
    output               lcd_vs,      //LCD ��ͬ���ź�
    output               lcd_bl,      //LCD ��������ź�
    output               lcd_clk,     //LCD ����ʱ��
    output               lcd_rst,
    output       [23:0]  lcd_rgb      //LCD RGB888��ɫ����
    );

//parameter define  

// 4.3' 800*480   
parameter  H_SYNC_4384   =  11'd128;    //��ͬ��
parameter  H_BACK_4384   =  11'd88;     //����ʾ����
parameter  H_DISP_4384   =  11'd800;    //����Ч����
parameter  H_FRONT_4384  =  11'd40;     //����ʾǰ��
parameter  H_TOTAL_4384  =  11'd1056;   //��ɨ������
   
parameter  V_SYNC_4384   =  11'd2;      //��ͬ��
parameter  V_BACK_4384   =  11'd33;     //����ʾ����
parameter  V_DISP_4384   =  11'd480;    //����Ч����
parameter  V_FRONT_4384  =  11'd10;     //����ʾǰ��
parameter  V_TOTAL_4384  =  11'd525;    //��ɨ������    

//reg define
reg  [10:0] h_sync ;
reg  [10:0] h_back ;
reg  [10:0] h_total;
reg  [10:0] v_sync ;
reg  [10:0] v_back ;
reg  [10:0] v_total;
reg  [10:0] h_cnt  ;
reg  [10:0] v_cnt  ;

//wire define    
wire        lcd_en;
wire        data_req;

//*****************************************************
//**                    main code
//*****************************************************

//RGB LCD ����DEģʽʱ���г�ͬ���ź���Ҫ����
assign  lcd_hs = 1'b1;        //LCD��ͬ���ź�
assign  lcd_vs = 1'b1;        //LCD��ͬ���ź�

assign  lcd_bl = 1'b1;        //LCD��������ź�  
assign  lcd_rst= 1'b1;
assign  lcd_clk = lcd_pclk;   //LCD����ʱ��
assign  lcd_de = lcd_en;      //LCD������Ч�ź�

//ʹ��RGB888�������
assign  lcd_en = ((h_cnt >= h_sync + h_back) && (h_cnt < h_sync + h_back + h_disp)
                  && (v_cnt >= v_sync + v_back) && (v_cnt < v_sync + v_back + v_disp)) 
                  ? 1'b1 : 1'b0;

//�������ص���ɫ��������  
assign data_req = ((h_cnt >= h_sync + h_back - 1'b1) && (h_cnt < h_sync + h_back + h_disp - 1'b1)
                  && (v_cnt >= v_sync + v_back) && (v_cnt < v_sync + v_back + v_disp)) 
                  ? 1'b1 : 1'b0;

//���ص�����  
assign pixel_xpos = data_req ? (h_cnt - (h_sync + h_back - 1'b1)) : 11'd0;
assign pixel_ypos = data_req ? (v_cnt - (v_sync + v_back - 1'b1)) : 11'd0;

//RGB888�������
assign lcd_rgb = lcd_en ? pixel_data : 24'd0;

//�г�ʱ�����
always @(*) begin
    h_sync  = H_SYNC_4384; 
    h_back  = H_BACK_4384; 
    h_disp  = H_DISP_4384; 
    h_total = H_TOTAL_4384;
    v_sync  = V_SYNC_4384; 
    v_back  = V_BACK_4384; 
    v_disp  = V_DISP_4384; 
    v_total = V_TOTAL_4384;
end

//�м�����������ʱ�Ӽ���
always@ (posedge lcd_pclk or negedge rst_n) begin
    if(!rst_n) 
        h_cnt <= 11'd0;
    else begin
        if(h_cnt == h_total - 1'b1)
            h_cnt <= 11'd0;
        else
            h_cnt <= h_cnt + 1'b1;           
    end
end

//�����������м���
always@ (posedge lcd_pclk or negedge rst_n) begin
    if(!rst_n) 
        v_cnt <= 11'd0;
    else begin
        if(h_cnt == h_total - 1'b1) begin
            if(v_cnt == v_total - 1'b1)
                v_cnt <= 11'd0;
            else
                v_cnt <= v_cnt + 1'b1;    
        end
    end    
end

endmodule
