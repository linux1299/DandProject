//****************************************Copyright (c)***********************************//
//ԭ�Ӹ����߽�ѧƽ̨��www.yuanzige.com
//����֧�֣�www.openedv.com
//�Ա����̣�http://openedv.taobao.com
//��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡZYNQ & FPGA & STM32 & LINUX���ϡ�
//��Ȩ���У�����ؾ���
//Copyright(C) ����ԭ�� 2018-2028
//All rights reserved
//----------------------------------------------------------------------------------------
// File name:           lcd_display
// Last modified Date:  2020/05/28 20:28:08
// Last Version:        V1.0
// Descriptions:        RGB LCD�ַ���ͼƬ��ʾ
//                      
//----------------------------------------------------------------------------------------
// Created by:          ����ԭ��
// Created date:        2020/05/28 20:28:08
// Version:             V1.0
// Descriptions:        The original version
//
//----------------------------------------------------------------------------------------
//****************************************************************************************//
module lcd_display(
    input             sys_clk,
    input             lcd_pclk,     //ʱ��
    input             rst_n,        //��λ���͵�ƽ��Ч

    input fb_ena,
    input [0:0]fb_wea,
    input [16:0]fb_addra,
    input [23:0]fb_dina,
                                    
    input      [10:0] pixel_xpos,   //���ص������
    input      [10:0] pixel_ypos,   //���ص�������    
    output reg [23:0] pixel_data    //���ص�����,
);                                   
                                     
//parameter define                   
localparam PIC_X_START = 11'd1;      //ͼƬ��ʼ�������
localparam PIC_Y_START = 11'd1;      //ͼƬ��ʼ��������
localparam PIC_WIDTH   = 11'd400;    //ͼƬ���
localparam PIC_HEIGHT  = 11'd300;    //ͼƬ�߶�
                       
localparam CHAR_X_START= 11'd1;      //�ַ���ʼ�������
localparam CHAR_Y_START= 11'd110;    //�ַ���ʼ��������
localparam CHAR_WIDTH  = 11'd128;    //�ַ����,4���ַ�:32*4
localparam CHAR_HEIGHT = 11'd32;     //�ַ��߶�
                       
localparam BACK_COLOR  = 24'hE0FFFF; //����ɫ��ǳ��ɫ
localparam CHAR_COLOR  = 24'hff0000; //�ַ���ɫ����ɫ

//reg define
reg   [16:0]  rom_addr  ;  //ROM��ַ

//wire define   
wire  [10:0]  x_cnt;       //�����������
wire  [10:0]  y_cnt;       //�����������
wire          rom_rd_en ;  //ROM��ʹ���ź�
wire  [23:0]  rom_rd_data ;//ROM����

//*****************************************************
//**                    main code
//*****************************************************

assign  x_cnt = pixel_xpos - CHAR_X_START; //���ص�������ַ�������ʼ��ˮƽ����
assign  y_cnt = pixel_ypos - CHAR_Y_START; //���ص�������ַ�������ʼ�㴹ֱ����
assign  rom_rd_en = 1'b1;                  //��ʹ�����ߣ���һֱ��ROM����


//ΪLCD��ͬ��ʾ�������ͼƬ���ַ��ͱ���ɫ
always @(posedge lcd_pclk or negedge rst_n) begin
    if (!rst_n)
        pixel_data <= BACK_COLOR;

    else if( (pixel_xpos >= PIC_X_START) && (pixel_xpos < PIC_X_START + PIC_WIDTH) 
          && (pixel_ypos >= PIC_Y_START) && (pixel_ypos < PIC_Y_START + PIC_HEIGHT) )
        pixel_data <= rom_rd_data ;  //��ʾͼƬ

    else if((pixel_xpos >= CHAR_X_START) && (pixel_xpos < CHAR_X_START + CHAR_WIDTH)
         && (pixel_ypos >= CHAR_Y_START) && (pixel_ypos < CHAR_Y_START + CHAR_HEIGHT)) begin
 
            pixel_data <= BACK_COLOR;    //��ʾ�ַ�����ı���ɫ
    end
    else
        pixel_data <= BACK_COLOR;        //��Ļ����ɫ
end

//���ݵ�ǰɨ���ĺ�������ΪROM��ַ��ֵ
always @(posedge lcd_pclk or negedge rst_n) begin
    if(!rst_n)
        rom_addr <= 16'd0;
    //����������λ��ͼƬ��ʾ����ʱ,�ۼ�ROM��ַ    
    else if((pixel_ypos >= PIC_Y_START) && (pixel_ypos < PIC_Y_START + PIC_HEIGHT) 
        && (pixel_xpos >= PIC_X_START) && (pixel_xpos < PIC_X_START + PIC_WIDTH)) 
        rom_addr <= rom_addr + 1'b1;
    //����������λ��ͼƬ�������һ�����ص�ʱ,ROM��ַ����    
    else if((pixel_ypos >= PIC_Y_START + PIC_HEIGHT))
        rom_addr <= 16'd0;
end

//ROM���洢ͼƬ
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