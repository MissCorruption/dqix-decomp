#include <globaldefs.h>

// USA: func_020ca3ec
extern "C" ARM asm void func_020ca3ec(unsigned int data, void* dst, unsigned int size) {
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
