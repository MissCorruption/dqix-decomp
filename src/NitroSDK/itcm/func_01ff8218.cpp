#include <globaldefs.h>
#include "System/DTCM.h"

extern "C" void func_01ff82e4(unsigned int data, void* dest, unsigned int size);

// USA: func_01ff8218
extern "C" ARM asm void func_01ff8218(void)
{
    mov ip, #0x04000000
    str ip, [ip, #0x208]
    ldr r1, =data_027e0000
    add r1, r1, #0x3fc0
    add r1, r1, #0x3c
    mov r0, #0x0
    str r0, [r1]
    ldr r1, =0x04000180
_wait_sub:
    ldrh r0, [r1]
    and r0, r0, #0xf
    cmp r0, #0x1
    bne _wait_sub
    mov r0, #0x100
    strh r0, [r1]
    mov r0, #0x0
    ldr r3, =0x027ffd9c
    ldr r4, [r3]
    ldr r1, =0x027ffd80
    mov r2, #0x80
    bl func_01ff82e4
    str r4, [r3]
    ldr r1, =0x027fff80
    mov r2, #0x18
    bl func_01ff82e4
    ldr r1, =0x027fff98
    strh r0, [r1]
    ldr r1, =0x027fff9c
    mov r2, #0x64
    bl func_01ff82e4
    ldr r1, =0x04000180
_wait_sub_clear:
    ldrh r0, [r1]
    and r0, r0, #0xf
    cmp r0, #0x1
    beq _wait_sub_clear
    mov r0, #0x0
    strh r0, [r1]
    ldr r3, =0x027ffe00
    ldr ip, [r3, #0x24]
    mov lr, ip
    ldr r11, =0x027fff80
    ldmia r11, {r0-r10}
    mov r11, #0x0
    bx ip
}
