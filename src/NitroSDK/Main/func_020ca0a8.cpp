#include <globaldefs.h>
#include "NitroSDK/DMA.h"
#include "NitroSDK/Interrupts.h"

#if defined(jpn)
#define func_020ca0a8 func_020cbb74
#endif

#define REG_GXSTAT (*(volatile unsigned long*)0x04000600)

typedef void (*Type_020ca0a8)(void* arg);

struct Struct_02111684
{
    volatile int unknown_0_;
    unsigned long unknown_4_;
    unsigned long unknown_8_;
    unsigned long unknown_c_;
    Type_020ca0a8 unknown_10_;
    void* unknown_14_;
    unsigned long unknown_18_;
    InterruptHandlerProc unknown_1c_;
};

extern Struct_02111684 data_02111684;

extern "C" void func_020ca1a0();

static inline void inline_020ca0a8(unsigned long arg0)
{
    REG_GXSTAT = (arg0 << 30) | (REG_GXSTAT & ~0xc0000000);
}

static inline void inline_020ca0a8_2(Type_020ca0a8 arg0, void* arg1)
{
    if (arg0)
    {
        arg0(arg1);
    }
}

// USA: func_020ca0a8
extern "C" ARM void func_020ca0a8(unsigned long arg0, const void* arg1, unsigned long arg2,
    Type_020ca0a8 arg3, void* arg4)
{
    if (arg2 == 0)
    {
        inline_020ca0a8_2(arg3, arg4);
        return;
    }

    while (data_02111684.unknown_0_)
    {
    }

    while (!(((REG_GXSTAT & 0x07000000) >> 24) & 2))
    {
    }

    data_02111684.unknown_0_ = 1;
    data_02111684.unknown_4_ = arg0;
    data_02111684.unknown_8_ = (unsigned long)arg1;
    data_02111684.unknown_c_ = arg2;
    data_02111684.unknown_10_ = arg3;
    data_02111684.unknown_14_ = arg4;

    VerifyDMASource(arg0, (unsigned long)arg1, arg2, 0);
    AwaitDMACompletion(arg0);

    {
        int var0 = DisableIRQInterrupts();

        data_02111684.unknown_18_ = (REG_GXSTAT & 0xc0000000) >> 30;
        data_02111684.unknown_1c_ = GetInterruptHandler(0x200000);

        inline_020ca0a8(1);
        SetInterruptHandler(0x200000, (const void*)func_020ca1a0);
        EnableSpecificInterrupts(0x200000);
        func_020ca1a0();

        SetIRQInterruptState(var0);
    }
}
