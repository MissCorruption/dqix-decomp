#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_ov005_02157b74 func_ov005_0215916c
#endif

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

struct GameState;

struct Struct_ov005_02157b74_4 {
    unsigned int unknown_0_0_ : 27;
    unsigned int unknown_3_3_ : 2;
    unsigned int unknown_3_5_ : 3;
};

struct Struct_ov005_02157b74_5 {
    Struct_ov005_02157b74_4* unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 14;
    unsigned int unknown_a_2_ : 1;
    unsigned int unknown_a_3_ : 13;
    int unknown_c_;
    unsigned int unknown_10_0_ : 20;
    unsigned int unknown_12_4_ : 8;
    unsigned int unknown_13_4_ : 4;
};

struct Struct_ov005_02157b74_6 {
    char unknown_0_[0x18];
    short unknown_18_;
};

struct Struct_ov005_02157b74_7 {
    char unknown_0_[0x16];
    short unknown_16_;
};

struct Struct_ov005_02157b74_8 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[LOW_REGION(0x144 - 6, 0x150 - 6)];
    void* unknown_150_;
};

struct Struct_ov005_02157b74_9 {
    char unknown_0_[LOW_REGION(0x4f8, 0x4fc)];
    int unknown_4fc_;
    char unknown_500_[LOW_REGION(0x56c - 0x4fc, 0x634 - 0x500)];
    unsigned short unknown_634_;
};

struct Struct_ov005_02157b74 {
    short unknown_0_;
    signed char unknown_2_;
    char unknown_3_[0x1c - 3];
};

struct Struct_ov005_02157b74_2 {
    char unknown_0_[0xdf4];
    void* unknown_df4_;
    char unknown_df8_[LOW_REGION(0x19ac - 0xdf8, 0x1a34 - 0xdf8)];
    char unknown_1a34_[0x2d90 - 0x1a34];
    Struct_ov005_02157b74 unknown_2d90_[0x18];
    char unknown_3030_[0x3da8 - 0x3030];
    unsigned char unknown_3da8_;
    unsigned char unknown_3da9_;
    unsigned char unknown_3daa_;
    unsigned char unknown_3dab_;
    unsigned short unknown_3dac_;
    char unknown_3dae_[0x3dbb - 0x3dae];
    signed char unknown_3dbb_;
    unsigned char unknown_3dbc_;
    char unknown_3dbd_[0x3dcc - 0x3dbd];
    unsigned int unknown_3dcc_;
    unsigned char unknown_3dd0_;
    unsigned char unknown_3dd1_;
    unsigned char unknown_3dd2_;
};

