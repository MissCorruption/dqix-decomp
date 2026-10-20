#include <globaldefs.h>
#include "NitroSDK/Cache.h"
#include "NitroSDK/Interrupts.h"

extern "C" void func_01ff83a8(unsigned long src, void* dst, long len);

// USA: func_01ff8300
extern "C" void func_01ff8300(void)
{
    unsigned long header = 0x027ffe00;
    const unsigned long rom_base = *(unsigned long*)0x027ffc2c;

    if (rom_base >= 0x8000)
    {
        func_01ff83a8(rom_base, (void*)header, 0x160);
    }

    {
        unsigned long src_arm9 = *(unsigned long*)(header + 0x20);
        unsigned long dst_arm9 = *(unsigned long*)(header + 0x28);
        unsigned long len_arm9 = *(unsigned long*)(header + 0x2c);
        unsigned long src_arm7 = *(unsigned long*)(header + 0x30);
        unsigned long dst_arm7 = *(unsigned long*)(header + 0x38);
        unsigned long len_arm7 = *(unsigned long*)(header + 0x3c);

        int priorState = DisableIRQInterrupts();
        CleanDataCache();
        InvalidateDataCache();
        SetIRQInterruptState(priorState);
        InvalidateInstructionCache();
        DrainWriteBuffer();

        src_arm9 += rom_base;
        if (src_arm9 < 0x8000)
        {
            unsigned long diff = 0x8000 - src_arm9;
            src_arm9 = 0x8000;
            dst_arm9 += diff;
            len_arm9 -= diff;
        }
        func_01ff83a8(src_arm9, (void*)dst_arm9, len_arm9);
        func_01ff83a8(src_arm7 + rom_base, (void*)dst_arm7, len_arm7);
    }
}
