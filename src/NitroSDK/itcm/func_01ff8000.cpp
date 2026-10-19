#include <globaldefs.h>
#include "System/DTCM.h"

// NitroSDK os_irqHandler.c (ITCM section), hand assembly in the SDK; ref pret/pokediamond
// arm9/lib/NitroSDK/src/OS_irqHandler.c. This SDK's build turned each conditional return
// (`ldmeqfd sp!, {pc}`) into a branch around an unconditional one, so it is written that way.

extern "C" void func_01ff8068(void); // OS_IrqHandler_ThreadSwitch

// NitroSDK OS_IrqHandler: acknowledge the highest pending IRQ and jump to its OS_IRQTable entry, returning
// through OS_IrqHandler_ThreadSwitch
// USA: func_01ff8000
extern "C" ARM asm void func_01ff8000(void)
{
    stmfd sp!, {lr}
    mov ip, #0x04000000
    add ip, ip, #0x210
    ldr r1, [ip, #-8]
    cmp r1, #0
    beq _ret1
    b _enabled
_ret1:
    ldmfd sp!, {pc}
_enabled:
    ldmia ip, {r1, r2}
    ands r1, r1, r2
    beq _ret2
    b _pending
_ret2:
    ldmfd sp!, {pc}
_pending:
    mov r3, #0x80000000
_find:
    clz r0, r1
    bics r1, r1, r3, lsr r0
    bne _find
    mov r1, r3, lsr r0
    str r1, [ip, #0x4]
    rsbs r0, r0, #0x1f
    ldr r1, =data_027e0000
    ldr r0, [r1, r0, lsl #2]
    ldr lr, =func_01ff8068
    bx r0
}
