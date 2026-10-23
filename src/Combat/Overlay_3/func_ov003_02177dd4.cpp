#include <globaldefs.h>
#if defined(jpn)
enum {
    Enum_ov003_02177dd4_2048 = 0x77c
};
enum {
    Enum_ov003_02177dd4_2204 = 0x818
};
enum {
    Enum_ov003_02177dd4_2208 = 0x81c
};
enum {
    Enum_ov003_02177dd4_4108 = 0xf88
};
#else
enum {
    Enum_ov003_02177dd4_2048 = 0x800
};
enum {
    Enum_ov003_02177dd4_2204 = 0x89c
};
enum {
    Enum_ov003_02177dd4_2208 = 0x8a0
};
enum {
    Enum_ov003_02177dd4_4108 = 0x100c
};
#endif
#include "GameState/GameState.h"

extern "C" unsigned char func_0207ca94(int arg0);
extern "C" int func_ov003_02175f90(void *arg0);
struct Struct_020a0b8c {
    short* unknown_0_;
    signed char* unknown_4_;
    short unknown_8_;
};
struct Struct_0207c258 {
    char unknown_0_[0xbd0];
    short* unknown_bd0_[8];
    unsigned char* unknown_bf0_[8];
    short unknown_c10_[8];
    unsigned char unknown_c20_[8];
    unsigned char unknown_c28_[8];
};
struct Struct_ov003_02177dd4_2 {
    Struct_020a0b8c unknown_0_;
    short unknown_c_[152];
    signed char unknown_13c_[152];
    Struct_0207c258 unknown_1d4_;
};
extern "C" int func_020a0b8c(struct Struct_020a0b8c *arg0);
struct Struct_0207fdcc_2;
extern "C" void func_02080c20(struct Struct_0207fdcc_2 *arg0, int arg1);
extern "C" void func_02080c68(void *arg0, int arg1, int arg2);
extern "C" void func_02080bac(void *arg0, int arg1);
extern "C" void func_0208065c(void *arg0, int arg1);
extern "C" void func_02081130(void *arg0, int arg1, int arg2);
extern "C" void func_020806b0(void *arg0, int arg1);
extern "C" int func_02080b2c(void *arg0, int arg1);
extern "C" int func_0207c6b8(unsigned char *arg0, unsigned int arg1, int arg2);
struct Struct_0201099c_9;
struct Struct_0201099c_10 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[10];
    struct Struct_0201099c_9* unknown_c_;
    unsigned char unknown_10_[4];
    unsigned char unknown_14_;
};
struct Struct_0201099c_9 {
    char unknown_0_[4];
    int unknown_4_;
    char unknown_8_[0x1a - 8];
    unsigned short unknown_1a_;
};
extern "C" struct Struct_0201099c_9 *func_020dedd0(struct Struct_0201099c_10 *arg0, int arg1);
extern "C" short func_0207c72c(void *arg0, unsigned int arg1, short arg2);
extern "C" void func_ov003_0217818c(void *arg0, struct Struct_0201099c_9 *arg1, int arg2, int arg3);
extern "C" void func_020805f4(void *arg0, int arg1);
struct Struct_02080f8c;
extern "C" void func_02080f8c(struct Struct_02080f8c *arg0, int arg1, int arg2);
struct Struct_02080fa8;
extern "C" void func_02080fa8(struct Struct_02080fa8 *arg0, int arg1, int arg2);
extern "C" int func_02081010(void *arg0, int arg1);
extern "C" void func_020813ec(void *arg0, int arg1);

struct Struct_ov003_02177dd4 {
    unsigned char unknown_0_[Enum_ov003_02177dd4_2048 + 0x74];
    struct Struct_0201099c_10 unknown_874_;
    unsigned char unknown_88c_[Enum_ov003_02177dd4_2204 - Enum_ov003_02177dd4_2048 - 0x74 - sizeof(Struct_0201099c_10)];
    struct Struct_0207fdcc_2 *unknown_89c_;
    unsigned char unknown_8a0_[Enum_ov003_02177dd4_4108 - Enum_ov003_02177dd4_2208];
    short unknown_100c_;
    short unknown_100e_;
    short unknown_1010_;
    short unknown_1012_;
    short unknown_1014_;
    short unknown_1016_;
};

