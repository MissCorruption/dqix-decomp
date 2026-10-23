#include <globaldefs.h>
#include <GameState/GameState.h>

struct Struct_020546c8;
struct Struct_0200ffc0;
struct Struct_0200ffd0;
struct Struct_02059720;
struct Struct_02059720_2 { char unknown_0_[3]; unsigned char unknown_3_; };
struct Struct_02059720_3 { char unknown_0_[0x130]; unsigned int unknown_130_; };
struct Struct_02059720_4 {
    int unknown_0_, unknown_4_, unknown_8_;
    unsigned char unknown_c_;
    char unknown_d_[3];
    int unknown_10_, unknown_14_, unknown_18_;
    char unknown_1c_[0xc];
    Struct_020546c8* unknown_28_;
    unsigned char unknown_2c_, unknown_2d_, unknown_2e_, unknown_2f_;
    float unknown_30_, unknown_34_, unknown_38_, unknown_3c_, unknown_40_, unknown_44_, unknown_48_, unknown_4c_;
    char unknown_50_[0x2c];
    Object3D unknown_7c_;
    char unknown_128_[4];
    float unknown_12c_, unknown_130_, unknown_134_, unknown_138_, unknown_13c_, unknown_140_, unknown_144_;
};
extern "C" int func_02059a2c(Struct_02059720*);
extern "C" void* func_02055108(Struct_020546c8*);
extern "C" void* func_0200ffc0(Struct_0200ffc0*);
extern "C" void* func_0200ffd0(Struct_0200ffd0*);
extern "C" void func_02058750(Struct_02059720_4*);
extern "C" void func_020589b8(Struct_02059720_4*);
extern "C" void func_02058b3c(Struct_02059720_4*);

// USA: func_02059720
extern "C" ARM void func_02059720(Struct_02059720_4* arg0) {
    if (!arg0->unknown_2c_) return;
    if (func_02059a2c((Struct_02059720*)arg0)) return;
    if (arg0->unknown_7c_.HasAnimationStopped()) {
        Struct_02059720_2* var0 = (Struct_02059720_2*)func_02055108(arg0->unknown_28_);
        if (var0->unknown_3_) {
            arg0->unknown_c_ = 0;
            arg0->unknown_2c_ = 0;
            return;
        }
    }
    GameState* var1 = GameState::GetInstance();
    int var2 = var1->GetTickCount();
    arg0->unknown_4_ += var2;
    if (func_02059a2c((Struct_02059720*)arg0)) {
        arg0->unknown_2c_ = 0;
        return;
    }
    arg0->unknown_12c_ += arg0->unknown_34_ * (float)var2;
    arg0->unknown_130_ += arg0->unknown_38_ * (float)var2;
    arg0->unknown_134_ += arg0->unknown_3c_ * (float)var2;
    arg0->unknown_138_ += arg0->unknown_40_ * (float)var2;
    if (arg0->unknown_12c_ < 0.0f) arg0->unknown_12c_ = 0.0f;
    if (arg0->unknown_130_ < 0.0f) arg0->unknown_130_ = 0.0f;
    if (arg0->unknown_134_ < 0.0f) arg0->unknown_134_ = 0.0f;
    if (arg0->unknown_138_ < 0.0f) arg0->unknown_138_ = 0.0f;
    if (arg0->unknown_12c_ > 31.0f) arg0->unknown_12c_ = 31.0f;
    if (arg0->unknown_130_ > 31.0f) arg0->unknown_130_ = 31.0f;
    if (arg0->unknown_134_ > 31.0f) arg0->unknown_134_ = 31.0f;
    if (arg0->unknown_138_ > 31.0f) arg0->unknown_138_ = 31.0f;
    arg0->unknown_13c_ += arg0->unknown_44_ * (float)var2;
    arg0->unknown_140_ += arg0->unknown_48_ * (float)var2;
    arg0->unknown_144_ += arg0->unknown_4c_ * (float)var2;
    if (arg0->unknown_144_ < 0.0f) arg0->unknown_144_ = 360.0f;
    if (arg0->unknown_144_ > 360.0f) arg0->unknown_144_ = 0.0f;
    func_02058750(arg0);
    func_020589b8(arg0);
    func_02058b3c(arg0);
    unsigned int var3 = 0;
    if (arg0->unknown_2d_) {
        Struct_02059720_3* var4 = (Struct_02059720_3*)func_0200ffc0((Struct_0200ffc0*)var1);
        if (var4) var3 = var4->unknown_130_;
    } else if (arg0->unknown_2e_) {
        Struct_02059720_3* var5 = (Struct_02059720_3*)func_0200ffd0((Struct_0200ffd0*)var1);
        if (var5) var3 = var5->unknown_130_;
    }
    if (arg0->unknown_2d_ || arg0->unknown_2e_) {
        if (var3 & 1) arg0->unknown_10_ -= 0x120000;
        else if (var3 & 2) arg0->unknown_10_ += 0x120000;
        if (var3 & 4) arg0->unknown_18_ -= 0xe0000;
        else if (var3 & 8) arg0->unknown_18_ += 0xe0000;
    }
    arg0->unknown_7c_.AdvanceEffects();
}
