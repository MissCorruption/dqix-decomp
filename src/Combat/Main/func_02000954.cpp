#include <globaldefs.h>

// USA: func_02000954  (semantic: NitroSDK crt0 INITi_CpuClear32)
extern "C" ARM asm void func_02000954(unsigned int data, void* dst, unsigned int size) {
    add ip, r1, r2
top:
    cmp r1, ip
    blt store
    b after_store
store:
    stmia r1!, {r0}
after_store:
    blt top
    bx lr
}
