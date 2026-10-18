#include <globaldefs.h>

// USA: func_020ca4b4  (semantic: NitroSDK MIi_CpuCopyFast)
// PROVENANCE: pokediamond/arm9/lib/NitroSDK/src/MI_memory.c MIi_CpuCopyFast (also pokeheartgold
// lib/NitroSDK/asm/mi_memory.s). asm void in the SDK; the predicated ldmltia/stmltia are spelled as
// branch-around, which is what the ROM has (same form as landed neighbour 020ca430).
extern "C" ARM asm void func_020ca4b4(const void* srcp, void* destp, unsigned int size) {
    stmfd sp!, {r4-r10}
    add r10, r1, r2
    mov r12, r2, lsr #5
    add r12, r1, r12, lsl #5
loop32:
    cmp r1, r12
    blt load32
    b after_load32
load32:
    ldmia r0!, {r2-r9}
after_load32:
    blt store32
    b after_store32
store32:
    stmia r1!, {r2-r9}
after_store32:
    blt loop32
loop4:
    cmp r1, r10
    blt load4
    b after_load4
load4:
    ldmia r0!, {r2}
after_load4:
    blt store4
    b after_store4
store4:
    stmia r1!, {r2}
after_store4:
    blt loop4
    ldmfd sp!, {r4-r10}
    bx lr
}
