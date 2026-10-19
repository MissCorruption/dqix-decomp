#include <globaldefs.h>

// NitroSDK OSi_CpuClear32 (static asm in os_reset.c, ITCM section); ref pret/pokediamond
// arm9/lib/NitroSDK/src/OS_reset.c. This SDK's build turned the conditional `stmltia` into a branch
// around an unconditional store, so it is written that way.
// USA: func_01ff82e4
extern "C" ARM asm void func_01ff82e4(register unsigned int data, register void* destp, register unsigned int size)
{
    add ip, r1, r2
_loop:
    cmp r1, ip
    blt _store
    b _next
_store:
    stmia r1!, {r0}
_next:
    blt _loop
    bx lr
}
