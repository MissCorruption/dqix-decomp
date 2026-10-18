#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is a curated name, not a func_ tag.
// USA: func_020ca650
extern "C" ARM
asm void VectorizedInvertedMemcpy(const void *src, void *dst, unsigned int size)
{
    cmp r2, #0
    beq _Lc
    b _L10
_Lc:
    bx lr
_L10:
    tst r1, #1
    beq _L68
    ldrh ip, [r1, #-1]
    and ip, ip, #0xff
    tst r0, #1
    bne _L2c
    b _L30
_L2c:
    ldrh r3, [r0, #-1]
_L30:
    bne _L38
    b _L3c
_L38:
    mov r3, r3, lsr #8
_L3c:
    beq _L44
    b _L48
_L44:
    ldrh r3, [r0]
_L48:
    orr r3, ip, r3, lsl #8
    strh r3, [r1, #-1]
    add r0, r0, #1
    add r1, r1, #1
    subs r2, r2, #1
    beq _L64
    b _L68
_L64:
    bx lr
_L68:
    eor ip, r1, r0
    tst ip, #1
    beq _Lc4
    bic r0, r0, #1
    ldrh ip, [r0], #2
    mov r3, ip, lsr #8
    subs r2, r2, #2
    blo _La0
_L88:
    ldrh ip, [r0], #2
    orr ip, r3, ip, lsl #8
    strh ip, [r1], #2
    mov r3, ip, lsr #16
    subs r2, r2, #2
    bhs _L88
_La0:
    tst r2, #1
    beq _Lac
    b _Lb0
_Lac:
    bx lr
_Lb0:
    ldrh ip, [r1]
    and ip, ip, #0xff00
    orr ip, ip, r3
    strh ip, [r1]
    bx lr
_Lc4:
    tst ip, #2
    beq _Lf0
    bics r3, r2, #1
    beq _L154
    sub r2, r2, r3
    add ip, r3, r1
_Ldc:
    ldrh r3, [r0], #2
    strh r3, [r1], #2
    cmp r1, ip
    blo _Ldc
    b _L154
_Lf0:
    cmp r2, #2
    blo _L154
    tst r1, #2
    beq _L118
    ldrh r3, [r0], #2
    strh r3, [r1], #2
    subs r2, r2, #2
    beq _L114
    b _L118
_L114:
    bx lr
_L118:
    bics r3, r2, #3
    beq _L138
    sub r2, r2, r3
    add ip, r3, r1
_L128:
    ldr r3, [r0], #4
    str r3, [r1], #4
    cmp r1, ip
    blo _L128
_L138:
    tst r2, #2
    bne _L144
    b _L148
_L144:
    ldrh r3, [r0], #2
_L148:
    bne _L150
    b _L154
_L150:
    strh r3, [r1], #2
_L154:
    tst r2, #1
    beq _L160
    b _L164
_L160:
    bx lr
_L164:
    ldrh r2, [r1]
    ldrh r0, [r0]
    and r2, r2, #0xff00
    and r0, r0, #0xff
    orr r0, r2, r0
    strh r0, [r1]
    bx lr
}
