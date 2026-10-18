#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is a curated name, not a func_ tag.
// USA: func_020cab94  (semantic: NitroSDK MI_ReadUncompHuffman, streaming Huffman decoder)
// PROVENANCE: NitroSDK src/mi/mi_uncomp_stream.c MI_ReadUncompHuffman(MIUncompContextHuffman*,
// const void* data, u32 len). Context layout matches MIUncompContextHuffman: destp 0x0,
// destCount 0x4, treep 0x8, srcTmp 0xc, destTmp 0x10, treeSize(s16) 0x14, srcTmpCnt 0x16,
// destTmpCnt 0x17, bitSize 0x18, tree[] 0x1c; the caller (ExtendedNitroVM compression types 2/3)
// sets bitSize = 4/8, treeSize = -1, treep = tree, as MI_InitUncompContextHuffman does. Hand asm
// (word `ldr [r1], #1` source fetch, stmfd {r4-r12,lr}); no public decomp carries it, so the body
// is transcribed from the ROM. Predicated addeq/movle are spelled as branch-around (SP1P3 form).
struct Decompressor;

extern "C" ARM asm int DecompressB(Decompressor* context, const void* data, unsigned int len) {
    stmfd sp!, {r4-r12, lr}
    ldr r3, [r0, #0]            // destp
    ldr r4, [r0, #4]            // destCount
    ldr r5, [r0, #8]            // treep
    ldr r6, [r0, #0xc]          // srcTmp
    ldr r7, [r0, #0x10]         // destTmp
    ldrsh r8, [r0, #0x14]       // treeSize
    ldrb r9, [r0, #0x16]        // srcTmpCnt
    ldrb r10, [r0, #0x17]       // destTmpCnt
    ldrb r11, [r0, #0x18]       // bitSize
    cmp r8, #0
    beq decode
    bgt tree_loop
    ldrb r8, [r1], #1
    sub r2, r2, #1
    strb r8, [r5], #1
    add r8, r8, #1
    mov r8, r8, lsl #1
    sub r8, r8, #1
tree_loop:
    cmp r2, #0
    beq out
    ldrb r12, [r1], #1
    sub r2, r2, #1
    strb r12, [r5], #1
    subs r8, r8, #1
    beq addeq1
    b addeq2
addeq1:
    add r5, r0, #0x1d
addeq2:
    bgt tree_loop
decode:
    cmp r4, #0
    ble out
outer:
    cmp r9, #0x20
    bge bits
fill:
    cmp r2, #0
    beq out
    ldr r12, [r1], #1
    sub r2, r2, #1
    orr r6, r6, r12, lsl r9
    add r9, r9, #8
    cmp r9, #0x20
    blt fill
bits:
    mov r12, r6, lsr #31
    ldrb lr, [r5]
    mov r5, r5, lsr #1
    mov r5, r5, lsl #1
    and r8, lr, #0x3f
    add r8, r8, #1
    add r5, r5, r8, lsl #1
    add r5, r5, r12
    mov r8, #0
    mov lr, lr, lsl r12
    ands lr, lr, #0x80
    mov r6, r6, lsl #1
    sub r9, r9, #1
    beq next
    mov r7, r7, lsr r11
    ldrb r12, [r5]
    rsb lr, r11, #0x20
    orr r7, r7, r12, lsl lr
    add r5, r0, #0x1d
    add r10, r10, r11
    cmp r4, r10, asr #3
    bgt flush
    rsb r12, r10, #0x20
    mov r7, r7, asr r12
    mov r10, #0x20
flush:
    cmp r10, #0x20
    bne next
    str r7, [r3], #4
    mov r10, #0
    subs r4, r4, #4
    ble movle1
    b movle2
movle1:
    mov r4, #0
movle2:
    ble out
next:
    cmp r9, #0
    bgt bits
    cmp r4, #0
    bgt outer
out:
    str r3, [r0, #0]
    str r4, [r0, #4]
    str r5, [r0, #8]
    str r6, [r0, #0xc]
    str r7, [r0, #0x10]
    strh r8, [r0, #0x14]
    strb r9, [r0, #0x16]
    strb r10, [r0, #0x17]
    strb r11, [r0, #0x18]
    mov r0, r4
    ldmfd sp!, {r4-r12, lr}
    bx lr
}
