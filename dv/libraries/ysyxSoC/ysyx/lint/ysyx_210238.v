

`timescale 1ns / 1ps
    
`define PC_RST_VAL 64'h30000000
`define ZERO_WORD  64'h00000000_00000000   
`define REG_BUS    64  
`define INS_BUS    32
`define INST_ADD   8'h11
`define NOP        32'h13


module S011HD1P_X32Y2D128(
    Q, CLK, CEN, WEN, A, D
);
parameter Bits = 128;
parameter Word_Depth = 64;
parameter Add_Width = 6;

output  reg [Bits-1:0]      Q;
input                   CLK;
input                   CEN;
input                   WEN;
input   [Add_Width-1:0] A;
input   [Bits-1:0]      D;


reg [Bits-1:0] ram [0:Word_Depth-1];


always @(posedge CLK) begin
    if(!CEN && !WEN) begin
        ram[A] <= D;
    end
    Q <= !CEN && WEN ? ram[A] : {4{$random}};
end

endmodule

/* verilator lint_off UNUSED */

module ysyx_210238_axirw # (
    parameter RW_DATA_WIDTH     = 64,
    // parameter RW_ADDR_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 64,
    parameter AXI_ID_WIDTH      = 4
    // parameter AXI_USER_WIDTH    = 1
)(
    input                               clk,
    input                               rst,

	input                               r_ena_i,
    input                               w_ena_i,
    input  [AXI_DATA_WIDTH-1:0]         addr_i,
    input  [RW_DATA_WIDTH-1:0]          w_data_i,
    input  [RW_DATA_WIDTH/8-1:0]        w_mask_i,
    output [RW_DATA_WIDTH-1:0]          r_data_o,
    output                              r_ready_o,
    output                              w_ready_o,

    input                               no_Icache_to_axi4,
    input                               is_fencei,

    // Advanced eXtensible Interface
    input                               axi_aw_ready_i,
    output                              axi_aw_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o,
    // output [2:0]                        axi_aw_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_aw_id_o,
    // output [AXI_USER_WIDTH-1:0]         axi_aw_user_o,
    output [7:0]                        axi_aw_len_o,
    output [2:0]                        axi_aw_size_o,
    output [1:0]                        axi_aw_burst_o,
    // output                              axi_aw_lock_o,
    // output [3:0]                        axi_aw_cache_o,
    // output [3:0]                        axi_aw_qos_o,
    // output [3:0]                        axi_aw_region_o,

    input                               axi_w_ready_i,
    output                              axi_w_valid_o,
    output [AXI_DATA_WIDTH-1:0]         axi_w_data_o,
    output [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o,
    output                              axi_w_last_o,
    // output [AXI_USER_WIDTH-1:0]         axi_w_user_o,
    
    output                              axi_b_ready_o,
    input                               axi_b_valid_i,
    input  [1:0]                        axi_b_resp_i,
    input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,
    // input  [AXI_USER_WIDTH-1:0]         axi_b_user_i,

    input                               axi_ar_ready_i,
    output                              axi_ar_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o,
    // output [2:0]                        axi_ar_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_ar_id_o,
    // output [AXI_USER_WIDTH-1:0]         axi_ar_user_o,
    output [7:0]                        axi_ar_len_o,
    output [2:0]                        axi_ar_size_o,
    output [1:0]                        axi_ar_burst_o,
    // output                              axi_ar_lock_o,
    // output [3:0]                        axi_ar_cache_o,
    // output [3:0]                        axi_ar_qos_o,
    // output [3:0]                        axi_ar_region_o,
    
    output                              axi_r_ready_o,
    input                               axi_r_valid_i,
    input  [1:0]                        axi_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i,
    input                               axi_r_last_i,
    input  [AXI_ID_WIDTH-1:0]           axi_r_id_i
    // input  [AXI_USER_WIDTH-1:0]         axi_r_user_i
);


    // port define
    wire axi_ar_valid_o_wire;
    wire [AXI_ADDR_WIDTH-1 : 0] axi_ar_addr_o_wire;
    wire [2:0] axi_ar_size_o_wire;
    wire axi_aw_valid_o_wire;
    wire [AXI_ADDR_WIDTH-1 : 0] axi_aw_addr_o_wire;
    wire axi_w_valid_o_wire;
    // wire [AXI_DATA_WIDTH-1 : 0] axi_w_data_o_wire;
    // wire [AXI_DATA_WIDTH/8-1 : 0] axi_w_strb_o_wire;
    reg r_ready_o_wire;
    reg [RW_DATA_WIDTH-1 : 0] r_data_o_wire;
    reg w_ready_o_wire;
    wire [2:0] axi_aw_size_o_wire;

    reg r_cache_valid;
    reg [31:0] r_cache_addr;
    reg [3:0] send_state, nxt_send_state;

    reg [9:0] reset_delay;
    wire      is_reset_delay_ok;
    always @(posedge clk) begin
        if(~rst) reset_delay <= 10'b0;
        else begin
            if(is_reset_delay_ok) reset_delay <= reset_delay;
            else reset_delay <= reset_delay + 10'b1;
        end
    end
    assign is_reset_delay_ok = (reset_delay == 10'd300);

    //port define

    // Regist imformation
    reg [63:0] addr_cache, w_data_cache;
    reg [ 7:0] w_mask_cache;
    reg        is_32_bus;

    always @ (posedge clk) begin
        if(~rst) addr_cache <= 64'b0;
        else begin
            if( (r_ena_i | w_ena_i) & send_state==4'd0) addr_cache <= addr_i;
            else addr_cache <= addr_cache;
        end
    end

    always @(posedge clk) begin
        if(~rst) w_data_cache <= 64'b0;
        else begin
            if(r_ena_i | w_ena_i) w_data_cache <= w_data_i;
            else w_data_cache <= w_data_cache;
        end
    end

    always @(posedge clk) begin
        if(~rst) w_mask_cache <= 8'b0;
        else begin
            if(r_ena_i | w_ena_i) w_mask_cache <= w_mask_i;
            else w_mask_cache <= w_mask_cache;
        end
    end

    always @(posedge clk) begin
        if(~rst) is_32_bus <= 1'b0;
        else begin
            if(r_ena_i | w_ena_i) is_32_bus <= (addr_i[63:13] == 51'b0001_0000_0000_0000_000) | (addr_i[63:28] == 36'b11);
            else is_32_bus <= is_32_bus;
        end
    end


    // Send transaction
    always @(posedge clk) begin
        if(~rst) send_state <= 4'd0;
        else send_state <= nxt_send_state;
    end


    wire r_hit_cache = r_ena_i & ~no_Icache_to_axi4 & (addr_i>=64'h80000000) & (addr_i[31:3] == r_cache_addr[31:3]) & r_cache_valid ;//& 1'b0;

    always @ (*)begin
        case(send_state)
            4'd0:begin
                if(r_hit_cache) nxt_send_state = 4'd0;
                else if(r_ena_i) nxt_send_state = 4'd1;
                else if(w_ena_i) nxt_send_state = 4'd4;
                else nxt_send_state =4'd0;
            end
            4'd1:begin
                if(is_reset_delay_ok) begin
                    if(is_32_bus & addr_cache[2] == 1'b0) nxt_send_state = 4'd2;
                    else if(is_32_bus & addr_cache[2] == 1'b1) nxt_send_state = 4'd3;
                    else nxt_send_state = 4'd2;
                end
                else nxt_send_state = 4'b1;
            end
            4'd2:begin
                if(~axi_ar_ready_i) nxt_send_state = 4'd2;
                // else if(axi_ar_ready_i & (~is_32_bus) ) nxt_send_state = 4'd0;
                // else if(axi_ar_ready_i & is_32_bus) nxt_send_state = 4'd3;
                else nxt_send_state = 4'd0; // Never execute
            end
            4'd3: begin
                if(~axi_ar_ready_i) nxt_send_state = 4'd3;
                else nxt_send_state = 4'd0;
            end
            4'd4: begin
                if(is_reset_delay_ok) begin
                    if(is_32_bus & addr_cache[2] == 1'b0) nxt_send_state = 4'd5;
                    else if(is_32_bus & addr_cache[2] == 1'b1) nxt_send_state = 4'd8;
                    else nxt_send_state = 4'd5;
                end
                else nxt_send_state = 4'd4;
            end
            4'd5: begin
                if(~axi_aw_ready_i & ~axi_w_ready_i) nxt_send_state = 4'd5;
                else if(axi_aw_ready_i & (~axi_w_ready_i) ) nxt_send_state = 4'd6;
                else if(~axi_aw_ready_i & axi_w_ready_i) nxt_send_state = 4'd7;
                else if(axi_aw_ready_i & axi_w_ready_i) nxt_send_state = 4'd0;
                else nxt_send_state = 4'd5; // Never execute 
            end
            4'd6: begin
                if(axi_w_ready_i) nxt_send_state = 4'd0; 
                else nxt_send_state = 4'd6;
            end
            4'd7: begin
                if(axi_aw_ready_i) nxt_send_state = 4'd0; 
                else nxt_send_state = 4'd7;
            end
            4'd8: begin
                if(~axi_aw_ready_i & ~axi_w_ready_i) nxt_send_state = 4'd8;
                else if(axi_aw_ready_i & (~axi_w_ready_i) ) nxt_send_state = 4'd9;
                else if(~axi_aw_ready_i & axi_w_ready_i) nxt_send_state = 4'd10;
                else if(axi_aw_ready_i & axi_w_ready_i) nxt_send_state = 4'd0;
                else nxt_send_state = 4'd8; // Never execute 
            end
            4'd9: begin
                if(axi_w_ready_i) nxt_send_state = 4'd0; 
                else nxt_send_state = 4'd9;
            end
            4'd10: begin
                if(axi_aw_ready_i) nxt_send_state = 4'd0; 
                else nxt_send_state = 4'd10;
            end
            default: nxt_send_state = 4'd0;
        endcase
    end




    assign axi_ar_valid_o_wire =    (send_state == 4'd1 & is_reset_delay_ok) ? 1'b1 :
                                    (send_state == 4'd2 & (~axi_ar_ready_i)) ? 1'b1 :
                                    (send_state == 4'd3 & (~axi_ar_ready_i)) ? 1'b1 : 1'b0;
    ysyx_210238_ffn #(.WIDTH( 1)) ff_ar_valid(.clk(clk), .rst(rst), .stall(1'b0), .d(axi_ar_valid_o_wire), .q(axi_ar_valid_o));

    assign axi_ar_addr_o_wire = (send_state == 4'd1 & is_reset_delay_ok) ? addr_cache : axi_ar_addr_o;
    ysyx_210238_ffn #(.WIDTH(AXI_ADDR_WIDTH)) ff_ar_addr(.clk(clk), .rst(rst), .stall(1'b0), .d(axi_ar_addr_o_wire), .q(axi_ar_addr_o));

    assign axi_ar_size_o_wire = is_32_bus ? 3'b010 : 3'b011;
    ysyx_210238_ffn #(.WIDTH(3)) ff_ar_size(.clk(clk), .rst(rst), .stall(1'b0), .d(axi_ar_size_o_wire), .q(axi_ar_size_o));

    // assign axi_ar_prot_o = 3'b000;
    assign axi_ar_id_o = 4'b0000;
    // assign axi_ar_user_o = 1'b0;
    assign axi_ar_len_o = 8'b0;
    assign axi_ar_burst_o = 2'b01;
    // assign axi_ar_lock_o = 1'b0;
    // assign axi_ar_cache_o = 4'b0000;
    // assign axi_ar_qos_o = 4'b0000;
    // assign axi_ar_region_o = 4'b0000;




    assign axi_aw_valid_o_wire =    (send_state == 4'd4 & is_reset_delay_ok) ? 1'b1 :
                                    (send_state == 4'd5 & ~axi_aw_ready_i) ? 1'b1 :
                                    (send_state == 4'd7 & ~axi_aw_ready_i) ? 1'b1 :
                                    (send_state == 4'd8 & ~axi_aw_ready_i) ? 1'b1 :
                                    (send_state == 4'd10 & ~axi_aw_ready_i) ? 1'b1 : 1'b0;
    ysyx_210238_ffn #(.WIDTH( 1)) ff_aw_valid(.clk(clk), .rst(rst), .stall(1'b0), .d(axi_aw_valid_o_wire), .q(axi_aw_valid_o));

    assign axi_aw_addr_o_wire = (send_state == 4'd4 &  is_reset_delay_ok) ? addr_cache : axi_aw_addr_o;
    ysyx_210238_ffn #(.WIDTH(AXI_ADDR_WIDTH)) ff_aw_addr(.clk(clk), .rst(rst), .stall(1'b0), .d(axi_aw_addr_o_wire), .q(axi_aw_addr_o));


    assign axi_aw_size_o_wire = is_32_bus ? 3'b010 : 3'b011;
    ysyx_210238_ffn #(.WIDTH(3)) ff_aw_size(.clk(clk), .rst(rst), .stall(1'b0), .d(axi_aw_size_o_wire), .q(axi_aw_size_o));

    // assign axi_aw_prot_o = 3'b000;
    assign axi_aw_id_o = 4'b0000;
    // assign axi_aw_user_o = 1'b0;
    assign axi_aw_len_o = 8'b0;
    assign axi_aw_burst_o = 2'b01;
    // assign axi_aw_lock_o = 1'b0;
    // assign axi_aw_cache_o = 4'b0000;
    // assign axi_aw_qos_o = 4'b0000;
    // assign axi_aw_region_o = 4'b0000;


    assign axi_w_valid_o_wire = (send_state == 4'd4 & is_reset_delay_ok) ? 1'b1 :
                                (send_state == 4'd5 & ~axi_w_ready_i) ? 1'b1 :
                                (send_state == 4'd6 & ~axi_w_ready_i) ? 1'b1 :
                                (send_state == 4'd8 & ~axi_w_ready_i) ? 1'b1 :
                                (send_state == 4'd9 & ~axi_w_ready_i) ? 1'b1 : 1'b0;
    ysyx_210238_ffn #(.WIDTH( 1)) ff_w_valid(.clk(clk), .rst(rst), .stall(1'b0), .d(axi_w_valid_o_wire), .q(axi_w_valid_o));

    // assign axi_w_data_o_wire =  w_data_cache;
    // ysyx_210238_ffn #(.WIDTH(AXI_DATA_WIDTH)) ff_w_data(.clk(clk), .rst(rst), .stall(1'b0), .d(axi_w_data_o_wire), .q(axi_w_data_o));
    assign axi_w_data_o = w_data_cache;

    // assign axi_w_strb_o_wire = w_mask_i;//{w_mask_i[56], w_mask_i[48], w_mask_i[40], w_mask_i[32], w_mask_i[24], w_mask_i[16], w_mask_i[8], w_mask_i[0]};
    // ysyx_210238_ffn #(.WIDTH(AXI_DATA_WIDTH/8)) ff_w_strb(.clk(clk), .rst(rst), .stall(1'b0), .d(axi_w_strb_o_wire), .q(axi_w_strb_o));
    assign axi_w_strb_o = w_mask_cache;

    // assign axi_w_user_o = 1'b0;
    ysyx_210238_ffn #(.WIDTH( 1)) ff_w_last(.clk(clk), .rst(rst), .stall(1'b0), .d(axi_w_valid_o_wire), .q(axi_w_last_o));



    // Receive transcation
    reg [1:0] recv_state;
    // reg [1:0] nxt_recv_state;
    always @(posedge clk) begin
        if(~rst) recv_state <= 2'b00;
        // else recv_state <= nxt_recv_state;
        else recv_state <= 2'b00;
    end

    // always@(*) case(recv_state)
    //     2'b00: begin
    //         // if(axi_r_valid_i & is_32_bus) nxt_recv_state = 2'b01;
    //         if(axi_r_valid_i & is_32_bus) nxt_recv_state = 2'b00;
    //         // else if(axi_b_valid_i & is_32_bus) nxt_recv_state = 2'b10;
    //         else if(axi_b_valid_i & is_32_bus) nxt_recv_state = 2'b00;
    //         else nxt_recv_state = 2'b00;
    //     end
    //     2'b01: begin
    //         if(axi_r_valid_i) nxt_recv_state = 2'b00;
    //         else nxt_recv_state = 2'b01;
    //     end
    //     2'b10: begin
    //         if(axi_b_valid_i) nxt_recv_state = 2'b00;
    //         else nxt_recv_state = 2'b10;
    //     end
    //     2'b11: nxt_recv_state = 2'b00;
    // endcase

    assign axi_r_ready_o = 1'b1;

    // assign r_ready_o_wire = axi_r_valid_i & (axi_r_resp_i == 2'b00) & axi_r_last_i & (axi_r_id_i == 4'b0);
    always@(posedge clk)begin
        if(~rst) r_ready_o_wire <= 1'b0;
        else if(r_hit_cache) r_ready_o_wire <= 1'b1;
        else r_ready_o_wire <= ( (recv_state == 2'b00 & axi_r_valid_i) ? 1'b1 :1'b0 ) & (axi_r_resp_i == 2'b00) & axi_r_last_i & (axi_r_id_i == 4'b0);
    end 
    assign r_ready_o = r_ready_o_wire;


    always @(posedge clk) begin
        if(~rst) r_data_o_wire <= 64'b0;
        else begin
            if(recv_state == 2'b00 & axi_r_valid_i) r_data_o_wire <= axi_r_data_i;
            // else if(recv_state == 2'b01 & axi_r_valid_i) r_data_o_wire <= {axi_r_data_i[63:32], r_data_o[31:0]};
            else r_data_o_wire <= r_data_o_wire;
        end
    end
    assign r_data_o = r_data_o_wire;

    always @(posedge clk) begin
        if(~rst) r_cache_valid <= 1'b0;
        else if(is_fencei) r_cache_valid <= 1'b0;
        else if(w_ena_i) r_cache_valid <= 1'b0;
        else if(recv_state == 2'b00 & axi_r_valid_i) r_cache_valid <= 1'b1;
        else r_cache_valid <= r_cache_valid;
    end

    always @(posedge clk) begin
        if(~rst) r_cache_addr <= 32'b0;
        else if(recv_state == 2'b00 & axi_r_valid_i) r_cache_addr <= addr_cache[31:0];
        else r_cache_addr <= r_cache_addr;
    end


    assign axi_b_ready_o = 1'b1;

    always @(posedge clk) begin
        if(~rst) w_ready_o_wire <= 1'b0;
        else w_ready_o_wire <= ( (recv_state == 2'b00 & axi_b_valid_i) ? 1'b1 : 1'b0 ) & (axi_b_resp_i == 2'b00) & (axi_b_id_i == 4'b0);
    end
    assign w_ready_o = w_ready_o_wire;


endmodule



module ysyx_210238_core(
    input wire            clk,
    input wire            rst,
    input wire  [`REG_BUS-1 : 0] r_data_axi4,
    input wire                   r_ready_axi4,
    input wire                   w_ready_axi4,

    input wire                   mtime_intr,
    input wire                   ext_intr,
    input wire                   software_intr,


    output wire                  r_ena_axi4,
    output wire                  w_ena_axi4,
    output wire [`REG_BUS-1 : 0] addr_axi4,
    output wire [`REG_BUS-1 : 0] w_data_axi4,
    output wire [        63 : 0] w_mask_axi4_64,

    output wire                  no_Icache_to_axi4,
    output wire                  is_fencei
    

