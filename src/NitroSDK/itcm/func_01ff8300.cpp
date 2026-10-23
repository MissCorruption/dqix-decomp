#include <globaldefs.h>
#include "NitroSDK/Cache.h"
#include "NitroSDK/Interrupts.h"

extern "C" void func_01ff83a8(unsigned long arg0, void* arg1, long arg2);

// USA: func_01ff8300
extern "C" void func_01ff8300(void)
{
    unsigned long var0 = 0x027ffe00;
    const unsigned long var1 = *(unsigned long*)0x027ffc2c;

    if (var1 >= 0x8000)
    {
        func_01ff83a8(var1, (void*)var0, 0x160);
    }

    {
        unsigned long var2 = *(unsigned long*)(var0 + 0x20);
        unsigned long var3 = *(unsigned long*)(var0 + 0x28);
        unsigned long var4 = *(unsigned long*)(var0 + 0x2c);
        unsigned long var5 = *(unsigned long*)(var0 + 0x30);
        unsigned long var6 = *(unsigned long*)(var0 + 0x38);
        unsigned long var7 = *(unsigned long*)(var0 + 0x3c);

        int var8 = DisableIRQInterrupts();
        CleanDataCache();
        InvalidateDataCache();
        SetIRQInterruptState(var8);
        InvalidateInstructionCache();
        DrainWriteBuffer();

        var2 += var1;
        if (var2 < 0x8000)
        {
            unsigned long var9 = 0x8000 - var2;
            var2 = 0x8000;
            var3 += var9;
            var4 -= var9;
        }
        func_01ff83a8(var2, (void*)var3, var4);
        func_01ff83a8(var5 + var1, (void*)var6, var7);
    }
}
