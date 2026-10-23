#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Memory.h"
#include "NitroSDK/Cache.h"

struct Struct_ov031_02212274
{
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[10];
    char unknown_12_[33];
    unsigned char unknown_33_[6];
    char unknown_39_[3];
};

extern "C" int func_ov031_02211f24();
extern "C" int func_ov031_02213024();
extern "C" unsigned char* func_ov031_0220f040();
extern "C" void* func_ov031_0220f084(unsigned short* arg0);
extern "C" int func_ov031_02213054(void* arg0);

static inline int inline_ov031_02212274(unsigned int arg0)
{
    return arg0 >= '0' && arg0 <= '9';
}

// USA: func_ov031_02212274
extern "C" ARM int func_ov031_02212274(Struct_ov031_02212274* arg0)
{
    int var0;
    unsigned char* var1;
    unsigned short var2;
    void* var3;
    unsigned char var4[10];

    VectorizedMemset(arg0, 0, sizeof(Struct_ov031_02212274));
    arg0->unknown_4_ = 0xff;
    if (func_ov031_02211f24() != 4) return 0;

    arg0->unknown_0_ = func_ov031_02213024();
    if (arg0->unknown_0_ == 0xff || arg0->unknown_0_ > 99)
    {
        arg0->unknown_0_ = 99;
        return 0;
    }

    var0 = DisableIRQInterrupts();
    var1 = func_ov031_0220f040();
    InvalidateDataCacheRange(var1, 6);
    if (var1 == NULL)
    {
        SetIRQInterruptState(var0);
        return 0;
    }
    VectorizedInvertedMemcpy(var1, arg0->unknown_33_, 6);

    if (arg0->unknown_0_ >= 0 && arg0->unknown_0_ < 3)
    {
        var3 = func_ov031_0220f084(&var2);
        InvalidateDataCacheRange(var3, 32);
        if (var3 == NULL)
        {
            SetIRQInterruptState(var0);
            return 0;
        }
        VectorizedInvertedMemcpy(var3, arg0->unknown_12_, var2);
    }
    SetIRQInterruptState(var0);

    if (func_ov031_02213054(var4))
    {
        arg0->unknown_4_ = inline_ov031_02212274(var4[0]) ? var4[0] - '0' : 0xff;
        VectorizedInvertedMemcpy(&var4[1], arg0->unknown_8_, 9);
    }
    else
    {
        arg0->unknown_4_ = 0xff;
    }
    return 1;
}
