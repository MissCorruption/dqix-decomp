#include <globaldefs.h>

// USA: func_020c8348
extern "C" ARM asm void func_020c8348(void) {
    mov r12, #0x4000000
    ldr r1, [r12, #0x208]
    str r12, [r12, #0x208]
loop:
    ldrh r0, [r12, #6]
    cmp r0, #0
    bne loop
    str r1, [r12, #0x208]
    bx lr
}
