#include <globaldefs.h>

// KEEP-NAME
// USA: func_0200af90
extern "C" ARM
asm unsigned int func_0200af90(double x)
{
    tst r1, #0x80000000
    bne _L38
    ldr r2, =0x0000041e
    subs r2, r2, r1, lsr #20
    blt _L4c
    cmp r2, #0x20
    bge _L30
    mov r3, r1, lsl #0xb
    orr r3, r3, #0x80000000
    orr r3, r3, r0, lsr #21
    mov r0, r3, lsr r2
    bx lr
_L30:
    mov r0, #0
    bx lr
_L38:
    cmn r1, #0x100000
    cmpeq r0, #0
    movls r0, #0
    mvnhi r0, #0
    bx lr
_L4c:
    mvn r0, #0
    bx lr
}
