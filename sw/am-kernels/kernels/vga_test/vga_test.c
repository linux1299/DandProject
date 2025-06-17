#include <stdlib.h>
#include <stdio.h>
#include <am.h>
#include <amdev.h>
#include <klib-macros.h>

// #define TILE_W 16

// typedef struct {
//   int width, height;
// } dim_t;

// typedef struct {
//   int top, bottom, left, right;
// } rect_t;

// static void draw_tile(int y, int x, uint32_t color) {
//   static uint32_t buf[TILE_W * TILE_W];
//   uint32_t last_color = 0xffffffff;
//   if (last_color != color) {
//     for (int i = 0; i < LENGTH(buf); i ++) { buf[i] = color; }
//   }
//   io_write(AM_GPU_FBDRAW, x * TILE_W, y * TILE_W, buf, TILE_W, TILE_W, false);
// }

// static void print_board(rect_t board, uint32_t color) {
//   for (int i = board.left; i <= board.right; i++) {
//     draw_tile(board.top, i, color);
//     draw_tile(board.bottom, i, color);
//   }
//   for (int i = board.top; i <= board.bottom; i++) {
//     draw_tile(i, board.left, color);
//     draw_tile(i, board.right, color);
//   }
// }

int main() {
  // rect_t board;
  // dim_t screen;
  // dim_t game_size;

  printf("ioe init start\n");
  ioe_init();
  printf("ioe init done\n");

  // screen.height = io_read(AM_GPU_CONFIG).height / TILE_W;
  // screen.width  = io_read(AM_GPU_CONFIG).width / TILE_W;
  // game_size.width  = screen.width - 2;
  // game_size.height = screen.height - 2;
  // board.left   = screen.width / 2 - game_size.width / 2 - 1;
  // board.right  = board.left + game_size.width + 1;
  // board.top    = screen.height / 2 - game_size.height / 2 - 1;
  // board.bottom = board.top + game_size.height + 1;

  // uint32_t color_green = 0x0000ff00; // G
  // // uint32_t color_red   = 0x00ff0000; // R

  // // printf("time is %d us\n", (int)io_read(AM_TIMER_UPTIME).us);
  // // while(io_read(AM_TIMER_UPTIME).us < 1000){
  // //   printf("time is %d us\n", (int)io_read(AM_TIMER_UPTIME).us);
  // //   print_board(board, color_red);
  // // }

  // while(1){
  //   print_board(board, color_green);
  // }

  while(1);
  
}
