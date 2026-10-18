#include <globaldefs.h>

// USA: func_020c0e9c
// PROVENANCE: NitroSDK libdgt `DGTi_hash2_arm4_small`, the SHA-1 block transform from the prebuilt
// sha1s-arm4cw.o (hand-written ARM for CodeWarrior). Byte-identical bodies:
// pokediamond arm9/asm/DGT_sha1s_arm4cw.s, SonicRushAdventure-Decomp lib/NitroSDK/asm/ARM9/dgt_sha1s.s,
// khdays-decomp libs/nitro/dgt/asm_stubs/auto/DGTi_Hash2ProcessBlock.c (an `asm void`).
//
// Hashes 64-byte blocks of src (r1, len bytes in r2) into the five-word state at r0.
// Its literal pool is the 0x14 bytes just BEFORE this function, read with negative pc offsets:
//   020c0e88  0x00FF00FF  byte-swap mask
//   020c0e8c  0x5A827999  K1 (rounds 0-19)
//   020c0e90  0x6ED9EBA1  K2 (rounds 20-39)
//   020c0e94  0x8F1BBCDC  K3 (rounds 40-59)
//   020c0e98  0xCA62C1D6  K4 (rounds 60-79)
// That pool is not part of this slot (symbol 020c0e9c, size 0x280); it belongs to the same object
// in the SDK, so landing needs the delink to start at 020c0e88 or the 0x14 bytes owned elsewhere.
extern "C" ARM asm void func_020c0e9c(void* state, const void* src, unsigned long len)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, ip, lr}
    ldmia r0, {r3, r9, r10, r11, ip}
    sub sp, sp, #0x84
    str r2, [sp, #0x80]
block:
    ldr r8, [pc, #-0x28]    // K1 @ 020c0e8c
    ldr r7, [pc, #-0x30]    // byte-swap mask @ 020c0e88
    mov r6, sp
    mov r5, #0
round1_load:
    ldr r4, [r1], #4
    add r2, r8, ip
    add r2, r2, r3, ror #27
    and lr, r4, r7
    and r4, r7, r4, ror #24
    orr r4, r4, lr, ror #8
    str r4, [r6, #0x40]
    str r4, [r6], #4
    add r2, r2, r4
    eor r4, r10, r11
    and r4, r4, r9
    eor r4, r4, r11
    add r2, r2, r4
    mov r9, r9, ror #2
    mov ip, r11
    mov r11, r10
    mov r10, r9
    mov r9, r3
    mov r3, r2
    add r5, r5, #4
    cmp r5, #0x40
    blt round1_load
    mov r7, #0
    mov r6, sp
round1_expand:
    ldr r2, [r6]
    ldr r5, [r6, #8]
    ldr r4, [r6, #0x20]
    ldr lr, [r6, #0x34]
    eor r2, r2, r5
    eor r4, r4, lr
    eor r2, r2, r4
    mov r2, r2, ror #0x1f
    str r2, [r6, #0x40]
    str r2, [r6], #4
    add r2, r2, ip
    add r2, r2, r8
    add r2, r2, r3, ror #27
    eor r4, r10, r11
    and r4, r4, r9
    eor r4, r4, r11
    add r2, r2, r4
    mov r9, r9, ror #2
    mov ip, r11
    mov r11, r10
    mov r10, r9
    mov r9, r3
    mov r3, r2
    add r7, r7, #4
    cmp r7, #0x10
    blt round1_expand
    ldr r8, [pc, #-0xfc]    // K2 @ 020c0e90
    mov r7, #0
round2:
    ldr r2, [r6]
    ldr r4, [r6, #8]
    ldr lr, [r6, #0x20]
    ldr r5, [r6, #0x34]
    eor r2, r2, r4
    eor lr, lr, r5
    eor r2, r2, lr
    mov r2, r2, ror #0x1f
    str r2, [r6, #0x40]
    str r2, [r6], #4
    add r2, r2, ip
    add r2, r2, r8
    add r2, r2, r3, ror #27
    eor lr, r9, r10
    eor lr, lr, r11
    add r2, r2, lr
    mov r9, r9, ror #2
    mov ip, r11
    mov r11, r10
    mov r10, r9
    mov r9, r3
    mov r3, r2
    add r7, r7, #1
    cmp r7, #0xc
    moveq r6, sp
    cmp r7, #0x14
    blt round2
    ldr r8, [pc, #-0x16c]   // K3 @ 020c0e94
    mov r7, #0
round3:
    ldr r2, [r6]
    ldr lr, [r6, #8]
    ldr r5, [r6, #0x20]
    ldr r4, [r6, #0x34]
    eor r2, r2, lr
    eor r5, r5, r4
    eor r2, r2, r5
    mov r2, r2, ror #0x1f
    str r2, [r6, #0x40]
    str r2, [r6], #4
    add r2, r2, ip
    add r2, r2, r8
    add r2, r2, r3, ror #27
    orr r5, r9, r10
    and r5, r5, r11
    and r4, r9, r10
    orr r5, r5, r4
    add r2, r2, r5
    mov r9, r9, ror #2
    mov ip, r11
    mov r11, r10
    mov r10, r9
    mov r9, r3
    mov r3, r2
    add r7, r7, #1
    cmp r7, #8
    moveq r6, sp
    cmp r7, #0x14
    blt round3
    ldr r8, [pc, #-0x1e4]   // K4 @ 020c0e98
    mov r7, #0
round4:
    ldr r2, [r6]
    ldr r5, [r6, #8]
    ldr r4, [r6, #0x20]
    ldr lr, [r6, #0x34]
    eor r2, r2, r5
    eor r4, r4, lr
    eor r2, r2, r4
    mov r2, r2, ror #0x1f
    str r2, [r6, #0x40]
    str r2, [r6], #4
    add r2, r2, ip
    add r2, r2, r8
    add r2, r2, r3, ror #27
    eor r4, r9, r10
    eor r4, r4, r11
    add r2, r2, r4
    mov r9, r9, ror #2
    mov ip, r11
    mov r11, r10
    mov r10, r9
    mov r9, r3
    mov r3, r2
    add r7, r7, #1
    cmp r7, #4
    moveq r6, sp
    cmp r7, #0x14
    blt round4
    ldmia r0, {r2, r4, r6, r7, lr}
    add r3, r3, r2
    add r9, r9, r4
    add r10, r10, r6
    add r11, r11, r7
    add ip, ip, lr
    stmia r0, {r3, r9, r10, r11, ip}
    ldr lr, [sp, #0x80]
    subs lr, lr, #0x40
    str lr, [sp, #0x80]
    bgt block
    add sp, sp, #0x84
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, ip, pc}
}