extern "C" GameState* _ZN9GameState11GetInstanceEv();
extern "C" Struct_ov005_02157b74_9* func_ov017_021a193c(int*);
extern "C" Struct_ov005_02157b74_8* func_0200ff1c(GameState* arg0, int arg1);
extern "C" char* func_02010828(GameState* arg0);
struct Struct_02052df8;
extern "C" short func_02052df8(Struct_02052df8*, int);
struct Struct_0201099c_10;
extern "C" Struct_ov005_02157b74_5* func_020dedd0(Struct_0201099c_10*, int);
extern "C" void func_02052d7c(Struct_ov005_02157b74_8* arg0, int arg1, short arg2);
extern "C" void* func_02053c6c(unsigned char*);
extern "C" void func_0208358c(void* arg0, Struct_ov005_02157b74_5* arg1, int arg2);
extern "C" void func_02083738(void* arg0, int arg1);
struct Struct_ov005_02157b74_3;
extern "C" void func_ov005_021583fc(Struct_ov005_02157b74_3*, char);
struct Struct_02052e2c;
extern "C" Struct_ov005_02157b74_7* func_02052e2c(Struct_02052e2c*);
extern "C" int func_ov005_0215840c(Struct_ov005_02157b74_2* arg0, int arg1);
extern "C" void func_02083e28(void* arg0, int arg1);
extern "C" void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_0207c378(char* arg0, short arg1, int arg2, int arg3);
extern "C" void func_ov005_021551fc(char*, int, int);
extern "C" void func_ov005_02155544(Struct_ov005_02157b74_2* arg0);
extern "C" void func_ov005_021555c0(Struct_ov005_02157b74_2* arg0);
struct Struct_02108760;
extern "C" void func_0205eaa0(Struct_02108760*, int, int);
extern "C" int func_020dd4c4(signed char arg0, Struct_ov005_02157b74_5* arg1);
struct Struct_020deda4;
extern "C" Struct_ov005_02157b74_6* func_020deda4(int, int, Struct_020deda4*);
extern "C" void func_020483f0(unsigned char*, unsigned short);
extern "C" int func_0207c7a0(char* arg0, short arg1, int arg2);
extern "C" int func_0207caa4(char* arg0, short arg1, int arg2);
extern "C" void func_0207c484(char* arg0, short arg1, int arg2, int arg3);
struct Struct_0207cb38;
extern "C" void func_0207cb38(Struct_0207cb38*, int, int, int, char);
extern "C" void func_ov023_021e4e1c(void* arg0, int arg1, short arg2, int arg3);
extern "C" void func_ov005_02154d18(void* arg0, int arg1, int arg2);
extern "C" void func_ov005_02154d50(void* arg0, int arg1, int arg2);

extern signed char data_ov005_0215cd40[];
extern unsigned char data_ov005_0215cd38[];
extern char data_02108760[];
extern unsigned char data_ov005_0215cd30[];

