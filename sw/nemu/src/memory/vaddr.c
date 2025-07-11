#include <isa.h>
#include <memory/paddr.h>

word_t vaddr_ifetch(vaddr_t addr, int len) {
  // printf("vaddr_ifetch addr = %x\n", (int)addr);
  return paddr_read(addr, len);
}

word_t vaddr_read(vaddr_t addr, int len) {
  // printf("vaddr_read addr = %x\n", (int)addr);
  return paddr_read(addr, len);
}

void vaddr_write(vaddr_t addr, int len, word_t data) {
  paddr_write(addr, len, data);
}
