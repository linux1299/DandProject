`timescale 1ns / 1ps

module fifo_2write #(
    parameter PTR_WIDTH  = 4,
    parameter FIFO_DEPTH = 16,
    parameter FIFO_WIDTH = 32
)
(
    input                       clk,
    input                       rst_n,
    input                       read,
    input                       write_0,
    input                       write_1,
    input  [FIFO_WIDTH - 1 : 0] fifo_in_0,
    input  [FIFO_WIDTH - 1 : 0] fifo_in_1,
    output [FIFO_WIDTH - 1 : 0] fifo_out,
    output                      fifo_empty,
    output                      fifo_full
);

reg     [PTR_WIDTH      : 0]    read_ptr;
reg     [PTR_WIDTH      : 0]    write_ptr;
wire    [PTR_WIDTH - 1  : 0]    read_addr;
wire    [PTR_WIDTH - 1  : 0]    write_addr;

wire                            read_msb;
wire                            write_msb;

reg     [FIFO_WIDTH - 1 : 0]    fifo_ram [FIFO_DEPTH - 1 : 0];

// ---------- read and write addr ----------
assign read_addr  = read_ptr[PTR_WIDTH-1:0];
assign write_addr = write_ptr[PTR_WIDTH-1:0];
assign read_msb   = read_ptr[PTR_WIDTH];
assign write_msb  = write_ptr[PTR_WIDTH];


// --------------- read pointer ------------
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        read_ptr <= 0;
    end
    // When read and FIFO is not empty, read is valid
    else if (read && !fifo_empty) begin
        read_ptr <= read_ptr + 1'b1;
    end
end

// ----- write pointer & FIFO RAM ----------
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        write_ptr            <= 0;
    end
    else if (write_0 && write_1 && !fifo_full) begin
        write_ptr            <= write_ptr + 2;
        fifo_ram[write_addr] <= fifo_in_0;
        fifo_ram[write_addr+1] <= fifo_in_1;
    end
    else if (write_0 && !fifo_full) begin
        write_ptr            <= write_ptr + 1'b1;
        fifo_ram[write_addr] <= fifo_in_0;
    end
end

assign fifo_out   = fifo_ram[read_addr];

assign fifo_empty = (write_ptr == read_ptr);

// When write pointer wrapback, fifo is full
assign fifo_full  = (write_addr == read_addr)
                 && (write_msb  != read_msb);

endmodule