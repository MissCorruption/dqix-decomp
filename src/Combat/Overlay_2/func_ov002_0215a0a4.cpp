#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Main/BattleList.h"
#include "Resource/CharacterCreationUI.h"
#include "Resource/ActionDataTables.h"
#include <std_library_functions.h>

#if defined(jpn)
enum { Enum_ov002_0215a0a4_3000 = 0xa80, Enum_ov002_0215a0a4_40 = 0x10, Enum_ov002_0215a0a4_7200 = 0x1ae8, Enum_ov002_0215a0a4_9352 = 0x22b8, Enum_ov002_0215a0a4_2400 = 0x800, Enum_ov002_0215a0a4_2144 = 0x700, Enum_ov002_0215a0a4_38 = 0x29, Enum_ov002_0215a0a4_17 = 0x12 };
#define FORMAT(m, k, t, d) func_020474a8(m, k, t, d)
#else
enum { Enum_ov002_0215a0a4_3000 = 0xbb8, Enum_ov002_0215a0a4_40 = 0x28, Enum_ov002_0215a0a4_7200 = 0x1c20, Enum_ov002_0215a0a4_9352 = 0x2488, Enum_ov002_0215a0a4_2400 = 0x960, Enum_ov002_0215a0a4_2144 = 0x860, Enum_ov002_0215a0a4_38 = 0x26, Enum_ov002_0215a0a4_17 = 0x11 };
#define FORMAT(m, k, t, d) func_02046608(m, k, t, d, 0xe3, 0, 1)
#endif

struct Struct_ov002_02157d40_8;
struct Struct_ov002_02157d40_2;
struct Struct_ov002_02157d40_6 {
    void* unknown_0_;
    unsigned char unknown_4_[12];
    void* unknown_10_;
};
struct Struct_ov002_0215a0a4_5 {
    char* unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 8;
    unsigned int unknown_9_0_ : 24;
};
struct Struct_ov002_0215a0a4_6 {
    unsigned char unknown_0_[Enum_ov002_0215a0a4_3000];
    int unknown_bb8_;
    int unknown_bbc_;
    int unknown_bc0_;
    unsigned char unknown_bc4_[12];
    char* unknown_bd0_;
    char* unknown_bd4_;
};
struct Struct_ov002_0215a0a4 {
    unsigned char unknown_0_[8];
#if !defined(jpn)
    unsigned char unknown_8_[12];
    unsigned char unknown_14_[12];
#endif
    Struct_0201099c_3 unknown_20_;
    unsigned char unknown_28_[0x1000 - Enum_ov002_0215a0a4_40];
    Struct_ov002_0215a0a4_6 unknown_1000_;
    unsigned char unknown_1bd8_[Enum_ov002_0215a0a4_7200 - 0x1000 - sizeof(Struct_ov002_0215a0a4_6)];
    signed char unknown_1c20_;
    signed char unknown_1c21_;
    unsigned char unknown_1c22_[4];
    short unknown_1c26_;
    short unknown_1c28_;
    short unknown_1c2a_;
    unsigned char unknown_1c2c_[5];
    unsigned char unknown_1c31_;
    unsigned char unknown_1c32_[Enum_ov002_0215a0a4_9352 - Enum_ov002_0215a0a4_7200 - 0x12];
    short unknown_2488_;
    unsigned char unknown_248a_;
};
struct Struct_ov002_0215a0a4_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[5];
};
struct Struct_ov002_0215a0a4_3 {
    unsigned char unknown_0_[2];
    signed char unknown_2_;
    unsigned char unknown_3_;
    signed char unknown_4_[4];
    Struct_ov002_0215a0a4_2 unknown_8_[4];
};
struct Struct_ov002_0215a0a4_4 {
    unsigned char unknown_0_[0x130];
    unsigned int* unknown_130_;
};

