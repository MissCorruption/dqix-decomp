#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020bc0a4(int arg0);
struct Struct_0209c2e0_2;
extern "C" void func_020bc180(struct Struct_0209c2e0_2* arg0, int arg1, int arg2);
extern "C" void* func_020bc068(void* arg0, int arg1);
extern "C" void func_0203aa80(void* arg0, int arg1);
extern "C" int func_0203aaf8(void* arg0, void* arg1, int* arg2);
struct Struct_0203aba8;
extern "C" int func_0203aba8(struct Struct_0203aba8* arg0, void* arg1, void* arg2);
extern "C" void func_0209c2e0(void* arg0, int arg1, int arg2);
extern "C" void func_020bbd9c(void);
extern "C" void func_0203ac10(void* arg0, void* arg1, int arg2);
extern "C" int func_0203ab6c(void* arg0, void* arg1);

struct Struct_0209c840 {
    char unknown_0_[0xb0];
    int unknown_b0_;
    int unknown_b4_;
    short unknown_b8_;
    short unknown_ba_;
    void* unknown_bc_;
    void* unknown_c0_;
    void* unknown_c4_;
    unsigned char unknown_c8_0_ : 1;
    unsigned char unknown_c8_1_ : 7;
    unsigned char unknown_c9_;
    unsigned short unknown_ca_;
    unsigned char unknown_cc_;
    unsigned char unknown_cd_;
    short unknown_ce_;
};

// USA: func_0209c840
extern "C" ARM void func_0209c840(struct Struct_0209c840* arg0) {
    GameState* var0 = GameState::GetInstance();

    if (arg0->unknown_c9_ == 1) {
        arg0->unknown_ca_ = 0x320;
        if (arg0->unknown_b0_ == 1) {
            int var1 = func_020bc0a4(arg0->unknown_b8_);
            if (var1 <= 0) {
                arg0->unknown_ca_ = 0;
            } else {
                arg0->unknown_c8_0_ = 1;
                func_020bc180((struct Struct_0209c2e0_2*)&arg0->unknown_bc_, 0, 0x14);
            }
        } else if (arg0->unknown_b0_ == 2) {
            arg0->unknown_ca_ = 0;
        }
        arg0->unknown_c9_ = 2;
        return;
    }

    if (arg0->unknown_c9_ == 2) {
        unsigned int var2 = var0->GetEffectiveDeltaTime();
        if (var2 < arg0->unknown_ca_) {
            arg0->unknown_ca_ = arg0->unknown_ca_ - var2;
            return;
        }
        func_020bc068(&arg0->unknown_bc_, 1);
        if (arg0->unknown_b4_ > 0) {
            func_0203aa80(arg0, arg0->unknown_b4_);
        }
        func_0203aaf8(arg0, (void*)(int)arg0->unknown_ce_, 0);
        func_0203aba8((struct Struct_0203aba8*)arg0, (void*)(int)arg0->unknown_ce_, &arg0->unknown_c4_);
        func_0209c2e0(arg0, arg0->unknown_cd_, 0);
        func_020bbd9c();
        arg0->unknown_ca_ = 0x1f4;
        arg0->unknown_c9_ = 3;
        return;
    }

    if (arg0->unknown_c9_ != 3) {
        return;
    }

    if (arg0->unknown_ce_ > -1 && func_020bc0a4(arg0->unknown_ce_) > 0) {
        return;
    }

    {
        unsigned int var3 = var0->GetEffectiveDeltaTime();
        if (var3 < arg0->unknown_ca_) {
            arg0->unknown_ca_ = arg0->unknown_ca_ - var3;
            return;
        }
    }

    func_0203ac10(arg0, &arg0->unknown_c4_, 0);
    arg0->unknown_ce_ = -1;
    if (arg0->unknown_b0_ == 1) {
        if (arg0->unknown_b4_ > 0) {
            func_0203aa80(arg0, arg0->unknown_b4_);
        }
        func_0203ab6c(arg0, (void*)(int)arg0->unknown_b8_);
        if (arg0->unknown_c8_0_) {
            func_020bc068(&arg0->unknown_bc_, 0);
            func_020bc180((struct Struct_0209c2e0_2*)&arg0->unknown_bc_, 0, 0);
            func_0209c2e0(arg0, arg0->unknown_cd_, 0x1e);
        } else {
            func_0209c2e0(arg0, arg0->unknown_cd_, 0);
        }
    }
    arg0->unknown_c9_ = 0;
}
