#include <globaldefs.h>

// CPS bignum get48bits_3: reads the three halfwords at and below `top` into a u64 (r1:r0).
// An `asm` function in the library: SonicRushAdventure-Decomp lib/NitroWiFi/asm/ARM9/ssl.s
// and the pokeheartgold fork's lib/libCPS/src/cps_bignum.c (`asm u64 get48bits_3(const u16 *top)`).
// USA: func_ov031_0220c0ac
extern "C" ARM asm unsigned long long func_ov031_0220c0ac(unsigned short* top)
{
    ldrh r1, [r0, #0x0]
    ldrh r2, [r0, #-0x2]
    ldrh r3, [r0, #-0x4]
    orr r0, r3, r2, lsl #16
    bx lr
}
