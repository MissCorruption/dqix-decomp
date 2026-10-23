#include <globaldefs.h>
#include "GameState/GameState.h"
#if defined(jpn)
#define LOW_REGION(j,u) (j)
#else
#define LOW_REGION(j,u) (u)
#endif

struct Struct_0201099c_3;

struct Struct_ov000_02176634_5 {
    char* unknown_0_;
    char* unknown_4_;
    unsigned int unknown_8_;
};

struct Struct_ov000_02176634_9 {
    Struct_ov000_02176634_5* unknown_0_;
    char unknown_4_[0x10 - 0x4];
    Struct_ov000_02176634_5* unknown_10_;
    char unknown_14_[0x18 - 0x14];
    Struct_ov000_02176634_5* unknown_18_;
    char unknown_1c_[LOW_REGION(0x28,0x5c) - 0x1c];
    char* unknown_5c_;
#if defined(jpn)
    char* inline_ov000_02176634_2() const { char* var0 = unknown_5c_; return var0; }
#endif
};

struct Struct_ov000_02176634_10 {
    char unknown_0_[0xa0];
    short unknown_a0_;
    short unknown_a2_;
    short unknown_a4_;
    short unknown_a6_;
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    unsigned char unknown_b0_;
    unsigned char unknown_b1_;
};

struct Struct_ov000_02176634_11 {
    char unknown_0_[0x70];
    signed char unknown_70_[0xb8 - 0x70];
    char unknown_b8_[0x188 - 0xb8];
    Struct_ov000_02176634_10 unknown_188_;
    char unknown_23a_[LOW_REGION(0x1fa3,0x1d6b) - 0x188 - sizeof(Struct_ov000_02176634_10)];
    signed char unknown_1d6b_;
    char unknown_1d6c_[0x1d7a - 0x1d6c];
    unsigned char unknown_1d7a_;
};

struct Struct_ov000_02176634 {
    char unknown_0_[0x1e];
    short unknown_1e_;
    char unknown_20_[0x44 - 0x20];
    int unknown_44_;
    int unknown_48_;
    int unknown_4c_;
};

struct Struct_ov000_02176634_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    char unknown_8_[0x2c - 0x8];
    unsigned int unknown_2c_0_ : 10;
    unsigned int unknown_2d_2_ : 4;
    unsigned int unknown_2d_6_ : 18;
};

struct Struct_ov000_02176634_3 {
    void* unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 5;
    unsigned int unknown_9_1_ : 9;
    unsigned int unknown_a_2_ : 1;
    unsigned int unknown_a_3_ : 13;
    char unknown_c_[0x18 - 0xc];
    short unknown_18_;
};

struct Struct_ov000_02176634_4 {
    char unknown_0_[0x4c];
    int unknown_4c_;
};

struct Struct_ov000_02176634_6 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
};

struct Struct_ov000_02176634_7 {
#if defined(jpn)
    char unknown_0_[0x134];
    char* unknown_134_;
    char* inline_ov000_02176634() const { char* var0 = unknown_134_; return var0; }
#else
    char unknown1_0_[0x138];
#endif
    Struct_ov000_02176634_6* unknown_138_;
};

struct Struct_ov000_02176634_8 {
    char unknown_0_[0xa8];
    unsigned int unknown_a8_;
};