// JPN: func_ov003_02177dd4 (02176d60)
// USA: func_ov003_02177dd4
extern "C" ARM void func_ov003_02177dd4(Struct_ov003_02177dd4 *arg0) {
    Struct_ov003_02177dd4_2* var0 = static_cast<Struct_ov003_02177dd4_2*>(func_02010828(GameState::GetInstance()));
    unsigned int var1  = 0;
    short var2;
    short var3;
    short var4;
    short var5;
    short var6;
    int var7;
    short *var8             = 0;
    signed char *var9       = 0;
    struct Struct_0207fdcc_2 *var10 = arg0->unknown_89c_;
    int var11               = 0x16;
    var2                     = 0xa6;
    short var12               = 0xa7;
    short var13               = 0xaf;
    short var14               = 0xb7;
    var3                     = 0xbf;
    short var15               = 0xc7;
    var4                  = 0xcf;
    var5             = 0xd0;
    short var16           = 8;

    if (arg0->unknown_100c_ == 0x77) {
        short var17 = arg0->unknown_1012_ - 0x11e;
        var1            = func_0207ca94(var17);
        var7            = func_ov003_02175f90(arg0);
        arg0->unknown_1016_  = (var7 + 4) / 5;
        if (arg0->unknown_1016_ == 0) {
            arg0->unknown_1016_ = 1;
        }
        var12         = 0x127;
        var6         = var17 + 0x11e;
        var11       = 0x1e;
        var2         = 0x126;
        var13         = 0x12c;
        var14         = 0x131;
        var3         = 0x136;
        var15         = 0x13b;
        var4      = 0x140;
        var5 = 0x141;
        var16     = 5;
    } else {
        var7 = func_020a0b8c(&var0->unknown_0_);
        var8  = var0->unknown_c_;
        var9  = var0->unknown_13c_;
        var6   = 0x7a;
    }

    func_02080c20(var10, var11);
    func_02080c68(var10, var11, 0);
    func_02080bac(var10, var11);
    func_0208065c(var10, var11);
    func_02081130(var10, var11, var16 < var7);

    short var18              = arg0->unknown_1014_ * var16;
    short var19            = var18 + var16;
    for (; var18 < var19; var18++) {
        if (var7 <= var18) {
            func_020806b0(var10, var12);
            func_02080b2c(var10, var12);
            func_02080b2c(var10, var13);
            func_02080b2c(var10, var14);
            func_02080b2c(var10, var3);
            func_02080b2c(var10, var15);
        } else {
            int var20 = 0;
            int var21   = 0;
            int var22;
            if (var8 != 0) {
                var22 = var8[var18];
            } else {
                var22 = func_0207c6b8(((unsigned char*)(&var0->unknown_1d4_)), var1, var18);
            }
            struct Struct_0201099c_9 *var23 = func_020dedd0(&arg0->unknown_874_, var22);
            if (var23 != NULL) {
                var20 = var23->unknown_4_;
                var21   = var23->unknown_1a_;
            }
            int var24;
            if (var9 != 0) {
                var24 = var9[var18];
            } else {
                var24 = func_0207c72c(&var0->unknown_1d4_, var1, var18);
            }
            func_ov003_0217818c(arg0, var23, var13, var14);
#if !defined(jpn)
            func_020805f4(var10, var12);
#endif
            func_02080f8c((struct Struct_02080f8c *) var10, var12, var20);
            func_02080fa8((struct Struct_02080fa8 *) var10, var13, var21);
            func_02080fa8((struct Struct_02080fa8 *) var10, var15, var24);
        }
        var12++;
        var13++;
        var14++;
        var3++;
        var15++;
    }

    func_02080f8c((struct Struct_02080f8c *) var10, var2, func_02081010(var10, var6));
    func_02080fa8((struct Struct_02080fa8 *) var10, var4, arg0->unknown_1014_ + 1);
    func_02080fa8((struct Struct_02080fa8 *) var10, var5, arg0->unknown_1016_);
    func_020813ec(var10, var11);
}
