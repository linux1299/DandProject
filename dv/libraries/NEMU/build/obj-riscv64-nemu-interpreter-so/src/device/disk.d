cmd_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/disk.o := unused

source_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/disk.o := src/device/disk.c

deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/disk.o := \
    $(wildcard include/config/disk/ctl/port.h) \
    $(wildcard include/config/disk/ctl/mmio.h) \
    $(wildcard include/config/disk/img/path.h) \
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
  /home/lin/oscpu/NEMU/include/memory/paddr.h \
    $(wildcard include/config/mode/user.h) \
    $(wildcard include/config/pc/reset/offset.h) \
    $(wildcard include/config/difftest/store/commit.h) \
  /home/lin/oscpu/NEMU/include/isa.h \
  /home/lin/oscpu/NEMU/src/isa/riscv64/include/isa-def.h \
    $(wildcard include/config/rvv/010.h) \

/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/disk.o: $(deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/disk.o)

$(deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/disk.o):
