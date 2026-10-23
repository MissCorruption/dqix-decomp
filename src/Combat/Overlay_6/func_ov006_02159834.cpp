#if defined(jpn)
#define R(j,u) (j)
#define data_ov006_0215ffb4 data_ov006_02161318
#define data_ov006_0215ffc0 data_ov006_0216131b
#define data_ov006_0215ffc4 data_ov006_02161328
#define data_ov006_0215ffca data_ov006_02161336
#define data_ov006_0215ffe2 data_ov006_0216132e
#define data_ov006_0215fff4 data_ov006_02161346
#define func_ov006_021547c8 func_ov006_02155f30
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov006_02157a60 {
    char unknown_0_[R(0x94, 0x9c)];
    char unknown_9c_[0x64];
    char unknown_100_[R(0x293, 0x28b)];
    unsigned char unknown_38b_;
    char unknown_38c_[0x7];
    unsigned char unknown_393_;
    char unknown_394_[0x9c];
    unsigned char unknown_430_;
    unsigned char unknown_431_;
};

extern "C" short func_ov023_021e2868(void* arg0);
extern "C" short func_ov023_021e29d0(void* arg0);
extern "C" unsigned short func_02081f20(void* arg0, int arg1);
extern "C" unsigned short func_ov006_021599ac(void** arg0);
extern "C" void func_ov006_02159320(Struct_ov006_02157a60* arg0);
extern "C" void func_ov006_021593b0(Struct_ov006_02157a60* arg0);

// USA: func_ov006_02159834
extern "C" ARM int func_ov006_02159834(Struct_ov006_02157a60* arg0) {
    int var0 = 0;
    int var1 = 0;
    int var2 = 0;
    if (arg0->unknown_393_ < 5) {
        arg0->unknown_393_++;
    } else {
        short var3 = func_ov023_021e2868(arg0->unknown_100_);
        if (var3 == 0x76)
            var2 = 1;
        if (var3 == 0x77)
            var2 = -1;
        if (var2 != 0)
            arg0->unknown_393_ = 0;
    }
    unsigned char var4 = 0;
    short var5 = func_ov023_021e29d0(arg0->unknown_100_);
    if (var5 >= 0) {
        if (var5 == 0x76)
            var2 = 1;
        if (var5 == 0x77)
            var2 = -1;
        var0 = var5 == 0x11 ? 1 : 0;
        var1 = var5 == 0x12 ? 1 : 0;
    }
    if ((unsigned short)(func_02081f20(arg0->unknown_9c_, GameState::GetInstance()->GetTickCount()) + 0xffff) <= 1) {
        unsigned short var6 = func_ov006_021599ac((void**)arg0->unknown_9c_);
        if (var6 == 0x40)
            var2 = 1;
        if (var6 == 0x80)
            var2 = -1;
        if (var6 == 0x20)
            var4 = 9;
        if (var6 == 0x10)
            var4 = 1;
    }
    if (var4 != 0) {
        int var7 = arg0->unknown_38b_;
        arg0->unknown_38b_ = var4;
        if (var4 == 9)
            func_ov006_02159320(arg0);
        else
            func_ov006_021593b0(arg0);
        arg0->unknown_430_ = var7 < arg0->unknown_38b_ ? 1 : 0;
        arg0->unknown_431_ = arg0->unknown_38b_ < var7 ? 1 : 0;
        return 1;
    }
    if (var2 != 0) {
        if (var2 > 0)
            func_ov006_02159320(arg0);
        else
            func_ov006_021593b0(arg0);
        return 1;
    }
    if (var0)
        return 2;
    if (var1)
        return 3;
    return 0;
}
