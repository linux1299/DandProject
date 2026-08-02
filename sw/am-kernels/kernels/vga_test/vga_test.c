#include <am.h>
#include <klib-macros.h>

#define SCREEN_WIDTH  400
#define SCREEN_HEIGHT 300
#define BAND_HEIGHT   100

// static const uint32_t rgb[] = {
//   0x00ff0000,  // red
//   0x0000ff00,  // green
//   0x000000ff,  // blue
// };

// static uint32_t image[SCREEN_HEIGHT][SCREEN_WIDTH];

// static void display_rgb_bands() {
//   for (int y = 0; y < SCREEN_HEIGHT; y++) {
//     for (int x = 0; x < SCREEN_WIDTH; x++) {
//       image[y][x] = rgb[y / BAND_HEIGHT];
//     }
//   }

//   io_write(AM_GPU_FBDRAW, 0, 0, &image[0][0],
//       SCREEN_WIDTH, SCREEN_HEIGHT, true);
// }

int main() {
  ioe_init();

  // display_rgb_bands();

  while(1);
}
