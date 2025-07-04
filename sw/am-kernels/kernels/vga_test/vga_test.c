#include <stdlib.h>
#include <stdio.h>
#include <am.h>
#include <amdev.h>
#include <klib-macros.h>

int main() {

  printf("ioe init start\n");
  ioe_init();
  printf("ioe init done\n");

  while(1);
  
}