extern "C" void func_ov000_02177184(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
extern "C" void func_ov000_02177454(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
extern "C" void func_ov000_0217768c(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
extern "C" void func_ov000_021779b4(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
extern "C" void func_ov000_02177bf0(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
extern "C" void func_ov000_02177e50(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
extern "C" void func_ov000_02178074(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
extern "C" void func_ov000_021784d4(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
struct Struct_ov000_02170fd0;
extern "C" void func_ov000_02170fd0(Struct_ov000_02170fd0*, int);
extern "C" void func_ov000_021787b8(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
extern "C" void func_ov000_02178ba8(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
extern "C" void func_ov000_02179018(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
extern "C" void func_ov000_021794cc(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
extern "C" void func_ov000_0217992c(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
extern "C" void func_ov000_02179b70(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
extern "C" void func_ov000_02179f94(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
extern "C" void func_ov000_0217a514(Struct_ov000_02176634_11*, Struct_ov000_02176634*, int, int);
extern "C" Struct_ov000_02176634_9* func_020421a0();
extern "C" void func_02046380(Struct_ov000_02176634_9*);
extern "C" void __clear(void*, int);
extern "C" void func_020e46c4(void*);
extern "C" void* memset(void*, int, unsigned int);
extern "C" void func_020e4bf4(void*, int);
extern "C" char* func_020e0434(Struct_0201099c_3*, int);
struct Struct_02046574_2;
extern "C" void func_02046574(Struct_02046574_2*, int, char*);
extern "C" Struct_ov000_02176634_4* func_ov000_02161318(Struct_ov000_02176634_11*, int);
extern "C" Struct_ov000_02176634_2* func_ov000_0217199c(void*, int);
extern "C" int func_ov000_021815c8(void*);
extern "C" Struct_ov000_02176634_3* func_ov000_021815e4(char*);
extern "C" Struct_ov000_02176634_8* func_02053c6c(unsigned char*);
struct Struct_02054000;
extern "C" Struct_ov000_02176634_3* func_02054000(Struct_02054000*);
extern "C" void func_020dcf7c(int, void*);
extern "C" void func_0209c6d8(void*, int);
extern "C" void func_0207c378(char*, short, int, int);
extern "C" void func_02052d7c(Struct_ov000_02176634_7*, int, short);
struct Struct_0207c484;
extern "C" void func_0207c484(Struct_0207c484*, int, int, int);
extern "C" void func_020483f0(unsigned char*, unsigned short);
extern "C" void func_ov017_021c9e00(int, int, int, int);
extern "C" void func_02046608(Struct_ov000_02176634_9*, int, char*, char*, int, int, int);
extern "C" void func_ov000_0217ab8c(Struct_ov000_02176634*, int, int);
#if defined(jpn)
extern "C" void func_0205d304(Struct_ov000_02176634_10*, char*, int, int, int, int, int);
extern "C" void func_0203bdf4(void*, char*);
extern "C" int func_020dd4c4(int, Struct_ov000_02176634_3*);
extern "C" void func_020474a8(Struct_ov000_02176634_9*, int, char*, char*);
extern "C" int func_02042058(char*, const char*);
extern unsigned int data_ov000_02184550[];
#else
extern "C" void func_0205d304(Struct_ov000_02176634_10*, char*, int, int, int, int, int, int);
#endif

struct Struct_ov000_0218352a {
    unsigned short unknown_0_;
    short unknown_2_;
};

extern Struct_ov000_0218352a data_ov000_0218352a[];
extern Struct_ov000_0218352a data_ov000_0218352c[];
extern char data_02109bf4[];

// USA: func_ov000_02176634
extern "C" ARM void func_ov000_02176634(Struct_ov000_02176634_11* arg0, Struct_ov000_02176634* arg1, int arg2, int arg3, int arg4) {
#if defined(jpn)
    char* var0;
#endif
    int var1;
    int var2;
    short var3;
    short var4;
    Struct_ov000_02176634_3* var5;
    char* var6;
    Struct_ov000_02176634_7* var7;
    Struct_ov000_02176634_8* var8;
    short var9;
    int var10;
#if !defined(jpn)
    char* var11;
#endif
    int var12;
    if (arg2 < 0 || arg1 == NULL) {
        return;
    }
    var1 = arg1->unknown_44_;
    var2 = arg1->unknown_48_;
    switch (arg2) {
    case 1:
        func_ov000_02177184(arg0, arg1, arg3, arg4);
        return;
    case 2:
        func_ov000_02177454(arg0, arg1, arg3, arg4);
        return;
    case 3:
        func_ov000_0217768c(arg0, arg1, arg3, arg4);
        return;
    case 4:
        func_ov000_021779b4(arg0, arg1, arg3, arg4);
        return;
    case 5:
        func_ov000_02177bf0(arg0, arg1, arg3, arg4);
        return;
    case 6:
        func_ov000_02177e50(arg0, arg1, arg3, arg4);
        return;
    case 7:
        func_ov000_02178074(arg0, arg1, arg3, arg4);
        return;
    case 8:
        func_ov000_021784d4(arg0, arg1, arg3, arg4);
        return;
    case 13:
        func_ov000_02170fd0((Struct_ov000_02170fd0*)arg1, 0);
        return;
    case 14:
        func_ov000_021787b8(arg0, arg1, arg3, arg4);
        return;
    case 15:
        func_ov000_02178ba8(arg0, arg1, arg3, arg4);
        return;
    case 16:
        func_ov000_02179018(arg0, arg1, arg3, arg4);
        return;
    case 17:
        func_ov000_021794cc(arg0, arg1, arg3, arg4);
        return;
    case 18:
    case 19:
    case 20:
        func_ov000_0217992c(arg0, arg1, arg3, arg4);
        return;
    case 21:
        func_ov000_02179b70(arg0, arg1, arg3, arg4);
        return;
    case 23:
        func_ov000_02179f94(arg0, arg1, arg3, arg4);
        return;
    case 25:
        func_ov000_0217a514(arg0, arg1, arg3, arg4);
        return;
    }

    Struct_ov000_02176634_9* var13 = func_020421a0();
    func_02046380(var13);
#if defined(jpn)
    char var14[0x20];
    __clear(var14, 0x20);
    int var32;
    var0 = func_020421a0()->inline_ov000_02176634_2();
    memset(var0, 0, 0x800);
    memset(var0, 0, 0x800);
    func_0203bdf4((char*)arg1 + 0x88, var14);
    var3 = (var1 >> 3) + 9;
    var4 = (short)(var2 >> 3) + 1;
    switch (arg2) {
    case 0xc:
        var32 = 0xc;
        func_02042058(var0, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7554));
        break;
    case 0x29:
        var32 = 0x29;
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7558));
        func_020474a8(var13, 10, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7555), var0);
        break;
    case 0x2a:
        var32 = 0x2a;
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7557));
        func_020474a8(var13, 10, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7555), var0);
        break;
    case 0x2b: {
        Struct_ov000_02176634_4* var15 = func_ov000_02161318(arg0, arg0->unknown_70_[arg0->unknown_1d6b_]);
        if (var15 != NULL) {
            memset(var14, 0, 0x20);
            func_0203bdf4((char*)var15 + 0x88, var14);
        }
        var32 = 0x2b;
        func_02046574((Struct_02046574_2*)var13, 0, var14);
        func_020474a8(var13, 10, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x23), var0);
        break;
    }
    case 0x1a: {
        short var16 = 0x7544;
        Struct_ov000_02176634_2* var17 = func_ov000_0217199c(arg1, arg1->unknown_1e_);
        if (var17 != NULL && var17->unknown_2d_2_ == 6) var16 = 0x22;
        var32 = 0x1a;
        func_02042058(var0, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, var16));
        break;
    }
    case 0x1b:
        var32 = 0x1b;
        func_02046574((Struct_02046574_2*)var13, 0, var14);
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7545));
        func_020474a8(var13, 10, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7547), var0);
        break;
    case 0x1c:
        var32 = 0x1c;
        func_02046574((Struct_02046574_2*)var13, 0, var14);
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7546));
        func_020474a8(var13, 10, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7547), var0);
        break;
    case 0x1d:
        var32 = 0x1d;
        func_02046574((Struct_02046574_2*)var13, 0, var14);
        func_020474a8(var13, 10, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7548), var0);
        break;
    case 0x1e: {
        short var18 = 0x18;
        Struct_ov000_02176634_2* var19 = func_ov000_0217199c(arg1, arg1->unknown_1e_);
        if (var19 != NULL) {
            for (int var20 = 0; data_ov000_0218352a[var20].unknown_0_ != 0; var20++) {
                if (data_ov000_0218352a[var20].unknown_0_ == var19->unknown_4_0_) {
                    var18 = data_ov000_0218352c[var20].unknown_0_;
                    break;
                }
            }
        }
        var32 = 0x1e;
        func_020474a8(var13, 10, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, var18), var0);
        break;
    }
    case 0x1f: {
        Struct_ov000_02176634_3* var21 = func_ov000_021815e4((char*)arg0);
        int var22 = func_020dd4c4(func_ov000_021815c8(arg0), var21);
        short var23 = 0x1a;
        for (unsigned char var24 = 0; data_ov000_02184550[var24] != 0; var24++) {
            if (var22 & data_ov000_02184550[var24]) {
                var23 = (short)(var24 + 0x1a);
                break;
            }
        }
        var32 = 0x1f;
        func_020474a8(var13, 10, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, var23), var0);
        break;
    }
    case 0x20: {
        arg0->unknown_1d7a_ = 0;
        short var25 = 0x14;
        var12 = func_ov000_021815c8(arg0);
        var5 = func_ov000_021815e4((char*)arg0);
        GameState* var26 = GameState::GetInstance();
        var6 = (char*)func_02010828(var26);
        var7 = (Struct_ov000_02176634_7*)func_0200ff1c(var26, var12);
        var8 = func_02053c6c((unsigned char*)var7);
        Struct_ov000_02176634_3* var27 = func_02054000((Struct_02054000*)var7);
        var32 = 0x20;
        var9 = var5->unknown_18_;
        func_02046574((Struct_02046574_2*)var13, 0, var7->inline_ov000_02176634());
        func_02046574((Struct_02046574_2*)var13, 1, (char*)var5->unknown_4_);

        if (var27 != NULL && var5->unknown_18_ == var27->unknown_18_) {
            var25 += 2;
            var9 = -1;
        }
        var10 = 0;
        if (var27 != NULL && var27->unknown_18_ > 0 && var27->unknown_8_0_ == 0 && var27->unknown_8_4_ <= 0xb && var27->unknown_a_2_) {
            var10 = 1;
            var25 = 0x25;
            func_02046574((Struct_02046574_2*)var13, 1, (char*)var27->unknown_4_);
            func_0209c6d8(data_02109bf4, 0x3d);
            arg0->unknown_1d7a_ = 1;
        }
        if (var10 == 0) {
            if (var27 != NULL) {
                func_0207c378(var6 + 0x1d4, var27->unknown_18_, 1, var27->unknown_8_0_);
            }
            func_02052d7c(var7, 7, var9);
            func_0207c484((Struct_0207c484*)(var6 + 0x1d4), var9, 1, 0);
            if (var7->unknown_138_->unknown_14_ & 1) var25++;
            if (var5->unknown_a_2_) {
                var25 = 0x24;
                func_020483f0((unsigned char*)var7, 4);
                var8->unknown_a8_ |= 4;
                func_ov017_021c9e00(var12, 0, 0, 1);
                func_0209c6d8(data_02109bf4, 0x3d);
                arg0->unknown_1d7a_ = 1;
            }
        }
        func_020474a8(var13, 10, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, var25), var0);
        break;
    }
    case 0x25:
        var32 = 0x25;
        func_02046574((Struct_02046574_2*)var13, 0, var14);
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7545));
        func_020474a8(var13, 10, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7555), var0);
        break;
    case 0x26:
        var32 = 0x26;
        func_02046574((Struct_02046574_2*)var13, 0, var14);
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7546));
        func_020474a8(var13, 10, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7555), var0);
        break;
    case 0x27:
        var32 = 0x27;
        func_02046574((Struct_02046574_2*)var13, 0, var14);
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7556));
        func_020474a8(var13, 10, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7555), var0);
        break;
    case 0x28:
        var32 = 0x28;
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7559));
        func_020474a8(var13, 10, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7555), var0);
        break;
    default:
        return;
    }

