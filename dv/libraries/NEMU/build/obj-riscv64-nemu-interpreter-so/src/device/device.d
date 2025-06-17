cmd_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/device.o := unused

source_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/device.o := src/device/device.c

deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/device.o := \
    $(wildcard include/config/has/vga.h) \
    $(wildcard include/config/has/keyboard.h) \
    $(wildcard include/config/has/serial.h) \
    $(wildcard include/config/has/uartlite.h) \
    $(wildcard include/config/has/timer.h) \
    $(wildcard include/config/has/audio.h) \
    $(wildcard include/config/has/disk.h) \
    $(wildcard include/config/has/sdcard.h) \
  /home/lin/oscpu/NEMU/include/common.h \
    $(wildcard include/config/mbase.h) \
    $(wildcard include/config/msize.h) \
    $(wildcard include/config/isa64.h) \
  /home/lin/oscpu/NEMU/include/macro.h \
  /home/lin/oscpu/NEMU/include/debug.h \
  /home/lin/oscpu/NEMU/include/utils.h \
    $(wildcard include/config/debug.h) \
  /home/lin/oscpu/NEMU/include/device/alarm.h \

/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/device.o: $(deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/device.o)

$(deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/device/device.o):
