#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov024_021ea584_3 {
    unsigned char unknown_0_[0x8e50];
    short unknown_8e50_;
    short unknown_8e52_;
    unsigned char unknown_8e54_[4];
    int unknown_8e58_;
    unsigned char unknown_8e5c_[0x26];
    signed char unknown_8e82_;
    signed char unknown_8e83_;
};
struct Struct_ov024_021ea584 {
    unsigned char unknown_0_[4];
    int unknown_4_;
    unsigned char unknown_8_[8];
    Struct_ov024_021ea584_3* unknown_10_;
    unsigned char unknown_14_[4];
    int unknown_18_;
    unsigned char unknown_1c_[0x5c];
    unsigned char unknown_78_;
};
struct Struct_ov024_021ea584_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    unsigned char unknown_8_[8];
    unsigned int unknown_10_;
    unsigned char unknown_14_[8];
    unsigned int unknown_1c_0_ : 14;
    unsigned int unknown_1d_6_ : 5;
    unsigned int unknown_1e_3_ : 13;
    unsigned char unknown_20_[0xc];
    unsigned int unknown_2c_0_ : 27;
    unsigned int unknown_2f_3_ : 1;
    unsigned int unknown_2f_4_ : 4;
};
struct Struct_ov024_021ea584_4 : GameObject {
#if defined(jpn)
    unsigned char unknown_13c_[8];
#else
    unsigned char unknown1_13c_[0x14];
#endif
    unsigned char* unknown_150_;
};
extern "C" int func_020850d0(unsigned char*);
extern "C" void func_ov000_0215cd80(void*);
static inline int inline_ov000_02169850(int arg0) { return arg0 >= 0 && arg0 <= 3; }

// USA: func_ov024_021ea584
extern "C" ARM void func_ov024_021ea584(Struct_ov024_021ea584* arg0, int arg1, int arg2, Struct_ov024_021ea584_2* arg3) {
    if (arg3->unknown_4_0_ == 0x61 && arg0->unknown_18_ > 0) return;
    if (arg3->unknown_1d_6_ && arg0->unknown_18_ > 0) return;
    if (arg0->unknown_78_ && arg0->unknown_18_ > 0) return;
    if (inline_ov000_02169850(arg1)) {
        Struct_ov024_021ea584_4* var0 = (Struct_ov024_021ea584_4*)func_0200ff1c(GameState::GetInstance(), arg1);
        if (var0 && (arg3->unknown_10_ & 0x100000) && func_020850d0(var0->unknown_150_) && arg0->unknown_18_ > 0) return;
    }
    if (arg3->unknown_2f_3_) {
        if (inline_ov000_02169850(arg1)) {
            if (arg0->unknown_10_->unknown_8e82_ != 1) arg0->unknown_10_->unknown_8e83_ = 0;
            else if (arg0->unknown_10_->unknown_8e58_ != arg0->unknown_4_) arg0->unknown_10_->unknown_8e83_++;
            arg0->unknown_10_->unknown_8e82_ = 1;
        } else {
            if (arg0->unknown_10_->unknown_8e82_ != 2) arg0->unknown_10_->unknown_8e83_ = 0;
            else if (arg0->unknown_10_->unknown_8e58_ != arg0->unknown_4_) arg0->unknown_10_->unknown_8e83_++;
            arg0->unknown_10_->unknown_8e82_ = 2;
        }
        if (arg3->unknown_4_0_ != arg0->unknown_10_->unknown_8e52_) arg0->unknown_10_->unknown_8e83_ = 0;
        arg0->unknown_10_->unknown_8e52_ = arg3->unknown_4_0_;
        if (arg2 != arg0->unknown_10_->unknown_8e50_) arg0->unknown_10_->unknown_8e83_ = 0;
        arg0->unknown_10_->unknown_8e50_ = arg2;
        arg0->unknown_10_->unknown_8e58_ = arg0->unknown_4_;
    } else func_ov000_0215cd80(arg0->unknown_10_);
}
