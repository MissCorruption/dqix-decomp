#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_0207fe44;
struct Struct_02081f20_2;
struct Struct_02108760;
struct Struct_ov003_02162f40_3;
struct Struct_02018300_3;
struct Struct_02081198;
struct Struct_02081164;
struct Struct_02086a04;

struct Struct_ov003_0216201c {
#if defined(jpn)
    char unknown_0_[0x2a];
#else
    char unknown1_0_[0x36];
#endif
    short unknown_36_;
};

struct Struct_ov003_02162f40_4 {
#if defined(jpn)
    char unknown_0_[0x228];
#else
    char unknown1_0_[0x400];
#endif
    unsigned int unknown_400_;
};

struct Struct_ov003_02162f40 {
    char unknown_0_[0xf7c];
    unsigned char unknown_f7c_;
    char unknown_f7d_[0x2c8c - 0xf7d];
    unsigned char unknown_2c8c_;
};

struct Struct_ov003_0216253c {
    signed char unknown_0_0_ : 6;
};

struct Struct_ov003_02154af4_3 {
#if defined(jpn)
    char unknown_0_[0x1f0];
    char unknown_308_[0x20c - 0x1f0];
    Struct_ov003_0216201c *unknown_324_;
    char unknown_210_[0x28c - 0x210];
#else
    char unknown1_0_[0x308];
    char unknown_308_[0x324 - 0x308];
    Struct_ov003_0216201c *unknown_324_;
    char unknown_328_[0x464 - 0x328];
#endif
    unsigned int unknown_464_;
    char unknown_468_[0x470 - 0x468];
    short *unknown_470_;
    short unknown_474_;
    char unknown_476_[0x480 - 0x476];
    short unknown_480_;
    char unknown_482_[0x484 - 0x482];
    short unknown_484_;
    short unknown_486_;
    short unknown_488_;
    char unknown_48a_[0x490 - 0x48a];
    short unknown_490_;
    short unknown_492_;
    char unknown_494_[0x49e - 0x494];
    unsigned char unknown_49e_;
    signed char unknown_49f_;
    char unknown_4a0_[0x4a3 - 0x4a0];
    unsigned char unknown_4a3_;
    unsigned char unknown_4a4_;
};

static inline Struct_ov003_02162f40 *inline_ov003_02162f40() {
    return (Struct_ov003_02162f40 *) func_02010828(GameState::GetInstance());
}

struct Struct_ov003_02162f40_2 {
    char unknown_0_[0x64];
    Struct_ov003_02162f40_4 unknown_64_;
};

extern "C" void func_0207fe44(Struct_0207fe44 *);
extern "C" void func_020813ec(Struct_ov003_0216201c *, int);
extern "C" int func_02080468(void *, int);
extern "C" void func_0208203c(Struct_02081f20_2 *);
extern "C" void func_02080c68(void *, int, int);
extern "C" int func_ov003_02160854(Struct_ov003_02154af4_3 *);
extern "C" void func_0205eaa0(Struct_02108760 *, int, int);
extern "C" void func_ov003_0217e5dc(Struct_ov003_02162f40_3 *, unsigned char);
extern "C" int func_ov003_02160a68(Struct_ov003_02154af4_3 *);
extern "C" Struct_ov003_0216253c *func_ov003_02160bd0(void *, int);
extern "C" void func_02081198(Struct_02081198 *, int, int);
extern "C" void func_02081164(Struct_02081164 *, int, int);
extern "C" void func_ov003_02165c9c(Struct_ov003_02154af4_3 *);
extern "C" void func_ov003_02166f80(void *, int, int);
extern "C" int func_ov003_02160b84(void *);
extern "C" void func_ov003_021612c0(Struct_ov003_02154af4_3 *);
extern "C" int func_ov003_02161344(Struct_ov003_02154af4_3 *);
extern "C" void func_02086a04(Struct_02086a04 *, int);
extern "C" int func_ov003_02166a90(Struct_ov003_02154af4_3 *, int);
extern "C" void func_020397cc(Struct_02018300_3 *, int);

extern int data_02108760;

