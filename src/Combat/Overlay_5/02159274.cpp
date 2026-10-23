#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov005_02159274_3684 = 0xe60, Enum_ov005_02159274_2400 = 0x800, Enum_ov005_02159274_3812 = 0xee0 };
#define func_ov005_02157b74 func_ov005_0215916c
#else
enum { Enum_ov005_02159274_3684 = 0xe64, Enum_ov005_02159274_2400 = 0x960, Enum_ov005_02159274_3812 = 0xee4 };
#endif

#include <std_library_functions.h>
#include <GameState/GameState.h>

struct Struct_020e28dc;
struct Struct_020e263c_2;
struct Struct_02108760;
struct Struct_0205d5d0;
struct Struct_0201099c_10;
struct Struct_020dd768;

struct Struct_ov005_02159274 {
    unsigned int unknown_0_0_ : 4;
    unsigned int unknown_0_4_ : 14;
    unsigned int unknown_2_2_ : 1;
    unsigned int unknown_2_3_ : 13;
};

struct Struct_ov005_02159274_2 {
    short unknown_0_;
    signed char unknown_2_;
    unsigned char unknown_3_;
    void* unknown_4_;
    void* unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    short unknown_18_;
};

struct Struct_ov005_02159274_3 {
    char unknown_0_[0xdf4];
    Struct_0201099c_10* unknown_df4_;
    char unknown_df8_[0xe10 - 0xdf8];
    char* unknown_e10_;
    char unknown_e14_[Enum_ov005_02159274_3684 - 0xe14];
    void* unknown_e64_;
#if defined(jpn)
    char unknown1_e64_[0x2d08 - Enum_ov005_02159274_3684 - 4];
#else
    char unknown_e68_[0x2d90 - Enum_ov005_02159274_3684 - 4];
#endif
    Struct_ov005_02159274_2 unknown_2d90_[24];
    char unknown_3030_[0x3daa - 0x3030];
    unsigned char unknown_3daa_;
    char unknown_3dab_[0x3dbb - 0x3dab];
    signed char unknown_3dbb_;
    char unknown_3dbc_[0x3dcc - 0x3dbc];
    unsigned int unknown_3dcc_;
    unsigned char unknown_3dd0_;
    unsigned char unknown_3dd1_;
    char unknown_3dd2_[0x3ddc - 0x3dd2];
    unsigned char unknown_3ddc_;
    unsigned char unknown_3ddd_;
    unsigned char unknown_3dde_;
    unsigned char unknown_3ddf_;
};

extern "C" char data_02108760[];

extern "C" int func_020e28dc(Struct_020e28dc* arg0);
extern "C" void func_020e263c(Struct_020e263c_2* arg0, int arg1);
extern "C" void func_ov005_021589f4(void* arg0);
extern "C" void func_ov005_02159b74(void* arg0);
extern "C" int func_ov005_02158b3c(void* arg0, void* arg1);
extern "C" int func_020e2918(signed char*);
extern "C" void func_0205eaa0(Struct_02108760* arg0, int arg1, int arg2);
struct Struct_020e25e8;
extern "C" void func_020e25e8(Struct_020e25e8*);
extern "C" int func_020e2984(struct Struct_020e28dc* arg0);
extern "C" void* func_020dedd0(Struct_0201099c_10* arg0, int arg1);
extern "C" int func_020dd768(Struct_020dd768* arg0);
extern "C" void func_ov005_02157b74(void* arg0, int arg1, int arg2);
struct Struct_0207c484;
extern "C" void func_0207c484(Struct_0207c484*, int, int, int);
extern "C" void func_ov005_021555c0(void* arg0);

