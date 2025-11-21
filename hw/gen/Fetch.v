// Generator : SpinalHDL v1.8.1    git head : 2a7592004363e5b40ec43e1f122ed8641cd8965b
// Component : Fetch
// Git hash  : f29d1de95b2b9aea3ec101573c63250a4bc0eea3

`timescale 1ns/1ps

module Fetch (
  input               flush,
  input               stall,
  input               interrupt_vld,
  input      [31:0]   interrupt_pc,
  input               redirect_vld,
  input      [31:0]   redirect_pc,
  output              icache_ports_cmd_valid,
  input               icache_ports_cmd_ready,
  output     [31:0]   icache_ports_cmd_addr,
  input               icache_ports_rsp_valid,
  input      [63:0]   icache_ports_rsp_data,
  output     [31:0]   predict_pc,
  output              predict_valid,
  input               branch_taken,
  input      [31:0]   branch_pc,
  output              fch_dst_0_valid,
  input               fch_dst_0_ready,
  output     [31:0]   fch_dst_0_pc,
  output     [31:0]   fch_dst_0_branch_pc,
  output              fch_dst_0_branch_taken,
  output     [31:0]   fch_dst_0_instr,
  output              fch_dst_1_valid,
  input               fch_dst_1_ready,
  output     [31:0]   fch_dst_1_pc,
  output     [31:0]   fch_dst_1_branch_pc,
  output              fch_dst_1_branch_taken,
  output     [31:0]   fch_dst_1_instr,
  input               clk,
  input               reset
);

  wire                fetch_1_fch_dst_ready;
  wire                fetch_1_icache_ports_cmd_valid;
  wire       [31:0]   fetch_1_icache_ports_cmd_addr;
  wire       [31:0]   fetch_1_predict_pc;
  wire                fetch_1_predict_valid;
  wire                fetch_1_fch_dst_valid;
  wire       [31:0]   fetch_1_fch_dst_pc;
  wire       [31:0]   fetch_1_fch_dst_branch_pc;
  wire                fetch_1_fch_dst_branch_taken;
  wire       [63:0]   fetch_1_fch_dst_instr;
  wire                tmp_;
  wire                tmp_1;
  reg                 tmp_2;
  wire       [31:0]   tmp_3;
  wire       [31:0]   tmp_4;
  wire                tmp_5;
  wire       [63:0]   tmp_6;
  reg                 src_stream_valid;
  reg                 src_stream_ready;
  wire       [31:0]   src_stream_pc;
  wire       [31:0]   src_stream_branch_pc;
  wire                src_stream_branch_taken;
  wire       [63:0]   src_stream_instr;
  wire                dec_stream_0_valid;
  reg                 dec_stream_0_ready;
  wire       [31:0]   dec_stream_0_pc;
  wire       [31:0]   dec_stream_0_branch_pc;
  wire                dec_stream_0_branch_taken;
  wire       [31:0]   dec_stream_0_instr;
  wire                dec_stream_1_valid;
  reg                 dec_stream_1_ready;
  wire       [31:0]   dec_stream_1_pc;
  wire       [31:0]   dec_stream_1_branch_pc;
  wire                dec_stream_1_branch_taken;
  wire       [31:0]   dec_stream_1_instr;
  wire                src_stream_0_valid;
  wire                src_stream_0_ready;
  wire       [31:0]   src_stream_0_pc;
  wire       [31:0]   src_stream_0_branch_pc;
  wire                src_stream_0_branch_taken;
  wire       [63:0]   src_stream_0_instr;
  wire                src_stream_1_valid;
  wire                src_stream_1_ready;
  wire       [31:0]   src_stream_1_pc;
  wire       [31:0]   src_stream_1_branch_pc;
  wire                src_stream_1_branch_taken;
  wire       [63:0]   src_stream_1_instr;
  reg                 src_stream_fork2_logic_linkEnable_0;
  reg                 src_stream_fork2_logic_linkEnable_1;
  wire                src_stream_0_fire;
  wire                src_stream_1_fire;
  wire                dec_stream_0_m2sPipe_valid;
  wire                dec_stream_0_m2sPipe_ready;
  wire       [31:0]   dec_stream_0_m2sPipe_pc;
  wire       [31:0]   dec_stream_0_m2sPipe_branch_pc;
  wire                dec_stream_0_m2sPipe_branch_taken;
  wire       [31:0]   dec_stream_0_m2sPipe_instr;
  reg                 dec_stream_0_rValid;
  reg        [31:0]   dec_stream_0_rData_pc;
  reg        [31:0]   dec_stream_0_rData_branch_pc;
  reg                 dec_stream_0_rData_branch_taken;
  reg        [31:0]   dec_stream_0_rData_instr;
  wire                dec_stream_1_m2sPipe_valid;
  wire                dec_stream_1_m2sPipe_ready;
  wire       [31:0]   dec_stream_1_m2sPipe_pc;
  wire       [31:0]   dec_stream_1_m2sPipe_branch_pc;
  wire                dec_stream_1_m2sPipe_branch_taken;
  wire       [31:0]   dec_stream_1_m2sPipe_instr;
  reg                 dec_stream_1_rValid;
  reg        [31:0]   dec_stream_1_rData_pc;
  reg        [31:0]   dec_stream_1_rData_branch_pc;
  reg                 dec_stream_1_rData_branch_taken;
  reg        [31:0]   dec_stream_1_rData_instr;

  Fetch_kernel fetch_1 (
    .flush                  (flush                              ), //i
    .stall                  (stall                              ), //i
    .interrupt_vld          (interrupt_vld                      ), //i
    .interrupt_pc           (interrupt_pc[31:0]                 ), //i
    .redirect_vld           (redirect_vld                       ), //i
    .redirect_pc            (redirect_pc[31:0]                  ), //i
    .icache_ports_cmd_valid (fetch_1_icache_ports_cmd_valid     ), //o
    .icache_ports_cmd_ready (icache_ports_cmd_ready             ), //i
    .icache_ports_cmd_addr  (fetch_1_icache_ports_cmd_addr[31:0]), //o
    .icache_ports_rsp_valid (icache_ports_rsp_valid             ), //i
    .icache_ports_rsp_data  (icache_ports_rsp_data[63:0]        ), //i
    .predict_pc             (fetch_1_predict_pc[31:0]           ), //o
    .predict_valid          (fetch_1_predict_valid              ), //o
    .branch_taken           (branch_taken                       ), //i
    .branch_pc              (branch_pc[31:0]                    ), //i
    .fch_dst_valid          (fetch_1_fch_dst_valid              ), //o
    .fch_dst_ready          (fetch_1_fch_dst_ready              ), //i
    .fch_dst_pc             (fetch_1_fch_dst_pc[31:0]           ), //o
    .fch_dst_branch_pc      (fetch_1_fch_dst_branch_pc[31:0]    ), //o
    .fch_dst_branch_taken   (fetch_1_fch_dst_branch_taken       ), //o
    .fch_dst_instr          (fetch_1_fch_dst_instr[63:0]        ), //o
    .clk                    (clk                                ), //i
    .reset                  (reset                              )  //i
  );
  assign icache_ports_cmd_valid = fetch_1_icache_ports_cmd_valid; // @ Fetch.scala l229
  assign icache_ports_cmd_addr = fetch_1_icache_ports_cmd_addr; // @ Fetch.scala l229
  assign tmp_ = (! stall); // @ BaseType.scala l299
  assign tmp_1 = (fetch_1_fch_dst_valid && tmp_); // @ Stream.scala l426
  assign fetch_1_fch_dst_ready = (tmp_2 && tmp_); // @ Stream.scala l427
  assign tmp_3 = fetch_1_fch_dst_pc; // @ Stream.scala l428
  assign tmp_4 = fetch_1_fch_dst_branch_pc; // @ Stream.scala l428
  assign tmp_5 = fetch_1_fch_dst_branch_taken; // @ Stream.scala l428
  assign tmp_6 = fetch_1_fch_dst_instr; // @ Stream.scala l428
  always @(*) begin
    src_stream_valid = tmp_1; // @ Stream.scala l294
    if(flush) begin
      src_stream_valid = 1'b0; // @ Stream.scala l439
    end
  end

  always @(*) begin
    tmp_2 = src_stream_ready; // @ Stream.scala l295
    if(flush) begin
      tmp_2 = 1'b1; // @ Stream.scala l440
    end
  end

  assign src_stream_pc = tmp_3; // @ Stream.scala l296
  assign src_stream_branch_pc = tmp_4; // @ Stream.scala l296
  assign src_stream_branch_taken = tmp_5; // @ Stream.scala l296
  assign src_stream_instr = tmp_6; // @ Stream.scala l296
  always @(*) begin
    src_stream_ready = 1'b1; // @ Stream.scala l990
    if(((! src_stream_0_ready) && src_stream_fork2_logic_linkEnable_0)) begin
      src_stream_ready = 1'b0; // @ Stream.scala l993
    end
    if(((! src_stream_1_ready) && src_stream_fork2_logic_linkEnable_1)) begin
      src_stream_ready = 1'b0; // @ Stream.scala l993
    end
  end

  assign src_stream_0_valid = (src_stream_valid && src_stream_fork2_logic_linkEnable_0); // @ Stream.scala l1000
  assign src_stream_0_pc = src_stream_pc; // @ Stream.scala l1001
  assign src_stream_0_branch_pc = src_stream_branch_pc; // @ Stream.scala l1001
  assign src_stream_0_branch_taken = src_stream_branch_taken; // @ Stream.scala l1001
  assign src_stream_0_instr = src_stream_instr; // @ Stream.scala l1001
  assign src_stream_0_fire = (src_stream_0_valid && src_stream_0_ready); // @ BaseType.scala l305
  assign src_stream_1_valid = (src_stream_valid && src_stream_fork2_logic_linkEnable_1); // @ Stream.scala l1000
  assign src_stream_1_pc = src_stream_pc; // @ Stream.scala l1001
  assign src_stream_1_branch_pc = src_stream_branch_pc; // @ Stream.scala l1001
  assign src_stream_1_branch_taken = src_stream_branch_taken; // @ Stream.scala l1001
  assign src_stream_1_instr = src_stream_instr; // @ Stream.scala l1001
  assign src_stream_1_fire = (src_stream_1_valid && src_stream_1_ready); // @ BaseType.scala l305
  assign dec_stream_0_valid = src_stream_0_valid; // @ Fetch.scala l242
  assign dec_stream_0_instr = src_stream_0_instr[31 : 0]; // @ Fetch.scala l243
  assign dec_stream_0_pc = src_stream_0_pc; // @ Fetch.scala l244
  assign dec_stream_0_branch_pc = src_stream_0_branch_pc; // @ Fetch.scala l245
  assign dec_stream_0_branch_taken = src_stream_0_branch_taken; // @ Fetch.scala l246
  assign src_stream_0_ready = dec_stream_0_ready; // @ Fetch.scala l247
  assign dec_stream_1_valid = src_stream_1_valid; // @ Fetch.scala l249
  assign dec_stream_1_instr = src_stream_1_instr[63 : 32]; // @ Fetch.scala l250
  assign dec_stream_1_pc = (src_stream_1_pc + 32'h00000004); // @ Fetch.scala l251
  assign dec_stream_1_branch_pc = src_stream_1_branch_pc; // @ Fetch.scala l252
  assign dec_stream_1_branch_taken = src_stream_1_branch_taken; // @ Fetch.scala l253
  assign src_stream_1_ready = dec_stream_1_ready; // @ Fetch.scala l254
  always @(*) begin
    dec_stream_0_ready = dec_stream_0_m2sPipe_ready; // @ Stream.scala l367
    if((! dec_stream_0_m2sPipe_valid)) begin
      dec_stream_0_ready = 1'b1; // @ Stream.scala l368
    end
  end

  assign dec_stream_0_m2sPipe_valid = dec_stream_0_rValid; // @ Stream.scala l370
  assign dec_stream_0_m2sPipe_pc = dec_stream_0_rData_pc; // @ Stream.scala l371
  assign dec_stream_0_m2sPipe_branch_pc = dec_stream_0_rData_branch_pc; // @ Stream.scala l371
  assign dec_stream_0_m2sPipe_branch_taken = dec_stream_0_rData_branch_taken; // @ Stream.scala l371
  assign dec_stream_0_m2sPipe_instr = dec_stream_0_rData_instr; // @ Stream.scala l371
  assign fch_dst_0_valid = dec_stream_0_m2sPipe_valid; // @ Stream.scala l294
  assign dec_stream_0_m2sPipe_ready = fch_dst_0_ready; // @ Stream.scala l295
  assign fch_dst_0_pc = dec_stream_0_m2sPipe_pc; // @ Stream.scala l296
  assign fch_dst_0_branch_pc = dec_stream_0_m2sPipe_branch_pc; // @ Stream.scala l296
  assign fch_dst_0_branch_taken = dec_stream_0_m2sPipe_branch_taken; // @ Stream.scala l296
  assign fch_dst_0_instr = dec_stream_0_m2sPipe_instr; // @ Stream.scala l296
  always @(*) begin
    dec_stream_1_ready = dec_stream_1_m2sPipe_ready; // @ Stream.scala l367
    if((! dec_stream_1_m2sPipe_valid)) begin
      dec_stream_1_ready = 1'b1; // @ Stream.scala l368
    end
  end

  assign dec_stream_1_m2sPipe_valid = dec_stream_1_rValid; // @ Stream.scala l370
  assign dec_stream_1_m2sPipe_pc = dec_stream_1_rData_pc; // @ Stream.scala l371
  assign dec_stream_1_m2sPipe_branch_pc = dec_stream_1_rData_branch_pc; // @ Stream.scala l371
  assign dec_stream_1_m2sPipe_branch_taken = dec_stream_1_rData_branch_taken; // @ Stream.scala l371
  assign dec_stream_1_m2sPipe_instr = dec_stream_1_rData_instr; // @ Stream.scala l371
  assign fch_dst_1_valid = dec_stream_1_m2sPipe_valid; // @ Stream.scala l294
  assign dec_stream_1_m2sPipe_ready = fch_dst_1_ready; // @ Stream.scala l295
  assign fch_dst_1_pc = dec_stream_1_m2sPipe_pc; // @ Stream.scala l296
  assign fch_dst_1_branch_pc = dec_stream_1_m2sPipe_branch_pc; // @ Stream.scala l296
  assign fch_dst_1_branch_taken = dec_stream_1_m2sPipe_branch_taken; // @ Stream.scala l296
  assign fch_dst_1_instr = dec_stream_1_m2sPipe_instr; // @ Stream.scala l296
  assign predict_pc = fetch_1_predict_pc; // @ Fetch.scala l259
  assign predict_valid = fetch_1_predict_valid; // @ Fetch.scala l260
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      src_stream_fork2_logic_linkEnable_0 <= 1'b1; // @ Data.scala l400
      src_stream_fork2_logic_linkEnable_1 <= 1'b1; // @ Data.scala l400
      dec_stream_0_rValid <= 1'b0; // @ Data.scala l400
      dec_stream_1_rValid <= 1'b0; // @ Data.scala l400
    end else begin
      if(src_stream_0_fire) begin
        src_stream_fork2_logic_linkEnable_0 <= 1'b0; // @ Stream.scala l1003
      end
      if(src_stream_1_fire) begin
        src_stream_fork2_logic_linkEnable_1 <= 1'b0; // @ Stream.scala l1003
      end
      if(src_stream_ready) begin
        src_stream_fork2_logic_linkEnable_0 <= 1'b1; // @ Stream.scala l1009
        src_stream_fork2_logic_linkEnable_1 <= 1'b1; // @ Stream.scala l1009
      end
      if(dec_stream_0_ready) begin
        dec_stream_0_rValid <= dec_stream_0_valid; // @ Stream.scala l361
      end
      if(dec_stream_1_ready) begin
        dec_stream_1_rValid <= dec_stream_1_valid; // @ Stream.scala l361
      end
    end
  end

  always @(posedge clk) begin
    if(dec_stream_0_ready) begin
      dec_stream_0_rData_pc <= dec_stream_0_pc; // @ Stream.scala l362
      dec_stream_0_rData_branch_pc <= dec_stream_0_branch_pc; // @ Stream.scala l362
      dec_stream_0_rData_branch_taken <= dec_stream_0_branch_taken; // @ Stream.scala l362
      dec_stream_0_rData_instr <= dec_stream_0_instr; // @ Stream.scala l362
    end
    if(dec_stream_1_ready) begin
      dec_stream_1_rData_pc <= dec_stream_1_pc; // @ Stream.scala l362
      dec_stream_1_rData_branch_pc <= dec_stream_1_branch_pc; // @ Stream.scala l362
      dec_stream_1_rData_branch_taken <= dec_stream_1_branch_taken; // @ Stream.scala l362
      dec_stream_1_rData_instr <= dec_stream_1_instr; // @ Stream.scala l362
    end
  end


endmodule

module Fetch_kernel (
  input               flush,
  input               stall,
  input               interrupt_vld,
  input      [31:0]   interrupt_pc,
  input               redirect_vld,
  input      [31:0]   redirect_pc,
  output              icache_ports_cmd_valid,
  input               icache_ports_cmd_ready,
  output     [31:0]   icache_ports_cmd_addr,
  input               icache_ports_rsp_valid,
  input      [63:0]   icache_ports_rsp_data,
  output     [31:0]   predict_pc,
  output              predict_valid,
  input               branch_taken,
  input      [31:0]   branch_pc,
  output              fch_dst_valid,
  input               fch_dst_ready,
  output     [31:0]   fch_dst_pc,
  output     [31:0]   fch_dst_branch_pc,
  output              fch_dst_branch_taken,
  output     [63:0]   fch_dst_instr,
  input               clk,
  input               reset
);
  localparam FetchEnum_IDLE = 2'd0;
  localparam FetchEnum_FETCH = 2'd1;
  localparam FetchEnum_HALT = 2'd2;

  wire                pc_stream_fifo_ports_m_ports_valid;
  wire       [31:0]   pc_stream_fifo_ports_m_ports_payload;
  wire                pc_stream_fifo_ports_s_ports_ready;
  wire                pc_stream_fifo_has_space;
  wire       [31:0]   pc_stream_fifo_next_payload;
  wire                pc_stream_fifo_next_valid;
  wire                instr_stream_fifo_ports_m_ports_valid;
  wire       [63:0]   instr_stream_fifo_ports_m_ports_payload;
  wire                instr_stream_fifo_ports_s_ports_ready;
  wire                instr_stream_fifo_has_space;
  wire                branch_taken_fifo_ports_m_ports_valid;
  wire                branch_taken_fifo_ports_m_ports_payload;
  wire                branch_taken_fifo_ports_s_ports_ready;
  wire                branch_taken_fifo_has_space;
  reg        [31:0]   pc;
  reg                 fetch_valid;
  reg                 rsp_flush;
  wire                pc_in_stream_valid;
  wire                pc_in_stream_ready;
  wire       [31:0]   pc_in_stream_payload;
  wire                pc_out_stream_valid;
  wire                pc_out_stream_ready;
  wire       [31:0]   pc_out_stream_payload;
  wire                instr_in_stream_valid;
  wire                instr_in_stream_ready;
  wire       [63:0]   instr_in_stream_payload;
  wire                instr_out_stream_valid;
  wire                instr_out_stream_ready;
  wire       [63:0]   instr_out_stream_payload;
  wire                taken_in_stream_valid;
  wire                taken_in_stream_ready;
  wire                taken_in_stream_payload;
  wire                taken_out_stream_valid;
  wire                taken_out_stream_ready;
  wire                taken_out_stream_payload;
  wire                fifo_all_valid;
  wire                fifo_all_ready;
  reg        [1:0]    fetchFSM_state_next;
  reg        [1:0]    fetchFSM_state_curr;
  wire                fch_dst_isStall;
  wire                icache_ports_cmd_isStall;
  wire                icache_ports_cmd_fire;
  wire                icache_ports_cmd_fire_1;
  wire                fch_dst_fire;
  wire                fch_dst_fire_1;
  wire                icache_ports_cmd_fire_2;
  wire                fch_dst_fire_2;
  wire                icache_ports_cmd_fire_3;
  `ifndef SYNTHESIS
  reg [39:0] fetchFSM_state_next_string;
  reg [39:0] fetchFSM_state_curr_string;
  `endif


  FIFO pc_stream_fifo (
    .ports_s_ports_valid   (pc_in_stream_valid                        ), //i
    .ports_s_ports_ready   (pc_stream_fifo_ports_s_ports_ready        ), //o
    .ports_s_ports_payload (pc_in_stream_payload[31:0]                ), //i
    .ports_m_ports_valid   (pc_stream_fifo_ports_m_ports_valid        ), //o
    .ports_m_ports_ready   (pc_out_stream_ready                       ), //i
    .ports_m_ports_payload (pc_stream_fifo_ports_m_ports_payload[31:0]), //o
    .flush                 (flush                                     ), //i
    .has_space             (pc_stream_fifo_has_space                  ), //o
    .next_payload          (pc_stream_fifo_next_payload[31:0]         ), //o
    .next_valid            (pc_stream_fifo_next_valid                 ), //o
    .clk                   (clk                                       ), //i
    .reset                 (reset                                     )  //i
  );
  FIFO_1 instr_stream_fifo (
    .ports_s_ports_valid   (instr_in_stream_valid                        ), //i
    .ports_s_ports_ready   (instr_stream_fifo_ports_s_ports_ready        ), //o
    .ports_s_ports_payload (instr_in_stream_payload[63:0]                ), //i
    .ports_m_ports_valid   (instr_stream_fifo_ports_m_ports_valid        ), //o
    .ports_m_ports_ready   (instr_out_stream_ready                       ), //i
    .ports_m_ports_payload (instr_stream_fifo_ports_m_ports_payload[63:0]), //o
    .flush                 (flush                                        ), //i
    .has_space             (instr_stream_fifo_has_space                  ), //o
    .clk                   (clk                                          ), //i
    .reset                 (reset                                        )  //i
  );
  FIFO_2 branch_taken_fifo (
    .ports_s_ports_valid   (taken_in_stream_valid                  ), //i
    .ports_s_ports_ready   (branch_taken_fifo_ports_s_ports_ready  ), //o
    .ports_s_ports_payload (taken_in_stream_payload                ), //i
    .ports_m_ports_valid   (branch_taken_fifo_ports_m_ports_valid  ), //o
    .ports_m_ports_ready   (taken_out_stream_ready                 ), //i
    .ports_m_ports_payload (branch_taken_fifo_ports_m_ports_payload), //o
    .flush                 (flush                                  ), //i
    .has_space             (branch_taken_fifo_has_space            ), //o
    .clk                   (clk                                    ), //i
    .reset                 (reset                                  )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(fetchFSM_state_next)
      FetchEnum_IDLE : fetchFSM_state_next_string = "IDLE ";
      FetchEnum_FETCH : fetchFSM_state_next_string = "FETCH";
      FetchEnum_HALT : fetchFSM_state_next_string = "HALT ";
      default : fetchFSM_state_next_string = "?????";
    endcase
  end
  always @(*) begin
    case(fetchFSM_state_curr)
      FetchEnum_IDLE : fetchFSM_state_curr_string = "IDLE ";
      FetchEnum_FETCH : fetchFSM_state_curr_string = "FETCH";
      FetchEnum_HALT : fetchFSM_state_curr_string = "HALT ";
      default : fetchFSM_state_curr_string = "?????";
    endcase
  end
  `endif

  assign fifo_all_valid = ((pc_out_stream_valid && instr_out_stream_valid) && pc_stream_fifo_next_valid); // @ Fetch.scala l51
  assign fifo_all_ready = ((pc_stream_fifo_has_space && branch_taken_fifo_has_space) && instr_stream_fifo_has_space); // @ BaseType.scala l305
  assign fch_dst_isStall = (fch_dst_valid && (! fch_dst_ready)); // @ BaseType.scala l305
  always @(*) begin
    case(fetchFSM_state_curr)
      FetchEnum_IDLE : begin
        if((! fch_dst_isStall)) begin
          fetchFSM_state_next = FetchEnum_FETCH; // @ Enum.scala l151
        end else begin
          fetchFSM_state_next = FetchEnum_IDLE; // @ Enum.scala l151
        end
      end
      FetchEnum_FETCH : begin
        if((icache_ports_cmd_isStall || (! fifo_all_ready))) begin
          fetchFSM_state_next = FetchEnum_HALT; // @ Enum.scala l151
        end else begin
          fetchFSM_state_next = FetchEnum_FETCH; // @ Enum.scala l151
        end
      end
      default : begin
        if((icache_ports_cmd_ready && fifo_all_ready)) begin
          fetchFSM_state_next = FetchEnum_FETCH; // @ Enum.scala l151
        end else begin
          fetchFSM_state_next = FetchEnum_HALT; // @ Enum.scala l151
        end
      end
    endcase
  end

  assign icache_ports_cmd_isStall = (icache_ports_cmd_valid && (! icache_ports_cmd_ready)); // @ BaseType.scala l305
  assign icache_ports_cmd_fire = (icache_ports_cmd_valid && icache_ports_cmd_ready); // @ BaseType.scala l305
  assign icache_ports_cmd_fire_1 = (icache_ports_cmd_valid && icache_ports_cmd_ready); // @ BaseType.scala l305
  assign pc_in_stream_valid = icache_ports_cmd_fire_1; // @ Fetch.scala l127
  assign pc_in_stream_payload = pc; // @ Fetch.scala l128
  assign fch_dst_fire = (fch_dst_valid && fch_dst_ready); // @ BaseType.scala l305
  assign pc_out_stream_ready = fch_dst_fire; // @ Fetch.scala l129
  assign pc_in_stream_ready = pc_stream_fifo_ports_s_ports_ready; // @ Fetch.scala l130
  assign pc_out_stream_valid = pc_stream_fifo_ports_m_ports_valid; // @ Fetch.scala l131
  assign pc_out_stream_payload = pc_stream_fifo_ports_m_ports_payload; // @ Fetch.scala l131
  assign instr_in_stream_valid = ((icache_ports_rsp_valid && (! rsp_flush)) && (! flush)); // @ Fetch.scala l135
  assign instr_in_stream_payload = icache_ports_rsp_data; // @ Fetch.scala l136
  assign fch_dst_fire_1 = (fch_dst_valid && fch_dst_ready); // @ BaseType.scala l305
  assign instr_out_stream_ready = fch_dst_fire_1; // @ Fetch.scala l137
  assign instr_in_stream_ready = instr_stream_fifo_ports_s_ports_ready; // @ Fetch.scala l138
  assign instr_out_stream_valid = instr_stream_fifo_ports_m_ports_valid; // @ Fetch.scala l139
  assign instr_out_stream_payload = instr_stream_fifo_ports_m_ports_payload; // @ Fetch.scala l139
  assign icache_ports_cmd_fire_2 = (icache_ports_cmd_valid && icache_ports_cmd_ready); // @ BaseType.scala l305
  assign taken_in_stream_valid = icache_ports_cmd_fire_2; // @ Fetch.scala l154
  assign taken_in_stream_payload = branch_taken; // @ Fetch.scala l158
  assign fch_dst_fire_2 = (fch_dst_valid && fch_dst_ready); // @ BaseType.scala l305
  assign taken_out_stream_ready = fch_dst_fire_2; // @ Fetch.scala l159
  assign taken_in_stream_ready = branch_taken_fifo_ports_s_ports_ready; // @ Fetch.scala l160
  assign taken_out_stream_valid = branch_taken_fifo_ports_m_ports_valid; // @ Fetch.scala l161
  assign taken_out_stream_payload = branch_taken_fifo_ports_m_ports_payload; // @ Fetch.scala l161
  assign fch_dst_pc = pc_out_stream_payload; // @ Fetch.scala l165
  assign fch_dst_instr = instr_out_stream_payload; // @ Fetch.scala l166
  assign fch_dst_branch_taken = taken_out_stream_payload; // @ Fetch.scala l167
  assign fch_dst_valid = (fifo_all_valid && (! flush)); // @ Fetch.scala l168
  assign icache_ports_cmd_fire_3 = (icache_ports_cmd_valid && icache_ports_cmd_ready); // @ BaseType.scala l305
  assign predict_valid = icache_ports_cmd_fire_3; // @ Fetch.scala l187
  assign predict_pc = pc; // @ Fetch.scala l188
  assign fch_dst_branch_pc = pc_stream_fifo_next_payload; // @ Fetch.scala l190
  assign icache_ports_cmd_valid = (fetch_valid && (! flush)); // @ Fetch.scala l192
  assign icache_ports_cmd_addr = pc; // @ Fetch.scala l196
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      pc <= 32'h30000000; // @ Data.scala l400
      fetch_valid <= 1'b0; // @ Data.scala l400
      rsp_flush <= 1'b0; // @ Data.scala l400
      fetchFSM_state_curr <= FetchEnum_IDLE; // @ Data.scala l400
    end else begin
      fetchFSM_state_curr <= fetchFSM_state_next; // @ Reg.scala l39
      if(((! icache_ports_cmd_ready) && ((interrupt_vld || redirect_vld) || branch_taken))) begin
        rsp_flush <= 1'b1; // @ Fetch.scala l97
      end else begin
        if(icache_ports_rsp_valid) begin
          rsp_flush <= 1'b0; // @ Fetch.scala l100
        end
      end
      if((fetchFSM_state_next == FetchEnum_FETCH)) begin
        fetch_valid <= 1'b1; // @ Fetch.scala l105
      end else begin
        fetch_valid <= 1'b0; // @ Fetch.scala l108
      end
      if(interrupt_vld) begin
        pc <= interrupt_pc; // @ Fetch.scala l112
      end else begin
        if(redirect_vld) begin
          pc <= redirect_pc; // @ Fetch.scala l115
        end else begin
          if(branch_taken) begin
            pc <= branch_pc; // @ Fetch.scala l118
          end else begin
            if(icache_ports_cmd_fire) begin
              pc <= (pc + 32'h00000008); // @ Fetch.scala l121
            end
          end
        end
      end
    end
  end


endmodule

module FIFO_2 (
  input               ports_s_ports_valid,
  output              ports_s_ports_ready,
  input               ports_s_ports_payload,
  output              ports_m_ports_valid,
  input               ports_m_ports_ready,
  output              ports_m_ports_payload,
  input               flush,
  output              has_space,
  input               clk,
  input               reset
);

  reg                 tmp_ports_m_ports_payload;
  reg        [2:0]    read_ptr;
  reg        [2:0]    write_ptr;
  wire       [1:0]    read_addr;
  wire       [1:0]    next_read_addr;
  wire       [1:0]    write_addr;
  wire                fifo_empty;
  wire                fifo_full;
  reg                 fifo_ram_0;
  reg                 fifo_ram_1;
  reg                 fifo_ram_2;
  reg                 fifo_ram_3;
  wire                ports_m_ports_fire;
  wire       [3:0]    tmp_1;
  wire                ports_s_ports_fire;
  reg        [2:0]    empty_entry_cnt;
  reg        [2:0]    empty_entry_cnt_next;
  wire                ports_s_ports_fire_1;
  wire                ports_m_ports_fire_1;
  wire                ports_s_ports_fire_2;
  wire                ports_m_ports_fire_2;

  always @(*) begin
    case(read_addr)
      2'b00 : tmp_ports_m_ports_payload = fifo_ram_0;
      2'b01 : tmp_ports_m_ports_payload = fifo_ram_1;
      2'b10 : tmp_ports_m_ports_payload = fifo_ram_2;
      default : tmp_ports_m_ports_payload = fifo_ram_3;
    endcase
  end

  assign read_addr = read_ptr[1 : 0]; // @ BaseType.scala l299
  assign next_read_addr = (read_addr + 2'b01); // @ BaseType.scala l299
  assign write_addr = write_ptr[1 : 0]; // @ BaseType.scala l299
  assign fifo_empty = (read_ptr == write_ptr); // @ BaseType.scala l305
  assign fifo_full = ((read_addr == write_addr) && (read_ptr[2] != write_ptr[2])); // @ BaseType.scala l305
  assign ports_m_ports_fire = (ports_m_ports_valid && ports_m_ports_ready); // @ BaseType.scala l305
  assign tmp_1 = ({3'd0,1'b1} <<< write_addr); // @ BaseType.scala l299
  assign ports_s_ports_fire = (ports_s_ports_valid && ports_s_ports_ready); // @ BaseType.scala l305
  assign ports_s_ports_fire_1 = (ports_s_ports_valid && ports_s_ports_ready); // @ BaseType.scala l305
  assign ports_m_ports_fire_1 = (ports_m_ports_valid && ports_m_ports_ready); // @ BaseType.scala l305
  always @(*) begin
    if((ports_s_ports_fire_1 && (! ports_m_ports_fire_1))) begin
      empty_entry_cnt_next = (empty_entry_cnt - 3'b001); // @ FIFO.scala l51
    end else begin
      if(((! ports_s_ports_fire_2) && ports_m_ports_fire_2)) begin
        empty_entry_cnt_next = (empty_entry_cnt + 3'b001); // @ FIFO.scala l54
      end else begin
        empty_entry_cnt_next = empty_entry_cnt; // @ FIFO.scala l57
      end
    end
  end

  assign ports_s_ports_fire_2 = (ports_s_ports_valid && ports_s_ports_ready); // @ BaseType.scala l305
  assign ports_m_ports_fire_2 = (ports_m_ports_valid && ports_m_ports_ready); // @ BaseType.scala l305
  assign ports_s_ports_ready = (! fifo_full); // @ FIFO.scala l68
  assign ports_m_ports_valid = (! fifo_empty); // @ FIFO.scala l69
  assign ports_m_ports_payload = tmp_ports_m_ports_payload; // @ FIFO.scala l70
  assign has_space = (3'b001 < empty_entry_cnt_next); // @ FIFO.scala l71
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      read_ptr <= 3'b000; // @ Data.scala l400
      write_ptr <= 3'b000; // @ Data.scala l400
      empty_entry_cnt <= 3'b100; // @ Data.scala l400
    end else begin
      if(flush) begin
        read_ptr <= 3'b000; // @ FIFO.scala l34
      end else begin
        if(ports_m_ports_fire) begin
          read_ptr <= (read_ptr + 3'b001); // @ FIFO.scala l37
        end
      end
      if(flush) begin
        write_ptr <= 3'b000; // @ FIFO.scala l40
      end else begin
        if(ports_s_ports_fire) begin
          write_ptr <= (write_ptr + 3'b001); // @ FIFO.scala l43
        end
      end
      if(flush) begin
        empty_entry_cnt <= 3'b100; // @ FIFO.scala l60
      end else begin
        empty_entry_cnt <= empty_entry_cnt_next; // @ FIFO.scala l63
      end
    end
  end

  always @(posedge clk) begin
    if(!flush) begin
      if(ports_s_ports_fire) begin
        if(tmp_1[0]) begin
          fifo_ram_0 <= ports_s_ports_payload; // @ FIFO.scala l44
        end
        if(tmp_1[1]) begin
          fifo_ram_1 <= ports_s_ports_payload; // @ FIFO.scala l44
        end
        if(tmp_1[2]) begin
          fifo_ram_2 <= ports_s_ports_payload; // @ FIFO.scala l44
        end
        if(tmp_1[3]) begin
          fifo_ram_3 <= ports_s_ports_payload; // @ FIFO.scala l44
        end
      end
    end
  end


endmodule

module FIFO_1 (
  input               ports_s_ports_valid,
  output              ports_s_ports_ready,
  input      [63:0]   ports_s_ports_payload,
  output              ports_m_ports_valid,
  input               ports_m_ports_ready,
  output     [63:0]   ports_m_ports_payload,
  input               flush,
  output              has_space,
  input               clk,
  input               reset
);

  reg        [63:0]   tmp_ports_m_ports_payload;
  reg        [2:0]    read_ptr;
  reg        [2:0]    write_ptr;
  wire       [1:0]    read_addr;
  wire       [1:0]    next_read_addr;
  wire       [1:0]    write_addr;
  wire                fifo_empty;
  wire                fifo_full;
  reg        [63:0]   fifo_ram_0;
  reg        [63:0]   fifo_ram_1;
  reg        [63:0]   fifo_ram_2;
  reg        [63:0]   fifo_ram_3;
  wire                ports_m_ports_fire;
  wire       [3:0]    tmp_1;
  wire                ports_s_ports_fire;
  reg        [2:0]    empty_entry_cnt;
  reg        [2:0]    empty_entry_cnt_next;
  wire                ports_s_ports_fire_1;
  wire                ports_m_ports_fire_1;
  wire                ports_s_ports_fire_2;
  wire                ports_m_ports_fire_2;

  always @(*) begin
    case(read_addr)
      2'b00 : tmp_ports_m_ports_payload = fifo_ram_0;
      2'b01 : tmp_ports_m_ports_payload = fifo_ram_1;
      2'b10 : tmp_ports_m_ports_payload = fifo_ram_2;
      default : tmp_ports_m_ports_payload = fifo_ram_3;
    endcase
  end

  assign read_addr = read_ptr[1 : 0]; // @ BaseType.scala l299
  assign next_read_addr = (read_addr + 2'b01); // @ BaseType.scala l299
  assign write_addr = write_ptr[1 : 0]; // @ BaseType.scala l299
  assign fifo_empty = (read_ptr == write_ptr); // @ BaseType.scala l305
  assign fifo_full = ((read_addr == write_addr) && (read_ptr[2] != write_ptr[2])); // @ BaseType.scala l305
  assign ports_m_ports_fire = (ports_m_ports_valid && ports_m_ports_ready); // @ BaseType.scala l305
  assign tmp_1 = ({3'd0,1'b1} <<< write_addr); // @ BaseType.scala l299
  assign ports_s_ports_fire = (ports_s_ports_valid && ports_s_ports_ready); // @ BaseType.scala l305
  assign ports_s_ports_fire_1 = (ports_s_ports_valid && ports_s_ports_ready); // @ BaseType.scala l305
  assign ports_m_ports_fire_1 = (ports_m_ports_valid && ports_m_ports_ready); // @ BaseType.scala l305
  always @(*) begin
    if((ports_s_ports_fire_1 && (! ports_m_ports_fire_1))) begin
      empty_entry_cnt_next = (empty_entry_cnt - 3'b001); // @ FIFO.scala l51
    end else begin
      if(((! ports_s_ports_fire_2) && ports_m_ports_fire_2)) begin
        empty_entry_cnt_next = (empty_entry_cnt + 3'b001); // @ FIFO.scala l54
      end else begin
        empty_entry_cnt_next = empty_entry_cnt; // @ FIFO.scala l57
      end
    end
  end

  assign ports_s_ports_fire_2 = (ports_s_ports_valid && ports_s_ports_ready); // @ BaseType.scala l305
  assign ports_m_ports_fire_2 = (ports_m_ports_valid && ports_m_ports_ready); // @ BaseType.scala l305
  assign ports_s_ports_ready = (! fifo_full); // @ FIFO.scala l68
  assign ports_m_ports_valid = (! fifo_empty); // @ FIFO.scala l69
  assign ports_m_ports_payload = tmp_ports_m_ports_payload; // @ FIFO.scala l70
  assign has_space = (3'b001 < empty_entry_cnt_next); // @ FIFO.scala l71
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      read_ptr <= 3'b000; // @ Data.scala l400
      write_ptr <= 3'b000; // @ Data.scala l400
      empty_entry_cnt <= 3'b100; // @ Data.scala l400
    end else begin
      if(flush) begin
        read_ptr <= 3'b000; // @ FIFO.scala l34
      end else begin
        if(ports_m_ports_fire) begin
          read_ptr <= (read_ptr + 3'b001); // @ FIFO.scala l37
        end
      end
      if(flush) begin
        write_ptr <= 3'b000; // @ FIFO.scala l40
      end else begin
        if(ports_s_ports_fire) begin
          write_ptr <= (write_ptr + 3'b001); // @ FIFO.scala l43
        end
      end
      if(flush) begin
        empty_entry_cnt <= 3'b100; // @ FIFO.scala l60
      end else begin
        empty_entry_cnt <= empty_entry_cnt_next; // @ FIFO.scala l63
      end
    end
  end

  always @(posedge clk) begin
    if(!flush) begin
      if(ports_s_ports_fire) begin
        if(tmp_1[0]) begin
          fifo_ram_0 <= ports_s_ports_payload; // @ FIFO.scala l44
        end
        if(tmp_1[1]) begin
          fifo_ram_1 <= ports_s_ports_payload; // @ FIFO.scala l44
        end
        if(tmp_1[2]) begin
          fifo_ram_2 <= ports_s_ports_payload; // @ FIFO.scala l44
        end
        if(tmp_1[3]) begin
          fifo_ram_3 <= ports_s_ports_payload; // @ FIFO.scala l44
        end
      end
    end
  end


endmodule

module FIFO (
  input               ports_s_ports_valid,
  output              ports_s_ports_ready,
  input      [31:0]   ports_s_ports_payload,
  output              ports_m_ports_valid,
  input               ports_m_ports_ready,
  output     [31:0]   ports_m_ports_payload,
  input               flush,
  output              has_space,
  output     [31:0]   next_payload,
  output              next_valid,
  input               clk,
  input               reset
);

  reg        [31:0]   tmp_ports_m_ports_payload;
  reg        [31:0]   tmp_next_payload;
  reg        [2:0]    read_ptr;
  reg        [2:0]    write_ptr;
  wire       [1:0]    read_addr;
  wire       [1:0]    next_read_addr;
  wire       [1:0]    write_addr;
  wire                fifo_empty;
  wire                fifo_full;
  reg        [31:0]   fifo_ram_0;
  reg        [31:0]   fifo_ram_1;
  reg        [31:0]   fifo_ram_2;
  reg        [31:0]   fifo_ram_3;
  wire                ports_m_ports_fire;
  wire       [3:0]    tmp_1;
  wire                ports_s_ports_fire;
  reg        [2:0]    empty_entry_cnt;
  reg        [2:0]    empty_entry_cnt_next;
  wire                ports_s_ports_fire_1;
  wire                ports_m_ports_fire_1;
  wire                ports_s_ports_fire_2;
  wire                ports_m_ports_fire_2;
  reg        [2:0]    fifo_cnt;
  wire                ports_s_ports_fire_3;
  wire                ports_m_ports_fire_3;
  wire                ports_s_ports_fire_4;
  wire                ports_m_ports_fire_4;

  always @(*) begin
    case(read_addr)
      2'b00 : tmp_ports_m_ports_payload = fifo_ram_0;
      2'b01 : tmp_ports_m_ports_payload = fifo_ram_1;
      2'b10 : tmp_ports_m_ports_payload = fifo_ram_2;
      default : tmp_ports_m_ports_payload = fifo_ram_3;
    endcase
  end

  always @(*) begin
    case(next_read_addr)
      2'b00 : tmp_next_payload = fifo_ram_0;
      2'b01 : tmp_next_payload = fifo_ram_1;
      2'b10 : tmp_next_payload = fifo_ram_2;
      default : tmp_next_payload = fifo_ram_3;
    endcase
  end

  assign read_addr = read_ptr[1 : 0]; // @ BaseType.scala l299
  assign next_read_addr = (read_addr + 2'b01); // @ BaseType.scala l299
  assign write_addr = write_ptr[1 : 0]; // @ BaseType.scala l299
  assign fifo_empty = (read_ptr == write_ptr); // @ BaseType.scala l305
  assign fifo_full = ((read_addr == write_addr) && (read_ptr[2] != write_ptr[2])); // @ BaseType.scala l305
  assign ports_m_ports_fire = (ports_m_ports_valid && ports_m_ports_ready); // @ BaseType.scala l305
  assign tmp_1 = ({3'd0,1'b1} <<< write_addr); // @ BaseType.scala l299
  assign ports_s_ports_fire = (ports_s_ports_valid && ports_s_ports_ready); // @ BaseType.scala l305
  assign ports_s_ports_fire_1 = (ports_s_ports_valid && ports_s_ports_ready); // @ BaseType.scala l305
  assign ports_m_ports_fire_1 = (ports_m_ports_valid && ports_m_ports_ready); // @ BaseType.scala l305
  always @(*) begin
    if((ports_s_ports_fire_1 && (! ports_m_ports_fire_1))) begin
      empty_entry_cnt_next = (empty_entry_cnt - 3'b001); // @ FIFO.scala l51
    end else begin
      if(((! ports_s_ports_fire_2) && ports_m_ports_fire_2)) begin
        empty_entry_cnt_next = (empty_entry_cnt + 3'b001); // @ FIFO.scala l54
      end else begin
        empty_entry_cnt_next = empty_entry_cnt; // @ FIFO.scala l57
      end
    end
  end

  assign ports_s_ports_fire_2 = (ports_s_ports_valid && ports_s_ports_ready); // @ BaseType.scala l305
  assign ports_m_ports_fire_2 = (ports_m_ports_valid && ports_m_ports_ready); // @ BaseType.scala l305
  assign ports_s_ports_ready = (! fifo_full); // @ FIFO.scala l68
  assign ports_m_ports_valid = (! fifo_empty); // @ FIFO.scala l69
  assign ports_m_ports_payload = tmp_ports_m_ports_payload; // @ FIFO.scala l70
  assign has_space = (3'b001 < empty_entry_cnt_next); // @ FIFO.scala l71
  assign next_payload = tmp_next_payload; // @ FIFO.scala l78
  assign ports_s_ports_fire_3 = (ports_s_ports_valid && ports_s_ports_ready); // @ BaseType.scala l305
  assign ports_m_ports_fire_3 = (ports_m_ports_valid && ports_m_ports_ready); // @ BaseType.scala l305
  assign ports_s_ports_fire_4 = (ports_s_ports_valid && ports_s_ports_ready); // @ BaseType.scala l305
  assign ports_m_ports_fire_4 = (ports_m_ports_valid && ports_m_ports_ready); // @ BaseType.scala l305
  assign next_valid = (3'b010 <= fifo_cnt); // @ FIFO.scala l90
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      read_ptr <= 3'b000; // @ Data.scala l400
      write_ptr <= 3'b000; // @ Data.scala l400
      empty_entry_cnt <= 3'b100; // @ Data.scala l400
      fifo_cnt <= 3'b000; // @ Data.scala l400
    end else begin
      if(flush) begin
        read_ptr <= 3'b000; // @ FIFO.scala l34
      end else begin
        if(ports_m_ports_fire) begin
          read_ptr <= (read_ptr + 3'b001); // @ FIFO.scala l37
        end
      end
      if(flush) begin
        write_ptr <= 3'b000; // @ FIFO.scala l40
      end else begin
        if(ports_s_ports_fire) begin
          write_ptr <= (write_ptr + 3'b001); // @ FIFO.scala l43
        end
      end
      if(flush) begin
        empty_entry_cnt <= 3'b100; // @ FIFO.scala l60
      end else begin
        empty_entry_cnt <= empty_entry_cnt_next; // @ FIFO.scala l63
      end
      if(flush) begin
        fifo_cnt <= 3'b000; // @ FIFO.scala l80
      end else begin
        if((ports_s_ports_fire_3 && (! ports_m_ports_fire_3))) begin
          fifo_cnt <= (fifo_cnt + 3'b001); // @ FIFO.scala l83
        end else begin
          if(((! ports_s_ports_fire_4) && ports_m_ports_fire_4)) begin
            fifo_cnt <= (fifo_cnt - 3'b001); // @ FIFO.scala l86
          end
        end
      end
    end
  end

  always @(posedge clk) begin
    if(!flush) begin
      if(ports_s_ports_fire) begin
        if(tmp_1[0]) begin
          fifo_ram_0 <= ports_s_ports_payload; // @ FIFO.scala l44
        end
        if(tmp_1[1]) begin
          fifo_ram_1 <= ports_s_ports_payload; // @ FIFO.scala l44
        end
        if(tmp_1[2]) begin
          fifo_ram_2 <= ports_s_ports_payload; // @ FIFO.scala l44
        end
        if(tmp_1[3]) begin
          fifo_ram_3 <= ports_s_ports_payload; // @ FIFO.scala l44
        end
      end
    end
  end


endmodule
