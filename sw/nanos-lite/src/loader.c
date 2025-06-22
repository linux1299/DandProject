#include <proc.h>
#include <elf.h>
#include <stdio.h>
#include "fs.h"

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
# define EXPECT_TYPE EM_386   // not sure, please check by yourself.
#elif defined(__ISA_MIPS32__)
# define EXPECT_TYPE EM_MIPS  // not sure, please check by yourself.
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#else
# error Unsupported ISA
#endif

static uintptr_t loader(PCB *pcb, const char *filename) {
  // 1. open elf files, get file id:
  int fd = fs_open(filename,0,0);
  // printf("1. fd = %x\n", fd);

  // 2. read elf head:
  Elf_Ehdr *elf_head = (Elf_Ehdr*)malloc(sizeof(Elf_Ehdr));
  // printf("2. read elf head\n");
  if(fs_read(fd,elf_head,sizeof(Elf_Ehdr)) == -1) assert(0);
  assert(*(uint32_t *)(elf_head->e_ident) == 0x464c457f);  // check reading file is elf.
  assert(elf_head->e_machine == EXPECT_TYPE);              // check architecture.


  // 3. read program headers, remeber pro_head is a struct pointer!!
  Elf_Phdr *pro_head = (Elf_Phdr*)malloc(sizeof(Elf_Phdr)*elf_head->e_phnum);
  // printf("3. read program headers\n");
  if(fs_read(fd, pro_head,sizeof(Elf_Phdr)*elf_head->e_phnum) == -1)  assert(0);

  // 4. read text/rodata/data/bss segment to mem:
  for(Elf_Phdr *p=pro_head; p<pro_head+elf_head->e_phnum; p++){
    // printf("Start read text/rodata/data/bss segment to mem\n");

    // 4.1 load text/rodata/data segment into mem:
    // printf("4.1 read text/rodata/data segment into mem\n");
    if(fs_lseek(fd,p->p_offset,SEEK_SET) == -1) assert(0);

    if(fs_read(fd, (void*)(p->p_vaddr),p->p_filesz) == -1)  assert(0);
    
    // 4.2 init bss segment(set to zero):
    // printf("4.2 init bss segment\n");
    memset((void *)(p->p_vaddr+p->p_filesz), 0, p->p_memsz - p->p_filesz);
  }

  free(elf_head);
  free(pro_head);

  return elf_head->e_entry;

}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", (void *)entry);
  asm volatile("fence.i");
  ((void(*)())entry) ();
}