#else
    char var28[0x80];
    char var29[0x80];
    __clear(var28, 0x80);
    __clear(var29, 0x80);
    Struct_ov000_02176634_5 var30;
    Struct_ov000_02176634_5 var31;
    func_020e46c4(&var31);
    var31.unknown_0_ = var28;
    var31.unknown_4_ = var29;
    int var32;
    short var33 = 0x7554;
    var11 = func_020421a0()->unknown_5c_;
    memset(var11, 0, 0x960);
    memset(var11, 0, 0x960);
    func_020e4bf4(&var30, arg1->unknown_4c_);
    var3 = (var1 >> 3) + 9;
    var4 = (short)(var2 >> 3) + 1;
    var13->unknown_0_ = &var30;
    var13->unknown_10_ = &var30;

    switch (arg2) {
    case 0xc:
        var32 = 0xc;
        break;
    case 0x29:
        var32 = 0x29;
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7558));
        var33 = 0x7555;
        break;
    case 0x2a:
        var32 = 0x2a;
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7557));
        var33 = 0x7555;
        break;
    case 0x2b: {
        Struct_ov000_02176634_4* var34 = func_ov000_02161318(arg0, arg0->unknown_70_[arg0->unknown_1d6b_]);
        if (var34 != NULL) {
            func_020e4bf4(&var30, var34->unknown_4c_);
        }
        var32 = 0x2b;
        var33 = 0x23;
        break;
    }
    case 0x1a: {
        var33 = 0x7544;
        Struct_ov000_02176634_2* var35 = func_ov000_0217199c(arg1, arg1->unknown_1e_);
        if (var35 != NULL && var35->unknown_2d_2_ == 6) {
            var33 = 0x22;
        }
        var32 = 0x1a;
        break;
    }
    case 0x1b:
        var32 = 0x1b;
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7545));
        var33 = 0x7547;
        break;
    case 0x1c:
        var32 = 0x1c;
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7546));
        var33 = 0x7547;
        break;
    case 0x1d:
        var32 = 0x1d;
        var33 = 0x7548;
        break;
    case 0x1e: {
        var33 = 0x18;
        Struct_ov000_02176634_2* var36 = func_ov000_0217199c(arg1, arg1->unknown_1e_);
        if (var36 != NULL) {
            for (int var37 = 0; data_ov000_0218352a[var37].unknown_0_ != 0; var37++) {
                if (data_ov000_0218352a[var37].unknown_0_ == var36->unknown_4_0_) {
                    var33 = data_ov000_0218352c[var37].unknown_0_;
                    break;
                }
            }
        }
        var32 = 0x1e;
        break;
    }
    case 0x20: {
        arg0->unknown_1d7a_ = 0;
        var33 = 0x14;
        var12 = func_ov000_021815c8(arg0);
        var5 = func_ov000_021815e4((char*)arg0);
        GameState* var38 = GameState::GetInstance();
        var6 = (char*)func_02010828(var38);
        var7 = (Struct_ov000_02176634_7*)func_0200ff1c(var38, var12);
        var8 = func_02053c6c((unsigned char*)var7);
        Struct_ov000_02176634_3* var39 = func_02054000((Struct_02054000*)var7);
        var32 = 0x20;
        var9 = var5->unknown_18_;
        func_020e4bf4(&var30, var12);
        if (var39 != NULL && var5->unknown_18_ == var39->unknown_18_) {
            var33 += 2;
            var9 = -1;
        }
        var10 = 0;
        if (var39 != NULL && var39->unknown_18_ > 0 && var39->unknown_8_0_ == 0 && var39->unknown_8_4_ <= 0xb && var39->unknown_a_2_) {
            var10 = 1;
            var33 = 0x25;
            func_020dcf7c(var39->unknown_18_, &var31);
            var13->unknown_18_ = &var31;
            func_0209c6d8(data_02109bf4, 0x3d);
            arg0->unknown_1d7a_ = 1;
        }
        if (var10 == 0) {
            if (var39 != NULL) {
                func_0207c378(var6 + 0x1d4, var39->unknown_18_, 1, var39->unknown_8_0_);
            }
            if (var9 < 0) {
                func_020dcf7c(var39->unknown_18_, &var31);
            } else {
                func_020dcf7c(var9, &var31);
            }
            var13->unknown_18_ = &var31;
            func_02052d7c(var7, 7, var9);
            func_0207c484((Struct_0207c484*)(var6 + 0x1d4), var9, 1, 0);
            if (var7->unknown_138_->unknown_14_ & 1) {
                var33++;
            }
            if (var5->unknown_a_2_) {
                var33 = 0x24;
                func_020483f0((unsigned char*)var7, 4);
                var8->unknown_a8_ |= 4;
                func_ov017_021c9e00(var12, 0, 0, 1);
                func_0209c6d8(data_02109bf4, 0x3d);
                arg0->unknown_1d7a_ = 1;
            }
        }
        break;
    }
    case 0x25:
        var32 = 0x25;
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7545));
        var33 = 0x7555;
        break;
    case 0x26:
        var32 = 0x26;
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7546));
        var33 = 0x7555;
        break;
    case 0x27:
        var32 = 0x27;
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7556));
        var33 = 0x7555;
        break;
    case 0x28:
        var32 = 0x28;
        func_02046574((Struct_02046574_2*)var13, 1, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, 0x7559));
        var33 = 0x7555;
        break;
    default:
        return;
    }

    func_02046608(var13, 10, func_020e0434((Struct_0201099c_3*)arg0->unknown_b8_, var33), var11, 0xa4, 0, 0);
#endif
    func_ov000_0217ab8c(arg1, arg3, arg4);
    Struct_ov000_02176634_10* var40 = &arg0->unknown_188_;
    var40->unknown_a0_ = 8;
    var40->unknown_a2_ = 7;
    var40->unknown_a4_ = var3;
    var40->unknown_a6_ = var4;
    var40->unknown_a8_ = 10;
    var40->unknown_aa_ = 4;
    var40->unknown_ac_ = 10;
    var40->unknown_ae_ = 0x11;
    var40->unknown_b1_ = var32;
#if defined(jpn)
    func_0205d304(var40, var0, 0, 1, 0, 1, 0);
#else
    func_0205d304(var40, var11, 0, 1, 0, 1, 0, 0);
    func_02046380(var13);
#endif
}
