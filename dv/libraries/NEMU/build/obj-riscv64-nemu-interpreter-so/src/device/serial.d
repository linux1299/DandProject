cmd_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/serial.o := unused

source_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/serial.o := src/device/serial.c

deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/serial.o := \
    $(wildcard include/config/serial/input/fifo.h) \
    $(wildcard include/config/serial/uartlite.h) \
    $(wildcard include/config/serial/port.h) \
    $(wildcard include/config/serial/mmio.h) \
  /home/lin/oscpu/NEMU/include/utils.h \
    $(wildcard include/config/debug.h) \
  /home/lin/oscpu/NEMU/include/common.h \
    $(wildcard include/config/mbase.h) \
    $(wildcard include/config/msize.h) \
    $(wildcard include/config/isa64.h) \
  /home/lin/oscpu/NEMU/include/macro.h \
  /home/lin/oscpu/NEMU/include/debug.h \
  /home/lin/oscpu/NEMU/include/device/map.h \
  /home/lin/oscpu/NEMU/include/cpu/difftest.h \
    $(wildcard include/config/difftest.h) \
  /home/lin/oscpu/NEMU/lib-include/difftest.h \

/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/serial.o: $(deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/serial.o)

$(deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/serial.o):
