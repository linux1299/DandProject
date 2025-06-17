cmd_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/utils/timer.o := unused

source_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/utils/timer.o := src/utils/timer.c

deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/utils/timer.o := \
    $(wildcard include/config/timer/gettimeofday.h) \
    $(wildcard include/config/timer/clock/gettime.h) \
  /home/lin/oscpu/NEMU/include/common.h \
    $(wildcard include/config/mbase.h) \
    $(wildcard include/config/msize.h) \
    $(wildcard include/config/isa64.h) \
  /home/lin/oscpu/NEMU/include/macro.h \
  /home/lin/oscpu/NEMU/include/debug.h \
  /home/lin/oscpu/NEMU/include/utils.h \
    $(wildcard include/config/debug.h) \

/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/utils/timer.o: $(deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/utils/timer.o)

$(deps_/home/lin/oscpu/NEMU/build/obj-riscv64-nemu-interpreter-so/src/utils/timer.o):
