#include <globaldefs.h>

extern char data_027e0060[];
extern unsigned short data_02111304;
extern "C" void func_020cd594(void*);
extern "C" void func_020cd5d4(void*);

// USA: func_01ff8068
extern "C" ARM asm void func_01ff8068(void)
{
    ldr ip, =data_027e0060
    mov r3, #0x0
    ldr ip, [ip]
    mov r2, #0x1
    cmp ip, #0x0
    beq _resched
_wake:
    str r2, [ip, #0x64]
    str r3, [ip, #0x78]
    str r3, [ip, #0x7c]
    ldr r0, [ip, #0x80]
    str r3, [ip, #0x80]
    mov ip, r0
    cmp ip, #0x0
    bne _wake
    ldr ip, =data_027e0060
    str r3, [ip]
    str r3, [ip, #0x4]
    ldr ip, =data_02111304
    mov r1, #0x1
    strh r1, [ip]
_resched:
    ldr ip, =data_02111304
    ldrh r1, [ip]
    cmp r1, #0x0
    beq _noresched
    b _pick
_noresched:
    ldr pc, [sp], #0x4
_pick:
    mov r1, #0x0
    strh r1, [ip]
    mov r3, #0xd2
    msr CPSR_c, r3
    add r2, ip, #0x8
    ldr r1, [r2]
_next:
    cmp r1, #0x0
    bne _state
    b _test1
_state:
    ldrh r0, [r1, #0x64]
_test1:
    bne _cmpready
    b _test2
_cmpready:
    cmp r0, #0x1
_test2:
    bne _link
    b _test3
_link:
    ldr r1, [r1, #0x68]
_test3:
    bne _next
    cmp r1, #0x0
    bne _switch
_keep:
    mov r3, #0x92
    msr CPSR_c, r3
    ldr pc, [sp], #0x4
_switch:
    ldr r0, [ip, #0x4]
    cmp r1, r0
    beq _keep
    ldr r3, [ip, #0xC]
    cmp r3, #0x0
    beq _save
    stmdb sp!, {r0, r1, ip}
    mov lr, pc
    bx r3
    ldmia sp!, {r0, r1, ip}
_save:
    str r1, [ip, #0x4]
    mrs r2, SPSR
    str r2, [r0, #0x0]!
    stmdb sp!, {r0, r1}
    add r0, r0, #0x0
    add r0, r0, #0x48
    ldr r1, =func_020cd594
    blx r1
    ldmia sp!, {r0, r1}
    ldmib sp!, {r2, r3}
    stmib r0!, {r2, r3}
    ldmib sp!, {r2, r3, ip, lr}
    stmib r0!, {r2-r14}^
    stmib r0!, {lr}
    mov r3, #0xd3
    msr CPSR_c, r3
    stmib r0!, {sp}
    stmfd sp!, {r1}
    add r0, r1, #0x0
    add r0, r0, #0x48
    ldr r1, =func_020cd5d4
    blx r1
    ldmfd sp!, {r1}
    ldr sp, [r1, #0x44]
    mov r3, #0xd2
    msr CPSR_c, r3
    ldr r2, [r1, #0x0]!
    msr SPSR_fc, r2
    ldr lr, [r1, #0x40]
    ldmib r1, {r0-r14}^
    nop
    stmda sp!, {r0, r1, r2, r3, ip, lr}
    ldmfd sp!, {pc}
}
