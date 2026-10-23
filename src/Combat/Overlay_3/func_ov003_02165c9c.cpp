#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Resource/CharacterCreationUI.h"

struct Struct_02080cc0;
struct Struct_02080f8c;
struct Struct_02080fa8;
struct Struct_02081198;
struct Struct_02081164;
struct Struct_0201099c_16;
struct Struct_ov003_0215f56c_3;
struct Struct_ov003_02165c9c_5;

extern "C" int func_02080b54(void* arg0, int arg1);
extern "C" int func_ov003_021614e8(int);
extern "C" void func_ov003_02166164(Struct_ov003_02165c9c_5*, int, int);
extern "C" void func_02042764(void* arg0, void* arg1, int arg2);
extern "C" int func_020865b0(Struct_0201099c_16*);
extern "C" int func_ov003_0215f56c(Struct_ov003_0215f56c_3*);
extern "C" int func_02080b40(void* arg0, int arg1);
extern "C" void func_02080cc0(struct Struct_02080cc0* arg0, int arg1, int arg2);
extern "C" void func_02080f8c(Struct_02080f8c*, int, int);
extern "C" void func_02080fe0(void*, int, int);
extern "C" void func_02080fa8(struct Struct_02080fa8*, int, int);
extern "C" void func_0208103c(void*, int, int);
extern "C" void func_02080828(void*, int, short*, short*);
extern "C" void func_020808c8(void*, int, short*, short*);
extern "C" void func_02080854(void*, int, int, int);
extern "C" int func_020e0434(struct Struct_0201099c_3*, int);
extern "C" void func_ov003_0215f5e8(void* arg0, int arg1, int arg2);
extern "C" void func_ov003_02160c58(void* arg0, short* arg1, short* arg2);
extern "C" void func_02081198(struct Struct_02081198* arg0, int arg1, int arg2);
extern "C" void func_02081164(struct Struct_02081164* arg0, int arg1, int arg2);
extern "C" int func_020813ec(void* arg0, int arg1);
extern "C" void func_ov003_02160678(void* arg0);
extern "C" void func_ov003_02160794(void* arg0);

struct Struct_ov003_02165c9c {
    signed char unknown_0_0_ : 6;
    char unknown_1_[1];
    unsigned char unknown_2_[0xd];
    unsigned char unknown_f_[0x140 - 0xf];
    char unknown_140_[0x34];
    unsigned char unknown_174_0_ : 1;
    char unknown_175_[0x23c - 0x175];
};

struct Struct_ov003_02165c9c_2 {
    char unknown_0_[0xf7c];
    unsigned char unknown_f7c_;
    char unknown_f7d_[0xf80 - 0xf7d];
    Struct_ov003_02165c9c unknown_f80_[(0x2c8c - 0xf80) / 0x23c];
    char unknown_2c8c_[0x2c8c - 0xf80 - ((0x2c8c - 0xf80) / 0x23c) * 0x23c];
    unsigned char unknown1_2c8c_;
};

extern "C" void* func_02010828(GameState*);

static inline Struct_ov003_02165c9c_2* inline_ov003_02165c9c() {
    return (Struct_ov003_02165c9c_2*)func_02010828(GameState::GetInstance());
}

struct Struct_ov003_02165c9c_3 {
    short unknown_0_[2];
};

struct Struct_ov003_0217f3ec_2 {
#if defined(jpn)
    char unknown_0_[0x18];
#else
    char unknown1_0_[0x10];
#endif
    Struct_ov003_02165c9c_3 unknown_10_;
};

extern Struct_ov003_0217f3ec_2 data_ov003_0217f3ec;

struct Struct_ov003_02165c9c_4 {
#if defined(jpn)
    char unknown_0_[0x1c4];
    Struct_0201099c_3 unknown_2dc_;
    char unknown_1cc_[0x20c - 0x1cc];
    struct Struct_02080cc0* unknown_324_;
    char unknown_210_[0x290 - 0x210];
    unsigned char unknown_468_[4];
    char unknown_294_[0x2a8 - 0x294];
    short unknown_480_;
    char unknown_2aa_[0x2c7 - 0x2aa];
    signed char unknown_49f_;
    char unknown_2c8_[0x2e5 - 0x2c8];
    unsigned char unknown_4bd_;
#else
    char unknown1_0_[0x2dc];
    Struct_0201099c_3 unknown_2dc_;
    char unknown_2e4_[0x324 - 0x2e4];
    struct Struct_02080cc0* unknown_324_;
    char unknown_328_[0x39c - 0x328];
    char unknown_39c_[4][0x30];
    char unknown_45c_[0x468 - 0x45c];
    unsigned char unknown_468_[4];
    char unknown_46c_[0x480 - 0x46c];
    short unknown_480_;
    char unknown_482_[0x49f - 0x482];
    signed char unknown_49f_;
    char unknown_4a0_[0x4bd - 0x4a0];
    unsigned char unknown_4bd_;
#endif
};

struct Struct_ov003_02165c9c_6 {
#if defined(jpn)
    char unknown_0_[0x2a];
#else
    char unknown1_0_[0x36];
#endif
    short unknown_36_;
};