// USA: func_ov003_02162f40
extern "C" ARM void func_ov003_02162f40(Struct_ov003_02154af4_3 *arg0) {
    unsigned char var0 = arg0->unknown_4a4_;
    Struct_ov003_0216201c *var1    = arg0->unknown_324_;

    if (var0 == 0) {
        func_0207fe44((Struct_0207fe44 *) var1);
        func_020813ec(var1, 8);
        arg0->unknown_488_   = 8;
        arg0->unknown_490_   = func_02080468(var1, arg0->unknown_488_);
        arg0->unknown_474_   = arg0->unknown_490_;
        var1->unknown_36_ = arg0->unknown_490_;
        func_020813ec(var1, arg0->unknown_488_);
        func_0208203c((Struct_02081f20_2 *) arg0->unknown_308_);
        arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
    } else if (var0 == 1) {
        arg0->unknown_470_ = &arg0->unknown_490_;
        func_02080c68(var1, arg0->unknown_488_, 0);
        if (func_ov003_02160854(arg0) != 0) {
            func_0205eaa0((Struct_02108760 *) &data_02108760, 1, 0);
            func_0208203c((Struct_02081f20_2 *) arg0->unknown_308_);
            arg0->unknown_470_        = 0;
            unsigned char var2 = arg0->unknown_490_ - 0x25;
            Struct_ov003_02162f40_3 *var3  = (Struct_ov003_02162f40_3 *) GetGameResources();
            func_ov003_0217e5dc(var3, var2);
            func_0207fe44((Struct_0207fe44 *) var1);
            arg0->unknown_4a3_  = 0x10;
            arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
        } else {
            if (func_ov003_02160a68(arg0) == 0) {
                return;
            }
            func_0208203c((Struct_02081f20_2 *) arg0->unknown_308_);
            arg0->unknown_470_ = 0;
            func_0207fe44((Struct_0207fe44 *) var1);
            arg0->unknown_484_  = 2;
            arg0->unknown_4a3_  = 1;
            arg0->unknown_4a4_ = 0;
        }
    } else if (var0 == 2) {
        arg0->unknown_488_  = 6;
        arg0->unknown_492_  = func_02080468(var1, arg0->unknown_488_);
        short var4 = arg0->unknown_492_;
        arg0->unknown_474_  = var4;
        int var5       = inline_ov003_02162f40()->unknown_2c8c_ - 1;
        arg0->unknown_49f_  = var5 / 4;
        arg0->unknown_474_  = arg0->unknown_474_ + (var5 & 3);
        arg0->unknown_492_  = arg0->unknown_474_;
        short var6   = (short) (arg0->unknown_492_ - var4) & 3;
        short var7   = arg0->unknown_49f_ * 4 + var6;
        arg0->unknown_480_  = -1;
        Struct_ov003_0216253c *var8  = func_ov003_02160bd0(arg0, var7);
        if (var8 != NULL) {
            arg0->unknown_480_ = var8->unknown_0_0_;
        }
        var1->unknown_36_ = arg0->unknown_492_;
        func_0207fe44((Struct_0207fe44 *) var1);
        func_02081198((Struct_02081198 *) var1, 5, 1);
        func_02081164((Struct_02081164 *) var1, 5, 1);
        func_020813ec(var1, 5);
        func_ov003_02165c9c(arg0);
        func_ov003_02166f80(arg0, arg0->unknown_488_, 1);
        arg0->unknown_464_ |= 0x780000;
        if (arg0->unknown_464_ & 1) {
            ((Struct_ov003_02162f40_2 *) arg0)->unknown_64_.unknown_400_ |= 0x800000;
        }
        arg0->unknown_464_ |= 8;
        arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
        func_0208203c((Struct_02081f20_2 *) arg0->unknown_308_);
        arg0->unknown_470_ = 0;
    } else if (var0 == 3) {
#if defined(jpn)
        int var9 = 4;
        if (arg0->unknown_49e_ == 1) {
            var9 = 3;
        }
#else
        int var9 = 4;
#endif
        arg0->unknown_484_  = 0x16;
        arg0->unknown_4a4_ = 4;
        int var10       = inline_ov003_02162f40()->unknown_f7c_;
        int var11       = func_ov003_02160b84(arg0);
        if (var10 + var11 >= var9) {
            return;
        }
        arg0->unknown_484_  = 0x15;
        arg0->unknown_4a4_ = 5;
    } else if (var0 == 4) {
        func_0207fe44((Struct_0207fe44 *) var1);
        arg0->unknown_464_ |= 0x80000;
        arg0->unknown_484_  = 2;
        arg0->unknown_4a3_  = 1;
        arg0->unknown_4a4_ = 0;
    } else if (var0 == 5) {
        func_ov003_021612c0(arg0);
        arg0->unknown_4a4_ = arg0->unknown_4a4_ + 1;
    } else if (var0 == 6) {
        int var12 = func_ov003_02161344(arg0);
        if (var12 != -1) {
            if (var12 == 1) {
                func_0207fe44((Struct_0207fe44 *) var1);
                arg0->unknown_464_ |= 0x80000;
#if defined(jpn)
                int var13 = 4;
                if (arg0->unknown_49e_ == 1) {
                    var13 = 3;
                }
#else
                int var13 = 4;
#endif
                int var14 = inline_ov003_02162f40()->unknown_f7c_;
                int var15 = func_ov003_02160b84(arg0);
                if (var14 + var15 < var13) {
                    arg0->unknown_464_ |= 0xa;
                    arg0->unknown_484_  = 8;
                    arg0->unknown_4a4_ = 10;
                } else {
                    arg0->unknown_484_  = 5;
                    arg0->unknown_486_  = 2;
                    arg0->unknown_4a3_  = 1;
                    arg0->unknown_4a4_ = 0;
                }
            }
        } else {
            func_0207fe44((Struct_0207fe44 *) var1);
            arg0->unknown_464_ |= 0x80000;
            arg0->unknown_464_ |= 8;
            arg0->unknown_484_  = 0x5a;
            arg0->unknown_486_  = 2;
            arg0->unknown_4a3_  = 1;
            arg0->unknown_4a4_ = 0;
        }
    } else if (var0 == 7) {
        arg0->unknown_4a3_  = 7;
        arg0->unknown_4a4_ = 0;
        func_02086a04((Struct_02086a04 *) inline_ov003_02162f40(), (signed char) arg0->unknown_480_);
    } else if (var0 == 10) {
        if (func_ov003_02166a90(arg0, arg0->unknown_480_) == 0) {
            return;
        }
        GameObject *var16 = GameState::GetInstance()->GetProtagonist();
        if (var16 != NULL) {
            func_020397cc((Struct_02018300_3 *) var16, 1);
        }
        arg0->unknown_4a4_ = 7;
    } else if (var0 == 100) {
        func_ov003_021612c0(arg0);
        arg0->unknown_4a4_ = 101;
    } else if (var0 == 101) {
        int var17 = func_ov003_02161344(arg0);
        if (var17 != -1) {
            if (var17 == 1) {
                arg0->unknown_484_  = 0x13;
                arg0->unknown_464_ |= 2;
                arg0->unknown_4a4_ = 0;
            }
        } else {
            arg0->unknown_484_  = 0x12;
            arg0->unknown_486_  = 2;
            arg0->unknown_4a3_  = 1;
            arg0->unknown_4a4_ = 0;
        }
    }
}
