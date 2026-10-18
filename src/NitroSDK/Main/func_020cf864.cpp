#include <globaldefs.h>

// USA: func_020cf864
// PROVENANCE: NitroSDK rtc_external.c `static asm void RtcWaitBusy(void)` (pokediamond
// arm9/asm/RTC_external.s; khdays-decomp libs/nitro/rtc/asm_stubs/calls/RtcWaitBusy.c). Spins while
// rtcWork.lock == RTC_LOCK_ON. The work address lives in r12 by hand; mwcc colours it r1 from C.
extern volatile int data_02111824; // rtcWork.lock

extern "C" ARM asm void func_020cf864(void) {
    ldr r12, =data_02111824
loop:
    ldr r0, [r12, #0]
    cmp r0, #1
    beq loop
    bx lr
}
