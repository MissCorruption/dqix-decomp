#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02061c04_21 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0xc];
    int unknown_14_;
    char unknown_18_[0x38];
};
struct Struct_ov000_0217636c {
    char unknown_0_[4];
    Struct_02061c04_21 unknown_4_;
    Struct_02061c04_21 unknown_54_;
};
struct Struct_ov000_0217ab8c {
    char unknown_0_[0xc];
    short unknown_c_;
    char unknown_e_[2];
    signed char unknown_10_[8];
    signed char unknown_18_;
    signed char unknown_19_;
    signed char unknown_1a_;
    signed char unknown_1b_;
    signed char unknown_1c_;
    signed char unknown_1d_;
    short unknown_1e_;
    signed char unknown_20_;
    signed char unknown_21_;
    signed char unknown_22_;
    signed char unknown_23_;
    unsigned char unknown_24_;
    char unknown_25_[0x30 - 0x25];
    signed char* unknown_30_;
    signed char unknown_34_;
    char unknown_35_[3];
    Struct_ov000_0217636c* unknown_38_;
    char unknown_3c_[0x4c - 0x3c];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0xc6 - 0x50];
#else
    char unknown1_50_[0x86 - 0x50];
#endif
    signed char unknown_86_;
    char unknown_87_[0x442 - 0x87];
    signed char unknown_442_;
    char unknown_443_;
    unsigned char unknown_444_;
};
struct Struct_ov000_0217ab8c_2 {
#if defined(jpn)
    char unknown_0_[0x1faa];
#else
    char unknown1_0_[0x1d72];
#endif
    unsigned short unknown_1d72_;
};
struct Struct_ov000_02184294_2 {
#if defined(jpn)
    Struct_ov000_0217ab8c_2* unknown1_8_;
    int unknown_4_;
    int unknown_8_;
#else
    int unknown_0_;
    int unknown1_4_;
    Struct_ov000_0217ab8c_2* unknown1_8_;
#endif
};
struct Struct_0207d300;
struct Struct_0205ba68;

extern Struct_ov000_02184294_2 data_ov000_02184294;

struct Struct_ov000_02171640;
extern "C" int func_ov000_02171698(Struct_ov000_02171640*);
struct Struct_ov000_02171968;
extern "C" int func_ov000_021719c0(Struct_ov000_02171968*);
extern "C" GameObject* func_0200ff1c(GameState*, int);
extern "C" int func_02053c6c(unsigned char*);
extern "C" int func_02083960(Struct_0207d300*);
extern "C" void func_0205cf10(void*);
struct Struct_0205cf1c;
extern "C" void func_0205cf1c(Struct_0205cf1c*);
extern "C" void func_0205cef8(void*);
extern "C" void func_0205cf04(void*);
extern "C" void func_0205ba68(Struct_0205ba68*, int, int, int);
struct Struct_0205bacc;
extern "C" void func_0205bacc(Struct_0205bacc*, int);
struct Struct_0205bcdc;
extern "C" void func_0205bcdc(Struct_0205bcdc*, int);
extern "C" void func_0205bb04(Struct_02061c04_21*, int);

