#include <globaldefs.h>

// USA: func_02000954  (semantic: NitroSDK crt0 INITi_CpuClear32)
// PROVENANCE: SonicRushAdventure-Decomp/lib/NitroSDK/src/init/ARM9/crt0.c INITi_CpuClear32 (also
// pokediamond arm9/lib/NitroSDK/src/crt0.c). The crt0 copy of MIi_CpuClear32: an `asm void` whose
// predicated `stmltia r1!, {r0}` appears in this ROM as a `blt; b` branch pair, transcribed as such.
extern "C" ARM asm void func_02000954(unsigned int data, void* dst, unsigned int size) {
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