extern "C" void* func_020e2ff8();
extern "C" void func_020e3428(void*, int);
extern "C" Struct_ov002_02157d40_6* func_020421a0();
extern "C" Struct_ov002_0215a0a4_5* func_02079e2c(char*, int);
extern "C" void* func_020e46c4(void*);
extern "C" void func_02046574(Struct_ov002_02157d40_6*, int, char*);
extern "C" void func_020e4bf4(void*, int);
extern "C" int func_02048350(Struct_ov002_02157d40_8*, int);
extern "C" int func_0202b7d8(int*);
extern "C" int func_020e0434(Struct_0201099c_3*, int);
extern "C" int func_02042058(char*, const char*);
extern "C" void func_020465c0(Struct_ov002_02157d40_2*, int, int);
extern "C" int* func_0202ae18();
extern "C" void func_02046380(void*);
extern "C" void func_ov017_021c9e00(int, int, int, int);
#if defined(jpn)
extern "C" void func_020474a8(void*, int, int, void*);
#else
extern "C" void func_02046608(void*, int, int, void*, int, int, int);
#endif

static inline char* inline_ov002_0215a0a4(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->baseStats_->unk; }

// USA: func_ov002_0215a0a4
extern "C" ARM void func_ov002_0215a0a4(Struct_ov002_0215a0a4* arg0, Struct_ov002_0215a0a4_3* arg1, int arg2) {
    GameObject* var0;
    int var1;
    int* var2;
    GameObject* var3;
    Struct_ov002_0215a0a4_2* var4;
    char* var5;
    signed char* var6;
    GameState* var7;
    Struct_ov002_02157d40_6* var8;
    Struct_ov002_0215a0a4_5* var9;
    int var10;
    func_020e3428(func_020e2ff8(), 1);
    var7 = GameState::GetInstance();
    var8 = func_020421a0();
    var2 = func_0202ae18();
    var9 = func_02079e2c((char*)func_020797dc(), arg0->unknown_1c26_);
    if (!var9) return;
    memset(arg0->unknown_1000_.unknown_bd0_, 0, Enum_ov002_0215a0a4_2400);
    memset(arg0->unknown_1000_.unknown_bd4_, 0, Enum_ov002_0215a0a4_2400);
    func_02046380(var8);
    var5 = arg0->unknown_1000_.unknown_bd0_;
#if !defined(jpn)
    func_020e46c4(arg0->unknown_8_);
    func_020e46c4(arg0->unknown_14_);
#endif
    var3 = func_0200ff1c(var7, arg1->unknown_2_);
    if (var3) {
        func_02046574(var8, 0, var3->baseStats_->unk);
#if !defined(jpn)
        func_020e4bf4(arg0->unknown_8_, arg1->unknown_2_);
        var8->unknown_0_ = arg0->unknown_8_;
#endif
    }
    func_02046574(var8, 1, var9->unknown_0_);
    if (arg0->unknown_1c26_ == 0x1e || arg0->unknown_1c26_ == 0x1f || arg0->unknown_1c26_ == 0x20 ||
        arg0->unknown_1c26_ == 0x21 || arg0->unknown_1c26_ == 0x23 || arg0->unknown_1c26_ == 0x26 || arg0->unknown_1c26_ == 0x27) {
        arg0->unknown_248a_ = 1;
        arg0->unknown_1c28_ = 0x232d;
        arg0->unknown_1c2a_ = -1;
        GameObject* var11 = var7->GetPartyMemberByIndex(arg0->unknown_1c21_);
        int var12 = 0;
        if (arg2 && var11) {
            if (arg0->unknown_1c26_ == 0x1e || arg0->unknown_1c26_ == 0x1f || arg0->unknown_1c26_ == 0x20 || arg0->unknown_1c26_ == 0x21) {
                arg0->unknown_2488_ = 0x232c;
                var12 = 1;
            } else if (arg0->unknown_1c26_ == 0x23) {
                arg0->unknown_2488_ = 0x794b;
                var12 = 1;
            } else if (arg0->unknown_1c26_ == 0x27 || arg0->unknown_1c26_ == 0x26) {
                arg0->unknown_2488_ = 0x2336;
                var12 = 1;
            }
        } else if (!var11) {
            arg0->unknown_1c28_ = 0x232d;
            arg0->unknown_2488_ = 0x232b;
        } else if (*((Struct_ov002_0215a0a4_4*)var11)->unknown_130_ & 1) {
            if (arg0->unknown_1c26_ == 0x26) {
                arg0->unknown_2488_ = 0x2337;
                var12 = 1;
            } else {
                arg0->unknown_2488_ = 0x232b;
            }
        } else if (arg1->unknown_8_[0].unknown_0_ == 1) {
            arg0->unknown_1c28_ = 0x232d;
            arg0->unknown_2488_ = 0x232b;
        } else {
            arg0->unknown_1c28_ = 0x2333;
            arg0->unknown_2488_ = 0x2334;
        }
        arg0->unknown_1000_.unknown_bb8_ = Enum_ov002_0215a0a4_38;
        arg0->unknown_1000_.unknown_bbc_ = Enum_ov002_0215a0a4_17;
        arg0->unknown_1000_.unknown_bc0_ = 0;
        if (var12) {
            func_02048350((Struct_ov002_02157d40_8*)var3, var9->unknown_8_0_);
            if (func_0202b7d8(var2)) func_ov017_021c9e00(arg0->unknown_1c20_, 0, 0, 1);
        }
        return;
    }
    if (arg0->unknown_1c26_ != 0x22 && arg0->unknown_1c26_ != 0x310) return;
    if (arg2) {
        FORMAT(var8, 0xc, func_020e0434(&arg0->unknown_20_, 0x232d), var5 + Enum_ov002_0215a0a4_2144);
        func_02042058(arg0->unknown_1000_.unknown_bd0_, var5 + Enum_ov002_0215a0a4_2144);
        var4 = arg1->unknown_8_;
        var1 = 0x232c;
        var10 = 0;
        var6 = arg1->unknown_4_;
        while (var10 < arg1->unknown_3_) {
            int var13 = var4[var10].unknown_0_ == 3 ? var1 : 0x233a;
            if (var13 >= 0) {
#if defined(jpn)
                var0 = func_0200ff1c(var7, arg1->unknown_4_[var10]);
#else
                var0 = func_0200ff1c(var7, var6[var10]);
#endif
                if (var0) {
                    func_02046380(var8);
                    func_02046574(var8, 2, inline_ov002_0215a0a4(var0));
#if !defined(jpn)
                    func_020e4bf4(arg0->unknown_14_, var6[var10]);
                    var8->unknown_10_ = arg0->unknown_14_;
#endif
                    func_020465c0((Struct_ov002_02157d40_2*)var8, 9, var0->obj3D_.unknown_4_);
                    FORMAT(var8, 0xc, func_020e0434(&arg0->unknown_20_, var13), var5 + Enum_ov002_0215a0a4_2144);
                    func_02042058(arg0->unknown_1000_.unknown_bd0_, (const char*)func_020e0434(&arg0->unknown_20_, 8));
                    func_02042058(arg0->unknown_1000_.unknown_bd0_, var5 + Enum_ov002_0215a0a4_2144);
                }
            }
            var10++;
        }
        func_02048350((Struct_ov002_02157d40_8*)var3, var9->unknown_8_0_);
        if (func_0202b7d8(var2)) func_ov017_021c9e00(arg0->unknown_1c20_, 0, 0, 1);
    } else {
        var0 = var7->GetUnknownGameObject();
        if (var0) {
            func_02046574(var8, 2, inline_ov002_0215a0a4(var0));
#if !defined(jpn)
            func_020e4bf4(arg0->unknown_14_, var0->obj3D_.unknown_4_);
            var8->unknown_10_ = arg0->unknown_14_;
#endif
        }
        func_02042058(var5 + Enum_ov002_0215a0a4_2144, (const char*)func_020e0434(&arg0->unknown_20_, 0x2333));
        func_02042058(var5 + Enum_ov002_0215a0a4_2144, (const char*)func_020e0434(&arg0->unknown_20_, 8));
        if (func_02011538(var7) == 1)
            func_02042058(var5 + Enum_ov002_0215a0a4_2144, (const char*)func_020e0434(&arg0->unknown_20_, 0x2334));
        else
            func_02042058(var5 + Enum_ov002_0215a0a4_2144, (const char*)func_020e0434(&arg0->unknown_20_, 0x2335));
        FORMAT(var8, 0xc, (int)(var5 + Enum_ov002_0215a0a4_2144), arg0->unknown_1000_.unknown_bd0_);
    }
    arg0->unknown_1c31_ = 1;
    memcpy(arg0->unknown_1000_.unknown_bd4_, arg0->unknown_1000_.unknown_bd0_, Enum_ov002_0215a0a4_2400);
    arg0->unknown_2488_ = -1;
    arg0->unknown_248a_ = 0;
}
