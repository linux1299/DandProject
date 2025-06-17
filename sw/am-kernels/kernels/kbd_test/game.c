#include <am.h>
#include <klib.h>
#include <klib-macros.h>

char lut[256] = {
  [AM_KEY_A] = 'A', [AM_KEY_B] = 'B', [AM_KEY_C] = 'C', [AM_KEY_D] = 'D',
  [AM_KEY_E] = 'E', [AM_KEY_F] = 'F', [AM_KEY_G] = 'G', [AM_KEY_H] = 'H',
  [AM_KEY_I] = 'I', [AM_KEY_J] = 'J', [AM_KEY_K] = 'K', [AM_KEY_L] = 'L',
  [AM_KEY_M] = 'M', [AM_KEY_N] = 'N', [AM_KEY_O] = 'O', [AM_KEY_P] = 'P',
  [AM_KEY_Q] = 'Q', [AM_KEY_R] = 'R', [AM_KEY_S] = 'S', [AM_KEY_T] = 'T',
  [AM_KEY_U] = 'U', [AM_KEY_V] = 'V', [AM_KEY_W] = 'W', [AM_KEY_X] = 'X',
  [AM_KEY_Y] = 'Y', [AM_KEY_Z] = 'Z',
  [AM_KEY_UP] = '1', [AM_KEY_DOWN] = '2', [AM_KEY_LEFT] = '3', [AM_KEY_RIGHT] = '4',
};

int main() {
  ioe_init();

  panic_on(!io_read(AM_TIMER_CONFIG).present, "requires timer");
  panic_on(!io_read(AM_INPUT_CONFIG).present, "requires keyboard");

  printf("Type 'ESC' to exit\n");

  while (1) {
    AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);

    if (ev.keydown && ev.keycode == AM_KEY_ESCAPE){
      printf("AM_KEY_ESCAPE keycode = \n", (int)ev.keycode);
      halt(0);
    }
      
    if (ev.keydown && lut[ev.keycode]) {
      printf("press keycode = %d ", (int)ev.keycode);
      printf("press key = %c\n", lut[ev.keycode]);
    }
  }
}
