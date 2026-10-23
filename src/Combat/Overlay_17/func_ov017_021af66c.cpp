#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#include "NitroSDK/Graphics.h"
#include "Resource/MessageSystem.h"

#if defined(jpn)
#define data_ov017_021d6aec data_ov017_021d6ee4
#endif

struct Struct_ov017_021af66c_4;
typedef unsigned char (*Type_01ff91ac)(Struct_ov017_021af66c_4* obj);

struct Struct_ov017_021d6aec {
    Type_01ff91ac unknown_0_[13];
};

struct Struct_ov017_021af66c_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_[0x1b - 0xe];
    unsigned char unknown_1b_[0x38 - 0x1b];
    unsigned int unknown_38_;
    int unknown_3c_;
    unsigned short unknown_40_;
    unsigned char unknown_42_;
    unsigned char unknown_43_[5];
#if defined(jpn)
    unsigned char unknown_48_[0x210 - 0x48];
#else
    unsigned char unknown_48_[0x280 - 0x48];
#endif
    int unknown_280_;
    int unknown_284_;
    void* unknown_288_;
};

struct Struct_ov017_021af66c {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_;
#if defined(jpn)
    unsigned char unknown_3_[0xc8 - 3];
#else
    unsigned char unknown1_3_[0xcc - 3];
#endif
    unsigned char unknown_cc_;
    unsigned char unknown_cd_;
    unsigned char unknown_ce_;
    unsigned char unknown_cf_;
};

struct Struct_ov017_021af66c_2 {
    unsigned char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
};

struct Struct_ov017_021af66c_3 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[6];
    int unknown_8_;
};

struct Struct_0202b2f0;
struct Struct_02018300_3;
struct Struct_0201bdac_2;
struct Struct_0201bdac;
struct Struct_02046968;
struct Struct_02038598_4;
struct AllocatorUnion;

extern "C" void* func_0202ae18();
extern "C" void func_ov017_021c37a4();
extern "C" Struct_ov017_021af66c_3* func_02012fe4();
extern "C" void func_ov017_021baedc(Struct_ov017_021af66c* arg0, int arg1);
extern "C" void func_ov017_021bbae4(Struct_ov017_021af66c* arg0, int arg1, int arg2);
extern "C" void func_ov017_0219577c(int arg0, int arg1, int arg2);
extern "C" int func_ov017_02195658(GameResources* arg0);
extern "C" void* func_ov017_021b8468(Struct_ov017_021af66c* arg0);
extern "C" void func_ov017_021afb8c(Struct_ov017_021af66c_4* arg0, unsigned char* arg1);
extern "C" void func_ov017_0218b5c0(int arg0, int arg1);

