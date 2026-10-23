#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02179ff0_2204 = 0x818 };
enum { Enum_ov003_02179ff0_2208 = 0x81c };
enum { Enum_ov003_02179ff0_4108 = 0xf88 };
enum { Enum_ov003_02179ff0_4118 = 0xf92 };
enum { Enum_ov003_02179ff0_4154 = 0xfb6 };
#else
enum { Enum_ov003_02179ff0_2204 = 0x89c };
enum { Enum_ov003_02179ff0_2208 = 0x8a0 };
enum { Enum_ov003_02179ff0_4108 = 0x100c };
enum { Enum_ov003_02179ff0_4118 = 0x1016 };
enum { Enum_ov003_02179ff0_4154 = 0x103a };
#endif
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);
extern "C" short func_02080468(void* arg0, int arg1);
extern "C" unsigned char func_0207ca94(int arg0);
extern "C" short func_0207c638(void* arg0, unsigned int arg1);
extern "C" int func_0207c6b8(unsigned char* arg0, unsigned int arg1, int arg2);
struct Struct_020a0b8c;
extern "C" int func_020a0b8c(struct Struct_020a0b8c* arg0);

struct Struct_ov003_02179ff0 {
    unsigned char unknown_0_[Enum_ov003_02179ff0_2204];
    void* unknown_89c_;
    unsigned char unknown_8a0_[Enum_ov003_02179ff0_4108 - Enum_ov003_02179ff0_2208];
    short unknown_100c_;
    short unknown_100e_;
    short unknown_1010_;
    short unknown_1012_;
    short unknown_1014_;
    unsigned char unknown_1016_[Enum_ov003_02179ff0_4154 - Enum_ov003_02179ff0_4118];
    short unknown_103a_;
};

// USA: func_ov003_02179ff0
extern "C" ARM void func_ov003_02179ff0(Struct_ov003_02179ff0* arg0) {
    void* var0 = arg0->unknown_89c_;
    unsigned char* var1 = (unsigned char*)func_02010828(GameState::GetInstance());
    if (arg0->unknown_100c_ == 0x77) {
        short var2 = arg0->unknown_1012_ - func_02080468(var0, 0x1d);
        unsigned int var3 =func_0207ca94(var2);
        int var4 = func_0207c638(var1 + 0x1d4, var3);
        short var5 = arg0->unknown_100e_ - func_02080468(var0, 0x1e);
        short var6 = var5 + arg0->unknown_1014_ * 5;
        if (var4 <= var6) var6 = var4 - 1;
        arg0->unknown_103a_ = func_0207c6b8(var1 + 0x1d4, var3, var6);
        arg0->unknown_100e_ = var6 % 5 + func_02080468(var0, 0x1e);
    } else {
        int var7 = func_020a0b8c((struct Struct_020a0b8c*)var1);
        short var8 = arg0->unknown_100e_ - func_02080468(var0, 0x16);
        short var9 = var8 + arg0->unknown_1014_ * 8;
        if (var7 <= var9) var9 = var7 - 1;
        arg0->unknown_103a_ = ((short*)(var1 + 0xc))[var9];
        arg0->unknown_100e_ = var9 % 8 + func_02080468(var0, 0x16);
    }
}
