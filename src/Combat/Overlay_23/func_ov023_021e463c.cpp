#include <globaldefs.h>
#include "Input/Input.h"

extern "C" void func_ov023_021e6194(void* arg0);
struct Struct_ov009_02188454 { unsigned int unknown_0_[3]; };
extern "C" void func_ov023_021e613c(Struct_ov009_02188454* arg0, char* arg1);
int fix32ReduceAngle0To2Pi(int angle);
extern "C" void func_ov023_021e60e0(void* arg0, unsigned int arg1);
extern "C" void func_ov023_021e6088(void* arg0, Struct_ov009_02188454* arg1);
extern "C" int func_ov023_021e29d0(char* arg0);

// USA: func_ov023_021e463c
extern "C" ARM void func_ov023_021e463c(void* arg0, unsigned int arg1) {
#if defined(jpn)
 enum {Enum_ov023_021e463c_296=0x124, Enum_ov023_021e463c_1588=0x56c};
#else
 enum {Enum_ov023_021e463c_296=0x128, Enum_ov023_021e463c_1588=0x634};
#endif
    char* var0 = (char*)arg0;
    Struct_ov009_02188454 var1;
    Struct_ov009_02188454 var2;
    Struct_ov009_02188454 var3;
    Struct_ov009_02188454 var4;
    func_ov023_021e6194(*(void**)(var0 + Enum_ov023_021e463c_296));
    unsigned short var5 = *(unsigned short*)(var0 + Enum_ov023_021e463c_1588);
    if (var5 & 2) {
        int var6 = 0;
        func_ov023_021e613c(&var3, *(char**)(var0 + Enum_ov023_021e463c_296));
        var1 = var3;
        int var7 = var1.unknown_0_[1];
        int var8 = 0x1eb;
        int var9 = 12;
        int var10 = fix32ReduceAngle0To2Pi(var8 - var7);
        int var11;
        if (var10 >= 0 && var10 < 0x3244) {
            var11 = var7 + var10 / var9;
            unsigned int var12;
            for (var12 = 0; var12 < arg1 - 1; var12++) {
                int var13 = fix32ReduceAngle0To2Pi(var8 - var11);
                var11 += var13 / var9;
            }
        } else if (var10 >= 0x3244 && var10 < 0x6488) {
            int var14 = 0x6488;
            var11 = var7 - (var14 - var10) / var9;
            unsigned int var15;
            for (var15 = 0; var15 < arg1 - 1; var15++) {
                int var16 = fix32ReduceAngle0To2Pi(var8 - var11);
                var11 -= (var14 - var16) / var9;
            }
        }
        int var17 = fix32ReduceAngle0To2Pi(var11);
        func_ov023_021e60e0(*(void**)(var0 + Enum_ov023_021e463c_296), var17);
        int var18 = fix32ReduceAngle0To2Pi(0x1eb - var11);
        int var19 = var18 < 0 ? -var18 : var18;
        if (var19 < 0x28) {
            var6 = 1;
        } else {
            int var20 = 0x6488 - var18;
            int var21 = var20 < 0 ? -var20 : var20;
            if (var21 < 0x28) var6 = 1;
        }
        if (var6) {
            int var22 = fix32ReduceAngle0To2Pi(0x1eb);
            func_ov023_021e60e0(*(void**)(var0 + Enum_ov023_021e463c_296), var22);
            *(unsigned short*)(var0 + Enum_ov023_021e463c_1588) &= ~2;
        }
    } else if (var5 & 1) {
        int var23 = 0, var24 = 0, var25 = 0;
        if (g_touchInput.pressed_) {
            int var26 = func_ov023_021e29d0(var0 + 0xd4);
            if (var26 == 0x22) var23 = 1;
            if (var26 == 0x23) var24 = 1;
            var25 = 1;
        } else if (g_touchInput.isRepeatValid_ && g_touchInput.currentReading_.isHeld) {
            if (var5 & 0x100) var23 = 1;
            if (var5 & 0x200) var24 = 1;
            var25 = 1;
        } else if (g_touchInput.released_) {
            var25 = 1;
        }
        if (!var25) {
            if (g_keyManager.TestKeysHeld(0x200)) var23 = 1;
            if (g_keyManager.TestKeysHeld(0x100)) var24 = 1;
        }
        if (var23 && var24) {
            *(unsigned short*)(var0 + Enum_ov023_021e463c_1588) |= 2;
        } else if (var23 || var24) {
            func_ov023_021e613c(&var4, *(char**)(var0 + Enum_ov023_021e463c_296));
            var2 = var4;
            if (var23) {
                var2.unknown_0_[1] += (int)((float)arg1 * 0.08f * 4096.0f);
            }
            if (var24) {
                var2.unknown_0_[1] -= (int)((float)arg1 * 0.08f * 4096.0f);
            }
            var2.unknown_0_[1] = fix32ReduceAngle0To2Pi(var2.unknown_0_[1]);
            func_ov023_021e6088(*(void**)(var0 + Enum_ov023_021e463c_296), &var2);
        }
        if (var23) {
            *(unsigned short*)(var0 + Enum_ov023_021e463c_1588) |= 0x100;
        } else {
            *(unsigned short*)(var0 + Enum_ov023_021e463c_1588) &= ~0x100;
        }
        if (var24) {
            *(unsigned short*)(var0 + Enum_ov023_021e463c_1588) |= 0x200;
        } else {
            *(unsigned short*)(var0 + Enum_ov023_021e463c_1588) &= ~0x200;
        }
    }
}