// USA: func_ov003_02165c9c
extern "C" ARM void func_ov003_02165c9c(Struct_ov003_02165c9c_4* arg0) {
    struct Struct_02080cc0* var0 = arg0->unknown_324_;
    Struct_ov003_02165c9c_2* var1;
    int var2;
    Struct_ov003_02165c9c* var3;
    short var4;
    short var5;
    int var6;
    int var7;
    int var8;
    int var9;
    int var10;
    int var11;
    int var12;
    int var13;
    int var14;
    short var15;
    int var16;
    short var17;
    int var18;
    unsigned char var19;
    int var20;
    short var21, var22, var23, var24;
    short var25, var26;
    Struct_ov003_02165c9c_3 var27;

    func_02080b54(var0, 6);
    var1 = inline_ov003_02165c9c();
    var2 = var1->unknown1_2c8c_;
    var12 = 0x15;
    var4 = 100;
    var5 = arg0->unknown_49f_ * 4;
    var6 = -1;
    var13 = 0xcb;
    var7 = func_020e0434(&arg0->unknown_2dc_, 0x7530);
    var8 = func_020e0434(&arg0->unknown_2dc_, 0x7531);
    arg0->unknown_4bd_ = (unsigned char)var12;
    memset(arg0->unknown_468_, 0, 4);
    if (func_ov003_021614e8((int)arg0) == 0) {
        var11 = 1;
    } else {
        var11 = 0;
    }
    var9 = var2 + var11;
    func_ov003_02166164((Struct_ov003_02165c9c_5*)arg0, var9 > 4, 1);
#if !defined(jpn)
    memset(arg0->unknown_39c_, 0, sizeof(arg0->unknown_39c_));
#endif

    for (var15 = 0; var15 < 4; var15++) {
        var3 = &var1->unknown_f80_[var5];
#if defined(jpn)
        func_02080f8c((struct Struct_02080f8c*)var0, var12, (int)var3->unknown_140_);
#else
        var16 = var15 * 0x30;
        func_02042764(var3->unknown_140_, (char*)arg0->unknown_39c_ + var16, 1);
        func_02080f8c((struct Struct_02080f8c*)var0, var12, (int)&arg0->unknown_39c_[0][var16]);
#endif
        if (func_020865b0((Struct_0201099c_16*)var3) != 0) {
            var6 = (short)(func_020865b0((Struct_0201099c_16*)var3) + 0x11);
        }
        func_02080fe0(var0, (short)(var12 + 4), var6);
        func_02080fa8((struct Struct_02080fa8*)var0, (short)(var12 + 8),
                                   var3->unknown_2_[func_020865b0((Struct_0201099c_16*)var3)]);
        var14 = func_ov003_0215f56c((Struct_ov003_0215f56c_3*)var3);
        if (var12 == ((struct Struct_ov003_02165c9c_6*)var0)->unknown_36_ && var14 == 0xf) {
            var14 = 0xa;
        }
        if (var5 < var2) {
            if (var3->unknown_0_0_ == arg0->unknown_480_) {
                var14 = 5;
            }
            for (var17 = 0; var17 < 3; var17++) {
                var10 = var12 + var17 * 4;
                func_02080cc0(var0, (short)var10, var14);
                func_02080b40(var0, (short)(unsigned int)var10);
            }
#if !defined(jpn)
            func_02080cc0(var0, var4, var14);
            func_02080b40(var0, var4);
#endif
            var19 = var3->unknown_f_[func_020865b0((Struct_0201099c_16*)var3)];
            func_0208103c(var0, var13, (short)(var19 + 100));
            if (var19 != 0) {
                var14 = 5;
                if (var19 == 0xa) {
                    var14 = 0xd;
                }
                func_02080cc0(var0, var13, var14);
                var18 = var15 + 0x19;
                func_02080828(var0, (short)var18, &var21, &var22);
                func_020808c8(var0, (short)(unsigned int)var18, &var23, &var24);
#if defined(jpn)
                func_02080854(var0, var13, (short)(var21 + var23 + 1), (short)(var22 + 2));
#else
                func_02080854(var0, var13, (short)(var21 + var23 + 1), var22);
#endif
                func_02080cc0(var0, var13, var14);
                func_02080b40(var0, var13);
            }
            arg0->unknown_468_[var15] = var3->unknown_174_0_ + 1;
        } else {
            var20 = var7;
            if (var11 != 0 && func_ov003_021614e8((int)arg0) == 0) {
                var11 = 0;
                var20 = var8;
            }
            func_02080cc0(var0, var12, var14);
            func_02080b40(var0, var12);
            func_02080f8c((struct Struct_02080f8c*)var0, var12, var20);
        }
        var5++;
        var12 = (short)(var12 + 1);
        var13 = (short)(var13 + 1);
#if !defined(jpn)
        var4++;
#endif
    }

    func_ov003_0215f5e8(var0, arg0->unknown_49f_, var9);
    func_ov003_02160c58(arg0, &var25, &var26);
    var1 = inline_ov003_02165c9c();
    var26 = var26 - (var1->unknown_f7c_ - 1);
    func_02080fa8((struct Struct_02080fa8*)var0, 0x23, var26);
    func_02080fa8((struct Struct_02080fa8*)var0, 0x24, var25);

    var27 = data_ov003_0217f3ec.unknown_10_;
    for (int var28 = 0; var28 < 2; var28++) {
        short var29 = var27.unknown_0_[var28];
        func_02081198((struct Struct_02081198*)var0, var29, 1);
        func_02081164((struct Struct_02081164*)var0, var29, 1);
        func_020813ec(var0, var29);
    }
    func_ov003_02160678(arg0);
    func_ov003_02160794(arg0);
}
