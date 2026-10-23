#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "GameState/GameState.h"

extern "C" void* func_020d6c00(void);
struct Struct_02012de8;
extern "C" int func_02046708(struct Struct_02012de8* arg0, unsigned int arg1);

extern "C" void func_0205308c(void* arg0, int arg1);
extern "C" void func_ov017_021cc1f8(int arg0, void* arg1, int arg2, int arg3);

extern "C" unsigned char func_020100b0(GameState* arg0);
extern "C" int func_020100f8(char* arg0);

struct Struct_02037d88_12;
extern "C" int func_020a2c70(struct Struct_02037d88_12* arg0);

struct Struct_02052f44 {
    unsigned char unknown_0_0_ : 2;
    unsigned char unknown_0_2_ : 6;
};

struct Struct_02037d88_2 {
    char unknown_0_[0x4];
    short unknown_4_;
    char unknown_6_[0xc1 - 0x6];
    struct Struct_02052f44 unknown_c1_;
    char unknown_c2_[(IS_JPN ? 0x16c : 0x178) - 0xc2];
    signed char unknown_178_[1];
    char unknown_179_[0x17c - 0x179];
    signed char unknown_17c_;
    signed char unknown_17d_;
    signed char unknown_17e_;
    char unknown_17f_[0x180 - 0x17f];
    int unknown_180_;
    signed char unknown_184_;
    signed char unknown_185_;
    signed char unknown_186_;
    char unknown_187_[0x190 - 0x187];
    int unknown_190_;
    int unknown_194_;
};

// USA: func_02052f44
extern "C" ARM int func_02052f44(struct Struct_02037d88_2* arg0, signed char* arg1, int arg2) {
    int var0;
    int var1;
    signed char var2;
    signed char var3;
    GameState* var4;

    if (func_02046708((struct Struct_02012de8*)func_020d6c00(), 2)) {
        return 0;
    }

    if (arg2 > 4) {
        return 0;
    }

    {
        int var5 = (((signed char*)((char*)arg0 + 0x100))[(IS_JPN ? 0x70 : 0x7c)] > 0);
        if (var5) {
            return 0;
        }
    }

    var0 = 0;
    for (var1 = 0; var1 < arg2; var1++) {
        signed char var6 = arg1[var1];
        if (var6 > 0 && var6 < 0x21) {
            arg0->unknown_178_[var0] = var6;
            var0++;
        }
    }

    if (var0 == 0) {
        return 0;
    }

    arg0->unknown_17c_ = var0;
    arg0->unknown_17d_ = 0;
    arg0->unknown_180_ = -1;
    arg0->unknown_17e_ = 0;
    arg0->unknown_184_ = 0;
    arg0->unknown_190_ = 0;
    arg0->unknown_194_ = -1;
    arg0->unknown_185_ = 0;
    arg0->unknown_186_ = 0;

    var2 = ((signed char*)((char*)arg0 + 0x100))[(IS_JPN ? 0x71 : 0x7d)];
    var3 = arg0->unknown_178_[var2];
    func_0205308c(arg0, var3);

    func_ov017_021cc1f8(arg0->unknown_4_, arg1, arg2, 0);

    arg0->unknown_c1_.unknown_0_0_ |= 2;

    {
        short var7;
        var4 = GameState::GetInstance();
        var7 = arg0->unknown_4_;
        arg0 = (struct Struct_02037d88_2*)var4;
        unsigned char var8 = func_020100b0((GameState*)arg0);
        if (var8 == var7) {
            int var9 = func_020100f8((char*)arg0);
            if (var9 != 0) {
                func_020a2c70((struct Struct_02037d88_12*)var9);
            }
        }
    }

    return 1;
}