// USA: func_ov005_02157b74
extern "C" ARM void func_ov005_02157b74(Struct_ov005_02157b74_2* arg0, int arg1, int arg2) {
    char* var0;
    GameState* var1 = _ZN9GameState11GetInstanceEv();
    Struct_ov005_02157b74_9* var2 = func_ov017_021a193c((int*)(*(int*)((char*)GetGameResources() + LOW_REGION(0x34f8, 0x3708))));
    int var3;
    int var4 = var2->unknown_4fc_;
    Struct_ov005_02157b74_8* var5 = func_0200ff1c(var1, var4);
    if (var5 == 0) return;

    var0 = func_02010828(var1);

    if (arg1 == 0xffff) {
        int var6 = data_ov005_0215cd40[arg0->unknown_3dbc_];
        short var7 = func_02052df8((Struct_02052df8*)var5, var6);
        Struct_ov005_02157b74_5* var8 = func_020dedd0((Struct_0201099c_10*)arg0->unknown_df4_, (short)var7);
        if (var8 == 0) return;

        if (var8->unknown_a_2_ == 1) {
            arg0->unknown_3dd1_ = 0xc;
            arg0->unknown_3dcc_ |= 0x8000;
            return;
        }

        short var9 = -1;
        var3 = -1;
        if (var6 == 0) {
            var3 = 0;
            var9 = 0x3e8;
        }
        func_02052d7c(var5, var6, -1);
        void* var10 = func_02053c6c((unsigned char*)var5);
        Struct_ov005_02157b74_5* var11 = func_020dedd0((Struct_0201099c_10*)arg0->unknown_df4_, (short)var9);
        if (var11 != 0) {
            func_0208358c(var10, var11, var3);
        } else {
            func_02083738(var10, var8->unknown_8_0_);
            if (var8->unknown_8_0_ == 7) {
                func_ov005_021583fc((Struct_ov005_02157b74_3*)var5, 1);
            }
        }
        if (var6 == 0) {
            func_02052e2c((Struct_02052e2c*)var5)->unknown_16_ = -1;
        }
        if (var7 == 0x4680) {
            if (func_ov005_0215840c(arg0, var5->unknown_4_) != 0) {
                if (arg0->unknown_3dd1_ == 0xa && arg2 != 0) {
                    arg0->unknown_3dd2_ = 0xe;
                } else {
                    arg0->unknown_3dd1_ = 0xe;
                }
            }
        }
        func_02083e28(var5->unknown_150_, 0);
        func_ov017_021c9e00(var5->unknown_4_, 0, 0, 1);
        var2->unknown_634_ |= 4;
        if (arg2 == 0) {
            func_0207c378(var0 + 0x1d4, var7, 1, data_ov005_0215cd38[arg0->unknown_3dbc_]);
        }
        arg0->unknown_2d90_[arg0->unknown_3dbb_].unknown_0_ = -1;
        func_ov005_021551fc((char*)arg0, func_ov017_021a193c((int*)(*(int*)((char*)GetGameResources() + LOW_REGION(0x34f8, 0x3708))))->unknown_4fc_, 1);
        func_ov005_02155544(arg0);
        arg0->unknown_3dcc_ |= 0x10;
        arg0->unknown_3da8_ = 0;
        arg0->unknown_3dac_ = arg0->unknown_3dbc_;
        if (arg2 == 0) {
            func_ov005_021555c0(arg0);
            for (int var12 = 8; var12 < 0x18; var12++) {
                if (var7 == arg0->unknown_2d90_[var12].unknown_0_ && arg0->unknown_2d90_[var12].unknown_2_ == 1) {
                    arg0->unknown_3dcc_ |= 0x40;
                    arg0->unknown_3daa_ = 0;
                    break;
                }
            }
        }
        func_0205eaa0((Struct_02108760*)data_02108760, 0x5c, 0);
        arg0->unknown_3dcc_ |= 0x200;
        arg0->unknown_3dcc_ |= 1;
        return;
    }

    Struct_ov005_02157b74_5* var13 = func_020dedd0((Struct_0201099c_10*)arg0->unknown_df4_, (short)arg1);
    if (var13 == 0) return;

    unsigned int var14 = var13->unknown_12_4_;
    int var15 = -1;
    switch (var14) {
    case 0x73: var15 = 8; break;
    case 0x62: var15 = 0; break;
    case 0x70: var15 = 1; break;
    case 0x61: var15 = 4; break;
    case 0x67: var15 = 4; break;
    case 0x72: var15 = 5; break;
    case 0x6d: var15 = 6; break;
    case 0x77: var15 = 7; break;
    case 0x63: var15 = 9; break;
    }

    int var16 = func_020dd4c4(var5->unknown_4_, var13);
    if (var16 != 0) {
        if (var16 & 0x100) {
            arg0->unknown_3dd1_ = 5;
            return;
        }
        if (var16 & 0x80) {
            arg0->unknown_3dd1_ = 2;
            if (func_02052df8((Struct_02052df8*)var5, 9) == 0x4680) {
                arg0->unknown_3dd1_ = 7;
            }
            return;
        }
        if (var16 & 0x10) {
            arg0->unknown_3dd1_ = 6;
            return;
        }
        if (var16 & 2) {
            arg0->unknown_3dd1_ = 4;
            return;
        }
        if (var16 & 1) {
            arg0->unknown_3dd1_ = 3;
            return;
        }
        if (var16 & 4) {
            arg0->unknown_3dd1_ = 1;
        }
        return;
    }

    short var17 = func_02052df8((Struct_02052df8*)var5, var15);
    if (var17 == (short)arg1) return;

    Struct_ov005_02157b74_5* var18 = func_020dedd0((Struct_0201099c_10*)arg0->unknown_df4_, (short)var17);
    if (var18 != 0 && var18->unknown_a_2_ == 1) {
        arg0->unknown_3dd1_ = 0xc;
        arg0->unknown_3dcc_ |= 0x8000;
        return;
    }

    if (var15 >= 0) {
        if (var17 == 0x4680) {
            if (func_ov005_0215840c(arg0, var5->unknown_4_) != 0) {
                arg0->unknown_3dd1_ = 0xe;
            }
        }
        func_02052d7c(var5, var15, (unsigned short)arg1);
        void* var19 = func_02053c6c((unsigned char*)var5);
        func_0208358c(var19, var13, -1);
        func_02083e28(var19, 0);
        func_ov017_021c9e00(var5->unknown_4_, 0, 0, 1);
        if (var13->unknown_8_0_ == 7) {
            func_ov005_021583fc((Struct_ov005_02157b74_3*)var5, 1);
        }
        func_ov005_021551fc((char*)arg0, func_ov017_021a193c((int*)(*(int*)((char*)GetGameResources() + LOW_REGION(0x34f8, 0x3708))))->unknown_4fc_, 1);
    }

    if (var14 == 0x62) {
        Struct_ov005_02157b74_6* var20 = func_020deda4((int)arg0->unknown_df4_, 0x61, (Struct_020deda4*)var13);
        if (var20 != 0) {
            func_02052e2c((Struct_02052e2c*)var5)->unknown_16_ = var20->unknown_18_;
        }
    }

    if (var13->unknown_a_2_ == 1) {
        if (arg0->unknown_3dd1_ == 0xe) {
            arg0->unknown_3dd2_ = 0xe;
        }
        arg0->unknown_3dd1_ = 0xd;
        arg0->unknown_3dcc_ |= 0x8000;
        func_020483f0((unsigned char*)var5, 4);
        func_ov017_021c9e00(var4, 0, 0, 1);
    }

    if (var13->unknown_0_->unknown_3_3_ == 1) {
        func_0205eaa0((Struct_02108760*)data_02108760, 3, 0);
    } else if (var13->unknown_0_->unknown_3_3_ == 2) {
        func_0205eaa0((Struct_02108760*)data_02108760, 4, 0);
    }

    var2->unknown_634_ |= 4;

    unsigned char var21 = data_ov005_0215cd30[arg0->unknown_3dbc_];
    signed char var22 = func_0207c7a0(var0 + 0x1d4, arg1, var21);
    signed char var23 = func_0207c7a0(var0 + 0x1d4, var17, var21);
    if (var22 == 1 && var23 == 0) {
        int var24 = func_0207caa4(var0 + 0x1d4, arg1, var21);
        func_0207c484(var0 + 0x1d4, arg1, 1, var21);
        if (var24 >= 0) {
            func_0207cb38((Struct_0207cb38*)(var0 + 0x1d4), var24, var21, var17, 1);
        } else {
            func_0207c378(var0 + 0x1d4, var17, 1, var21);
        }
    } else {
        func_0207c484(var0 + 0x1d4, arg1, 1, var21);
        func_0207c378(var0 + 0x1d4, var17, 1, var21);
    }

    func_ov023_021e4e1c(var2, var4, arg1, data_ov005_0215cd30[arg0->unknown_3dbc_]);
    func_ov005_02155544(arg0);
    arg0->unknown_3dcc_ |= 0x10;
    arg0->unknown_3da8_ = 0;
    arg0->unknown_3dac_ = arg0->unknown_3dbc_;
    arg0->unknown_3dbb_ = arg0->unknown_3dbc_;
    func_ov005_02154d18(arg0->unknown_1a34_, 0x85000, 0x17000);
    func_ov005_02154d50(arg0->unknown_1a34_, 0x76000, 0x16000);
    func_ov005_021555c0(arg0);
    for (int var25 = 8; var25 < 0x18; var25++) {
        if (var17 == arg0->unknown_2d90_[var25].unknown_0_ && arg0->unknown_2d90_[var25].unknown_2_ == 1) {
            arg0->unknown_3dcc_ |= 0x40;
            arg0->unknown_3daa_ = 0;
            break;
        }
    }
    arg0->unknown_3dcc_ |= 0x200;
    arg0->unknown_3dcc_ |= 1;
}
