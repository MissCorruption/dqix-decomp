#include "Resource/ActionDataTables.h"
#include "GameState/GameState.h"
#include <globaldefs.h>

struct Struct_020839dc;
struct Struct_0209a9dc_2;

struct Struct_ov002_02157174 {
    int unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 10;
    unsigned int unknown_9_2_ : 2;
    unsigned int unknown_9_4_ : 20;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    unsigned int unknown_18_0_ : 12;
    unsigned int unknown_19_4_ : 4;
    unsigned int unknown_1a_0_ : 16;
};

struct Struct_ov002_02157174_2 {
    int unknown_0_;
    int unknown_4_;
    unsigned short unknown_8_;
};

extern "C" int func_020839dc(struct Struct_020839dc *arg0, unsigned char *arg1, int arg2);
extern "C" void *__clear(void *arg0, int arg1);
extern "C" int func_0209acdc(Struct_0209a9dc_2 *arg0, unsigned char *arg1, unsigned int arg2, unsigned short *arg3);
extern "C" Struct_ov002_02157174 *func_02079e2c(char *arg0, int arg1);
extern "C" void *memset(void *arg0, int arg1, unsigned int arg2);
extern "C" int func_0209ab7c(void *arg0, void *arg1, unsigned char *arg2);
extern "C" int func_02083b00(unsigned char *arg0, int arg1);
extern "C" Struct_ov002_02157174_2 *func_0209a594(void *arg0, int arg1);
extern "C" void *func_02053c6c(unsigned char *arg0);

// USA: func_ov002_02157174
extern "C" ARM void func_ov002_02157174(char *arg0, int arg1) {
#if defined(jpn)
    enum { Enum_ov002_02157174_9376 = 0x22d0, Enum_ov002_02157174_9504 = 0x2350, Enum_ov002_02157174_1184 = 0x2d0, Enum_ov002_02157174_68 = 0x27c, Enum_ov002_02157174_60 = 0x274, Enum_ov002_02157174_9216 = 0x2000, Enum_ov002_02157174_336 = 0x144, Enum_ov002_02157174_2384 = 0x8b8 };
#else
    enum { Enum_ov002_02157174_9376 = 0x24a0, Enum_ov002_02157174_9504 = 0x2520, Enum_ov002_02157174_1184 = 0x4a0, Enum_ov002_02157174_68 = 0x44, Enum_ov002_02157174_60 = 0x3c, Enum_ov002_02157174_9216 = 0x2400, Enum_ov002_02157174_336 = 0x150, Enum_ov002_02157174_2384 = 0x950 };
#endif
    unsigned char var0[0x42];
    short var1[0x42];
    unsigned char var2;
    Struct_ov002_02157174 **var3;
    unsigned char *var4;
    unsigned char *var5;
    int var6;
    int var7;
    Struct_02108e10* var8;
    int var9;
    int var10;
    unsigned short var11;
    for (var2 = 0; var2 < 0x20; var2++) {
        *(int *) (arg0 + var2 * 4 + Enum_ov002_02157174_9376) = 0;
    }
    *(unsigned char *) (arg0 + Enum_ov002_02157174_9504) = 0;
    var3                                = (Struct_ov002_02157174 **) (arg0 + Enum_ov002_02157174_1184 + 0x2000);
    var4                             = (unsigned char *) func_0200ff1c(GameState::GetInstance(), arg1);
    if (var4 == 0) {
        return;
    }
    var5 = (unsigned char *) func_02053c6c(var4);
    if (var5 == 0) {
        return;
    }
    var6 = func_020839dc((struct Struct_020839dc *) var5, var0, 0x42);
    __clear(var1, 0x84);
    var6     = func_0209acdc((Struct_0209a9dc_2 *) (arg0 + Enum_ov002_02157174_68 + Enum_ov002_02157174_9216), var0, var6, (unsigned short *) var1);
    var7 = 0;
    var8 = func_020797dc();
    for (var9 = 0; var9 < var6; var9++) {
        Struct_ov002_02157174 *var12 = func_02079e2c((char*)var8, var1[var9]);
        if (var12 != 0 && var0[var9] == 0x3c) {
            if (var12->unknown_9_2_ & 1) {
                var3[var7] = var12;
                var7++;
            }
        }
    }
    if (*(int *) (*(char **) (var4 + Enum_ov002_02157174_336) + Enum_ov002_02157174_2384) == 0) {
        memset(var0, 0, 0x42);
        var6 = func_020839dc((struct Struct_020839dc *) var5, var0, 0x42);
    } else {
        memset(var0, 0, 0x42);
        var6 = func_0209ab7c(arg0 + Enum_ov002_02157174_68 + Enum_ov002_02157174_9216, var4, var0);
    }
    memset(var1, 0, 0x84);
    var6 = func_0209acdc((Struct_0209a9dc_2 *) (arg0 + Enum_ov002_02157174_68 + Enum_ov002_02157174_9216), var0, var6, (unsigned short *) var1);
    for (var10 = 0; var10 < var6; var10++) {
        Struct_ov002_02157174 *var13 = func_02079e2c((char*)var8, var1[var10]);
        if (var13 != 0 && var0[var10] != 0x3c) {
            if (var13->unknown_9_2_ & 1) {
                var3[var7] = var13;
                var7++;
            }
        }
    }
    for (var11 = 0; var11 < 0x11f; var11++) {
        if (func_02083b00(var5, var11)) {
            Struct_ov002_02157174_2 *var14 = func_0209a594(arg0 + Enum_ov002_02157174_60 + Enum_ov002_02157174_9216, var11);
            if (var14 != 0 && var14->unknown_8_ != 0) {
                Struct_ov002_02157174 *var15 = func_02079e2c((char*)var8, (short) var14->unknown_8_);
                if (var15 != 0 && var15->unknown_19_4_ == 1) {
                    if (var15->unknown_9_2_ & 1) {
                        var3[var7] = var15;
                        var7++;
                    }
                }
            }
        }
    }
    *(unsigned char *) (arg0 + Enum_ov002_02157174_9504) = var7;
}