// USA: func_ov005_02159274
extern "C" ARM void func_ov005_02159274(Struct_ov005_02159274_3* arg0) {
    int var0 = GameState::GetInstance()->GetTickCount();
    if (var0 == 0)
        var0 = 1;

    if (arg0->unknown_e64_ != 0 && func_020e28dc((Struct_020e28dc*)arg0->unknown_e64_))
        func_020e263c((Struct_020e263c_2*)arg0->unknown_e64_, var0);

    if (arg0->unknown_3ddc_ == 0) {
        arg0->unknown_3dd1_ = 8;
        func_ov005_021589f4(arg0);
        func_ov005_02159b74(arg0);
        arg0->unknown_3ddc_++;
        return;
    }
    if (arg0->unknown_3ddc_ == 1) {
        var0 = func_020e2918((signed char*)arg0->unknown_e64_);
        if (var0 >= 0) {
            func_0205eaa0((Struct_02108760*)data_02108760, 1, 0);
            func_020e25e8((Struct_020e25e8*)arg0->unknown_e64_);
        } else if (func_020e2984((struct Struct_020e28dc*)arg0->unknown_e64_)) {
            func_020e25e8((Struct_020e25e8*)arg0->unknown_e64_);
            var0 = -2;
        }
        if (var0 == 0) {
            void* var1;
            int var2;
            int var3;
            var1 = func_020dedd0(
                arg0->unknown_df4_,
                arg0->unknown_2d90_[arg0->unknown_3dbb_].unknown_0_);
            var3 = func_020dd768((Struct_020dd768*)var1);
            if (var3 == 1) {
                arg0->unknown_3dd1_ = 0xa;
                memset(arg0->unknown_e10_, 0, Enum_ov005_02159274_2400);
                func_ov005_02158b3c(arg0, arg0->unknown_e10_);
                if (arg0->unknown_3dbb_ >= 0 && arg0->unknown_3dbb_ < 8) {
                    if (((Struct_ov005_02159274*)((char*)var1 + 8))->unknown_2_2_) {
                        arg0->unknown_3dd1_ = 0xc;
                        memset(arg0->unknown_e10_, 0, Enum_ov005_02159274_2400);
                        func_ov005_02158b3c(arg0, arg0->unknown_e10_);
                        func_0205d5d0(
                            (Struct_0205d5d0*)((char*)arg0 + Enum_ov005_02159274_3812), 0, (int)arg0->unknown_e10_, 1
#if !defined(jpn)
                            , 0
#endif
                        );
                        arg0->unknown_3ddf_ = 4;
                        arg0->unknown_3ddc_ = 0;
                        return;
                    }
                    func_ov005_02157b74(arg0, 0xffff, 1);
                } else if (arg0->unknown_3dbb_ >= 8 &&
                       arg0->unknown_3dbb_ < 0x18) {
                    char* var4 = (char*)func_02010828(GameState::GetInstance());
                    int var5 = ((Struct_ov005_02159274*)((char*)var1 + 8))->unknown_0_0_;
                    var0 = *(short*)((char*)var1 + 0x18);
                    func_0207c484((Struct_0207c484*)(var4 + 0x1d4), var0, 1, var5);
                    var2 = 1;
                    func_ov005_021555c0(arg0);
                    for (int var6 = 8; var6 < 0x18; var6++) {
                        if (arg0->unknown_2d90_[var6].unknown_0_ == var0) {
                            var2 = 0;
                            break;
                        }
                    }
                    if (var2) {
                        arg0->unknown_3dcc_ |= 0x40;
                        arg0->unknown_3daa_ = 0;
                    }
                }
                func_0205d5d0(
                    (Struct_0205d5d0*)((char*)arg0 + Enum_ov005_02159274_3812), 0, (int)arg0->unknown_e10_, 1
#if !defined(jpn)
                            , 0
#endif
                        );
            } else if (var3 == 2) {
                arg0->unknown_3dd1_ = 9;
                memset(arg0->unknown_e10_, 0, Enum_ov005_02159274_2400);
                func_ov005_02158b3c(arg0, arg0->unknown_e10_);
                func_0205d5d0(
                    (Struct_0205d5d0*)((char*)arg0 + Enum_ov005_02159274_3812), 0, (int)arg0->unknown_e10_, 1
#if !defined(jpn)
                            , 0
#endif
                        );
                arg0->unknown_3ddc_++;
                return;
            } else if (var3 == 4) {
                arg0->unknown_3dd1_ = 0xb;
                memset(arg0->unknown_e10_, 0, Enum_ov005_02159274_2400);
                func_ov005_02158b3c(arg0, arg0->unknown_e10_);
                func_0205d5d0(
                    (Struct_0205d5d0*)((char*)arg0 + Enum_ov005_02159274_3812), 0, (int)arg0->unknown_e10_, 1
#if !defined(jpn)
                            , 0
#endif
                        );
            }
            arg0->unknown_3ddf_ = 4;
            arg0->unknown_3ddc_ = 0;
            return;
        }
        if (var0 == -2 || var0 == 1) {
            arg0->unknown_3ddf_ = 4;
            arg0->unknown_3ddc_ = 0;
            return;
        }
        return;
    }
    if (arg0->unknown_3ddc_ == 2) {
        func_ov005_02159b74(arg0);
        arg0->unknown_3ddc_++;
        return;
    }
    if (arg0->unknown_3ddc_ == 3) {
        var0 = func_020e2918((signed char*)arg0->unknown_e64_);
        if (var0 >= 0) {
            func_0205eaa0((Struct_02108760*)data_02108760, 1, 0);
            func_020e25e8((Struct_020e25e8*)arg0->unknown_e64_);
        } else if (func_020e2984((struct Struct_020e28dc*)arg0->unknown_e64_)) {
            func_020e25e8((Struct_020e25e8*)arg0->unknown_e64_);
            var0 = -2;
        }
        if (var0 == 0) {
            void* var7;
            int var8;
            arg0->unknown_3dd1_ = 0xa;
            memset(arg0->unknown_e10_, 0, Enum_ov005_02159274_2400);
            func_ov005_02158b3c(arg0, arg0->unknown_e10_);
            if (arg0->unknown_3dbb_ >= 0 && arg0->unknown_3dbb_ < 8) {
                var7 = func_020dedd0(
                    arg0->unknown_df4_,
                    arg0->unknown_2d90_[arg0->unknown_3dbb_].unknown_0_);
                if (((Struct_ov005_02159274*)((char*)var7 + 8))->unknown_2_2_) {
                    arg0->unknown_3dd1_ = 0xc;
                    memset(arg0->unknown_e10_, 0, Enum_ov005_02159274_2400);
                    func_ov005_02158b3c(arg0, arg0->unknown_e10_);
                    func_0205d5d0(
                        (Struct_0205d5d0*)((char*)arg0 + Enum_ov005_02159274_3812), 0, (int)arg0->unknown_e10_, 1
#if !defined(jpn)
                            , 0
#endif
                        );
                    arg0->unknown_3ddf_ = 4;
                    arg0->unknown_3ddc_ = 0;
                    return;
                }
                func_ov005_02157b74(arg0, 0xffff, 1);
            } else if (arg0->unknown_3dbb_ >= 8 && arg0->unknown_3dbb_ < 0x18) {
                char* var9 = (char*)func_02010828(GameState::GetInstance());
                var7 = func_020dedd0(
                    arg0->unknown_df4_,
                    arg0->unknown_2d90_[arg0->unknown_3dbb_].unknown_0_);
                var0 = *(short*)((char*)var7 + 0x18);
                func_0207c484((Struct_0207c484*)(var9 + 0x1d4), var0, 1, ((Struct_ov005_02159274*)((char*)var7 + 8))->unknown_0_0_);
                var8 = 1;
                func_ov005_021555c0(arg0);
                for (int var10 = 8; var10 < 0x18; var10++) {
                    if (arg0->unknown_2d90_[var10].unknown_0_ == var0) {
                        var8 = 0;
                        break;
                    }
                }
                if (var8) {
                    arg0->unknown_3dcc_ |= 0x40;
                    arg0->unknown_3daa_ = 0;
                }
            }
            func_0205d5d0(
                (Struct_0205d5d0*)((char*)arg0 + Enum_ov005_02159274_3812), 0, (int)arg0->unknown_e10_, 1
#if !defined(jpn)
                            , 0
#endif
                        );
            arg0->unknown_3ddf_ = 4;
            arg0->unknown_3ddc_ = 0;
            return;
        }
        if (var0 == -2 || var0 == 1) {
            arg0->unknown_3ddf_ = 4;
            arg0->unknown_3ddc_ = 0;
            return;
        }
        return;
    }
}
