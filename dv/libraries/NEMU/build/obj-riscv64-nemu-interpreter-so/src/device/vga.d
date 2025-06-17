cmd_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/vga.o := unused

source_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/vga.o := src/device/vga.c

deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/vga.o := \
    $(wildcard include/config/vga/size/800x600.h) \
    $(wildcard include/config/vga/show/screen.h) \
    $(wildcard include/config/vga/size/400x300.h) \
    $(wildcard include/config/vga/ctl/port.h) \
    $(wildcard include/config/vga/ctl/mmio.h) \
    $(wildcard include/config/fb/addr.h) \
  /home/lin/oscpu/NEMU/include/common.h \
    $(wildcard include/config/mbase.h) \
    $(wildcard include/config/msize.h) \
    $(wildcard include/config/isa64.h) \
  /home/lin/oscpu/NEMU/include/macro.h \
  /home/lin/oscpu/NEMU/include/debug.h \
  /home/lin/oscpu/NEMU/include/utils.h \
    $(wildcard include/config/debug.h) \
  /home/lin/oscpu/NEMU/include/device/map.h \
  /home/lin/oscpu/NEMU/include/cpu/difftest.h \
    $(wildcard include/config/difftest.h) \
  /home/lin/oscpu/NEMU/lib-include/difftest.h \

/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/vga.o: $(deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/vga.o)

$(deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/vga.o):
