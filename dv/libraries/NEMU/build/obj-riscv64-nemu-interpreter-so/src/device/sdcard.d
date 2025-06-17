cmd_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/sdcard.o := unused

source_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/sdcard.o := src/device/sdcard.c

deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/sdcard.o := \
    $(wildcard include/config/sdcard/ctl/mmio.h) \
    $(wildcard include/config/sdcard/img/path.h) \
  /home/lin/oscpu/NEMU/include/device/map.h \
  /home/lin/oscpu/NEMU/include/cpu/difftest.h \
    $(wildcard include/config/difftest.h) \
  /home/lin/oscpu/NEMU/include/common.h \
    $(wildcard include/config/mbase.h) \
    $(wildcard include/config/msize.h) \
    $(wildcard include/config/isa64.h) \
  /home/lin/oscpu/NEMU/include/macro.h \
  /home/lin/oscpu/NEMU/include/debug.h \
  /home/lin/oscpu/NEMU/include/utils.h \
    $(wildcard include/config/debug.h) \
  /home/lin/oscpu/NEMU/lib-include/difftest.h \
  src/device/mmc.h \

/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/sdcard.o: $(deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/sdcard.o)

$(deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/sdcard.o):
