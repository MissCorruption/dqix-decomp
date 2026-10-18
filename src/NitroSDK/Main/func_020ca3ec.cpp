#include <globaldefs.h>

// USA: func_020ca3ec
// PROVENANCE: pokediamond/arm9/lib/NitroSDK/src/MI_memory.c:31 -- MIi_CpuClear32, an `asm void`
// in the SDK. Word-granularity fill loop; the SDK's predicated `stmltia r1!, {r0}` appears in this
// ROM as a `blt; b` branch pair, transcribed as such.
extern "C" ARM asm void func_020ca3ec(unsigned int data, void* dst, unsigned int size) {
    add ip, r1, r2
top:
    cmp r1, ip
    blt store
    b after_store
store:
    stmia r1!, {r0}
after_store:
    blt top
    bx lr
}