// USA: func_ov000_0217ab8c
extern "C" ARM void func_ov000_0217ab8c(Struct_ov000_0217ab8c* arg0, int arg1, int arg2) {
    int var0, var1, var2, var3, var4;
    Struct_ov000_0217636c* var5;
    if (arg0->unknown_4c_ < 0 || !(arg0->unknown_24_ & 1) || arg0->unknown_c_ == 0 || (var5 = arg0->unknown_38_) == 0) {
        return;
    }
    switch (arg0->unknown_10_[arg0->unknown_18_]) {
    case 13:
        var4 = arg0->unknown_1c_;
        var0 = 2;
        var1 = 3;
        var2 = 1;
        var3 = 6;
        break;
    case 14:
        var1 = 1;
        var0 = arg2;
        var2 = var1;
        var3 = arg2;
        var4 = arg0->unknown_1d_;
        break;
    case 15:
        if (func_ov000_02171698((Struct_ov000_02171640*)arg0) >= 4) {
            var0 = 1;
            var1 = 4;
            var2 = (func_ov000_02171698((Struct_ov000_02171640*)arg0) + 3) / 4;
        } else {
            var0 = 1;
            var1 = func_ov000_02171698((Struct_ov000_02171640*)arg0);
            var2 = var0;
        }
        arg0->unknown_19_ = var5->unknown_54_.unknown_14_;
        var3 = func_ov000_02171698((Struct_ov000_02171640*)arg0);
        var4 = arg0->unknown_20_;
        if (var4 < 0 || var3 <= var4) {
            var4 = 0;
            arg0->unknown_20_ = 0;
        }
        break;
    case 16:
        if (func_ov000_021719c0((Struct_ov000_02171968*)arg0) >= 4) {
            var0 = 1;
            var1 = 4;
            var2 = (func_ov000_021719c0((Struct_ov000_02171968*)arg0) + 3) / 4;
        } else {
            var0 = 1;
            var1 = func_ov000_021719c0((Struct_ov000_02171968*)arg0);
            var2 = var0;
        }
        arg0->unknown_1a_ = var5->unknown_54_.unknown_14_;
        var3 = func_ov000_021719c0((Struct_ov000_02171968*)arg0);
        var4 = arg0->unknown_1e_;
        if (var4 < 0 || var3 <= var4) {
            var4 = 0;
            arg0->unknown_1e_ = 0;
        }
        break;
    case 17: {
        GameState* var6 = GameState::GetInstance();
        GameObject* var7 = func_0200ff1c(var6, arg0->unknown_4c_);
        int var8 = func_02053c6c((unsigned char*)var7);
        if (var8 != 0) {
            int var9 = func_02083960((Struct_0207d300*)var8);
            var2 = (arg0->unknown_86_ - var9 + 3) / 4 + (var9 + 3) / 4;
            arg0->unknown_1b_ = var5->unknown_54_.unknown_14_;
            var3 = var2 * 4;
            var4 = arg0->unknown_22_;
            var0 = 1;
            var1 = 4;
        }
        break;
    }
    case 18:
    case 19:
    case 20:
        if (arg0->unknown_444_ != 0) {
            for (int var10 = 0; var10 < arg0->unknown_34_; var10++) {
                if (arg0->unknown_442_ == arg0->unknown_30_[var10]) {
                    arg0->unknown_21_ = var10;
                    break;
                }
            }
            arg0->unknown_442_ = -1;
            arg0->unknown_444_ = 0;
        }
        var1 = arg0->unknown_34_;
        var0 = 1;
        var2 = var0;
        var3 = var1;
        var4 = arg0->unknown_21_;
        break;
    case 21:
        var0 = 1;
        var1 = var0;
        var2 = var0;
        var3 = var0;
        var4 = arg0->unknown_23_;
        break;
    default:
        func_0205cf10(var5);
        func_0205cf1c((Struct_0205cf1c*)arg0->unknown_38_);
        return;
    }
    func_0205cef8(arg0->unknown_38_);
    func_0205cf04(arg0->unknown_38_);
    func_0205ba68((Struct_0205ba68*)&var5->unknown_4_, var0, var1, 0);
    func_0205ba68((Struct_0205ba68*)&var5->unknown_54_, var0, var1, 0);
    func_0205bacc((Struct_0205bacc*)&var5->unknown_4_, var3);
    func_0205bacc((Struct_0205bacc*)&var5->unknown_54_, var3);
    var5->unknown_4_.unknown_4_ = var2;
    var5->unknown_54_.unknown_4_ = var2;
    func_0205bcdc((Struct_0205bcdc*)&var5->unknown_4_, var4);
    func_0205bb04(&var5->unknown_54_, var4);
    data_ov000_02184294.unknown1_8_->unknown_1d72_ &= ~0x100;
}
