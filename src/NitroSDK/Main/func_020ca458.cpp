#include <globaldefs.h>

// USA: func_020ca458  (semantic: NitroSDK MIi_CpuClearFast)
extern "C" ARM asm void func_020ca458(unsigned int data, void* destp, unsigned int size) {
    stmfd sp!, {r4-r9}
    add r9, r1, r2
    mov r12, r2, lsr #5
    add r12, r1, r12, lsl #5
    mov r2, r0
    mov r3, r2
    mov r4, r2
    mov r5, r2
    mov r6, r2
    mov r7, r2
    mov r8, r2
loop32:
    cmp r1, r12
    blt store32
    b after32
store32:
    stmia r1!, {r0, r2-r8}
after32:
    blt loop32
loop4:
    cmp r1, r9
    blt store4
    b after4
store4:
    stmia r1!, {r0}
after4:
    blt loop4
    ldmfd sp!, {r4-r9}
    bx lr
}
