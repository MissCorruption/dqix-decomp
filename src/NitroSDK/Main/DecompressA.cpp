#include "Filesystem/ExtendedNitroVM.h"
#include <globaldefs.h>

// KEEP-NAME: the ROM symbol is a curated name, not a func_ tag.
// USA: func_020caa10
extern "C" ARM asm unsigned int DecompressA(Decompressor* context, const void* data,
                                            unsigned int len) {
    stmfd sp!, {r4-r11}
    ldr r3, [r0, #0]
    ldr r4, [r0, #4]
    ldrb r5, [r0, #0xf]
    ldrb r6, [r0, #0x10]
    ldr r7, [r0, #8]
    ldrb r8, [r0, #0x11]
    ldrb r11, [r0, #0x12]
outer_check:
    cmp r4, #0
    ble done
    cmp r6, #0
    beq refill
bit_loop:
    cmp r2, #0
    beq done
    tst r5, #0x80
    bne match
    ldrb r9, [r1], #1
    sub r4, r4, #1
    sub r2, r2, #1
    swpb r9, r9, [r3]
    add r3, r3, #1
    b tail
match:
    cmp r8, #0
    beq back_distance
    cmp r11, #1
    bne first_match
    subs r8, r8, #1
    beq state_zero
    cmp r8, #1
    beq state_two
    ldrb r7, [r1], #1
    tst r7, #0xe0
    beq base_read
    add r7, r7, #0x10
    mov r8, #0
    b copy_dec
base_read:
    mov r10, #0x110
    tst r7, #0x10
    beq base_lo
    and r7, r7, #0xf
    add r10, r10, #0x1000
    add r7, r10, r7, lsl #16
    b state_end
base_lo:
    and r7, r7, #0xf
    add r7, r10, r7, lsl #8
    mov r8, #1
    b state_end
state_two:
    ldrb r10, [r1], #1
    add r7, r7, r10, lsl #8
    b state_end
state_zero:
    ldrb r10, [r1], #1
    add r7, r7, r10
    b copy_dec
state_end:
    subs r2, r2, #1
    beq done
    b match
first_match:
    ldrb r7, [r1], #1
    add r7, r7, #0x30
    mov r8, #0
copy_dec:
    subs r2, r2, #1
    beq done
back_distance:
    and r9, r7, #0xf
    mov r10, r9, lsl #8
    ldrb r9, [r1], #1
    mov r8, #3
    sub r2, r2, #1
    orr r9, r9, r10
    add r9, r9, #1
    movs r7, r7, asr #4
    beq tail
copy_loop:
    ldrb r10, [r3, -r9]
    sub r4, r4, #1
    swpb r10, r10, [r3]
    add r3, r3, #1
    subs r7, r7, #1
    bgt copy_loop
tail:
    cmp r4, #0
    beq done
    mov r5, r5, lsl #1
    subs r6, r6, #1
    bne bit_loop
refill:
    cmp r2, #0
    beq done
    ldrb r5, [r1], #1
    mov r6, #8
    sub r2, r2, #1
    b outer_check
done:
    str r3, [r0, #0]
    str r4, [r0, #4]
    strb r5, [r0, #0xf]
    strb r6, [r0, #0x10]
    str r7, [r0, #8]
    strb r8, [r0, #0x11]
    strb r11, [r0, #0x12]
    mov r0, r4
    ldmfd sp!, {r4-r11}
    bx lr
}
