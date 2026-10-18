#include <globaldefs.h>

// USA: func_020ca7d0
// PROVENANCE: pokediamond/arm9/lib/NitroSDK/src/MI_memory.c:331 -- MI_Zero36B, a THUMB
// `asm void` in the SDK. Zeroes 36 bytes with three `stmia r0!` of three zero registers.
extern "C" THUMB asm void func_020ca7d0(void* dst)
{
    mov r1, #0
    mov r2, #0
    mov r3, #0
    stmia r0!, {r1, r2, r3}
    stmia r0!, {r1, r2, r3}
    stmia r0!, {r1, r2, r3}
    bx lr
}
