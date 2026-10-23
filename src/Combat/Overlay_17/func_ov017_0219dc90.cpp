#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0202c1a4;
struct Struct_0201bdac_2;

struct Struct_ov017_0219dc90_2 {
    unsigned char unknown_0_[2];
    unsigned short unknown_2_0_ : 2;
    unsigned short unknown_2_2_ : 2;
    unsigned short unknown_2_4_ : 12;
    unsigned short unknown_4_;
    unsigned char unknown_6_[2];
    int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
#if defined(jpn)
    unsigned char unknown_e_[0x6];
#else
    unsigned char unknown1_e_[0xa];
#endif
    int unknown_18_[3];
    unsigned char unknown_24_[0x10];
    int unknown_34_;
};

struct Struct_ov017_0219dc90_5 {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_;
    unsigned char unknown_3_[5];
    Struct_ov017_0219dc90_2* unknown_8_;
    unsigned char unknown_c_[5];
    unsigned char unknown_11_;
    unsigned short unknown_12_;
#if defined(jpn)

#else
    unsigned char unknown_14_[4];
#endif
};

struct Struct_ov017_0219dc90_6 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};

struct Struct_ov017_0219dc90_7 {
    unsigned char unknown_0_[0x44];
    int unknown_44_[3];
    unsigned char unknown_50_[0x68];
    unsigned short unknown_b8_;
    unsigned char unknown_ba_[8];
    unsigned char unknown_c2_;
};

struct Struct_ov017_0219dc90 {
#if defined(jpn)
    unsigned char unknown_0_[0x34f4];
#else
    unsigned char unknown1_0_[0x3704];
#endif
    Struct_0201bdac_2* unknown_3704_;
    unsigned char unknown_3708_[0x3a9c - 0x3708];
    Struct_ov017_0219dc90_5 unknown_3a9c_[4];
#if defined(jpn)
    unsigned char unknown_38dc_[0x4204 - 0x38dc];
#else
    unsigned char unknown_3afc_[0x44b4 - 0x3afc];
#endif
    Struct_ov017_0219dc90_6 unknown_44b4_;
};

extern "C" void* func_0202ae18(void);
extern "C" Struct_ov017_0219dc90_2* func_02027ca4(void);
extern "C" void* func_02012fe4(void);
extern "C" signed char func_0202c1a4(Struct_0202c1a4* arg0);
extern "C" void func_020288e0(Struct_ov017_0219dc90_2* arg0);
extern "C" void func_ov017_0219e0ec(void* arg0);
extern "C" int func_02028a54(Struct_ov017_0219dc90_2* arg0, int arg1);
extern "C" void func_ov017_0219e180(Struct_ov017_0219dc90* arg0, int arg1);
struct Struct_020fdd44;
extern "C" Struct_ov017_0219dc90_2* func_02028bd0(Struct_020fdd44*, int);
extern "C" unsigned short func_02028460(int* arg0, int* arg1);
extern "C" int func_0201b588(int arg0);
struct Struct_ov017_0219dc90_3;
extern "C" void func_ov017_021b46d8(Struct_ov017_0219dc90_3*);
struct Struct_0201bdac;
extern "C" void func_020469b4(Struct_0201bdac_2*, Struct_0201bdac*);
struct Struct_ov017_0219dc90_4;
extern "C" void func_ov017_021b4760(Struct_ov017_0219dc90_4*);
extern "C" void func_02046a8c(Struct_0201bdac_2* arg0, Struct_ov017_0219dc90_5* arg1);

// USA: func_ov017_0219dc90
extern "C" ARM void func_ov017_0219dc90(Struct_ov017_0219dc90* arg0, int arg1, int arg2, unsigned char arg3, unsigned short arg4) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();
    Struct_ov017_0219dc90_2* var2 = func_02027ca4();
    func_02012fe4();
    Struct_ov017_0219dc90_7* var3 = (Struct_ov017_0219dc90_7*)func_0200ff1c(var0, arg1);
    if (func_0202c1a4((Struct_0202c1a4*)var1) != 0) return;
    func_020288e0(var2);
    func_ov017_0219e0ec(arg0);
    if (var3 == NULL) return;
    int var4 = func_02028a54(var2, arg2);
    func_ov017_0219e180(arg0, arg2);
    Struct_ov017_0219dc90_2* var5 = func_02028bd0((Struct_020fdd44*)var2, arg2);
    Struct_ov017_0219dc90_6* var6 = &arg0->unknown_44b4_;
    if (var5 != NULL) {
        var3->unknown_b8_ = var5->unknown_34_ != 0 ? func_02028460(var5->unknown_18_, var3->unknown_44_) : 0;
        signed char* var7 = (signed char*)var0->GetGrottoStruct();
        if (func_0201b588(arg2) && var4) {
            var5->unknown_d_ = var7[8];
        }
        var5->unknown_8_ = 0;
        if (var4) {
            if (var6->unknown_0_ == arg2) {
                var5->unknown_2_4_ = var6->unknown_2_;
                var6->unknown_0_ = 0;
                var6->unknown_2_ = 0;
            }
            Struct_ov017_0219dc90_5* var8 = &arg0->unknown_3a9c_[var5->unknown_2_0_];
            if (var8->unknown_2_ == 0) {
                func_ov017_021b46d8((Struct_ov017_0219dc90_3*)var8);
                var8->unknown_8_ = var5;
                var8->unknown_11_ = arg3;
                var8->unknown_12_ = arg4;
                func_020469b4(arg0->unknown_3704_, (Struct_0201bdac*)var8);
            } else {
                func_ov017_021b4760((Struct_ov017_0219dc90_4*)var8);
                func_02046a8c(arg0->unknown_3704_, var8);
                func_ov017_021b46d8((Struct_ov017_0219dc90_3*)var8);
                var8->unknown_8_ = var5;
                var8->unknown_11_ = arg3;
                var8->unknown_12_ = arg4;
                func_020469b4(arg0->unknown_3704_, (Struct_0201bdac*)var8);
            }
        } else {
            var3->unknown_c2_ |= 0x40;
        }
    }
    if (var6->unknown_0_ == arg2) {
        var6->unknown_0_ = 0;
        var6->unknown_2_ = 0;
    }
}
