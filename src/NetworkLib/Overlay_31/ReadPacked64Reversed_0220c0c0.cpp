#include <globaldefs.h>

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
