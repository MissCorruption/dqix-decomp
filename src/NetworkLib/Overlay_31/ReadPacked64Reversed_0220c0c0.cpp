#include <globaldefs.h>

// CPS bignum get64bits: reads the four halfwords at and below `top` into a u64 (r1:r0).
// An `asm` function in the library: SonicRushAdventure-Decomp lib/NitroWiFi/asm/ARM9/ssl.s
// and the pokeheartgold fork's lib/libCPS/src/cps_bignum.c (`asm u64 get64bits(const u16 *top)`).
// USA: func_ov031_0220c0c0
ARM asm unsigned long long ReadPacked64Reversed_0220c0c0(unsigned short* top)
{
    ldrh r2, [r0, #0x0]
    ldrh r3, [r0, #-0x2]
    orr r1, r3, r2, lsl #16
    ldrh r2, [r0, #-0x4]
    ldrh r3, [r0, #-0x6]
    orr r0, r3, r2, lsl #16
    bx lr
}