extern "C" void* func_020d6c00();
extern "C" void* func_020936f8();
extern "C" void func_020397cc(Struct_02018300_3* arg0, int arg1);
extern "C" void func_0205c904(unsigned char* arg0, int arg1);
extern "C" int func_0202bd34(Struct_0202b2f0* arg0, int arg1);
extern "C" unsigned char func_020100b0(GameState* arg0);
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);
extern "C" void func_02093a14(char* arg0);
extern "C" void func_020dc2d0(int arg0);
extern "C" void func_ov000_02163b14(void* arg0, void* arg1);
extern "C" void func_ov000_02163b40(void* arg0);
extern "C" void func_020c5588(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_02046968(Struct_02046968* arg0);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_02039830(void* arg0);
extern "C" void func_0205ce94(unsigned char* arg0);
extern "C" void func_020466f4(Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void func_020daf9c(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" Struct_02021b84* func_020421a0();

extern Struct_ov017_021d6aec data_ov017_021d6aec;
extern AllocatorUnion data_02114e20;

struct Struct_ov017_021af66c_5 {
    char unknown_0_[0xb2];
    unsigned short unknown_b2_;
#if defined(jpn)
    char unknown_b4_[0x144 - 0xb4];
#else
    char unknown1_b4_[0x150 - 0xb4];
#endif
    Struct_ov017_021af66c_2* unknown_150_;
};

// USA: func_ov017_021af66c
extern "C" ARM void func_ov017_021af66c(Struct_ov017_021af66c_4* arg0, void* arg1) {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    Struct_0202b2f0* var2 = (Struct_0202b2f0*)func_0202ae18();
    Struct_ov017_021af66c_5* var3 = (Struct_ov017_021af66c_5*)var0->GetUnknownGameObject();
    Struct_02038598_4* var4 = (Struct_02038598_4*)func_020d6c00();
    char* var5 = (char*)func_020936f8();
    Struct_ov017_021af66c* var6 = static_cast<Struct_ov017_021af66c*>(var1->unknown_ptr_3718);
    func_020397cc((Struct_02018300_3*)var3, 0);
    var3->unknown_b2_ = 0;
    Struct_ov017_021d6aec var7 = data_ov017_021d6aec;
    if (var7.unknown_0_[arg0->unknown_a_] != 0) {
        int var8 = var0->GetTickCount();
        if (var8 == 0) {
            var8 = 1;
        }
        func_0205c904(arg0->unknown_48_, var8);
        arg0->unknown_a_ = var7.unknown_0_[arg0->unknown_a_](arg0);
    }
    if (arg0->unknown_8_ != 0) {
        arg0->unknown_1_ = 1;
    }
    if (arg0->unknown_9_ != 2 && *reinterpret_cast<int*>(reinterpret_cast<char*>(var2) + 0xfc0) == 0) {
        if (func_0202bd34(var2, arg0->unknown_c_) == 0) {
            arg0->unknown_1_ = 1;
        }
    }
    if (var1->unknown_42e2_ != 0) {
        if (arg0->unknown_9_ == 2) {
            func_ov017_021c37a4();
            var1->unknown_42e3_[0] = 1;
            Struct_ov017_021af66c_3* var9 = func_02012fe4();
            if (var9->unknown_0_ == 1) {
                SetBrightness(var1, 0, 30);
                UnlockAndSetBrightness(var1, 0, 30);
            }
            Struct_ov017_021af66c* var10 = static_cast<Struct_ov017_021af66c*>(var1->unknown_ptr_array_371c[6]);
            if (var10->unknown_2_ == 0) {
                func_ov017_021baedc(var10, 1);
                func_ov017_021bbae4(var10, var9->unknown_8_, 2);
                var10->unknown_cd_ = func_020100b0(var0);
                var10->unknown_ce_ = var3->unknown_150_->unknown_49c_0_;
                var10->unknown_cc_ = 1;
                var10->unknown_cf_ = 3;
                func_020469b4((Struct_0201bdac_2*)arg1, (Struct_0201bdac*)var10);
            }
            ClearFlags00(var1, 0x40);
        } else {
            func_ov017_0219577c(0, 0, 0);
            Struct_ov017_021af66c* var11 = static_cast<Struct_ov017_021af66c*>(var1->unknown_ptr_array_371c[6]);
            if (var11->unknown_2_ != 0 && var11->unknown_cf_ == 2) {
                func_02093a14(var5);
                func_020dc2d0(0);
            }
        }
        arg0->unknown_1_ = 1;
    }
    int var12 = func_ov017_02195658(var1);
    if (var12 > 0) {
        arg0->unknown_1b_[var12] = 0;
        if (var6->unknown_2_ != 0) {
            void* var13 = func_ov017_021b8468(var6);
            if (var13 != 0) {
                func_ov000_02163b14(var13, (void*)var12);
                func_ov017_021afb8c(arg0, arg0->unknown_e_);
            }
        }
    }
    if (var6->unknown_2_ != 0) {
        void* var14 = func_ov017_021b8468(var6);
        if (var14 != 0) {
            func_ov000_02163b40(var14);
        }
    }
    if (arg0->unknown_1_ == 0) {
        return;
    }
    if (arg0->unknown_42_ != 0) {
        SetMainBrightness(var1, arg0->unknown_3c_, 0);
        func_020c5588(arg0->unknown_40_, 0, 0x7fff, 0, 0);
        ClearFlags04(var1, 0xffffffff);
        SetFlags04(var1, arg0->unknown_38_);
    }
    arg0->unknown_b_ = 0;
    func_02046968((Struct_02046968*)arg1);
    Struct_ov017_021af66c* var15 = static_cast<Struct_ov017_021af66c*>(var1->unknown_ptr_array_371c[6]);
    int var16 = 1;
    if (var15->unknown_2_ != 0 && var15->unknown_cf_ == 2) {
        var16 = 0;
    }
    if (var16) {
        GameObject* var17 = var0->GetUnknownGameObject();
        if (var17 != 0) {
            func_020397c0(var17);
            func_02039830(var17);
        }
    }
    func_0205ce94(arg0->unknown_48_);
    func_020466f4((Struct_02038598_4*)func_020d6c00(), 0x800000);
    func_ov017_0218b5c0(1, -1);
    func_020daf9c(0, 1, 0, 1);
    DISPCNT = (DISPCNT & ~0x1f00) | (arg0->unknown_280_ << 8);
    ClearFlags04(var1, 0x40);
    if (arg0->unknown_288_ != 0) {
        func_02012da4(&data_02114e20, arg0->unknown_288_);
        arg0->unknown_288_ = 0;
    }
    Struct_02021b84* var18 = func_020421a0();
#if defined(jpn)
    var18->unknown_17ff_.unknown_0_2_ = 0;
#else
    var18->unknown_19d0_ = 0;
#endif
    if (static_cast<Struct_ov017_021af66c*>(var1->unknown_ptr_3718)->unknown_2_ == 0) {
        func_020466f4(var4, 0x40000);
    }
}