//     output wire [`REG_BUS - 1 : 0] value_x10,
//     output wire                    mac_ok,
//     output wire [`REG_BUS-1 : 0] pc_o
);


    // port define 
//     reg MAC_ready_reg;
    wire [7:0] w_mask_axi4;
    wire [`REG_BUS-1 : 0] inst_addr_if_mac;
    wire [`INS_BUS-1 : 0] inst_mac_if;
    wire [`REG_BUS-1 : 0] data_mac_mem;
    wire MAC_ready;
    wire [`REG_BUS-1 : 0] pc_IF_if_csr;
    wire [`REG_BUS-1 : 0] pc;

    // IF<>ID
    wire [`INS_BUS-1 : 0] inst_if_id;
    wire [`REG_BUS-1 : 0] pc_plus_if_id;
    wire                  is_jal_if_id;
    wire                  inst_valid_if_id;

    wire stall_id;

    // ID<>EX
    wire [3:0] mode_ALU_id_ex;
    wire [1:0] n_bytes_id_ex;
    wire [4:0] rd_id_ex;
    wire       w_rd_ena_id_ex;
    wire [`REG_BUS-1 : 0] op1_id_ex, op2_id_ex;
    wire [4:0] rs1_id_ex, rs2_id_ex;
    wire       load_ena_id_ex;
    wire [2:0] load_store_bytes_id_ex;
    wire       is_AL_OP_id_ex;
    wire       is_I_AL_OP_id_ex;
    wire       store_ena_id_ex;
    wire [`REG_BUS-1 : 0] rs2_data_id_ex;
    wire [`REG_BUS-1 : 0] pc_plus_id_ex;
    wire                  is_B_id_ex;
    wire                  is_jal_id_ex;
    wire                  is_jalr_id_ex;
    wire                  is_auipc_id_ex;
    wire                  is_lui_id_ex;
    wire                  is_csr_id_ex;
    wire                  is_ecall_id_ex;
    wire                  is_mret_id_ex;
    wire [`REG_BUS-1 : 0] pc_ID_if_exe;
    wire                  inst_valid_id_ex;

    //data hazard
    wire                  stall_exe;
    // EX<>MEM
    wire [`REG_BUS-1 : 0] result_ALU_ex_mem;
    wire [`REG_BUS-1 : 0] rs2_data_ex_mem;
    wire [4:0] rd_ex_mem;
    wire       w_rd_ena_ex_mem;
    wire       load_ena_ex_mem;
    wire [2:0] load_store_bytes_ex_mem;
    // wire       is_AL_OP_ex_mem;
    // wire       is_AL_OP_mem;
    wire       store_ena_ex_mem;
    wire       is_B_ex_mem;
    wire       is_B_jump_ex_mem;
    wire       is_ecall_ex_mem;
    wire       is_mret_ex_mem;
    wire [`REG_BUS-1 : 0] pc_plus_ex_mem;
    wire stall_mem;
    wire flush_mem;
    wire [`REG_BUS-1 : 0] pc_plus_mem_if;
    wire is_jal_ex_mem;
    wire is_jalr_ex_mem;
    wire [`REG_BUS-1 : 0] jalr_pc_mem_if;
    // wire  is_U_ex_mem;
    wire inst_valid_ex_mem;

