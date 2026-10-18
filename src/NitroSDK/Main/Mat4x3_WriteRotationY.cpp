#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is a curated name, not a func_ tag.
// USA: func_020c199c
// PROVENANCE: pokediamond/arm9/lib/NitroSDK/src/FX_mtx43.c:187 -- MTX_RotY43_, an `asm void` in
// the SDK (sibling of MTX_RotX43_ at 020c197c). THUMB `stmia r0!` has no C form in mwcc.
struct Mtx43_020c199c { unsigned int v[12]; };

extern "C" THUMB asm void Mat4x3_WriteRotationY(struct Mtx43_020c199c* dst, int s, int c)
{
    str r1, [r0, #0x18]
    mov r3, #0x0
    stmia r0!, {r2-r3}
    neg r1, r1
    stmia r0!, {r1, r3}
    mov r1, #0x1
    lsl r1, r1, #0xc
    stmia r0!, {r1, r3}
    add r0, #0x4
    mov r1, #0x0
    stmia r0!, {r1-r3}
    stmia r0!, {r1, r3}
    bx lr
}
