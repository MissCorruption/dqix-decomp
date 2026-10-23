#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define func_ov009_02188604 func_ov009_021893c4
#endif

struct Vector3fix {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov009_02188454;

extern "C" Vector3fix func_ov023_021e613c(void* arg0);
int fix32ReduceAngle0To2Pi(int angle);
extern "C" void func_ov023_021e60e0(void* arg0, unsigned int arg1);
extern "C" void func_ov023_021e6088(void* arg0, Struct_ov009_02188454* arg1);

struct Struct_ov009_021842a0_2 {
#if defined(jpn)
    char unknown_0_[0x7bc];
#else
    char unknown1_0_[0x7f8];
#endif
    void* unknown_7f8_;
    void* unknown_7fc_;
    int unknown_800_;
    int unknown_804_;
    char unknown_808_[0xd9c - 0x808];
    unsigned int unknown_d9c_;
};

// USA: func_ov009_02188604
extern "C" ARM void func_ov009_02188604(Struct_ov009_021842a0_2* arg0, unsigned int arg1)
{
    if (arg0->unknown_d9c_ & 8)
    {
        int var0 = 0;
        Vector3fix var1 = func_ov023_021e613c(arg0->unknown_7f8_);
        int var2;
        int var3 = var1.unknown_4_;
        int var4 = fix32ReduceAngle0To2Pi(arg0->unknown_804_ - var3);
        if (var4 >= 0 && var4 < 0x3244)
        {
            var2 = var3 + var4 / 12;
            for (unsigned int var5 = 0; var5 < arg1 - 1; var5++)
                var2 += fix32ReduceAngle0To2Pi(arg0->unknown_804_ - var2) / 12;
        }
        else if (var4 >= 0x3244 && var4 < 0x6488)
        {
            var2 = var3 - (0x6488 - var4) / 12;
            for (unsigned int var6 = 0; var6 < arg1 - 1; var6++)
                var2 -= (0x6488 - fix32ReduceAngle0To2Pi(arg0->unknown_804_ - var2)) / 12;
        }
        func_ov023_021e60e0(arg0->unknown_7f8_, fix32ReduceAngle0To2Pi(var2));
        int var7 = fix32ReduceAngle0To2Pi(arg0->unknown_804_ - var2);
        if ((var7 < 0 ? -var7 : var7) < 40)
            var0 = 1;
        else if (((0x6488 - var7) < 0 ? -(0x6488 - var7) : (0x6488 - var7)) < 40)
            var0 = 1;
        if (var0)
        {
            func_ov023_021e60e0(arg0->unknown_7f8_, fix32ReduceAngle0To2Pi(arg0->unknown_804_));
            arg0->unknown_804_ = 0;
            arg0->unknown_d9c_ &= ~8;
        }
    }
    else if (arg0->unknown_d9c_ & 1)
    {
        int var8 = 0;
        int var9 = 0;
        int var10 = 0;
        int var11;
        int var12;
        g_touchInput.GetTouchPoint(&var11, &var12);
        if (g_touchInput.pressed_ != 0 || (g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0) ||
            g_touchInput.released_ != 0)
        {
            var10 = 1;
            if (var12 >= 0xa9 && var12 <= 0xb1)
            {
                if (var11 >= 0xe && var11 <= 0x17)
                    var8 = 1;
                if (var11 >= 0x3b && var11 <= 0x44)
                    var9 = 1;
            }
        }
        if (var10 == 0)
        {
            if (g_keyManager.TestKeysHeld(0x200))
                var8 = 1;
            if (g_keyManager.TestKeysHeld(0x100))
                var9 = 1;
        }
        if (var8 != 0 && var9 != 0)
        {
            arg0->unknown_804_ = 0x1eb;
            arg0->unknown_d9c_ |= 8;
        }
        else if (var8 != 0 || var9 != 0)
        {
            Vector3fix var13 = func_ov023_021e613c(arg0->unknown_7f8_);
            if (var8 != 0)
                var13.unknown_4_ += (int)(4096.0f * (0.08f * arg1));
            if (var9 != 0)
                var13.unknown_4_ -= (int)(4096.0f * (0.08f * arg1));
            var13.unknown_4_ = fix32ReduceAngle0To2Pi(var13.unknown_4_);
            func_ov023_021e6088(arg0->unknown_7f8_, (Struct_ov009_02188454*)&var13);
        }
    }
}