//     wire w_rd_ena_harzied_mem_ex;

    // MEM<>WB
    wire [`REG_BUS-1 : 0] wb_data_mem_wb;
    wire [4:0] rd_mem_wb;
    wire       w_rd_ena_mem_wb;
    wire       load_ena_mem_wb;
    wire [`REG_BUS-1 : 0] result_ALU_mem_wb;
    //WB<>ID
    wire [`REG_BUS-1 : 0] wb_data_wb_id;
    wire [4:0] rd_wb_id;
    wire       w_rd_ena_wb_id;
    // wire [2:0] r_addr_2_0_mem_wb;
    // wire [2:0] load_store_bytes_mem_wb;
    wire [`REG_BUS-1 : 0] pc_plus_4_wb_if;
    wire is_jal_mem_wb;
    wire is_jalr_mem_wb;
    // wire  is_U_mem_wb;


    wire is_csr_ex_csr;
    wire MIE, MTIE, MEIE, MSIE;
    wire [`REG_BUS-1 : 0] r_csr_data_csr_mem;
    wire [`REG_BUS-1 : 0] csr_mtvec_csr_mem;
    wire [`REG_BUS-1 : 0] csr_mepc_csr_mem;
    wire [`REG_BUS-1 : 0] pc_EX_if_csr;
    wire                  inst_valid_mem_csr;


    // Interrupt control
    wire mtime_intr_enable;
    wire [`REG_BUS-1 : 0] pc_intr;

    wire ext_intr_enable;
    wire software_intr_enable;
    //port define end

//     assign pc_o = IF.pc_MEM - 64'd4;
 
//     assign value_x10 = ID.RegFile.regs[10];
//     assign mac_ok = MEIE;//MAC_ready_reg & inst_valid_mem_csr;
//     always @(posedge clk) begin
//             MAC_ready_reg <= MAC_ready;
            
//     end

    assign w_mask_axi4_64 = {{8{w_mask_axi4[7]}}, 
                                {8{w_mask_axi4[6]}},
                                {8{w_mask_axi4[5]}},
                                {8{w_mask_axi4[4]}},
                                {8{w_mask_axi4[3]}},
                                {8{w_mask_axi4[2]}},
                                {8{w_mask_axi4[1]}},
                                {8{w_mask_axi4[0]}}
                                };


    ysyx_210238_MemAccCtrl mac(
            .clk(clk),
            .rst(rst),

            //with cpu
            .r_if_ena(1'b1),
            .r_if_addr(inst_addr_if_mac),
            .r_if_bytes(3'b010),

            .r_mem_ena(load_ena_ex_mem),
            .w_mem_ena(store_ena_ex_mem),
            .rw_mem_addr(result_ALU_ex_mem),
            .rw_mem_bytes(load_store_bytes_ex_mem),
            .w_mem_data(rs2_data_ex_mem),

            .ready(MAC_ready),
            .if_data(inst_mac_if),
            .mem_data(data_mac_mem),

            //with AXI4
            .r_data_from_axi4(r_data_axi4),
            .r_ready_from_axi4(r_ready_axi4),
            .w_ready_from_axi4(w_ready_axi4),

            .r_ena_to_axi4(r_ena_axi4),
            .w_ena_to_axi4(w_ena_axi4),
            .addr_to_axi4(addr_axi4),
            .w_data_to_axi4(w_data_axi4),
            .w_mask_to_axi4(w_mask_axi4),
            .no_Icache(no_Icache_to_axi4),
            .is_fencei(is_fencei)
    );



    ysyx_210238_if IF(
            .clk(clk),
            .rst(rst),
            .inst_i(inst_mac_if),
        //     .stall(stall_exe | stall_mem | stall_id),//(is_jal_if_id & is_B_id_ex)
            .stall_exe(stall_exe),
            .stall_mem(stall_mem),
            .stall_id(stall_id),
            .pc_plus_i(pc_plus_mem_if),
            .flush_i(flush_mem),
            .is_B_jump_i(is_B_jump_ex_mem & is_B_ex_mem),
            .pc_plus_ID_i(pc_plus_if_id),
            .is_jal_i(is_jal_if_id ),
            .is_jalr_mem_i(is_jalr_ex_mem),
            .is_ecall_mem_i(is_ecall_ex_mem & MIE),
            .is_mret_mem_i(is_mret_ex_mem),
            .jalr_pc_i(jalr_pc_mem_if),
            .MAC_ready(MAC_ready),
            .inst_valid_o(inst_valid_if_id),
            .mtime_intr_enable_i(mtime_intr_enable | ext_intr_enable | software_intr_enable),

            .inst_addr(inst_addr_if_mac),
            .inst_o(inst_if_id),
        //     .inst_ena(inst_ena),
            .pc_MEM_o(pc_plus_4_wb_if),
            .pc_ID_o(pc_ID_if_exe),
            .pc_EX_o(pc_EX_if_csr),
            .pc_IF_o(pc_IF_if_csr),
            .pc_o(pc)
             );

    ysyx_210238_id ID(
            .clk(clk),
            .rst(rst),
            .inst_i(inst_if_id),
            .regfile_w_ena(w_rd_ena_wb_id),
            .regfile_w_addr(rd_wb_id),
            .regfile_w_data(wb_data_wb_id),
            .stall_mem(stall_mem),
            .stall_exe(stall_exe),
            .flush_i(flush_mem),
            .is_B_id_ex(is_B_id_ex),
            .inst_valid_i(inst_valid_if_id),
    
            .op1(op1_id_ex),
            .op2(op2_id_ex),
            .rd(rd_id_ex),
            .w_rd_ena(w_rd_ena_id_ex),
            .load_ena(load_ena_id_ex),
            .store_ena(store_ena_id_ex),
            .load_store_bytes(load_store_bytes_id_ex),
            .mode_ALU(mode_ALU_id_ex),
            .n_bytes_ALU(n_bytes_id_ex),
            .is_AL_OP(is_AL_OP_id_ex),
            .is_I_AL_OP_o(is_I_AL_OP_id_ex),
            .rs1(rs1_id_ex),
            .rs2(rs2_id_ex),
            .rs2_data_o(rs2_data_id_ex),
            .is_B_o(is_B_id_ex),
            .is_auipc_o(is_auipc_id_ex),
            .is_lui_o(is_lui_id_ex),
            .pc_plus(pc_plus_id_ex),
            .is_jal_o(is_jal_id_ex),
            .is_jalr_o(is_jalr_id_ex),
            .is_jal_IF_o(is_jal_if_id),
            .is_csr_o(is_csr_id_ex),
            .is_ecall_o(is_ecall_id_ex),
            .is_mret_o(is_mret_id_ex),
            .pc_plus_IF_o(pc_plus_if_id),
            .stall_o(stall_id),
            .inst_valid_o(inst_valid_id_ex)
             );



    ysyx_210238_exe EX(
            .clk(clk),
            .rst(rst),
            .mode_ALU(mode_ALU_id_ex),
            .n_bytes_ALU(n_bytes_id_ex),
            .op1_alu(op1_id_ex),
            .op2_alu(op2_id_ex),
            .rd(rd_id_ex),
            .w_rd_ena(w_rd_ena_id_ex),
            .rs1(rs1_id_ex),
            .rs2(rs2_id_ex),
            .load_ena_i(load_ena_id_ex),
            .store_ena_i(store_ena_id_ex),
            .load_store_bytes_i(load_store_bytes_id_ex),
            .rs2_data_i(rs2_data_id_ex),
            .is_B_i(is_B_id_ex),
            .is_auipc_i(is_auipc_id_ex),
            .is_lui_i(is_lui_id_ex),
            .is_jal_i(is_jal_id_ex),
            .is_jalr_i(is_jalr_id_ex),
            .is_csr_i(is_csr_id_ex),
            .is_ecall_i(is_ecall_id_ex),
            .is_mret_i(is_mret_id_ex),
            .pc_plus_i(pc_plus_id_ex),
            .flush_i(flush_mem),
            .pc_ID_i(pc_ID_if_exe),
            .inst_valid_i(inst_valid_id_ex),

            .rd_mem_wb(rd_mem_wb),
            .wb_data_mem_wb(wb_data_wb_id),
            .wb_ena_mem_wb(w_rd_ena_mem_wb),
            .rd_ex_mem(rd_ex_mem),
            .wb_data_ex_mem(result_ALU_ex_mem),
            .wb_ena_ex_mem(w_rd_ena_ex_mem),
            .is_AL_OP_i(is_AL_OP_id_ex),
        //     .is_AL_OP_ex_mem(is_AL_OP_ex_mem),
        //     .is_AL_OP_mem(is_AL_OP_mem),
            .is_I_AL_OP(is_I_AL_OP_id_ex),
            .stall_i(stall_mem),
            .is_jal_o(is_jal_ex_mem),
            .is_jalr_o(is_jalr_ex_mem),
            // .is_U_o(is_U_ex_mem),
            .is_csr_o(is_csr_ex_csr),
            .is_ecall_o(is_ecall_ex_mem),
            .is_mret_o(is_mret_ex_mem),

            .load_ena_o(load_ena_ex_mem),
            .store_ena_o(store_ena_ex_mem),
            .load_store_bytes_o(load_store_bytes_ex_mem),
            .rd_o(rd_ex_mem),
            .w_rd_ena_o(w_rd_ena_ex_mem),
            .result_ALU(result_ALU_ex_mem),
            // .is_AL_OP_o(is_AL_OP_ex_mem),
            .stall_o(stall_exe), // load-use data hazard
            .rs2_data_o(rs2_data_ex_mem),
            .is_B_o(is_B_ex_mem),
            .pc_plus_o(pc_plus_ex_mem),
            .is_B_jump_o(is_B_jump_ex_mem),
            .inst_valid_o(inst_valid_ex_mem)
             );
    
    ysyx_210238_mem MEM(
            .clk(clk),
            .rst(rst),
            .result_ALU(result_ALU_ex_mem),
            .rd(rd_ex_mem),
            .w_rd_ena(w_rd_ena_ex_mem),
            .load_ena_i(load_ena_ex_mem),
        //     .store_ena_i(store_ena_ex_mem),
        //     .load_store_bytes_i(load_store_bytes_ex_mem),
        //     .dmem_r_data(dmem_r_data),
            // .is_AL_OP_i(is_AL_OP_ex_mem),
        //     .rs2_data_i(rs2_data_ex_mem),
            .is_B_i(is_B_ex_mem),
            // .is_U_i(is_U_ex_mem),
            .pc_plus_i(pc_plus_ex_mem),
            .is_B_jump_i(is_B_jump_ex_mem),
            .is_jal_i(is_jal_ex_mem),
            .is_jalr_i(is_jalr_ex_mem),
            .is_csr_i(is_csr_ex_csr),
            .is_ecall_i(is_ecall_ex_mem),
            .is_mret_i(is_mret_ex_mem),
            .r_csr_i(r_csr_data_csr_mem),
            .csr_mtvec_i(csr_mtvec_csr_mem),
            .csr_mepc_i(csr_mepc_csr_mem),
            .MIE(MIE),
            .inst_valid_i(inst_valid_ex_mem),
            .mtime_intr_enable_i(mtime_intr_enable),
            .ext_intr_enable_i(ext_intr_enable),
            .software_intr_enable_i(software_intr_enable),

            .MAC_ready(MAC_ready),
            .MAC_data(data_mac_mem),
            
            .rd_o(rd_mem_wb),
            .w_rd_ena_o(w_rd_ena_mem_wb),
        //     .w_rd_ena_harzied_o(w_rd_ena_harzied_mem_ex),
            .wb_data(wb_data_mem_wb),
            .result_ALU_o(result_ALU_mem_wb),
            .load_ena_o(load_ena_mem_wb),
            // .is_AL_OP_o(is_AL_OP_mem),
            .stall(stall_mem),
            // .r_addr_2_0(r_addr_2_0_mem_wb),
            // .load_store_bytes_o(load_store_bytes_mem_wb),
            .pc_plus_o(pc_plus_mem_if),
            .flush(flush_mem),
            .is_jal_o(is_jal_mem_wb),
            .is_jalr_o(is_jalr_mem_wb),
            .jalr_pc_o(jalr_pc_mem_if),
            // .is_U_o(is_U_mem_wb),
            .inst_valid_o(inst_valid_mem_csr)
             );

    ysyx_210238_wb WB(
            // .clk(clk),
            // .rst(rst), 
            .wb_data(wb_data_mem_wb),
            .result_ALU(result_ALU_mem_wb),
            .load_ena_i(load_ena_mem_wb),
            .rd(rd_mem_wb),
            .w_rd_ena(w_rd_ena_mem_wb),
        //     .r_addr_2_0(r_addr_2_0_mem_wb),
        //     .load_store_bytes_i(load_store_bytes_mem_wb),
            .pc_plus_4_i(pc_plus_4_wb_if),
            .is_jal_i(is_jal_mem_wb),
            .is_jalr_i(is_jalr_mem_wb),
        //     .is_U_i(is_U_mem_wb),
            
            .wb_data_o(wb_data_wb_id),
            .rd_o(rd_wb_id),
            .w_ena_o(w_rd_ena_wb_id)  );


    ysyx_210238_csr CSR(
            .clk(clk),
            .rst(rst),

            .is_ecall(is_ecall_ex_mem & (~stall_mem)),
            .is_mret(is_mret_ex_mem & (~stall_mem)),
            
            .w_addr(result_ALU_ex_mem[11:0]),
            .w_data(rs2_data_ex_mem),
            .w_ena(is_csr_ex_csr & (~stall_mem) & (~mtime_intr_enable) & (~ext_intr_enable) & (~software_intr_enable)),
            .w_mode(load_store_bytes_ex_mem[1:0]),
            
            .r_addr(result_ALU_ex_mem[11:0]),

            .MIE(MIE),
            .MTIE(MTIE),
            .MEIE(MEIE),
            .MSIE(MSIE),

            .r_data(r_csr_data_csr_mem),
            .csr_mtvec_o(csr_mtvec_csr_mem),
            .csr_mepc_o(csr_mepc_csr_mem),
            .pc_from_ex(pc_EX_if_csr),
            .pc_intr(pc_intr),

            .inst_valid(inst_valid_mem_csr),
            .mtime_intr_i(mtime_intr),
            .mtime_intr_enable_i(mtime_intr_enable & (~stall_mem)),
            .ext_intr_i(ext_intr),
            .ext_intr_enable_i(ext_intr_enable & (~stall_mem)),
            .software_intr_i(software_intr),
            .software_intr_enable_i(software_intr_enable & (~stall_mem))

            // .r_exception(),
            // .w_exception()
    );


    assign mtime_intr_enable = mtime_intr & MIE & MTIE;

    assign pc_intr = inst_valid_ex_mem & (~store_ena_ex_mem) & (~load_ena_ex_mem) ? pc_EX_if_csr :
                     inst_valid_id_ex  ? pc_ID_if_exe :
                     inst_valid_if_id  ? pc_IF_if_csr :
                                         pc;

    assign ext_intr_enable = ext_intr & MIE & MEIE;

    assign software_intr_enable = software_intr & MIE & MSIE;

    // always @(posedge clk) begin
    //     if(mtime_intr_enable & (~stall_mem)) $display("\nmtime intr...........................................");
        
    // end


endmodule



module ysyx_210238_csr(
    input  wire clk,
	input  wire rst,

	input  wire is_ecall,
	input  wire is_mret, 
	
	input  wire  [11  : 0] w_addr,
	input  wire  [`REG_BUS-1 : 0] w_data,
	input  wire 		   w_ena,
	input  wire  [1   : 0] w_mode,
	
	input  wire  [11  : 0] r_addr,
	output wire  [`REG_BUS-1 : 0] r_data,

	output wire [`REG_BUS-1 : 0] csr_mtvec_o,
	output wire [`REG_BUS-1 : 0] csr_mepc_o,
	output wire                  MIE,
	output wire                  MTIE,
	output wire                  MEIE,
	output wire                  MSIE,
	input wire  [`REG_BUS-1 : 0] pc_from_ex,

	input wire                   inst_valid,
	input wire                   mtime_intr_i,
	input wire                   mtime_intr_enable_i,
	input wire                   ext_intr_i,
	input wire                   ext_intr_enable_i,
	input wire                   software_intr_i,
	input wire                   software_intr_enable_i,
	input wire [`REG_BUS-1 : 0]  pc_intr

	// output wire r_exception,
	// output wire w_exception
	
    );

	//port define 
	wire [63:0] misa;// R W, implement just R
	wire r_misa;
	wire [63:0] mvendorid;// R only
	wire r_mvendorid;
	wire [63:0] marchid;// R only
	wire r_marchid;
	wire [63:0] mimpid;// R only
	wire r_mimpid;
	wire [63:0] mhartid;// R only
	wire r_mhartid;
	reg [63:0] mstatus;
	wire [63:0] mstatus_wire;
	wire r_mstatus, w_mstatus;
	reg [63:0] mepc;
	// wire [63:0] mepc_wire;
	wire r_mepc, w_mepc;
	reg [63:0] mcause;
	wire r_mcause, w_mcause;
	reg [63:0] mtvec;
	wire [63:0] mtvec_wire;
	wire r_mtvec, w_mtvec;
	reg [63:0] mstratch;
	wire [63:0] mstratch_wire;
	wire r_mstratch, w_mstratch;
    reg [63:0] mcycle;
    wire r_mcycle, w_mcycle;
    reg [63:0] minstret;
    wire r_minstret, w_minstret;
	reg [63:0] mip;
	wire r_mip;
	reg [63:0] mie;
	wire r_mie, w_mie;
	reg [`REG_BUS-1 : 0] to_write;
	//port define end

	// reg is_in_trap;
	// always @(posedge clk) begin
	// 	if(~rst) is_in_trap <= 1'b0;
	// 	else begin
	// 		if(trap_event) is_in_trap <= 1'b1;
	// 		else if(is_mert) is_in_trap <= 1'b0;
	// 		else is_in_trap <= is_in_trap;
	// 	end
		
	// end

	assign MIE = mstatus[3];
	assign MTIE = mie[7];
	assign MEIE = mie[11];
	assign MSIE = mie[3];

	assign csr_mtvec_o = mtvec;
	assign csr_mepc_o = mepc;

	// assign w_misa = w_addr == 12'h301;
	assign r_misa = r_addr == 12'h301;
	assign misa = 64'b10_000000000000000000000000000000000000_00000000000000000100000000;


	assign r_mvendorid = r_addr == 12'hf11;
	assign mvendorid = 64'h42206c6f7665204d;


	assign r_marchid = r_addr == 12'hf12;
	assign marchid = 64'h79737978337264;


	assign r_mimpid = r_addr == 12'hf13;
	assign mimpid = 64'b0;


	assign r_mhartid = r_addr == 12'hf14;
	assign mhartid = 64'b0;


	assign r_mstatus = r_addr == 12'h300;
	assign w_mstatus = w_addr == 12'h300;
	assign mstatus_wire = w_mstatus ? {to_write[16:15]==2'b11 | to_write[14:13]==2'b11, // SD
										27'b0,
										13'b0,
										10'b0,
										2'b11, //MPP
										3'b000,
										to_write[7], //MPIE
										3'b0,
										to_write[3], //MIE
										3'b0} :
							(is_ecall | mtime_intr_enable_i | ext_intr_enable_i | software_intr_enable_i) ? {mstatus[63:8], mstatus[3], mstatus[6:4],       1'b0, mstatus[2:0]} :
							is_mret  ? {mstatus[63:8],       1'b1, mstatus[6:4], mstatus[7], mstatus[2:0]} : mstatus;
	always @(posedge clk) begin
		if(rst) mstatus <= {1'b0, 50'b0, 2'b11, 3'b0, 1'b1, 3'b0, 1'b0, 3'b0};
		else if(w_ena | is_ecall | is_mret | mtime_intr_enable_i | ext_intr_enable_i | software_intr_enable_i) mstatus <= mstatus_wire;
		else mstatus <= mstatus;
	end

	assign r_mepc = r_addr == 12'h341;
	assign w_mepc = w_addr == 12'h341;
	always @(posedge clk) begin
		if(rst) mepc <= 64'b0;
		else begin
			if(w_ena) mepc <= w_mepc ? to_write : mepc;
			else if(mtime_intr_enable_i | ext_intr_enable_i | software_intr_enable_i) mepc <= pc_intr;
			else if(is_ecall) mepc <= pc_from_ex;
			else mepc <= mepc;
		end
	end

	assign r_mcause = r_addr == 12'h342;
	assign w_mcause = w_addr == 12'h342;
	always @(posedge clk) begin
		if(rst) mcause <= 64'b0;
		else begin
			if(w_ena) mcause <= w_mcause ? to_write : mcause;
			else if(mtime_intr_enable_i) mcause <= {1'b1, 59'b0, 4'd7};   // mtime priority level 1
			else if(ext_intr_enable_i) mcause <= {1'b1, 59'b0, 4'd11};    // ext   priority level 2
			else if(software_intr_enable_i) mcause <= {1'b1, 59'b0, 4'd3};// software   priority level 3
			else if(is_ecall) mcause <= {1'b0, 59'b0, 4'd11};
			else mcause <= mcause;
		end
	end

	assign r_mtvec = r_addr == 12'h305;
	assign w_mtvec = w_addr == 12'h305;
	assign mtvec_wire = w_mtvec ? to_write : mtvec;
	always @(posedge clk) begin
		if(rst) mtvec <= 64'b0;
		else if(w_ena) mtvec <= {mtvec_wire[63:2], 2'b00 & mtvec_wire[1:0]};
		else mtvec <= {mtvec[63:2], 2'b00 & mtvec[1:0]};
	end


	assign r_mstratch = r_addr == 12'h340;
	assign w_mstratch = w_addr == 12'h340;
	assign mstratch_wire = w_mstratch ? to_write : mstratch;
	always @(posedge clk) begin
		if(rst) mstratch <= 64'b0;
		else if(w_ena) mstratch <= mstratch_wire;
		else mstratch <= mstratch;
	end

    assign r_mcycle = r_addr == 12'hb00;
    assign w_mcycle = w_addr == 12'hb00;
    always @(posedge clk) begin
        if(rst) mcycle <= 64'b0;
        else mcycle <= w_mcycle ? to_write : mcycle + 1'b1;
    end

    assign r_minstret = r_addr == 12'hb02;
    assign w_minstret = w_addr == 12'hb02;
    always @(posedge clk) begin
        if(rst) minstret <= 64'b0;
        else minstret <= w_minstret ? to_write : minstret + {63'b0, inst_valid};
    end

	assign r_mip = r_addr == 12'h344;
	always @(posedge clk) begin
		if(rst) mip <= 64'b0;
		else mip <= {52'b0, ext_intr_i, 3'b0, mtime_intr_i, 3'b0, software_intr_i, 3'b0};
	end


	assign r_mie = r_addr == 12'h304;
	assign w_mie = r_addr == 12'h304;
	always @(posedge clk) begin
		if(rst) mie <= 64'b0;
		else if(w_ena) mie <= w_mie ? {52'b0, to_write[11], 3'b0, to_write[7], 3'b0, to_write[3], 3'b0} : mie;
		else mie <= mie;
	end

	assign r_data = {64{r_misa}}      & misa      | 
					{64{r_mvendorid}} & mvendorid |
					{64{r_marchid}}   & marchid   |
					{64{r_mimpid}}    & mimpid    |
					{64{r_mhartid}}   & mhartid   |
					{64{r_mstatus}}   & mstatus   |
					{64{r_mtvec}}     & mtvec     |
					{64{r_mstratch}}  & mstratch  |
					{64{r_mcycle}}    & mcycle    |
					{64{r_mepc}}      & mepc      |
					{64{r_mcause}}    & mcause    |
					{64{r_minstret}}  & minstret  |
					{64{r_mip}}       & mip       |
					{64{r_mie}}       & mie       ;


	always @(*) begin
		case(w_mode)
			2'b00: to_write = 64'b0;
			2'b01: to_write = w_data;
			2'b10: to_write = r_data | w_data;
			2'b11: to_write = r_data & (~w_data);
		endcase
	end


	


endmodule


// `include "ysyx_210238_ff.v"

module ysyx_210238_exe(
    input wire clk,
    input wire rst,
    input wire [         3 : 0] mode_ALU,
    input wire [         1 : 0] n_bytes_ALU,
    input wire [`REG_BUS-1 : 0] op1_alu,
    input wire [`REG_BUS-1 : 0] op2_alu,
    input wire [         4 : 0] rd,
    input wire                  w_rd_ena,
    input wire [         4 : 0] rs1,
    input wire [         4 : 0] rs2,
    input wire                  load_ena_i,
    input wire                  store_ena_i,
    input wire [         2 : 0] load_store_bytes_i,
    input wire [`REG_BUS-1 : 0] rs2_data_i,
    input wire                  is_jal_i,
    input wire                  is_auipc_i,
    input wire                  is_lui_i,
    input wire                  is_csr_i,
    input wire [`REG_BUS-1 : 0] pc_ID_i,
    input wire                  inst_valid_i,
    // Data hazard
    input wire [         4 : 0] rd_mem_wb,
    input wire [`REG_BUS-1 : 0] wb_data_mem_wb,
    input wire                  wb_ena_mem_wb,
    input wire [         4 : 0] rd_ex_mem,
    input wire [`REG_BUS-1 : 0] wb_data_ex_mem,
    input wire                  wb_ena_ex_mem,
    input wire                  is_AL_OP_i,
    // input wire                  is_AL_OP_ex_mem,
    // input wire                  is_AL_OP_mem,
    input wire                  is_I_AL_OP,
    input wire                  stall_i,
    input wire                  flush_i,
    input wire [`REG_BUS-1 : 0] pc_plus_i,
    input wire                  is_B_i,
    input wire                  is_jalr_i,
    input wire                  is_ecall_i,
    input wire                  is_mret_i,


    
    output wire                  load_ena_o,
    output wire                  store_ena_o,
    output wire [         2 : 0] load_store_bytes_o,
    output wire [         4 : 0] rd_o,
    output wire                  w_rd_ena_o,
    output wire [`REG_BUS-1 : 0] result_ALU,
    // output wire                  is_AL_OP_o,
    output wire                  stall_o,
    output wire [`REG_BUS-1 : 0] rs2_data_o,
    output wire                  is_B_o,
    output wire                  is_B_jump_o,
    output wire [`REG_BUS-1 : 0] pc_plus_o,
    output wire                  is_jal_o,
    output wire                  is_jalr_o,
    // output wire                  is_U_o,
    output wire                  is_csr_o,
    output wire                  is_ecall_o,
    output wire                  is_mret_o,
    output wire                  inst_valid_o

    
);

    //port define
    wire [`REG_BUS-1 : 0] op1;
    wire [`REG_BUS-1 : 0] op2;
    // wire [`REG_BUS-1 : 0] result_AL_OP;
    wire [`REG_BUS-1 : 0] r_add_sub;
    wire [`REG_BUS-1 : 0] r_and;
    wire [`REG_BUS-1 : 0] r_or;
    wire [`REG_BUS-1 : 0] r_xor;
    wire [`REG_BUS-1 : 0] r_slt;
    wire is_equal, is_less_than, r_slt_lsb;
    wire s, s1, s2, c1, c2;
    wire is_byte;
    wire expend_shift; 
    wire is_sll;
    wire [`REG_BUS-1 : 0] shift_op1;
    wire [5:0] shift_op2;
    reg [`REG_BUS-1 : 0] shift_op1_reverse;
    wire [`REG_BUS-1 : 0] shift_op1_in;
    wire [`REG_BUS-1 : 0] shift_result;
    reg [`REG_BUS-1 : 0] shift_result_reverse;
    wire [`REG_BUS-1 : 0] shift_out;
    wire signed [`REG_BUS-1 : 0] sign_original;
    wire signed [`REG_BUS-1 : 0] sign_out;
    wire [`REG_BUS-1 : 0] sub_result;
    wire [`REG_BUS-1 : 0] r_shift;
    wire is_load_use;
    reg [`REG_BUS-1 : 0] result_ALU_wire;
    wire [`REG_BUS-1 : 0] result_ALU_wire_1;
    wire [`REG_BUS-1 : 0] rs2_data_hazard;
    reg is_B_jump_wire;

    //port define end




    // assign op1 = ((rs1 == rd_ex_mem)&wb_ena_ex_mem) ? wb_data_ex_mem :
    //                 ((rs1 == rd_mem_wb)&wb_ena_mem_wb) ? wb_data_mem_wb : 
    //                 is_auipc_i ? pc_ID_i : is_lui_i ? 64'b0 : op1_alu;
    assign op1 = (is_lui_i | is_csr_i) ? 64'b0 :
                    is_auipc_i ? pc_ID_i :
                    ((rs1 == rd_ex_mem)&wb_ena_ex_mem) ? wb_data_ex_mem :
                    ((rs1 == rd_mem_wb)&wb_ena_mem_wb) ? wb_data_mem_wb : 
                    op1_alu;
    assign op2 = (is_I_AL_OP | load_ena_i | store_ena_i | is_csr_i) ? op2_alu :
                    ((rs2 == rd_ex_mem)&wb_ena_ex_mem) ? wb_data_ex_mem :
                    ((rs2 == rd_mem_wb)&wb_ena_mem_wb) ? wb_data_mem_wb : 
                    op2_alu;
    

    // Addition and subtraction
    assign r_add_sub = op1 + (op2^{`REG_BUS{mode_ALU[3]}}) + {63'b0, mode_ALU[3]};

    // AND
    assign r_and = op1 & op2;

    // OR
    assign r_or = op1 | op2;

    // XOR
    assign r_xor = op1 ^ op2;

    // set less than : signed and unsigned
    assign is_equal = (op1[`REG_BUS-2:0] == op2[`REG_BUS-2:0]);
    assign is_less_than = (op1[`REG_BUS-2:0] < op2[`REG_BUS-2:0]);
    assign s = mode_ALU[0];
    assign s1 = op1[`REG_BUS-1];
    assign s2 = op2[`REG_BUS-1];
    assign c1 = is_less_than;
    assign c2 = is_equal;
    // assign r_slt_lsb = ((~s)&s1&(~s2)) | (s&(~s1)&s2) | (c1&(s|((~s1)&(~s2)))) | (((~s)&s1)&((~c1)&(~c2)));
    assign r_slt_lsb = s ? (({s1, s2}==2'b01) | ((s1==s2)&c1)) : (({s1, s2}==2'b10) | ((s1==s2)&c1));
    assign r_slt = {{(`REG_BUS-1){1'b0}}, r_slt_lsb};

    // Shift
    assign is_sll = (mode_ALU[2:0] == 001);
    assign is_byte = (n_bytes_ALU == 2'b10);
    assign expend_shift = op1[31] & mode_ALU[3];

    assign shift_op1 = is_byte ? {{32{expend_shift}}, op1[31:0]} : op1;

    assign shift_op2 = {op2[5]&(~is_byte), op2[4:0]};

    integer i;
    always@(*)
    for(i=0; i<`REG_BUS; i=i+1) begin
        shift_op1_reverse[i] = shift_op1[63-i];
    end


    assign shift_op1_in = is_sll ? shift_op1 : shift_op1_reverse;

    assign shift_result = (shift_op1_in << shift_op2);
    
    always@(*)
    for(i=0; i<64; i=i+1) begin
        shift_result_reverse[i] = shift_result[63-i];
    end

    assign shift_out = is_sll ? shift_result : shift_result_reverse;

    assign sign_original = {mode_ALU[3] & (n_bytes_ALU==2'b11) & op1[63], 63'b0};

    assign sign_out = (sign_original >>> shift_op2);

    assign sub_result = shift_out | sign_out;

    assign r_shift = (n_bytes_ALU==2'b11) ? sub_result : {{32{sub_result[31]}}, sub_result[31:0]};


    // is load-use
    assign is_load_use = (load_ena_o | is_csr_o) & (rs1 == rd_ex_mem || rs2 == rd_ex_mem) & (is_AL_OP_i | load_ena_i | store_ena_i | is_B_i | is_jalr_i | is_lui_i | is_csr_i);
    // ff #(.WIDTH( 4)) ff_stall(.clk(clk), .rst(rst), .stall(1'b0), .d({{2{is_load_use}}, 2'b00}), .q(stall_o));
    assign stall_o = is_load_use;


    //Output
    always @(*) case(mode_ALU[2:0])
        3'b000        : result_ALU_wire = r_add_sub;
        3'b001, 3'b101: result_ALU_wire = r_shift;
        3'b010, 3'b011: result_ALU_wire = r_slt;
        3'b100        : result_ALU_wire = r_xor;
        3'b110        : result_ALU_wire = r_or;
        3'b111        : result_ALU_wire = r_and;
    endcase

    assign result_ALU_wire_1 = is_byte ? {{32{result_ALU_wire[31]}}, result_ALU_wire[31:0]} : result_ALU_wire;

    ysyx_210238_ff #(.WIDTH(64)) ff_ALU(.clk(clk), .rst(rst), .stall(stall_i), .d(result_ALU_wire_1), .q(result_ALU));
    ysyx_210238_ff #(.WIDTH( 5)) ff_rd(.clk(clk), .rst(rst), .stall(stall_i), .d(rd), .q(rd_o));
    ysyx_210238_ff #(.WIDTH( 1)) ff_w_rd_ena(.clk(clk), .rst(rst), .stall(stall_i), .d(w_rd_ena & (~is_load_use) & (~flush_i)), .q(w_rd_ena_o));
    ysyx_210238_ff #(.WIDTH( 1)) ff_load_ena(.clk(clk), .rst(rst), .stall(stall_i), .d(load_ena_i & (~is_load_use) & (~flush_i)), .q(load_ena_o));
    ysyx_210238_ff #(.WIDTH( 1)) ff_store_ena(.clk(clk), .rst(rst), .stall(stall_i), .d(store_ena_i & (~is_load_use) & (~flush_i)), .q(store_ena_o));
    ysyx_210238_ff #(.WIDTH( 3)) ff_load_store_bytes(.clk(clk), .stall(stall_i), .rst(rst), .d(load_store_bytes_i), .q(load_store_bytes_o));
    // ysyx_210238_ff #(.WIDTH( 1)) ff_is_AL_OP(.clk(clk), .rst(rst), .stall(stall_i), .d(is_AL_OP_i), .q(is_AL_OP_o));
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_jal(.clk(clk), .rst(rst), .stall(stall_i), .d(is_jal_i & (~flush_i)), .q(is_jal_o));
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_jalr(.clk(clk), .rst(rst), .stall(stall_i), .d(is_jalr_i & (~is_load_use) & (~flush_i)), .q(is_jalr_o));
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_ecall(.clk(clk), .rst(rst), .stall(stall_i), .d(is_ecall_i & (~flush_i)), .q(is_ecall_o));
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_mret(.clk(clk), .rst(rst), .stall(stall_i), .d(is_mret_i & (~(flush_i))), .q(is_mret_o));

    assign rs2_data_hazard = (is_csr_i) ? (
                                (load_store_bytes_i[2]) ? rs2_data_i :
                                ((rs1 == rd_ex_mem)&wb_ena_ex_mem) ? wb_data_ex_mem :
                                ((rs1 == rd_mem_wb)&wb_ena_mem_wb) ? wb_data_mem_wb : 
                                rs2_data_i
                            ) :
                            (
                                ((rs2 == rd_ex_mem)&wb_ena_ex_mem) ? wb_data_ex_mem :
                                ((rs2 == rd_mem_wb)&wb_ena_mem_wb) ? wb_data_mem_wb : 
                                rs2_data_i
                            );
    ysyx_210238_ff #(.WIDTH(64)) ff_rs2_data_o(.clk(clk), .rst(rst), .stall(stall_i), .d(rs2_data_hazard), .q(rs2_data_o));


    // is_B
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_B_o(.clk(clk), .rst(rst), .stall(stall_i), .d(is_B_i & (~flush_i) & (~is_load_use)), .q(is_B_o));
    ysyx_210238_ff #(.WIDTH(64)) ff_pc_plus_o(.clk(clk), .rst(rst), .stall(stall_i), .d(pc_plus_i), .q(pc_plus_o));

    // ysyx_210238_ff #(.WIDTH( 1)) ff_is_U(.clk(clk), .rst(rst), .stall(stall_i), .d(is_auipc_i | is_lui_i), .q(is_U_o));

    ysyx_210238_ff #(.WIDTH( 1)) ff_is_csr(.clk(clk), .rst(rst), .stall(stall_i), .d(is_csr_i & (~flush_i) & (~is_load_use)), .q(is_csr_o));



    ysyx_210238_ff #(.WIDTH( 1)) ff_inst_valid(.clk(clk), .rst(rst), .stall(stall_i), .d(inst_valid_i & (~flush_i) & (~stall_o)), .q(inst_valid_o));



    always @ (*) case (load_store_bytes_i)
        3'b000 : is_B_jump_wire = (s1==s2) & c2;
        // 3'b101 : is_B_jump_wire = ((s1==s2)&c2) | (s1==1'b0 & s2==1'b1) | (({s1, s2}==2'b00)&({c1, c2}==2'b00)) | (({s1, s2}==2'b11)&c1); 
        3'b101 : is_B_jump_wire = ((s1==s2)&c2) | (s1==1'b0 & s2==1'b1) | ((s1==s2)&({c1, c2}==2'b00)); 
        3'b111 : is_B_jump_wire = ((s1==s2)&c2) | (s1==1'b1 & s2==1'b0) | (s1==s2 & {c1, c2}==2'b00); 
        // 3'b100 : is_B_jump_wire = (s1==1'b1 & s2==1'b0) | (({s1, s2}==2'b00)&c1) | (({s1, s2}==2'b11)&({c1, c2}==2'b00)); 
        3'b100 : is_B_jump_wire = (s1==1'b1 & s2==1'b0) | ((s1==s2)&c1); 
        3'b110 : is_B_jump_wire = ((s1==s2)&c1) | ({s1, s2}==2'b01); 
        3'b001 : is_B_jump_wire = ~((s1==s2)&c2);
        default: is_B_jump_wire = 1'b0;
    endcase

    ysyx_210238_ff #(.WIDTH( 1)) ff_is_B_jump(.clk(clk), .rst(rst), .stall(stall_i), .d(is_B_jump_wire), .q(is_B_jump_o));

    
endmodule

module ysyx_210238_ffn
#( parameter WIDTH = 64 )
(
    input  wire               clk,
    input  wire               rst,
    input  wire               stall,
    input  wire [WIDTH-1 : 0] d,
    output reg  [WIDTH-1 : 0] q
);

    always @(posedge clk) begin
        if (~rst) q <= {WIDTH{1'b0}};
        else begin
            if(stall) q <= q;
            else      q <= d;
        end 
    end

endmodule

module ysyx_210238_ff
#( parameter WIDTH = 64 )
(
    input  wire               clk,
    input  wire               rst,
    input  wire               stall,
    input  wire [WIDTH-1 : 0] d,
    output reg  [WIDTH-1 : 0] q
);

    always @(posedge clk) begin
        if (rst) q <= {WIDTH{1'b0}};
        else begin
            if(stall) q <= q;
            else      q <= d;
        end 
    end

endmodule 



module ysyx_210238_id(
    input wire clk,
    input wire rst,
    input wire [`INS_BUS-1 : 0] inst_i,
    input wire                  regfile_w_ena,
    input wire [4:0]            regfile_w_addr,
    input wire [`REG_BUS-1 : 0] regfile_w_data,
    input wire                  stall_mem,
    input wire                  stall_exe,
    input wire                  flush_i,
    input wire                  is_B_id_ex,
    input wire                  inst_valid_i,
    
    output wire [`REG_BUS-1 : 0] op1,
    output wire [`REG_BUS-1 : 0] op2,
    output wire [         4 : 0] rd,
    output wire                  w_rd_ena,
    output wire                  load_ena,
    output wire                  store_ena,
    output wire [         2 : 0] load_store_bytes,
    output wire [         3 : 0] mode_ALU,
    output wire [         1 : 0] n_bytes_ALU, 
    output wire                  is_AL_OP,
    output wire                  is_I_AL_OP_o,
    output wire                  is_B_o,
    output wire                  is_jal_o,
    output wire                  is_jalr_o,
    output wire                  is_jal_IF_o,
    output wire                  is_auipc_o,
    output wire                  is_lui_o,
    output wire                  is_csr_o,
    output wire                  is_ecall_o,
    output wire                  is_mret_o,
    output wire                  inst_valid_o,

    output wire [`REG_BUS-1 : 0] pc_plus_IF_o,
    output wire [4  :   0] rs1,
    output wire [4  :   0] rs2,
    output wire [`REG_BUS-1 : 0] rs2_data_o,
    output wire [`REG_BUS-1 : 0] pc_plus,
    output wire                  stall_o
);

    // stall_in_id, flush_in_id
    wire stall_in_id, flush_in_id;
    //Instruction decode
    wire [6  :   2] opcode;
    wire [4  :   0] rs1_wire;
    wire [4  :   0] rs2_wire;
    wire [4  :   0] rd_wire;
    wire [6  :   0] func7;
    wire [2  :   0] func3;
    wire [`REG_BUS-1 : 0] imm;
    wire is_R, is_I, is_S, is_B, is_U, is_J;
    wire is_AL_OP_wire; //is arithmetic logic operation
    wire is_shift; //is atithmetic or ligical shift operation
    wire [  3:   0] mode_ALU_wire;
    wire w_rd_ena_wire;
    wire is_R_AL_OP;
    wire is_I_AL_OP;
    wire is_LOAD;
    wire is_STORE;
    wire is_jalr_wire;
    wire is_auipc;
    wire is_lui;
    wire is_csr;
    wire is_ecall;
    wire is_mret;
    //To ALU: op1 ; op2 ; mode_ALU
    wire [`REG_BUS-1 : 0] rs1_data, rs2_data;
    wire [`REG_BUS-1 : 0] op1_wire, op2_wire;
    wire is_I_reg;
    // n bytes of ALU
    wire [1 : 0] n_bytes_ALU_wire;
    // load store
    wire load_ena_wire;
    wire [2:0] load_store_bytes_wire;
    wire [`REG_BUS-1 : 0] rs2_data_o_wire;
    wire [`REG_BUS-1 : 0] pc_plus_wire;
    wire is_csr_reg;
    wire is_S_reg;
    wire is_U_reg;






    // assign stall_in_id = flush_i ? 1'b0 :
    //                     stall ? 1'b1 : 1'b0;
    assign stall_in_id = stall_mem ? 1'b1 :
                        flush_i ? 1'b0 :
                        stall_exe ? 1'b1: 1'b0;
    // assign flush_in_id = flush_i ? 1'b1 :
    //                     stall ? 1'b0 : 1'b0;
    assign flush_in_id = flush_i;
                        

    assign stall_o = is_B_id_ex & is_jal_IF_o;

    assign is_csr_o = is_csr_reg;


    assign w_rd_ena_wire = (opcode==5'b01100 || opcode==5'b01110 || opcode==5'b00100 || opcode==5'b00110 || opcode==5'b00000 || opcode==5'b11011 || opcode==5'b11001 || opcode==5'b00101 || opcode==5'b01101 || is_csr);
    assign is_R = (opcode==5'b01100 || opcode==5'b01110); //Only ALU
    assign is_I = ((opcode==5'b00100) || (opcode==5'b00110) || (opcode==5'b11100) || (opcode==5'b00011) || (opcode==5'b11001) || (opcode==5'b00000));
    assign is_S = (opcode==5'b01000);
    assign is_B = (opcode==5'b11000);
    assign is_U = (opcode==5'b00101 || opcode==5'b01101);
    assign is_J = (opcode==5'b11011);
    assign is_AL_OP_wire = is_R_AL_OP | is_I_AL_OP;
    assign is_shift = (func3==3'b001 || func3==3'b101);

    assign opcode = inst_i[6 : 2] & {3'b111, inst_i[1:0]};
    assign rs1_wire= is_U ? 5'b0 : inst_i[19:15];
    assign rs2_wire= is_U ? 5'b0 : inst_i[24:20];
    assign rd_wire= w_rd_ena_wire ? inst_i[11: 7] : 5'b0;
    // assign rd_wire= inst_i[11: 7];
    assign func3  = inst_i[14:12];
    assign func7  = inst_i[31:25];
    assign imm = ({`REG_BUS{(is_R | is_I)}} & {{(`REG_BUS-12){inst_i[`INS_BUS-1]}}, inst_i[31:20]}) |
                    ({`REG_BUS{is_S}} & {{(`REG_BUS-12){inst_i[`INS_BUS-1]}}, inst_i[31:25], inst_i[11:7]}) |
                    ({`REG_BUS{is_B}} & {{(`REG_BUS-13){inst_i[`INS_BUS-1]}}, inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0}) |
                    ({`REG_BUS{is_U}} & {{(`REG_BUS-32){inst_i[`INS_BUS-1]}}, inst_i[31:12], 12'b0}) |
                    ({`REG_BUS{is_J}} & {{(`REG_BUS-21){inst_i[`INS_BUS-1]}}, inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0});
    assign is_R_AL_OP = (opcode==5'b01100 || opcode==5'b01110);
    assign is_I_AL_OP = (opcode==5'b00100 || opcode==5'b00110);
    assign is_LOAD = (opcode==5'b00000);
    assign is_STORE = (opcode==5'b01000);
    assign is_jalr_wire = (opcode==5'b11001);
    assign is_auipc = opcode==5'b00101;
    assign is_lui = opcode==5'b01101;
    assign is_csr = (opcode==5'b11100) & (func3 != 3'b000);
    assign is_ecall = (opcode==5'b11100) & (func3==3'b000) & (func7==7'b0000000) & (rs2_wire==5'b00000);
    assign is_mret =  (opcode==5'b11100) & (func3==3'b000) & (func7==7'b0011000) & (rs2_wire==5'b00010);


    assign mode_ALU_wire = ( {4{is_R_AL_OP}} & {inst_i[30], func3} ) | 
                            ( {4{is_I_AL_OP}} & {inst_i[30]&is_shift, func3} ) |
                            ({4{is_LOAD | is_STORE | is_jalr_wire | is_csr}} & {4'b0000});



    assign op1_wire = rs1_data & {`REG_BUS{(~((stall_in_id & is_csr_reg) | (is_csr&(~stall_in_id))))}};
    assign op2_wire = (stall_in_id ? (is_I_reg | is_S_reg | is_U_reg) : (is_I | is_S | is_U)) ? imm : rs2_data;

    ysyx_210238_ff #(.WIDTH( 1)) ff_is_I_reg(.clk(clk), .rst(rst), .stall(stall_in_id), .d(is_I), .q(is_I_reg));
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_S_reg(.clk(clk), .rst(rst), .stall(stall_in_id), .d(is_S), .q(is_S_reg));
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_U_reg(.clk(clk), .rst(rst), .stall(stall_in_id), .d(is_U), .q(is_U_reg));
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_csr_reg(.clk(clk), .rst(rst), .stall(stall_in_id), .d(is_csr & (~(flush_in_id))), .q(is_csr_reg));


    ysyx_210238_ff #(.WIDTH(64)) ff_op1(.clk(clk), .rst(rst), .stall(1'b0), .d(op1_wire), .q(op1));
    ysyx_210238_ff #(.WIDTH(64)) ff_op2(.clk(clk), .rst(rst), .stall(stall_in_id & (is_I_reg|is_S_reg|is_U_reg)), .d(op2_wire), .q(op2));
    ysyx_210238_ff #(.WIDTH( 4)) ff_mode_ALU(.clk(clk), .rst(rst), .stall(stall_in_id), .d(mode_ALU_wire), .q(mode_ALU));

    // rd rs1 rs2
    ysyx_210238_ff #(.WIDTH( 5)) ff_rd(.clk(clk), .rst(rst), .stall(stall_in_id), .d(rd_wire), .q(rd));
    ysyx_210238_ff #(.WIDTH( 1)) ff_w_rd_ena(.clk(clk), .rst(rst), .stall(stall_in_id), .d(w_rd_ena_wire & (~(flush_in_id)) & (~(inst_i[11:7]==5'b0)) & (~stall_o)), .q(w_rd_ena));
    ysyx_210238_ff #(.WIDTH( 5)) ff_rs1(.clk(clk), .rst(rst), .stall(stall_in_id), .d(rs1_wire), .q(rs1));
    ysyx_210238_ff #(.WIDTH( 5)) ff_rs2(.clk(clk), .rst(rst), .stall(stall_in_id), .d(rs2_wire), .q(rs2));

    assign n_bytes_ALU_wire = (opcode==5'b01100 || opcode==5'b00100) ? 2'b11 :
                                (opcode==5'b01110 || opcode==5'b00110) ? 2'b10 :
                                2'b11;

    ysyx_210238_ff #(.WIDTH( 2)) ff_n_bytes_ALU(.clk(clk), .rst(rst), .stall(stall_in_id), .d(n_bytes_ALU_wire), .q(n_bytes_ALU));


    assign load_ena_wire = is_LOAD;
    assign load_store_bytes_wire = func3;

    ysyx_210238_ff #(.WIDTH( 1)) ff_load_ena(.clk(clk), .rst(rst), .stall(stall_in_id), .d(load_ena_wire & (~(flush_in_id)) & (~(rd_wire==5'b0))), .q(load_ena));
    ysyx_210238_ff #(.WIDTH( 1)) ff_store_ena(.clk(clk), .rst(rst), .stall(stall_in_id), .d(is_STORE & (~(flush_in_id))), .q(store_ena));
    ysyx_210238_ff #(.WIDTH( 3)) ff_load_store_bytes(.clk(clk), .rst(rst), .stall(stall_in_id), .d(load_store_bytes_wire), .q(load_store_bytes));
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_I_AL_OP(.clk(clk), .rst(rst), .stall(stall_in_id), .d(is_I_AL_OP), .q(is_I_AL_OP_o));
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_AL_OP(.clk(clk), .rst(rst), .stall(stall_in_id), .d(is_AL_OP_wire), .q(is_AL_OP));
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_auipc(.clk(clk), .rst(rst), .stall(stall_in_id), .d(is_auipc), .q(is_auipc_o));
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_lui(.clk(clk), .rst(rst), .stall(stall_in_id), .d(is_lui), .q(is_lui_o));
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_ecall(.clk(clk), .rst(rst), .stall(stall_in_id), .d(is_ecall & (~(flush_in_id))), .q(is_ecall_o));
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_mret(.clk(clk), .rst(rst), .stall(stall_in_id), .d(is_mret & (~(flush_in_id))), .q(is_mret_o));


    assign rs2_data_o_wire = (is_csr_reg & load_store_bytes[2] & stall_in_id) ? rs2_data_o :
                            (is_csr_reg & (~load_store_bytes[2]) & stall_in_id) ? rs1_data ://rs2_data_o :
                            is_csr & (~stall_in_id) ? (func3[2] ? {59'b0, rs1_wire} : rs1_data) :
                            rs2_data;
    // assign rs2_data_o_wire = (is_csr | (is_csr_reg & stall_in_id)) ? (() ? rs1 : rs1_data) : rs2_data;
    ysyx_210238_ff #(.WIDTH(64)) ff_rs2_data(.clk(clk), .rst(rst), .stall(1'b0), .d(rs2_data_o_wire), .q(rs2_data_o));


    assign pc_plus_wire = is_B ? imm : `REG_BUS'b0;
    ysyx_210238_ff #(.WIDTH(`REG_BUS)) ff_pc_plus(.clk(clk), .rst(rst), .stall(stall_in_id), .d(pc_plus_wire), .q(pc_plus));
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_B(.clk(clk), .rst(rst), .stall(stall_in_id), .d(is_B & (~flush_in_id)), .q(is_B_o));

    // jal
    assign is_jal_IF_o = is_J;
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_J(.clk(clk), .rst(rst), .stall(stall_in_id), .d(is_J & (~flush_in_id)), .q(is_jal_o));
    assign pc_plus_IF_o = imm;

    //jalr
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_jalr(.clk(clk), .rst(rst), .stall(stall_in_id), .d(is_jalr_wire & (~flush_in_id)), .q(is_jalr_o));


    ysyx_210238_ff #(.WIDTH( 1)) ff_inst_valid(.clk(clk), .rst(rst), .stall(stall_in_id), .d(inst_valid_i & (~flush_in_id) & (~stall_o)), .q(inst_valid_o));




    //Register file
    ysyx_210238_regfile RegFile(
        .clk(clk),
        .rst(rst),
        .w_addr(regfile_w_addr),
        .w_data(regfile_w_data),
        .w_ena(regfile_w_ena),
        .r_addr1(stall_in_id ? rs1 : rs1_wire),
        .r_data1(rs1_data),
        .r_addr2(stall_in_id ? rs2 : rs2_wire),
        .r_data2(rs2_data)
        );
endmodule


// `include "ysyx_210238_ff.v"

module ysyx_210238_if(
	input wire             clk,
	input wire             rst,
    input wire [`INS_BUS-1 : 0]  inst_i,
    // input wire                   stall,
    input wire                  flush_i,
    input wire                  is_B_jump_i,
    input wire [`REG_BUS-1 : 0] pc_plus_i,
    input wire [`REG_BUS-1 : 0] pc_plus_ID_i,
    input wire                  is_jal_i,
    input wire                  stall_exe,
    input wire                  stall_mem,
    input wire                  stall_id,
    input wire                  is_jalr_mem_i,
    input wire                  is_ecall_mem_i,
    input wire                  is_mret_mem_i,
    input wire [`REG_BUS-1 : 0] jalr_pc_i,
    input wire                  MAC_ready,
    input wire                  mtime_intr_enable_i,

	output wire [`REG_BUS-1 : 0]  inst_addr,
    output wire  [`INS_BUS-1 : 0] inst_o,
    // output wire                   inst_ena,
	output wire [`REG_BUS-1 : 0]  pc_MEM_o,
	output wire [`REG_BUS-1 : 0]  pc_ID_o,
	output wire [`REG_BUS-1 : 0]  pc_EX_o,
    output wire [`REG_BUS-1 : 0]  pc_IF_o,
    output wire [`REG_BUS-1 : 0]  pc_o,
    output wire                   inst_valid_o
);

    wire flush_in_if, stall_in_if;
    reg [`REG_BUS-1 : 0] pc;
    wire [`REG_BUS-1 : 0] pc_1, pc_2;
    reg [`REG_BUS-1 : 0] pc_IF, pc_ID, pc_EX, pc_MEM;
    wire [`REG_BUS-1 : 0] to_pc_MEM;
    reg [`INS_BUS-1 : 0] inst_o_reg;
    wire inst_valid_wire;



    // assign flush_in_if = flush_i ? 1'b1 :
    //                         stall ? 1'b0:
    //                         is_jal_i ? 1'b1 : 1'b0;
    assign flush_in_if = stall_mem ? 1'b0 :
                            flush_i ? 1'b1 :
                            stall_exe ? 1'b0 :
                            stall_id  ? 1'b0 :
                            is_jal_i ? 1'b1 : 1'b0;
    // assign flush_in_if = flush_i | is_jal_i;
    // assign stall_in_if = flush_i ? 1'b0 : 
    //                         stall ? 1'b1 :
    //                         is_jal_i ? 1'b0 : 1'b0;
    assign stall_in_if = stall_mem ? 1'b1 :
                            flush_i ? 1'b0 : 
                            stall_exe ? 1'b1 :
                            stall_id  ? 1'b1 :
                            is_jal_i ? 1'b0 : 1'b0;
    // assign stall_in_if = stall;



    // PC
    assign pc_1 = mtime_intr_enable_i ? (jalr_pc_i & (~64'b1)) :
                    is_B_jump_i ? pc_EX : 
                    (is_jalr_mem_i | is_ecall_mem_i | is_mret_mem_i)  ? {jalr_pc_i[63:1], 1'b0} : 
                    pc_IF;
    assign pc_2 = mtime_intr_enable_i ? 64'b0 :
                    is_B_jump_i ? pc_plus_i : 
                    (is_jalr_mem_i | is_ecall_mem_i | is_mret_mem_i ) ? 64'b0 : 
                    pc_plus_ID_i;
    always@( posedge clk ) begin
        if( rst )
        begin
            pc <= `PC_RST_VAL;
        end
        else
        begin
            if(stall_in_if) pc <= pc;
            else if (flush_in_if) pc <= pc_1 + pc_2;
            else pc <= pc + 64'd4;
        end
    end

    always @ (posedge clk) begin
        if(rst)begin
            pc_IF <= `REG_BUS'b0;
            pc_ID <= `REG_BUS'b0;
            pc_EX <= `REG_BUS'b0;
            pc_MEM <= `REG_BUS'b0;
        end
        else begin
            if(stall_mem) begin
                pc_IF <= pc_IF;
                pc_ID <= pc_ID;
                pc_EX <= pc_EX;
                pc_MEM <= `REG_BUS'b0;
            end
            else if(stall_exe) begin
                pc_IF <= pc_IF;
                pc_ID <= pc_ID;
                pc_EX <= `REG_BUS'b0;
                pc_MEM <= to_pc_MEM;
            end
            else if(stall_id) begin
                pc_IF <= pc_IF;
                pc_ID <= `REG_BUS'b0;
                pc_EX <= pc_ID;
                pc_MEM <= to_pc_MEM;
            end
            else begin
                pc_IF <= pc;
                pc_ID <= pc_IF;
                pc_EX <= pc_ID;
                pc_MEM <= to_pc_MEM;
            end
        end
    end

    assign to_pc_MEM = pc_EX + 64'd4;

    assign pc_MEM_o = pc_MEM;
    assign pc_ID_o = pc_ID;
    assign pc_EX_o = pc_EX;
    assign pc_IF_o = pc_IF;
    assign pc_o = pc;


    assign inst_addr = pc;
    // assign inst_ena = stall_in_if ? 1'b0 : 1'b1;

    //IF-ID registers
    always @ (posedge clk) begin
        if(rst) inst_o_reg <= `NOP;
        else begin
            if(stall_in_if) inst_o_reg <= inst_o;
            else if(flush_in_if | (~MAC_ready)) inst_o_reg <= 32'b10011;
            else inst_o_reg <= inst_i;
        end
    end
    assign inst_o = inst_o_reg;

    
    assign inst_valid_wire = (flush_in_if | (~MAC_ready)) ? 1'b0 : 1'b1;
    ysyx_210238_ff #(.WIDTH( 1)) ff_inst_valid(.clk(clk), .rst(rst), .stall(stall_in_if), .d(inst_valid_wire), .q(inst_valid_o));

endmodule



module ysyx_210238_MemAccCtrl(
    input wire clk,
    input wire rst,

    // with cpu
    input wire                  r_if_ena,
    input wire [`REG_BUS-1 : 0] r_if_addr,
    input wire [         2 : 0] r_if_bytes,

    input wire                  r_mem_ena,
    input wire                  w_mem_ena,
    input wire [`REG_BUS-1 : 0] rw_mem_addr,
    input wire [         2 : 0] rw_mem_bytes,
    input wire [`REG_BUS-1 : 0] w_mem_data,

    output wire                 ready,
    output wire [`INS_BUS-1 : 0] if_data,
    output wire [`REG_BUS-1 : 0] mem_data,

    //with AXI4

    input  [`REG_BUS-1 : 0] r_data_from_axi4,
    input                   r_ready_from_axi4,
    input                   w_ready_from_axi4,
    output r_ena_to_axi4,
    output w_ena_to_axi4,
    output [`REG_BUS-1 : 0] addr_to_axi4,
    output [`REG_BUS-1 : 0] w_data_to_axi4,
    output [         7 : 0] w_mask_to_axi4,

    output        reg       no_Icache,
    output        wire      is_fencei
);

    reg [3:0] state, nxt_state;
    reg ready_reg;
    reg [`INS_BUS-1 : 0] if_data_reg;
    reg [`REG_BUS-1 : 0] mem_data_reg;


    // is misaligned IF
    wire [3:0] remain_bytes_IF;
    wire [3:0] need_bytes_IF;
    wire misalign_IF;
    wire [4:0] additional_bytes_IF;
    // is misaligned MEM
    wire [3:0] remain_bytes_MEM;
    wire [3:0] need_bytes_MEM;
    wire misalign_MEM;
    wire [4:0] additional_bytes_MEM;
    //Output <> AXI4
    reg r_ena_to_axi4_reg;
    reg w_ena_to_axi4_reg;
    reg [`REG_BUS-1 : 0] addr_to_axi4_reg;
    reg [`REG_BUS-1 : 0] w_data_to_axi4_reg;
    reg [         7 : 0] w_mask_to_axi4_reg;
    // with cache
    reg  [5  :0] Icache_0_addr;
    wire [127:0] Icache_0_rdata;
    reg [127:0] Icache_0_rdata_fix_timing;
    reg          Icache_0_cen;
    reg          Icache_0_wen;
    reg  [127:0] Icache_0_wdata;
    // reg  [109:0] Icache_0_wdata;
    wire         is_Icache_0_miss;
    reg  [127:0] Icache_0_valid;

    reg  [5  :0] Icache_1_addr;
    wire [127:0] Icache_1_rdata;
    reg [127:0] Icache_1_rdata_fix_timing;
    reg          Icache_1_cen;
    reg          Icache_1_wen;
    reg  [127:0] Icache_1_wdata;
    // reg  [109:0] Icache_1_wdata;
    wire         is_Icache_1_miss;
    reg  [127:0] Icache_1_valid;

    reg  [1:0] Icache_priority[0:127];

    wire is_fencei_inifreg;

    assign is_fencei = is_fencei_inifreg;


    assign is_fencei_inifreg = if_data_reg == 32'h100f;
    always @(posedge clk) begin
        if(rst) no_Icache <= 1'b0;
        else no_Icache <= is_fencei_inifreg | ~(nxt_state==4'd1 | nxt_state==4'd2);
    end



    // State register

    always @(posedge clk) begin
        if(rst) state <= 4'd0;
        else state <= nxt_state;
    end

    always@(*) case(state)
        4'd0: begin
            if(r_mem_ena) nxt_state = 4'd3;
            else if(w_mem_ena) nxt_state = 4'd5;
            else if(r_if_ena) nxt_state = 4'd8;
            else nxt_state = 4'd0;
        end
        4'd1: begin
            if(r_ready_from_axi4 & (~misalign_IF) & r_if_addr[1:0] != 2'b00) nxt_state = 4'd7;
            else if(r_ready_from_axi4 & (~misalign_IF) & r_if_addr[1:0] == 2'b00) nxt_state = 4'd10;
            else if(r_ready_from_axi4 & misalign_IF) nxt_state = 4'd2;
            else nxt_state = 4'd1;
        end
        4'd2: begin
            if(r_ready_from_axi4) nxt_state = 4'd7;
            else nxt_state = 4'd2;
        end
        4'd3: begin
            if(r_ready_from_axi4 & (~misalign_MEM)) nxt_state = 4'd8;
            else if(r_ready_from_axi4 & misalign_MEM) nxt_state = 4'd4;
            else nxt_state = 4'd3;
        end
        4'd4: begin
            if(r_ready_from_axi4) nxt_state = 4'd8;
            else nxt_state = 4'd4;
        end
        4'd5: begin
            if(w_ready_from_axi4 & (~misalign_MEM)) nxt_state = 4'd8;
            else if(w_ready_from_axi4 & misalign_MEM) nxt_state = 4'd6;
            else nxt_state = 4'd5;
        end
        4'd6: begin
            if(w_ready_from_axi4) nxt_state = 4'd8;
            else nxt_state = 4'd6;
        end
        4'd7: nxt_state = 4'd0;
        4'd8: nxt_state = 4'd11;
        4'd9: begin
            if(is_Icache_0_miss & is_Icache_1_miss) nxt_state = 4'd1;
            else nxt_state = 4'd7;
        end
        4'd10: nxt_state = 4'd7;
        4'd11: nxt_state = 4'd9;
        default: nxt_state = 4'd0;
    endcase



    // with cache
    // integer i;
    always @(posedge clk) begin
        if(rst) begin
            // for(i=0; i<128; i=i+1) begin
            //     Icache_priority[i] <= 2'b01;
            // end
            Icache_priority[0] <= 2'b01;
            Icache_priority[1] <= 2'b01;
            Icache_priority[2] <= 2'b01;
            Icache_priority[3] <= 2'b01;
            Icache_priority[4] <= 2'b01;
            Icache_priority[5] <= 2'b01;
            Icache_priority[6] <= 2'b01;
            Icache_priority[7] <= 2'b01;
            Icache_priority[8] <= 2'b01;
            Icache_priority[9] <= 2'b01;
            Icache_priority[10] <= 2'b01;
            Icache_priority[11] <= 2'b01;
            Icache_priority[12] <= 2'b01;
            Icache_priority[13] <= 2'b01;
            Icache_priority[14] <= 2'b01;
            Icache_priority[15] <= 2'b01;
            Icache_priority[16] <= 2'b01;
            Icache_priority[17] <= 2'b01;
            Icache_priority[18] <= 2'b01;
            Icache_priority[19] <= 2'b01;
            Icache_priority[20] <= 2'b01;
            Icache_priority[21] <= 2'b01;
            Icache_priority[22] <= 2'b01;
            Icache_priority[23] <= 2'b01;
            Icache_priority[24] <= 2'b01;
            Icache_priority[25] <= 2'b01;
            Icache_priority[26] <= 2'b01;
            Icache_priority[27] <= 2'b01;
            Icache_priority[28] <= 2'b01;
            Icache_priority[29] <= 2'b01;
            Icache_priority[30] <= 2'b01;
            Icache_priority[31] <= 2'b01;
            Icache_priority[32] <= 2'b01;
            Icache_priority[33] <= 2'b01;
            Icache_priority[34] <= 2'b01;
            Icache_priority[35] <= 2'b01;
            Icache_priority[36] <= 2'b01;
            Icache_priority[37] <= 2'b01;
            Icache_priority[38] <= 2'b01;
            Icache_priority[39] <= 2'b01;
            Icache_priority[40] <= 2'b01;
            Icache_priority[41] <= 2'b01;
            Icache_priority[42] <= 2'b01;
            Icache_priority[43] <= 2'b01;
            Icache_priority[44] <= 2'b01;
            Icache_priority[45] <= 2'b01;
            Icache_priority[46] <= 2'b01;
            Icache_priority[47] <= 2'b01;
            Icache_priority[48] <= 2'b01;
            Icache_priority[49] <= 2'b01;
            Icache_priority[50] <= 2'b01;
            Icache_priority[51] <= 2'b01;
            Icache_priority[52] <= 2'b01;
            Icache_priority[53] <= 2'b01;
            Icache_priority[54] <= 2'b01;
            Icache_priority[55] <= 2'b01;
            Icache_priority[56] <= 2'b01;
            Icache_priority[57] <= 2'b01;
            Icache_priority[58] <= 2'b01;
            Icache_priority[59] <= 2'b01;
            Icache_priority[60] <= 2'b01;
            Icache_priority[61] <= 2'b01;
            Icache_priority[62] <= 2'b01;
            Icache_priority[63] <= 2'b01;
            Icache_priority[64] <= 2'b01;
            Icache_priority[65] <= 2'b01;
            Icache_priority[66] <= 2'b01;
            Icache_priority[67] <= 2'b01;
            Icache_priority[68] <= 2'b01;
            Icache_priority[69] <= 2'b01;
            Icache_priority[70] <= 2'b01;
            Icache_priority[71] <= 2'b01;
            Icache_priority[72] <= 2'b01;
            Icache_priority[73] <= 2'b01;
            Icache_priority[74] <= 2'b01;
            Icache_priority[75] <= 2'b01;
            Icache_priority[76] <= 2'b01;
            Icache_priority[77] <= 2'b01;
            Icache_priority[78] <= 2'b01;
            Icache_priority[79] <= 2'b01;
            Icache_priority[80] <= 2'b01;
            Icache_priority[81] <= 2'b01;
            Icache_priority[82] <= 2'b01;
            Icache_priority[83] <= 2'b01;
            Icache_priority[84] <= 2'b01;
            Icache_priority[85] <= 2'b01;
            Icache_priority[86] <= 2'b01;
            Icache_priority[87] <= 2'b01;
            Icache_priority[88] <= 2'b01;
            Icache_priority[89] <= 2'b01;
            Icache_priority[90] <= 2'b01;
            Icache_priority[91] <= 2'b01;
            Icache_priority[92] <= 2'b01;
            Icache_priority[93] <= 2'b01;
            Icache_priority[94] <= 2'b01;
            Icache_priority[95] <= 2'b01;
            Icache_priority[96] <= 2'b01;
            Icache_priority[97] <= 2'b01;
            Icache_priority[98] <= 2'b01;
            Icache_priority[99] <= 2'b01;
            Icache_priority[100] <= 2'b01;
            Icache_priority[101] <= 2'b01;
            Icache_priority[102] <= 2'b01;
            Icache_priority[103] <= 2'b01;
            Icache_priority[104] <= 2'b01;
            Icache_priority[105] <= 2'b01;
            Icache_priority[106] <= 2'b01;
            Icache_priority[107] <= 2'b01;
            Icache_priority[108] <= 2'b01;
            Icache_priority[109] <= 2'b01;
            Icache_priority[110] <= 2'b01;
            Icache_priority[111] <= 2'b01;
            Icache_priority[112] <= 2'b01;
            Icache_priority[113] <= 2'b01;
            Icache_priority[114] <= 2'b01;
            Icache_priority[115] <= 2'b01;
            Icache_priority[116] <= 2'b01;
            Icache_priority[117] <= 2'b01;
            Icache_priority[118] <= 2'b01;
            Icache_priority[119] <= 2'b01;
            Icache_priority[120] <= 2'b01;
            Icache_priority[121] <= 2'b01;
            Icache_priority[122] <= 2'b01;
            Icache_priority[123] <= 2'b01;
            Icache_priority[124] <= 2'b01;
            Icache_priority[125] <= 2'b01;
            Icache_priority[126] <= 2'b01;
            Icache_priority[127] <= 2'b01;
        end
        else if(state==4'd9 && ~is_Icache_0_miss) begin
            case(Icache_priority[r_if_addr[8:2]])
                2'b00: Icache_priority[r_if_addr[8:2]] <= 2'b01;
                2'b01: Icache_priority[r_if_addr[8:2]] <= 2'b10;
                2'b10: Icache_priority[r_if_addr[8:2]] <= 2'b11;
                2'b11: Icache_priority[r_if_addr[8:2]] <= 2'b11;
            endcase
        end
        else if(state==4'd9 && ~is_Icache_1_miss) begin
            case(Icache_priority[r_if_addr[8:2]])
                2'b00: Icache_priority[r_if_addr[8:2]] <= 2'b00;
                2'b01: Icache_priority[r_if_addr[8:2]] <= 2'b00;
                2'b10: Icache_priority[r_if_addr[8:2]] <= 2'b01;
                2'b11: Icache_priority[r_if_addr[8:2]] <= 2'b10;
            endcase
        end
        else if(state == 4'd10) begin
            case(Icache_priority[r_if_addr[8:2]])
                2'b00: Icache_priority[r_if_addr[8:2]] <= 2'b10;
                2'b01: Icache_priority[r_if_addr[8:2]] <= 2'b10;
                2'b10: Icache_priority[r_if_addr[8:2]] <= 2'b01;
                2'b11: Icache_priority[r_if_addr[8:2]] <= 2'b10;
            endcase
        end
        // else begin
            // for(i=0; i<128; i=i+1) Icache_priority[i] <= Icache_priority[i];
        // end
    end

    always @(posedge clk) begin
        if(rst) begin
            Icache_0_addr <= 6'b0;
            Icache_1_addr <= 6'b0;
        end
        else if(nxt_state == 4'd8)begin
            Icache_0_addr <= r_if_addr[8:3];
            Icache_1_addr <= r_if_addr[8:3];
        end 
        else begin
            Icache_0_addr <= Icache_0_addr;
            Icache_1_addr <= Icache_1_addr;
        end 
    end

    always @(posedge clk) begin
        if(rst) begin
            Icache_0_cen <= 1'b1;
            Icache_1_cen <= 1'b1;
        end
        else if(nxt_state == 4'd8) begin
            Icache_0_cen <= 1'b0;
            Icache_1_cen <= 1'b0;
        end
        else if(nxt_state == 4'd10) begin
            Icache_0_cen <= Icache_priority[r_if_addr[8:2]][1] ? 1'b1 : 1'b0;
            Icache_1_cen <= Icache_priority[r_if_addr[8:2]][1] ? 1'b0 : 1'b1;
        end
        else begin
            Icache_0_cen <= 1'b1;
            Icache_1_cen <= 1'b1;
        end
    end

    always @(posedge clk) begin
        if(rst) Icache_0_wen <= 1'b1;
        else if(nxt_state == 4'd10)begin
            Icache_0_wen <= Icache_priority[r_if_addr[8:2]][1] ? 1'b1 : 1'b0;
        end
        else Icache_0_wen <= 1'b1;
    end 
    always @(posedge clk) begin
        if(rst) Icache_1_wen <= 1'b1;
        else if(nxt_state == 4'd10) begin 
            Icache_1_wen <= Icache_priority[r_if_addr[8:2]][1] ? 1'b0 : 1'b1;
        end
        else Icache_1_wen <= 1'b1;
    end

    always @(posedge clk) begin
        if(rst) begin
            Icache_0_wdata <= 128'b0;
            Icache_0_valid <= 128'b0;
        end
        else if(nxt_state == 4'd1) Icache_0_wdata[111:0] <= Icache_0_rdata_fix_timing[111:0];
        else if(nxt_state == 4'd10) begin
            if(~r_if_addr[2]) begin
                Icache_0_wdata[110] <= 1'b1;
                Icache_0_wdata[86:64] <= r_if_addr[31:9];
                Icache_0_wdata[31:0] <= r_data_from_axi4[31:0];
                if(~Icache_priority[r_if_addr[8:2]][1]) Icache_0_valid[{Icache_0_addr, 1'b0}] <= 1'b1;
            end
            else begin
                Icache_0_wdata[111] <= 1'b1;
                Icache_0_wdata[109:87] <= r_if_addr[31:9];
                Icache_0_wdata[63:32] <= r_data_from_axi4[63:32];
                if(~Icache_priority[r_if_addr[8:2]][1]) Icache_0_valid[{Icache_0_addr, 1'b1}] <= 1'b1;
            end
        end
        else if(state==4'd7 && is_fencei_inifreg) begin
            Icache_0_wdata <= Icache_0_wdata;
            Icache_0_valid <= 128'b0;
        end
        else begin
            Icache_0_wdata <= Icache_0_wdata;
            Icache_0_valid <= Icache_0_valid;
        end
    end
    always @(posedge clk) begin
        if(rst) begin
            Icache_1_wdata <= 128'b0;
            Icache_1_valid <= 128'b0;
        end
        else if(nxt_state == 4'd1) Icache_1_wdata[111:0] <= Icache_1_rdata_fix_timing[111:0];
        else if(nxt_state == 4'd10) begin
            if(~r_if_addr[2]) begin
                Icache_1_wdata[110] <= 1'b1;
                Icache_1_wdata[86:64] <= r_if_addr[31:9];
                Icache_1_wdata[31:0] <= r_data_from_axi4[31:0];
                if(Icache_priority[r_if_addr[8:2]][1]) Icache_1_valid[{Icache_1_addr, 1'b0}] <= 1'b1;
            end
            else begin
                Icache_1_wdata[111] <= 1'b1;
                Icache_1_wdata[109:87] <= r_if_addr[31:9];
                Icache_1_wdata[63:32] <= r_data_from_axi4[63:32];
                if(Icache_priority[r_if_addr[8:2]][1]) Icache_1_valid[{Icache_1_addr, 1'b1}] <= 1'b1;
            end
        end
        else if(state==4'd7 && is_fencei_inifreg) begin
            Icache_1_wdata <= Icache_1_wdata;
            Icache_1_valid <= 128'b0;
        end
        else begin
            Icache_1_wdata <= Icache_1_wdata;
            Icache_1_valid <= Icache_1_valid;
        end
    end

    always @(posedge clk) begin
        if(rst) Icache_0_rdata_fix_timing <= 128'b0;
        else if(nxt_state == 4'd9) Icache_0_rdata_fix_timing <= Icache_0_rdata;
        else Icache_0_rdata_fix_timing <= Icache_0_rdata_fix_timing;
    end
    always @(posedge clk) begin
        if(rst) Icache_1_rdata_fix_timing <= 128'b0;
        else if(nxt_state == 4'd9) Icache_1_rdata_fix_timing <= Icache_1_rdata;
        else Icache_1_rdata_fix_timing <= Icache_1_rdata_fix_timing;
    end


    wire Icache_0_hit_1 = r_if_addr[2] & Icache_0_valid[{Icache_0_addr, 1'b1}] & (r_if_addr[31:9] == Icache_0_rdata_fix_timing[109:87]);
    wire Icache_0_hit_0 = ~r_if_addr[2] & Icache_0_valid[{Icache_0_addr, 1'b0}] & (r_if_addr[31:9] == Icache_0_rdata_fix_timing[86:64]);
    assign is_Icache_0_miss = ~( (Icache_0_hit_1 | Icache_0_hit_0) & r_if_addr[1:0] == 2'b00 );

    wire Icache_1_hit_1 = r_if_addr[2] & Icache_1_valid[{Icache_1_addr, 1'b1}] & (r_if_addr[31:9] == Icache_1_rdata_fix_timing[109:87]);
    wire Icache_1_hit_0 = ~r_if_addr[2] & Icache_1_valid[{Icache_1_addr, 1'b0}] & (r_if_addr[31:9] == Icache_1_rdata_fix_timing[86:64]);
    assign is_Icache_1_miss = ~( (Icache_1_hit_1 | Icache_1_hit_0) & r_if_addr[1:0] == 2'b00 );

    S011HD1P_X32Y2D128 Icache_0(
        .Q(Icache_0_rdata), 
        .CLK(clk), 
        .CEN(Icache_0_cen), 
        .WEN(Icache_0_wen), 
        .A(Icache_0_addr), 
        .D(Icache_0_wdata)
    );
    S011HD1P_X32Y2D128 Icache_1(
        .Q(Icache_1_rdata), 
        .CLK(clk), 
        .CEN(Icache_1_cen), 
        .WEN(Icache_1_wen), 
        .A(Icache_1_addr), 
        .D(Icache_1_wdata)
    );

    // output <> cpu
    assign ready = ready_reg;
    assign if_data = if_data_reg;
    assign mem_data = mem_data_reg;

    always@(posedge clk) begin
        if(rst) ready_reg <= 1'b0;
        else ready_reg <= (nxt_state == 4'd7);
    end

    always @(posedge clk) begin
        if(rst) if_data_reg <= `INS_BUS'd0;
        else begin
            if(state==4'd1 && r_ready_from_axi4)begin
                case(r_if_addr[2:0]) 
                    3'b000: if_data_reg <= r_data_from_axi4[4*8-1:0*8];
                    3'b001: if_data_reg <= r_data_from_axi4[5*8-1:1*8];
                    3'b010: if_data_reg <= r_data_from_axi4[6*8-1:2*8];
                    3'b011: if_data_reg <= r_data_from_axi4[7*8-1:3*8];
                    3'b100: if_data_reg <= r_data_from_axi4[8*8-1:4*8];
                    3'b101: if_data_reg <= {8'b0, r_data_from_axi4[8*8-1:5*8]};
                    3'b110: if_data_reg <= {16'b0, r_data_from_axi4[8*8-1:6*8]};
                    3'b111: if_data_reg <= {24'b0, r_data_from_axi4[8*8-1:7*8]};
                endcase
            end
            else if(state==4'd2 && r_ready_from_axi4)begin
                case(r_if_addr[2:0])
                    3'b000: if_data_reg <= if_data_reg;
                    3'b001: if_data_reg <= if_data_reg;
                    3'b010: if_data_reg <= if_data_reg;
                    3'b011: if_data_reg <= if_data_reg;
                    3'b100: if_data_reg <= if_data_reg;
                    3'b101: if_data_reg <= {r_data_from_axi4[1*8-1:0], if_data_reg[3*8-1:0*8]};
                    3'b110: if_data_reg <= {r_data_from_axi4[2*8-1:0], if_data_reg[2*8-1:0*8]};
                    3'b111: if_data_reg <= {r_data_from_axi4[3*8-1:0], if_data_reg[1*8-1:0*8]};
                endcase
            end
            else if(state==4'd9 && ~(is_Icache_0_miss & is_Icache_1_miss)) begin
                if(~is_Icache_0_miss) begin
                    if(~r_if_addr[2]) if_data_reg <= Icache_0_rdata_fix_timing[31:0];
                    else if_data_reg <= Icache_0_rdata_fix_timing[63:32];
                end
                if(~is_Icache_1_miss) begin
                    if(~r_if_addr[2]) if_data_reg <= Icache_1_rdata_fix_timing[31:0];
                    else if_data_reg <= Icache_1_rdata_fix_timing[63:32];
                end
            end
            else if_data_reg <= if_data_reg;
        end
    end

    always @(posedge clk) begin
        if(rst) mem_data_reg <= `REG_BUS'd0;
        else begin
            if(state==4'd3 && r_ready_from_axi4)begin
                case(rw_mem_bytes[1:0])
                    2'b00: case(rw_mem_addr[2:0])
                        3'b000: mem_data_reg <= {{56{r_data_from_axi4[1*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[1*8-1:0*8]};
                        3'b001: mem_data_reg <= {{56{r_data_from_axi4[2*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[2*8-1:1*8]};
                        3'b010: mem_data_reg <= {{56{r_data_from_axi4[3*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[3*8-1:2*8]};
                        3'b011: mem_data_reg <= {{56{r_data_from_axi4[4*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[4*8-1:3*8]};
                        3'b100: mem_data_reg <= {{56{r_data_from_axi4[5*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[5*8-1:4*8]};
                        3'b101: mem_data_reg <= {{56{r_data_from_axi4[6*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[6*8-1:5*8]};
                        3'b110: mem_data_reg <= {{56{r_data_from_axi4[7*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[7*8-1:6*8]};
                        3'b111: mem_data_reg <= {{56{r_data_from_axi4[8*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[8*8-1:7*8]};
                    endcase
                    2'b01: case(rw_mem_addr[2:0])
                        3'b000: mem_data_reg <= {{48{r_data_from_axi4[2*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[2*8-1:0*8]};
                        3'b001: mem_data_reg <= {{48{r_data_from_axi4[3*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[3*8-1:1*8]};
                        3'b010: mem_data_reg <= {{48{r_data_from_axi4[4*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[4*8-1:2*8]};
                        3'b011: mem_data_reg <= {{48{r_data_from_axi4[5*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[5*8-1:3*8]};
                        3'b100: mem_data_reg <= {{48{r_data_from_axi4[6*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[6*8-1:4*8]};
                        3'b101: mem_data_reg <= {{48{r_data_from_axi4[7*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[7*8-1:5*8]};
                        3'b110: mem_data_reg <= {{48{r_data_from_axi4[8*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[8*8-1:6*8]};
                        3'b111: mem_data_reg <= {{56{r_data_from_axi4[8*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[8*8-1:7*8]};
                    endcase
                    2'b10: case(rw_mem_addr[2:0])
                        3'b000: mem_data_reg <= {{32{r_data_from_axi4[4*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[4*8-1:0*8]};
                        3'b001: mem_data_reg <= {{32{r_data_from_axi4[5*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[5*8-1:1*8]};
                        3'b010: mem_data_reg <= {{32{r_data_from_axi4[6*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[6*8-1:2*8]};
                        3'b011: mem_data_reg <= {{32{r_data_from_axi4[7*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[7*8-1:3*8]};
                        3'b100: mem_data_reg <= {{32{r_data_from_axi4[8*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[8*8-1:4*8]};
                        3'b101: mem_data_reg <= {{40{r_data_from_axi4[8*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[8*8-1:5*8]};
                        3'b110: mem_data_reg <= {{48{r_data_from_axi4[8*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[8*8-1:6*8]};
                        3'b111: mem_data_reg <= {{56{r_data_from_axi4[8*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[8*8-1:7*8]};
                    endcase
                    2'b11: case(rw_mem_addr[2:0])
                        3'b000: mem_data_reg <= r_data_from_axi4[8*8-1:0*8];
                        3'b001: mem_data_reg <= {{ 8{r_data_from_axi4[8*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[8*8-1:1*8]};
                        3'b010: mem_data_reg <= {{16{r_data_from_axi4[8*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[8*8-1:2*8]};
                        3'b011: mem_data_reg <= {{24{r_data_from_axi4[8*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[8*8-1:3*8]};
                        3'b100: mem_data_reg <= {{32{r_data_from_axi4[8*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[8*8-1:4*8]};
                        3'b101: mem_data_reg <= {{40{r_data_from_axi4[8*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[8*8-1:5*8]};
                        3'b110: mem_data_reg <= {{48{r_data_from_axi4[8*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[8*8-1:6*8]};
                        3'b111: mem_data_reg <= {{56{r_data_from_axi4[8*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[8*8-1:7*8]};
                    endcase
                endcase
            end  
            else if(state==4'd4 && r_ready_from_axi4) begin
                case(rw_mem_bytes[1:0])
                    2'b00: mem_data_reg <= mem_data_reg;
                    2'b01: case(rw_mem_addr[2:0])
                        3'b111: mem_data_reg <= {{48{r_data_from_axi4[1*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[1*8-1:0*8], mem_data_reg[1*8-1:0*8]};
                        default: mem_data_reg <= mem_data_reg;
                    endcase
                    2'b10: case(rw_mem_addr[2:0])
                        3'b101: mem_data_reg <= {{32{r_data_from_axi4[1*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[1*8-1:0*8], mem_data_reg[3*8-1:0*8]};
                        3'b110: mem_data_reg <= {{32{r_data_from_axi4[2*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[2*8-1:0*8], mem_data_reg[2*8-1:0*8]};
                        3'b111: mem_data_reg <= {{32{r_data_from_axi4[3*8-1]&(~rw_mem_bytes[2])}}, r_data_from_axi4[3*8-1:0*8], mem_data_reg[1*8-1:0*8]};
                        default: mem_data_reg <= mem_data_reg;
                    endcase
                    2'b11: case(rw_mem_addr[2:0])
                        3'b001: mem_data_reg <= {r_data_from_axi4[1*8-1:0*8], mem_data_reg[7*8-1:0*8]};
                        3'b010: mem_data_reg <= {r_data_from_axi4[2*8-1:0*8], mem_data_reg[6*8-1:0*8]};
                        3'b011: mem_data_reg <= {r_data_from_axi4[3*8-1:0*8], mem_data_reg[5*8-1:0*8]};
                        3'b100: mem_data_reg <= {r_data_from_axi4[4*8-1:0*8], mem_data_reg[4*8-1:0*8]};
                        3'b101: mem_data_reg <= {r_data_from_axi4[5*8-1:0*8], mem_data_reg[3*8-1:0*8]};
                        3'b110: mem_data_reg <= {r_data_from_axi4[6*8-1:0*8], mem_data_reg[2*8-1:0*8]};
                        3'b111: mem_data_reg <= {r_data_from_axi4[7*8-1:0*8], mem_data_reg[1*8-1:0*8]};
                        default: mem_data_reg <= mem_data_reg;
                    endcase
                endcase
            end
            else mem_data_reg <= mem_data_reg;
        end
    end




    assign need_bytes_IF = {r_if_bytes[1]&r_if_bytes[0], r_if_bytes[1]&(~r_if_bytes[0]), (~r_if_bytes[1])&r_if_bytes[0], (~r_if_bytes[1])&(~r_if_bytes[0])} | {4{r_if_bytes[2]}};
    assign remain_bytes_IF = 4'b1000 - {1'b0, r_if_addr[2:0]};
    assign additional_bytes_IF = {1'b0, need_bytes_IF} - {1'b0, remain_bytes_IF};
    assign misalign_IF = ~((additional_bytes_IF[4]) | (additional_bytes_IF==5'b0));



    assign need_bytes_MEM = {rw_mem_bytes[1]&rw_mem_bytes[0], rw_mem_bytes[1]&(~rw_mem_bytes[0]), (~rw_mem_bytes[1])&rw_mem_bytes[0], (~rw_mem_bytes[1])&(~rw_mem_bytes[0])};
    assign remain_bytes_MEM = 4'b1000 - {1'b0, rw_mem_addr[2:0]};
    assign additional_bytes_MEM = {1'b0, need_bytes_MEM} - {1'b0, remain_bytes_MEM};
    assign misalign_MEM = ~((additional_bytes_MEM[4]) | (additional_bytes_MEM==5'b0));




    assign r_ena_to_axi4 = r_ena_to_axi4_reg;
    assign w_ena_to_axi4 = w_ena_to_axi4_reg;
    assign addr_to_axi4  = addr_to_axi4_reg;
    assign w_data_to_axi4 = w_data_to_axi4_reg;
    assign w_mask_to_axi4   = w_mask_to_axi4_reg;

    always @(posedge clk) begin
        if(rst) r_ena_to_axi4_reg <= 1'b0;
        else r_ena_to_axi4_reg <= (nxt_state==4'd1 | nxt_state==4'd2 | nxt_state==4'd3 | nxt_state==4'd4) & (state != nxt_state); 
    end

    always @(posedge clk) begin
        if(rst) w_ena_to_axi4_reg <= 1'b0;
        else w_ena_to_axi4_reg <= (nxt_state==4'd5 | nxt_state==4'd6) & (state != nxt_state);
    end

    wire [63:0] if_addr_p_8;
    assign if_addr_p_8 = {r_if_addr[63:3] + 61'b1, 3'b000};
    wire [63:0] mem_addr_p_8;
    assign mem_addr_p_8 = {rw_mem_addr[63:3] + 61'b1, 3'b000};
    always @(posedge clk) begin
        if(rst) addr_to_axi4_reg <= `REG_BUS'd0;
        else begin
            case(nxt_state)
                4'd1: addr_to_axi4_reg <= r_if_addr;
                4'd2: addr_to_axi4_reg <= if_addr_p_8;
                4'd3, 4'd5: addr_to_axi4_reg <= rw_mem_addr;
                4'd4, 4'd6: addr_to_axi4_reg <= mem_addr_p_8;
                default: addr_to_axi4_reg <= addr_to_axi4_reg;
            endcase
        end
    end


    always @(posedge clk) begin
        if(rst) w_data_to_axi4_reg <= `REG_BUS'd0;
        else if(nxt_state==4'd5) begin
            case(rw_mem_bytes[1:0])
                2'b00: case(rw_mem_addr[2:0])
                    3'b000: w_data_to_axi4_reg <= {56'b0, w_mem_data[1*8-1:0*8]};
                    3'b001: w_data_to_axi4_reg <= {48'b0, w_mem_data[1*8-1:0*8],  8'b0};
                    3'b010: w_data_to_axi4_reg <= {40'b0, w_mem_data[1*8-1:0*8], 16'b0};
                    3'b011: w_data_to_axi4_reg <= {32'b0, w_mem_data[1*8-1:0*8], 24'b0};
                    3'b100: w_data_to_axi4_reg <= {24'b0, w_mem_data[1*8-1:0*8], 32'b0};
                    3'b101: w_data_to_axi4_reg <= {16'b0, w_mem_data[1*8-1:0*8], 40'b0};
                    3'b110: w_data_to_axi4_reg <= { 8'b0, w_mem_data[1*8-1:0*8], 48'b0};
                    3'b111: w_data_to_axi4_reg <= {       w_mem_data[1*8-1:0*8], 56'b0};
                endcase
                2'b01: case (rw_mem_addr[2:0])
                    3'b000: w_data_to_axi4_reg <= {48'b0, w_mem_data[2*8-1:0*8]};
                    3'b001: w_data_to_axi4_reg <= {40'b0, w_mem_data[2*8-1:0*8],  8'b0};
                    3'b010: w_data_to_axi4_reg <= {32'b0, w_mem_data[2*8-1:0*8], 16'b0};
                    3'b011: w_data_to_axi4_reg <= {24'b0, w_mem_data[2*8-1:0*8], 24'b0};
                    3'b100: w_data_to_axi4_reg <= {16'b0, w_mem_data[2*8-1:0*8], 32'b0};
                    3'b101: w_data_to_axi4_reg <= { 8'b0, w_mem_data[2*8-1:0*8], 40'b0};
                    3'b110: w_data_to_axi4_reg <= {       w_mem_data[2*8-1:0*8], 48'b0};
                    3'b111: w_data_to_axi4_reg <= {       w_mem_data[1*8-1:0*8], 56'b0};
                endcase
                2'b10: case (rw_mem_addr[2:0])
                    3'b000: w_data_to_axi4_reg <= {32'b0, w_mem_data[4*8-1:0*8]};
                    3'b001: w_data_to_axi4_reg <= {24'b0, w_mem_data[4*8-1:0*8],  8'b0};
                    3'b010: w_data_to_axi4_reg <= {16'b0, w_mem_data[4*8-1:0*8], 16'b0};
                    3'b011: w_data_to_axi4_reg <= { 8'b0, w_mem_data[4*8-1:0*8], 24'b0};
                    3'b100: w_data_to_axi4_reg <= {       w_mem_data[4*8-1:0*8], 32'b0};
                    3'b101: w_data_to_axi4_reg <= {       w_mem_data[3*8-1:0*8], 40'b0};
                    3'b110: w_data_to_axi4_reg <= {       w_mem_data[2*8-1:0*8], 48'b0};
                    3'b111: w_data_to_axi4_reg <= {       w_mem_data[1*8-1:0*8], 56'b0};
                endcase
                2'b11: case (rw_mem_addr[2:0])
                    3'b000: w_data_to_axi4_reg <= {w_mem_data[8*8-1:0*8]};
                    3'b001: w_data_to_axi4_reg <= {w_mem_data[7*8-1:0*8],  8'b0};
                    3'b010: w_data_to_axi4_reg <= {w_mem_data[6*8-1:0*8], 16'b0};
                    3'b011: w_data_to_axi4_reg <= {w_mem_data[5*8-1:0*8], 24'b0};
                    3'b100: w_data_to_axi4_reg <= {w_mem_data[4*8-1:0*8], 32'b0};
                    3'b101: w_data_to_axi4_reg <= {w_mem_data[3*8-1:0*8], 40'b0};
                    3'b110: w_data_to_axi4_reg <= {w_mem_data[2*8-1:0*8], 48'b0};
                    3'b111: w_data_to_axi4_reg <= {w_mem_data[1*8-1:0*8], 56'b0};
                endcase
            endcase
        end
        else if(nxt_state==4'd6) begin
            case(rw_mem_bytes[1:0])
                2'b00: w_data_to_axi4_reg <= w_data_to_axi4_reg;
                2'b01: case (rw_mem_addr[2:0])
                    3'b111: w_data_to_axi4_reg <= {56'b0, w_mem_data[2*8-1:1*8]};
                    default: w_data_to_axi4_reg <= w_data_to_axi4_reg;
                endcase
                2'b10: case (rw_mem_addr[2:0])
                    3'b101: w_data_to_axi4_reg <= {56'b0, w_mem_data[4*8-1:3*8]};
                    3'b110: w_data_to_axi4_reg <= {48'b0, w_mem_data[4*8-1:2*8]};
                    3'b111: w_data_to_axi4_reg <= {40'b0, w_mem_data[4*8-1:1*8]};
                    default: w_data_to_axi4_reg <= w_data_to_axi4_reg;
                endcase
                2'b11: case (rw_mem_addr[2:0])
                    3'b000: w_data_to_axi4_reg <= w_data_to_axi4_reg;
                    3'b001: w_data_to_axi4_reg <= {56'b0, w_mem_data[8*8-1:7*8]};
                    3'b010: w_data_to_axi4_reg <= {48'b0, w_mem_data[8*8-1:6*8]};
                    3'b011: w_data_to_axi4_reg <= {40'b0, w_mem_data[8*8-1:5*8]};
                    3'b100: w_data_to_axi4_reg <= {32'b0, w_mem_data[8*8-1:4*8]};
                    3'b101: w_data_to_axi4_reg <= {24'b0, w_mem_data[8*8-1:3*8]};
                    3'b110: w_data_to_axi4_reg <= {16'b0, w_mem_data[8*8-1:2*8]};
                    3'b111: w_data_to_axi4_reg <= { 8'b0, w_mem_data[8*8-1:1*8]};
                endcase
            endcase
        end
    end


    always @(posedge clk) begin
        if(rst) w_mask_to_axi4_reg <= 8'd0;
        else if(nxt_state==4'd5) begin
            case(rw_mem_bytes[1:0])
                2'b00: case(rw_mem_addr[2:0])
                    3'b000: w_mask_to_axi4_reg <= 8'b0000_0001;
                    3'b001: w_mask_to_axi4_reg <= 8'b0000_0010;
                    3'b010: w_mask_to_axi4_reg <= 8'b0000_0100;
                    3'b011: w_mask_to_axi4_reg <= 8'b0000_1000;
                    3'b100: w_mask_to_axi4_reg <= 8'b0001_0000;
                    3'b101: w_mask_to_axi4_reg <= 8'b0010_0000;
                    3'b110: w_mask_to_axi4_reg <= 8'b0100_0000;
                    3'b111: w_mask_to_axi4_reg <= 8'b1000_0000;
                endcase
                2'b01: case (rw_mem_addr[2:0])
                    3'b000: w_mask_to_axi4_reg <= 8'b0000_0011;
                    3'b001: w_mask_to_axi4_reg <= 8'b0000_0110;
                    3'b010: w_mask_to_axi4_reg <= 8'b0000_1100;
                    3'b011: w_mask_to_axi4_reg <= 8'b0001_1000;
                    3'b100: w_mask_to_axi4_reg <= 8'b0011_0000;
                    3'b101: w_mask_to_axi4_reg <= 8'b0110_0000;
                    3'b110: w_mask_to_axi4_reg <= 8'b1100_0000;
                    3'b111: w_mask_to_axi4_reg <= 8'b1000_0000;
                endcase
                2'b10: case (rw_mem_addr[2:0])
                    3'b000: w_mask_to_axi4_reg <= 8'b0000_1111;
                    3'b001: w_mask_to_axi4_reg <= 8'b0001_1110;
                    3'b010: w_mask_to_axi4_reg <= 8'b0011_1100;
                    3'b011: w_mask_to_axi4_reg <= 8'b0111_1000;
                    3'b100: w_mask_to_axi4_reg <= 8'b1111_0000;
                    3'b101: w_mask_to_axi4_reg <= 8'b1110_0000;
                    3'b110: w_mask_to_axi4_reg <= 8'b1100_0000;
                    3'b111: w_mask_to_axi4_reg <= 8'b1000_0000;
                endcase
                2'b11: case (rw_mem_addr[2:0])
                    3'b000: w_mask_to_axi4_reg <= 8'b1111_1111;
                    3'b001: w_mask_to_axi4_reg <= 8'b1111_1110;
                    3'b010: w_mask_to_axi4_reg <= 8'b1111_1100;
                    3'b011: w_mask_to_axi4_reg <= 8'b1111_1000;
                    3'b100: w_mask_to_axi4_reg <= 8'b1111_0000;
                    3'b101: w_mask_to_axi4_reg <= 8'b1110_0000;
                    3'b110: w_mask_to_axi4_reg <= 8'b1100_0000;
                    3'b111: w_mask_to_axi4_reg <= 8'b1000_0000;
                endcase
            endcase
        end
        else if(nxt_state==4'd6) begin
            case(rw_mem_bytes[1:0])
                2'b00: w_mask_to_axi4_reg <= 8'b0000_0000;
                2'b01: case (rw_mem_addr[2:0])
                    3'b111: w_mask_to_axi4_reg <= 8'b0000_0001;
                    default: w_mask_to_axi4_reg <= 8'b0000_0000;
                endcase
                2'b10: case (rw_mem_addr[2:0])
                    3'b101: w_mask_to_axi4_reg <= 8'b0000_0001;
                    3'b110: w_mask_to_axi4_reg <= 8'b0000_0011;
                    3'b111: w_mask_to_axi4_reg <= 8'b0000_0111;
                    default: w_mask_to_axi4_reg <= 8'b0000_0000;
                endcase
                2'b11: case (rw_mem_addr[2:0])
                    3'b000: w_mask_to_axi4_reg <= 8'b0000_0000;
                    3'b001: w_mask_to_axi4_reg <= 8'b0000_0001;
                    3'b010: w_mask_to_axi4_reg <= 8'b0000_0011;
                    3'b011: w_mask_to_axi4_reg <= 8'b0000_0111;
                    3'b100: w_mask_to_axi4_reg <= 8'b0000_1111;
                    3'b101: w_mask_to_axi4_reg <= 8'b0001_1111;
                    3'b110: w_mask_to_axi4_reg <= 8'b0011_1111;
                    3'b111: w_mask_to_axi4_reg <= 8'b0111_1111;
                endcase
            endcase
        end
    end

endmodule


// `include "ysyx_210238_ff.v"

module ysyx_210238_mem(
    input wire clk,
    input wire rst,
    input wire [`REG_BUS-1 : 0] result_ALU,
    input wire [         4 : 0] rd,
    input wire                  w_rd_ena,
    input wire                  load_ena_i,
    // input wire                  store_ena_i,
    // input wire [         2 : 0] load_store_bytes_i,
    // input wire [`REG_BUS-1 : 0] rs2_data_i,
    // input wire                  is_AL_OP_i,
    input wire                  is_B_i,
    // input wire                  is_U_i,
    input wire                  is_jal_i,
    input wire                  is_jalr_i,
    input wire                  is_B_jump_i,
    input wire                  is_csr_i,
    input wire                  is_ecall_i,
    input wire                  is_mret_i,
    input wire [`REG_BUS-1 : 0] csr_mtvec_i,
    input wire [`REG_BUS-1 : 0] csr_mepc_i,
    input wire [`REG_BUS-1 : 0] pc_plus_i,
    input wire [`REG_BUS-1 : 0] r_csr_i,
    input wire                  MIE,
    input wire                  inst_valid_i,

    input wire                  MAC_ready,
    input wire [`REG_BUS-1 : 0] MAC_data,
    input wire                  mtime_intr_enable_i,
    input wire                  ext_intr_enable_i,
    input wire                  software_intr_enable_i,
    
    output wire [        4 : 0] rd_o,
    output wire                 w_rd_ena_o,
    // output wire                 w_rd_ena_harzied_o,
    output wire [`REG_BUS-1 : 0] wb_data,
    output wire [`REG_BUS-1 : 0] result_ALU_o,
    output wire                  load_ena_o,
    // output wire                  dmem_r_ena,
    // output wire [`REG_BUS-1 : 0] dmem_r_addr,
    // output wire                  dmem_w_ena,
    // output wire [`REG_BUS-1 : 0] dmem_w_addr,
    // output wire [`REG_BUS-1 : 0] dmem_w_data,
    // output wire                  is_AL_OP_o,
    output wire                  is_jal_o,
    output wire                  is_jalr_o,
    // output wire                  is_U_o,
    output wire                  stall,
    // output wire [         2 : 0] r_addr_2_0,
    // output wire [         2 : 0] load_store_bytes_o,
    output wire                  flush,
    output wire [`REG_BUS-1 : 0] pc_plus_o,
    output wire [`REG_BUS-1 : 0] jalr_pc_o,
    output wire                  inst_valid_o
);

    // assign r_addr_2_0 = 3'b000;
    // assign load_store_bytes_o = 3'b0;

    wire intr_flush_inst;
    wire [`REG_BUS-1 : 0] wb_data_wire;



    
    assign stall = ~MAC_ready;

    assign intr_flush_inst = mtime_intr_enable_i | ext_intr_enable_i | software_intr_enable_i;




    ysyx_210238_ff #(.WIDTH( 5)) ff_rd(.clk(clk), .rst(rst), .stall(1'b0), .d(rd), .q(rd_o));
    ysyx_210238_ff #(.WIDTH( 1)) ff_w_rd_ena(.clk(clk), .rst(rst),.stall(1'b0), .d(w_rd_ena & (~stall) & (~ (intr_flush_inst & ~load_ena_i) )), .q(w_rd_ena_o));
    // ysyx_210238_ff #(.WIDTH( 1)) ff_w_rd_h_ena(.clk(clk), .rst(rst),.stall(1'b0), .d(w_rd_ena), .q(w_rd_ena_harzied_o));
    // ff #(.WIDTH( 1)) ff_w_rd_ena(.clk(clk), .rst(rst),.stall(stall), .d(w_rd_ena), .q(w_rd_ena_o));

    assign wb_data_wire = (MAC_ready&load_ena_i) ? MAC_data : wb_data;//load_ena_i ? dmem_r_data : result_ALU;
    ysyx_210238_ff #(.WIDTH(`REG_BUS)) ff_wb_data(.clk(clk), .rst(rst),.stall(1'b0), .d(wb_data_wire), .q(wb_data));
    ysyx_210238_ff #(.WIDTH(`REG_BUS)) ff_result_ALU(.clk(clk), .rst(rst),.stall(1'b0), .d(is_csr_i ? r_csr_i : result_ALU), .q(result_ALU_o));

    ysyx_210238_ff #(.WIDTH( 1)) ff_load_ena(.clk(clk), .rst(rst),.stall(1'b0), .d(load_ena_i), .q(load_ena_o));
    // ysyx_210238_ff #(.WIDTH( 1)) ff_is_AL_OP(.clk(clk), .rst(rst),.stall(1'b0), .d(is_AL_OP_i), .q(is_AL_OP_o));

    ysyx_210238_ff #(.WIDTH( 1)) ff_is_jal(.clk(clk), .rst(rst),.stall(1'b0), .d(is_jal_i), .q(is_jal_o));
    ysyx_210238_ff #(.WIDTH( 1)) ff_is_jalr(.clk(clk), .rst(rst),.stall(1'b0), .d(is_jalr_i), .q(is_jalr_o));
    // ysyx_210238_ff #(.WIDTH( 1)) ff_is_U(.clk(clk), .rst(rst),.stall(1'b0), .d(is_U_i), .q(is_U_o));

    assign flush = (intr_flush_inst) | (is_B_jump_i & is_B_i) | is_jalr_i | (is_ecall_i&MIE) | is_mret_i;
    assign pc_plus_o = pc_plus_i;
    assign jalr_pc_o =  intr_flush_inst ? csr_mtvec_i :
                        (is_ecall_i&MIE) ? csr_mtvec_i :
                        is_mret_i ? csr_mepc_i :
                        result_ALU;

    ysyx_210238_ff #(.WIDTH( 1)) ff_inst_valid(.clk(clk), .rst(rst),.stall(1'b0), .d(inst_valid_i & (~stall) & (~intr_flush_inst)), .q(inst_valid_o));

endmodule



module ysyx_210238_regfile(
    input  wire clk,
	input  wire rst,
	
	input  wire  [4  : 0] w_addr,
	input  wire  [`REG_BUS-1 : 0] w_data,
	input  wire 		  w_ena,
	
	input  wire  [4  : 0] r_addr1,
	output reg   [`REG_BUS-1 : 0] r_data1,
	
	input  wire  [4  : 0] r_addr2,
	output reg   [`REG_BUS-1 : 0] r_data2
    );

    // 32 registers
	reg [`REG_BUS-1 : 0] 	regs[0 : 31];
	
	always @(posedge clk) 
	begin
		if ( rst ) 
		begin
			regs[ 0] <= `ZERO_WORD;
			regs[ 1] <= `ZERO_WORD;
			regs[ 2] <= `ZERO_WORD;
			regs[ 3] <= `ZERO_WORD;
			regs[ 4] <= `ZERO_WORD;
			regs[ 5] <= `ZERO_WORD;
			regs[ 6] <= `ZERO_WORD;
			regs[ 7] <= `ZERO_WORD;
			regs[ 8] <= `ZERO_WORD;
			regs[ 9] <= `ZERO_WORD;
			regs[10] <= `ZERO_WORD;
			regs[11] <= `ZERO_WORD;
			regs[12] <= `ZERO_WORD;
			regs[13] <= `ZERO_WORD;
			regs[14] <= `ZERO_WORD;
			regs[15] <= `ZERO_WORD;
			regs[16] <= `ZERO_WORD;
			regs[17] <= `ZERO_WORD;
			regs[18] <= `ZERO_WORD;
			regs[19] <= `ZERO_WORD;
			regs[20] <= `ZERO_WORD;
			regs[21] <= `ZERO_WORD;
			regs[22] <= `ZERO_WORD;
			regs[23] <= `ZERO_WORD;
			regs[24] <= `ZERO_WORD;
			regs[25] <= `ZERO_WORD;
			regs[26] <= `ZERO_WORD;
			regs[27] <= `ZERO_WORD;
			regs[28] <= `ZERO_WORD;
			regs[29] <= `ZERO_WORD;
			regs[30] <= `ZERO_WORD;
			regs[31] <= `ZERO_WORD;
		end
		else 
		begin
			if ((w_ena == 1'b1) && (w_addr != 5'h00))	
				regs[w_addr] <= w_data;
		end
	end
	
	always @(*) begin
		if (rst)
			r_data1 = `ZERO_WORD;
		else
			r_data1 = (r_addr1 == w_addr)&w_ena ? w_data : regs[r_addr1];
	end
	
	always @(*) begin
		if (rst)
			r_data2 = `ZERO_WORD;
		else
			r_data2 = (r_addr2 == w_addr)&w_ena ? w_data : regs[r_addr2];
	end


endmodule

module ysyx_210238
(
    input clock,
    input reset,

    input io_interrupt,

    // AIX4 master
    input                              io_master_awready,
    output                             io_master_awvalid,
    output [31:0]                      io_master_awaddr,
    output [3:0]                       io_master_awid,
    output [7:0]                       io_master_awlen,
    output [2:0]                       io_master_awsize,
    output [1:0]                       io_master_awburst,

    input                              io_master_wready,
    output                             io_master_wvalid,
    output [63:0]                      io_master_wdata,
    output [7:0]                       io_master_wstrb,
    output                             io_master_wlast,
    
    output                             io_master_bready,
    input                              io_master_bvalid,
    input  [1:0]                       io_master_bresp,
    input  [3:0]                       io_master_bid,

    input                              io_master_arready,
    output                             io_master_arvalid,
    output [31:0]                      io_master_araddr,
    output [3:0]                       io_master_arid,
    output [7:0]                       io_master_arlen,
    output [2:0]                       io_master_arsize,
    output [1:0]                       io_master_arburst,

    output                             io_master_rready,
    input                              io_master_rvalid,
    input  [1:0]                       io_master_rresp,
    input  [63:0]                      io_master_rdata,
    input                              io_master_rlast,
    input  [3:0]                       io_master_rid,
    
    

/* verilator lint_off UNUSED */

    // AXI4 slave
    output                             io_slave_awready,
    input                              io_slave_awvalid,
    input [31:0]                       io_slave_awaddr,
    input [3:0]                        io_slave_awid,
    input [7:0]                        io_slave_awlen,
    input [2:0]                        io_slave_awsize,
    input [1:0]                        io_slave_awburst,

    output                             io_slave_wready,
    input                              io_slave_wvalid,
    input [63:0]                       io_slave_wdata,
    input [7:0]                        io_slave_wstrb,
    input                              io_slave_wlast,

    input                              io_slave_bready,
    output                             io_slave_bvalid,
    output  [1:0]                      io_slave_bresp,
    output  [3:0]                      io_slave_bid,

    output                             io_slave_arready,
    input                              io_slave_arvalid,
    input [31:0]                       io_slave_araddr,
    input [3:0]                        io_slave_arid,
    input [7:0]                        io_slave_arlen,
    input [2:0]                        io_slave_arsize,
    input [1:0]                        io_slave_arburst,

    input                              io_slave_rready,
    output                             io_slave_rvalid,
    output  [1:0]                      io_slave_rresp,
    output  [63:0]                     io_slave_rdata,
    output                             io_slave_rlast,
    output  [3:0]                      io_slave_rid

/* verilator lint_on UNUSED */
);

    // slave
    assign io_slave_awready = 1'b0;
    assign io_slave_wready = 1'b0;
    assign io_slave_bvalid = 1'b0;
    assign io_slave_bresp = 2'b00;
    assign io_slave_bid = 4'b00;
    assign io_slave_arready = 1'b0;
    assign io_slave_rvalid = 1'b0;
    assign io_slave_rresp = 2'b00;
    assign io_slave_rdata = 64'b0;
    assign io_slave_rlast = 1'b0;
    assign io_slave_rid = 4'b0;

    // parameter RW_DATA_WIDTH     = 64;
    // parameter RW_ADDR_WIDTH     = 64;
    parameter AXI_DATA_WIDTH    = 64;
    parameter AXI_ADDR_WIDTH    = 64;
    parameter AXI_ID_WIDTH      = 4;
    // parameter AXI_USER_WIDTH    = 1;
    //slave end

    // port name switch
    // wire clk;
    // assign clk = clock;
    // wire rst;
    // assign rst = reset;

    wire ext_intr;
    assign ext_intr = io_interrupt;

    wire                              axi_aw_ready_i;
    assign axi_aw_ready_i = io_master_awready;
    wire                              axi_aw_valid_o;
    assign io_master_awvalid = axi_aw_valid_o;
    wire [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o;
    assign io_master_awaddr = axi_aw_addr_o[31:0] | (32'b0 & axi_aw_addr_o[63:32]);
    // wire [2:0]                        axi_aw_prot_o;
    wire [AXI_ID_WIDTH-1:0]           axi_aw_id_o;
    assign io_master_awid = axi_aw_id_o;
    // wire [AXI_USER_WIDTH-1:0]         axi_aw_user_o;
    wire [7:0]                        axi_aw_len_o;
    assign io_master_awlen = axi_aw_len_o;
    wire [2:0]                        axi_aw_size_o;
    assign io_master_awsize = axi_aw_size_o;
    wire [1:0]                        axi_aw_burst_o;
    assign io_master_awburst = axi_aw_burst_o;
    // wire                              axi_aw_lock_o;
    // wire [3:0]                        axi_aw_cache_o;
    // wire [3:0]                        axi_aw_qos_o;
    // wire [3:0]                        axi_aw_region_o;

    wire                              axi_w_ready_i;
    assign axi_w_ready_i = io_master_wready;
    wire                              axi_w_valid_o;
    assign io_master_wvalid = axi_w_valid_o;
    wire [AXI_DATA_WIDTH-1:0]         axi_w_data_o;
    assign io_master_wdata = axi_w_data_o;
    wire [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o;
    assign io_master_wstrb = axi_w_strb_o;
    wire                              axi_w_last_o;
    assign io_master_wlast = axi_w_last_o;
    // wire [AXI_USER_WIDTH-1:0]         axi_w_user_o;

    wire                              axi_b_ready_o;
    assign io_master_bready = axi_b_ready_o;
    wire                              axi_b_valid_i;
    assign axi_b_valid_i = io_master_bvalid;
    wire  [1:0]                       axi_b_resp_i;
    assign axi_b_resp_i = io_master_bresp;
    wire  [AXI_ID_WIDTH-1:0]          axi_b_id_i;
    assign axi_b_id_i = io_master_bid;
    // wire  [AXI_USER_WIDTH-1:0]        axi_b_user_i;
    // assign axi_b_user_i = 1'b0;

    wire                              axi_ar_ready_i;
    assign axi_ar_ready_i = io_master_arready;
    wire                              axi_ar_valid_o;
    assign io_master_arvalid = axi_ar_valid_o;
    wire [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o;
    assign io_master_araddr = axi_ar_addr_o[31:0] | (32'b0 & axi_ar_addr_o[63:32]);
    // wire [2:0]                        axi_ar_prot_o;
    wire [AXI_ID_WIDTH-1:0]           axi_ar_id_o;
    assign io_master_arid = axi_ar_id_o;
    // wire [AXI_USER_WIDTH-1:0]         axi_ar_user_o;
    wire [7:0]                        axi_ar_len_o;
    assign io_master_arlen = axi_ar_len_o;
    wire [2:0]                        axi_ar_size_o;
    assign io_master_arsize = axi_ar_size_o;
    wire [1:0]                        axi_ar_burst_o;
    assign io_master_arburst = axi_ar_burst_o;
    // wire                              axi_ar_lock_o;
    // wire [3:0]                        axi_ar_cache_o;
    // wire [3:0]                        axi_ar_qos_o;
    // wire [3:0]                        axi_ar_region_o;

    wire                              axi_r_ready_o;
    assign io_master_rready = axi_r_ready_o;
    wire                              axi_r_valid_i;
    assign axi_r_valid_i = io_master_rvalid;
    wire  [1:0]                       axi_r_resp_i;
    assign axi_r_resp_i = io_master_rresp; 
    wire  [AXI_DATA_WIDTH-1:0]        axi_r_data_i;
    assign axi_r_data_i = io_master_rdata;
    wire                              axi_r_last_i;
    assign axi_r_last_i = io_master_rlast;
    wire  [AXI_ID_WIDTH-1:0]          axi_r_id_i;
    assign axi_r_id_i = io_master_rid; 
    // wire  [AXI_USER_WIDTH-1:0]        axi_r_user_i;
    // assign axi_r_user_i = 1'b0;


    // wire  [`REG_BUS - 1 : 0] value_x10;
    // wire                     mac_ok;
    // wire  [`REG_BUS-1 : 0] pc_o;
    //  port name switch end


    // port define
    wire to_r_ena;
    wire to_w_ena;
    wire [`REG_BUS-1 : 0] to_addr;
    wire [`REG_BUS-1 : 0] to_w_data;
    wire [`REG_BUS-1 : 0] to_w_mask;

    wire [`REG_BUS-1 : 0] from_r_data;
    wire from_r_ready;
    wire from_w_ready;

    reg [`REG_BUS-1 : 0] mtime, mtimecmp, msip;

    wire mtime_intr;


    wire is_mtime, is_mtimecmp, is_msip, is_CLINT;
    reg [`REG_BUS-1 : 0] CLINT_r_data;
    reg                  CLINT_r_ready;
    reg                  CLINT_w_ready;

    wire to_axi_r_ena;
    wire to_axi_w_ena;
    wire [`REG_BUS-1 : 0] to_axi_addr;
    wire [`REG_BUS-1 : 0] to_axi_w_data;
    wire [`REG_BUS/8-1 : 0] to_axi_w_mask;

    wire [`REG_BUS-1 : 0] from_axi_r_data;
    wire from_axi_r_ready;
    wire from_axi_w_ready;

    wire no_Icache_to_axi4;
    wire is_fencei;

    //port define end


 

    ysyx_210238_core cpu_core(
        .clk(clock),
        .rst(reset),
        .r_data_axi4(from_r_data),
        .r_ready_axi4(from_r_ready),
        .w_ready_axi4(from_w_ready),

        .mtime_intr(mtime_intr),
        .ext_intr(ext_intr),
        .software_intr(msip[0]),

        .r_ena_axi4(to_r_ena),
        .w_ena_axi4(to_w_ena),
        .addr_axi4(to_addr),
        .w_data_axi4(to_w_data),
        .w_mask_axi4_64(to_w_mask),
    
        .no_Icache_to_axi4(no_Icache_to_axi4),
        .is_fencei(is_fencei)

        // .value_x10(value_x10),
        // .mac_ok(mac_ok),
        // .pc_o(pc_o)
    );


    assign from_r_data = CLINT_r_ready ? CLINT_r_data : from_axi_r_data;
    assign from_r_ready = CLINT_r_ready | from_axi_r_ready;
    assign from_w_ready = CLINT_w_ready | from_axi_w_ready;


    // mtime and mtimecmp
    reg [7:0] mtime_div;
    always @(posedge clock) begin
        if(reset) mtime <= 64'd0;
        else begin
            if(to_w_ena & is_mtime) mtime <= (mtime & (~to_w_mask)) | (to_w_data & (to_w_mask));
            else if(mtime_div == 8'b0) mtime <= mtime + 64'b1;
            else mtime <= mtime;
        end
    end

    always @(posedge clock) begin
        if(reset) mtime_div <= 8'b0;
        else if(mtime_div == 8'd5) mtime_div <= 8'b0;
        else mtime_div <= mtime_div + 8'd1;
    end



    always @(posedge clock) begin
        if(reset) mtimecmp <= 64'd0;
        else begin
            if(to_w_ena & is_mtimecmp) begin
                mtimecmp <= (mtimecmp & (~to_w_mask)) | (to_w_data & (to_w_mask));
            end
            else mtimecmp <= mtimecmp;
        end
    end

    always @(posedge clock) begin
        if(reset) msip <= 64'd0;
        else begin
            if(to_w_ena & is_msip) begin
                msip <= {63'b0, to_w_data[0]};
            end
            else msip <= msip;
        end
        
    end

    assign mtime_intr = (mtime > mtimecmp);

    assign is_mtime    = (to_addr[`REG_BUS-1 : 3] == 61'h4017ff) ;//0x200bff8
    assign is_mtimecmp = (to_addr[`REG_BUS-1 : 3] == 61'h400800) ;//0x2004000
    assign is_msip = (to_addr[`REG_BUS-1 : 3] == 61'h400000) ;//0x2000000
    assign is_CLINT = is_mtime | is_mtimecmp | is_msip;

    always @(posedge clock) begin
        if(reset) CLINT_r_data <= 64'b0;
        else begin
            CLINT_r_data <= {64{to_r_ena & is_mtime   }} & mtime   |
                            {64{to_r_ena & is_mtimecmp}} & mtimecmp|
                            {64{to_r_ena & is_msip    }} & msip;
        end
    end

    always @(posedge clock) begin
        if(reset) CLINT_r_ready <= 1'b0;
        else CLINT_r_ready <= to_r_ena & is_CLINT;
    end

    always @(posedge clock) begin
        if(reset) CLINT_w_ready <= 1'b0;
        else CLINT_w_ready <= to_w_ena & is_CLINT;
    end


    assign to_axi_r_ena = is_CLINT ? 1'b0 : to_r_ena;
    assign to_axi_w_ena = is_CLINT ? 1'b0 : to_w_ena;

    assign to_axi_addr = to_addr;
    assign to_axi_w_data = to_w_data;
    assign to_axi_w_mask = {to_w_mask[56], to_w_mask[48], to_w_mask[40], to_w_mask[32], to_w_mask[24], to_w_mask[16], to_w_mask[8], to_w_mask[0]};


    ysyx_210238_axirw axi4(
        .clk(clock),
        .rst(~reset),

	    .r_ena_i(to_axi_r_ena),
        .w_ena_i(to_axi_w_ena),
        .addr_i(to_axi_addr),
        .w_data_i(to_axi_w_data),
        .w_mask_i(to_axi_w_mask),

        .r_data_o(from_axi_r_data),
        .r_ready_o(from_axi_r_ready),
        .w_ready_o(from_axi_w_ready),

        .no_Icache_to_axi4(no_Icache_to_axi4),
        .is_fencei(is_fencei),

    // Advanced eXtensible Interface
        .axi_aw_ready_i(axi_aw_ready_i),
        .axi_aw_valid_o(axi_aw_valid_o),
        .axi_aw_addr_o(axi_aw_addr_o),
        // .axi_aw_prot_o(axi_aw_prot_o),
        .axi_aw_id_o(axi_aw_id_o),
        // .axi_aw_user_o(axi_aw_user_o),
        .axi_aw_len_o(axi_aw_len_o),
        .axi_aw_size_o(axi_aw_size_o),
        .axi_aw_burst_o(axi_aw_burst_o),
        // .axi_aw_lock_o(axi_aw_lock_o),
        // .axi_aw_cache_o(axi_aw_cache_o),
        // .axi_aw_qos_o(axi_aw_qos_o),
        // .axi_aw_region_o(axi_aw_region_o),

        .axi_w_ready_i(axi_w_ready_i),
        .axi_w_valid_o(axi_w_valid_o),
        .axi_w_data_o(axi_w_data_o),
        .axi_w_strb_o(axi_w_strb_o),
        .axi_w_last_o(axi_w_last_o),
        // .axi_w_user_o(axi_w_user_o),

        .axi_b_ready_o(axi_b_ready_o),
        .axi_b_valid_i(axi_b_valid_i),
        .axi_b_resp_i(axi_b_resp_i),
        .axi_b_id_i(axi_b_id_i),
        // .axi_b_user_i(axi_b_user_i),

        .axi_ar_ready_i(axi_ar_ready_i),
        .axi_ar_valid_o(axi_ar_valid_o),
        .axi_ar_addr_o(axi_ar_addr_o),
        // .axi_ar_prot_o(axi_ar_prot_o),
        .axi_ar_id_o(axi_ar_id_o),
        // .axi_ar_user_o(axi_ar_user_o),
        .axi_ar_len_o(axi_ar_len_o),
        .axi_ar_size_o(axi_ar_size_o),
        .axi_ar_burst_o(axi_ar_burst_o),
        // .axi_ar_lock_o(axi_ar_lock_o),
        // .axi_ar_cache_o(axi_ar_cache_o),
        // .axi_ar_qos_o(axi_ar_qos_o),
        // .axi_ar_region_o(axi_ar_region_o),

        .axi_r_ready_o(axi_r_ready_o),
        .axi_r_valid_i(axi_r_valid_i),
        .axi_r_resp_i(axi_r_resp_i),
        .axi_r_data_i(axi_r_data_i),
        .axi_r_last_i(axi_r_last_i),
        .axi_r_id_i  (axi_r_id_i  )
        // .axi_r_user_i(axi_r_user_i)
    );


endmodule



module ysyx_210238_wb(
    // input wire clk,
    // input wire rst,
    input wire [`REG_BUS-1 : 0] wb_data,
    input wire [`REG_BUS-1 : 0] result_ALU,
    input wire [`REG_BUS-1 : 0] pc_plus_4_i,
    input wire                  load_ena_i,
    input wire [         4 : 0] rd,
    input wire                  w_rd_ena,
    // input wire [         3 : 0] bytes_r1,
    // input wire [         3 : 0] bytes_r2,
    // input wire [         2 : 0] r_addr_2_0,
    // input wire [         2 : 0] load_store_bytes_i,
    input wire                  is_jal_i,
    input wire                  is_jalr_i,
    // input wire                  is_U_i,
    
    output wire [`REG_BUS-1 : 0] wb_data_o,
    output wire [         4 : 0] rd_o,
    output wire                  w_ena_o
);

    wire [`REG_BUS-1 : 0] from_mem;
    // wire [`REG_BUS*2-1 : 0] aligned_mem;
    // wire [`REG_BUS-1 : 0] aligned_mem_1;
    // reg  [`REG_BUS-1 : 0] aligned_mem_2;
    // assign aligned_mem = is_misalign ? {wb_data, wb_data_1} : {64'b0, wb_data};
    // assign aligned_mem_1 = aligned_mem[r_addr_2_0*8+:64];
    // always@(*)case (load_store_bytes_i[1:0])
    //     2'b00: aligned_mem_2 = {{56{aligned_mem_1[7]}} & {56{~load_store_bytes_i[2]}}, aligned_mem_1[7:0]};
    //     2'b01: aligned_mem_2 = {{48{aligned_mem_1[15]}} & {48{~load_store_bytes_i[2]}}, aligned_mem_1[15:0]};
    //     2'b10: aligned_mem_2 = {{32{aligned_mem_1[31]}} & {32{~load_store_bytes_i[2]}}, aligned_mem_1[31:0]};
    //     2'b11: aligned_mem_2 = aligned_mem_1[63:0];
    // endcase


    assign from_mem = wb_data;

    assign wb_data_o = (is_jal_i | is_jalr_i) ? pc_plus_4_i : (load_ena_i ? from_mem : result_ALU);
    assign rd_o = rd;
    assign w_ena_o = w_rd_ena;


endmodule
