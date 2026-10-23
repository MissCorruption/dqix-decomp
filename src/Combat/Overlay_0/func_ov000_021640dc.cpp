#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void func_ov000_02160fa8(void* arg0, int arg1);
extern "C" int func_ov000_02160fd4(void* arg0, int arg1);
extern "C" int func_ov017_02195658(GameResources* arg0);
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
extern "C" void func_020a367c(unsigned char* arg0, int arg1);

extern "C" void func_ov017_021c8b78(unsigned short arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_ov000_0215f03c(struct Struct_02000c9c_33* arg0);
extern "C" void func_ov000_021663a0(struct Struct_ov000_021640dc_4* arg0);
extern "C" void func_ov000_02164d74(struct Struct_ov000_021640dc_4* arg0);
extern "C" void func_ov000_021674f4(unsigned char* arg0, int arg1);
extern "C" unsigned char* func_0208a9b4(void);
extern "C" void func_0208b4c0(unsigned char* arg0);
extern "C" void func_ov000_02160d80(void* arg0, int arg1);
extern "C" void func_ov000_021750e4(void* arg0);
extern "C" void func_ov000_021760d4(void* arg0);

struct Struct_ov000_021640dc {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 4;
};

struct Struct_02000c9c_33 {
    char unknown_0_[0x81b0];
    struct Struct_ov000_021640dc unknown_81b0_;
};

struct Struct_ov000_021640dc_2 {
    char unknown_0_[8];
    unsigned short unknown_8_;
    char unknown_a_[2];
    int unknown_c_;
    char unknown_10_[0x2a - 0x10];
    signed char unknown_2a_;
    char unknown_2b_;
    int unknown_2c_;
    int unknown_30_;
};

struct Struct_ov000_021640dc_3 {
    char unknown_0_[0x1b];
    signed char unknown_1b_;
    char unknown_1c_[4];
    int unknown_20_;
    unsigned short unknown_24_;
};

struct Struct_ov000_021640dc_4 {
#if defined(jpn)
    char unknown_0_[0x218];
#else
    char unknown1_0_[0x29c];
#endif
    struct Struct_02000c9c_33* unknown_29c_;
    struct Struct_ov000_021640dc_2* unknown_2a0_;
#if defined(jpn)
    char unknown_220_[0x371c - 0x220];
#else
    char unknown_2a4_[0x3760 - 0x2a4];
#endif
    struct Struct_ov000_021640dc_3 unknown_3760_;
#if defined(jpn)
    char unknown_3744_[0x56b0 - 0x3744];
#else
    char unknown_3788_[0x54bc - 0x3788];
#endif
    unsigned char unknown_54bc_;
};

static inline void inline_ov000_02163db4(unsigned char* arg0, unsigned char arg1) {
    func_020a367c(arg0, arg1);
}

static inline struct Struct_ov000_021640dc* inline_ov000_021640dc(struct Struct_02000c9c_33* arg0) {
    return &arg0->unknown_81b0_;
}

// USA: func_ov000_021640dc
extern "C" ARM void func_ov000_021640dc(struct Struct_ov000_021640dc_4* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    if (var1->unknown_42e2_ != 0) {
        func_ov000_02160fa8(arg0, 0x2000000);
        return;
    }
    struct Struct_ov000_021640dc_2* var2 = arg0->unknown_2a0_;
    int var3 = func_ov017_02195658(var1);
    if (func_020a35e0((unsigned char*)var2, var3)) {
        if (var2->unknown_2a_ == var3) {
            func_ov000_02160fa8(arg0, 0x2000000);
            func_ov017_021c8b78(var2->unknown_8_);
        }
        inline_ov000_02163db4((unsigned char*)var2, var3);
        return;
    }
    if (!func_ov000_02160fd4(arg0, 4)) {
        return;
    }
    if (!func_ov000_02160fd4(arg0, 0x200000)) {
        return;
    }
    if (arg0->unknown_2a0_->unknown_2a_ != func_020100a8(var0)) {
        func_ov000_0215f03c(arg0->unknown_29c_);
    }
    func_ov000_021663a0(arg0);
    func_ov000_02164d74(arg0);
    arg0->unknown_2a0_->unknown_30_ = 0;
    func_ov000_021674f4((unsigned char*)arg0, arg0->unknown_2a0_->unknown_2c_ == 0);
    func_0208b4c0(func_0208a9b4());
    func_ov000_02160d80(arg0, 7);
    func_ov000_02160fa8(arg0, 0x10000);
    func_ov000_02160fa8(arg0, 0x40000000);
    arg0->unknown_3760_.unknown_24_ = arg0->unknown_2a0_->unknown_8_;
    arg0->unknown_54bc_ = inline_ov000_021640dc(arg0->unknown_29c_)->unknown_1_0_;
    arg0->unknown_3760_.unknown_20_ = arg0->unknown_2a0_->unknown_c_;
    arg0->unknown_3760_.unknown_1b_ = arg0->unknown_2a0_->unknown_2a_;
    func_ov000_021750e4(&arg0->unknown_3760_);
    func_ov000_021760d4(&arg0->unknown_3760_);
    ClearFlags00(var1, 0x10);
}
