#include <globaldefs.h>

// NitroSDK OS_GetLockID (os_spinLock.c), an `asm` function in the SDK; pokediamond has it as
// arm9/lib/NitroSDK/src/OS_spinLock.c. 0x027fffb0 is HW_LOCK_ID_FLAG_MAIN. The SDK's movne and
// bxeq appear in the ROM as a branch over a branch (`bne; b; mov`), so they are written out
// that way here, as in VectorizedInvertedMemcpy.
// KEEP-NAME: the ROM symbol is a curated name, not a func_ tag.
// USA: func_020c7080
ARM asm int GenerateLockOwnerID(void)
{
    ldr r3, =0x027fffb0
    ldr r1, [r3, #0x0]
    clz r2, r1
    cmp r2, #0x20
    bne _L18
    b _L1c
_L18:
    mov r0, #0x40
_L1c:
    bne _L44
    add r3, r3, #0x4
    ldr r1, [r3, #0x0]
    clz r2, r1
    cmp r2, #0x20
    ldr r0, =0xfffffffd
    beq _L3c
    b _L40
_L3c:
    bx lr
_L40:
    mov r0, #0x60
_L44:
    add r0, r0, r2
    mov r1, #0x80000000
    mov r1, r1, lsr r2
    ldr r2, [r3, #0x0]
    bic r2, r2, r1
    str r2, [r3, #0x0]
    bx lr
}
