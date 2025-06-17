CROSS_COMPILE := riscv64-linux-gnu-
COMMON_FLAGS  := -fno-pic -march=rv64g -mcmodel=medany -mstrict-align
# COMMON_FLAGS  := -fno-pic -march=rv64i -mabi=lp64 -mcmodel=medany -mstrict-align
CFLAGS        += $(COMMON_FLAGS) -static  
# CFLAGS        += -static-libgcc -lgcc
ASFLAGS       += $(COMMON_FLAGS) -O0
LDFLAGS       += -melf64lriscv
