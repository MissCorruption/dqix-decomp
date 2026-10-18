#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is a curated name, not a func_ tag.
// USA: func_020c129c
// PROVENANCE: pokediamond/arm9/lib/NitroSDK/src/FX_mtx33.c:119 -- MTX_RotZ33_, an `asm void` in
// the SDK. THUMB `stmia r0!` has no C form in mwcc.
struct Mtx33_020c129c { unsigned int v[9]; };

extern "C" THUMB asm void Mat3x3_WriteRotationZ(struct Mtx33_020c129c* dst, int s, int c)
{
    stmia r0!, {r2}
    mov r3, #0x0
    stmia r0!, {r1, r3}
    neg r1, r1
    stmia r0!, {r1-r2}
    mov r1, #0x1
    lsl r1, r1, #0xc
    str r3, [r0, #0x0]
    str r3, [r0, #0x4]
    str r3, [r0, #0x8]
    str r1, [r0, #0xc]
    bx lr
}
