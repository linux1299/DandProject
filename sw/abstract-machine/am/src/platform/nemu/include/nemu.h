#ifndef NEMU_H__
#define NEMU_H__

#include <klib-macros.h>

#include ISA_H // the macro `ISA_H` is defined in CFLAGS
               // it will be expanded as "x86/x86.h", "mips/mips32.h", ...

#if defined(__ISA_X86__)
# define nemu_trap(code) asm volatile ("int3" : :"a"(code))
#elif defined(__ISA_MIPS32__)
# define nemu_trap(code) asm volatile ("move $v0, %0; sdbbp" : :"r"(code))
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define nemu_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))
// # define nemu_trap(code) asm volatile(".word 0x0000006b");
#elif
# error unsupported ISA __ISA__
#endif

#if defined(__ARCH_X86_NEMU)
# define DEVICE_BASE 0x0
#else
// # define DEVICE_BASE 0xa0000000
# define DEVICE_BASE 0x10000000
#endif

// #define MMIO_BASE 0xa0000000
#define MMIO_BASE 0x10000000

// #define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
// #define KBD_ADDR        (DEVICE_BASE + 0x0000060)
// #define RTC_ADDR        (DEVICE_BASE + 0x0000048)

// #define KBD_ADDR        (DEVICE_BASE + 0x0000040)
// #define RTC_ADDR        (DEVICE_BASE + 0x0000080)

#define SERIAL_PORT     (DEVICE_BASE)             // serial
#define KBD_ADDR        (DEVICE_BASE + 0x0000020) // kerboard
#define RTC_ADDR        (DEVICE_BASE + 0x0000040) // timer
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100) // MMIO address of the VGA controller
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200) // MMIO address of the audio controller
#define DISK_ADDR       (DEVICE_BASE + 0x0000300) // MMIO address of the disk controller

#define FB_ADDR         (MMIO_BASE   + 0x1000000) // Physical address of the VGA frame buffer
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000) // Physical address of the audio stream buffer

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
#define NEMU_PADDR_SPACE \
  RANGE(&_pmem_start, PMEM_END), \
  RANGE(FB_ADDR, FB_ADDR + 0x200000), \
  RANGE(MMIO_BASE, MMIO_BASE + 0x1000) /* serial, rtc, screen, keyboard */

typedef uintptr_t PTE;

#define PGSIZE    4096

#endif
