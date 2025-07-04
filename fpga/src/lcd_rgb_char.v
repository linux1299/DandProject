//****************************************Copyright (c)***********************************//
//ԭ�Ӹ����߽�ѧƽ̨��www.yuanzige.com
//����֧�֣�www.openedv.com
//�Ա����̣�http://openedv.taobao.com
//��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡZYNQ & FPGA & STM32 & LINUX���ϡ�
//��Ȩ���У�����ؾ���
//Copyright(C) ����ԭ�� 2018-2028
//All rights reserved
//----------------------------------------------------------------------------------------
// File name:           lcd_rgb_char
// Last modified Date:  2020/05/28 20:28:08
// Last Version:        V1.0
// Descriptions:        RGB LCD�ַ���ͼƬ��ʾ����ģ��
//                      
//----------------------------------------------------------------------------------------
// Created by:          ����ԭ��
// Created date:        2020/05/28 20:28:08
// Version:             V1.0
// Descriptions:        The original version
//
//----------------------------------------------------------------------------------------
//****************************************************************************************//

module  lcd_rgb_char(
    input              sys_clk ,       //ϵͳʱ��
    input              sys_rst_n ,     //ϵͳ��λ
    
    input fb_ena,
    input [0:0]fb_wea,
    input [16:0]fb_addra,
    input [23:0]fb_dina,

    //RGB LCD�ӿ� 
    output             lcd_hs  ,       //LCD ��ͬ���ź�
    output             lcd_vs  ,       //LCD ��ͬ���ź�
    output             lcd_de  ,       //LCD ��������ʹ��
    inout      [23:0]  lcd_rgb ,       //LCD RGB565��ɫ����
    output             lcd_bl  ,       //LCD ��������ź�
    output             lcd_rst,        //LCD��λ
    output             lcd_clk         //LCD ����ʱ��
);
    
//wire define    
wire  [15:0]  lcd_id    ;    //LCD��ID
wire          lcd_pclk  ;    //LCD����ʱ��
              
wire  [10:0]  pixel_xpos;    //��ǰ���ص������
wire  [10:0]  pixel_ypos;    //��ǰ���ص�������
wire  [10:0]  h_disp    ;    //LCD��ˮƽ�ֱ���
wire  [10:0]  v_disp    ;    //LCD����ֱ�ֱ���
wire  [23:0]  pixel_data;    //��������
wire  [23:0]  lcd_rgb_o ;    //�������������

//*****************************************************
//**                    main code
//*****************************************************

//�������ݷ����л�
assign lcd_rgb = lcd_de ?  lcd_rgb_o :  {24{1'bz}};

//��LCD IDģ��
rd_id u_rd_id(
    .clk          (sys_clk  ),
    .rst_n        (sys_rst_n),
    .lcd_id       (lcd_id   )
    );    

//ʱ�ӷ�Ƶģ��    
clk_div u_clk_div(
    .clk           (sys_clk  ),
    .rst_n         (sys_rst_n),
    .lcd_id        (lcd_id   ),
    .lcd_pclk      (lcd_pclk )
    );    

//LCD��ʾģ��    
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

//LCD����ģ��
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
