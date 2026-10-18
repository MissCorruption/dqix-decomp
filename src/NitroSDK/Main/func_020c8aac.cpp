#include <globaldefs.h>

// USA: func_020c8aac  (semantic: NitroSDK OSi_ExceptionHandler)
// PROVENANCE: SonicRushAdventure-Decomp/lib/NitroSDK/src/os/os_exception.c OSi_ExceptionHandler
// (also pokediamond arm9/lib/NitroSDK/src/OS_exception.c). asm void in the SDK; the predicated
// movne/bxne are spelled as branch-around, which is what the ROM has (SP1P3 conditional-asm form).
extern int data_02111588[3];                            // OSi_DebuggerHandler (first word)
void CallFunc020c8b44Then020c8bd4_020c8b30(void* p);    // OSi_GetAndDisplayContext

extern "C" ARM asm void func_020c8aac(void) {
    ldr r12, =data_02111588
    ldr r12, [r12, #0]
    cmp r12, #0
    bne movne1
    b movne2
movne1:
    mov lr, pc
movne2:
    bne bxne1
    b bxne2
bxne1:
    bx r12
bxne2:
    ldr r12, =0x02000000    // HW_ITCM_END
    stmdb r12!, {r0, r1, r2, r3, sp, lr}
    and r0, sp, #1
    mov sp, r12
    mrs r1, cpsr
    and r1, r1, #0x1f
    teq r1, #0x17
    bne @1
    bl CallFunc020c8b44Then020c8bd4_020c8b30
    b usr_return
@1:
    teq r1, #0x1b
    bne usr_return
    bl CallFunc020c8b44Then020c8bd4_020c8b30
usr_return:
    ldr r12, =data_02111588
    ldr r12, [r12, #0]
    cmp r12, #0
@2:
    beq @2
@3:
    mov r0, r0
    b @3
    ldmia sp!, {r0, r1, r2, r3, r12, lr}
    mov sp, r12
    bx lr
}
