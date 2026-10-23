#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov006_021599c0_116 = 0x6c, Enum_ov006_021599c0_651 = 0x293 };
#else
enum { Enum_ov006_021599c0_116 = 0x74, Enum_ov006_021599c0_651 = 0x28b };
#endif

struct Struct_ov006_02157a60 {
    char unknown_0_[Enum_ov006_021599c0_116];
    char unknown_74_[0x28];
    char unknown_9c_[0x64];
    char unknown_100_[Enum_ov006_021599c0_651];
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
extern "C" int func_ov006_02153a78(void* arg0, int arg1);
extern "C" void func_ov006_0215f9e8(Struct_ov006_02157a60* arg0);
extern "C" void func_ov006_0215a5dc(Struct_ov006_02157a60* arg0);

// USA: func_ov006_021599c0
extern "C" ARM unsigned char func_ov006_021599c0(Struct_ov006_02157a60* arg0) {
    int var0 = 0;
    int var1 = 0;
    int var2 = 0;
    if (arg0->unknown_393_ < 5) {
        arg0->unknown_393_++;
    } else {
        short var3 = func_ov023_021e2868(arg0->unknown_100_);
        if (var3 == 0x49)
            var2 = 1;
        if (var3 == 0x4a)
            var2 = -1;
        if (var2 != 0)
            arg0->unknown_393_ = 0;
    }
    unsigned char var4 = 0;
    short var5 = func_ov023_021e29d0(arg0->unknown_100_);
    if (var5 >= 0) {
        if (var5 == 0x49)
            var2 = 1;
        if (var5 == 0x4a)
            var2 = -1;
        var0 = var5 == 0x4e ? 1 : 0;
        var1 = var5 == 0x14 ? 1 : 0;
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
        while (!func_ov006_02153a78(arg0->unknown_74_, arg0->unknown_38b_))
            arg0->unknown_38b_--;
        if (var7 < arg0->unknown_38b_)
            arg0->unknown_430_ = 1;
        if (arg0->unknown_38b_ < var7)
            arg0->unknown_431_ = 1;
        func_ov006_0215f9e8(arg0);
        func_ov006_0215a5dc(arg0);
        return 1;
    }
    if (var2 != 0) {
        int var8 = arg0->unknown_38b_;
        arg0->unknown_38b_ = var8 + var2;
        if (!func_ov006_02153a78(arg0->unknown_74_, arg0->unknown_38b_))
            arg0->unknown_38b_--;
        if (arg0->unknown_38b_ == 0)
            arg0->unknown_38b_ = 1;
        if (arg0->unknown_38b_ > 9)
            arg0->unknown_38b_ = 9;
        if (var8 < arg0->unknown_38b_)
            arg0->unknown_430_ = 1;
        if (arg0->unknown_38b_ < var8)
            arg0->unknown_431_ = 1;
        func_ov006_0215f9e8(arg0);
        func_ov006_0215a5dc(arg0);
        return 1;
    }
    if (var0)
        return 2;
    if (var1)
        return 3;
    return 0;
}
