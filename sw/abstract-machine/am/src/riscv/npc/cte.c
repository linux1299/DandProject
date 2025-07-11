#include <am.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {

  if (user_handler) {
    Event ev = {0};
    if(c->mcause== 0x0b){
      if(c->GPR1>= SYS_exit && c->GPR1<=SYS_gettimeofday){
        ev.event = EVENT_SYSCALL;
      }
      else if(c->GPR1 == -1){
        ev.event = EVENT_YIELD;
      }
    }
    else{
        ev.event = EVENT_ERROR;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}
extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
