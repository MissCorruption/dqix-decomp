#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov001_02158080_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    char unknown_10_[0xc];
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
};
struct Struct_ov001_02158080 {
    char unknown_0_[0x3c];
    int unknown_3c_;
    char unknown_40_[0x24];
    int unknown_64_;
    int unknown_68_;
    int unknown_6c_;
    int unknown_70_;
    char unknown_74_[0x14];
    int unknown_88_;
    int unknown_8c_;
    int unknown_90_;
    char unknown_94_[0x38];
    int unknown_cc_;
    int unknown_d0_;
    int unknown_d4_;
    int unknown_d8_;
};

static inline int inline_ov001_02158080(int arg0, int arg1) {
    return (int)(((long long)arg0 * arg1 + 0x800) >> 12);
}

// USA: func_ov001_02158080
extern "C" ARM int func_ov001_02158080(Struct_ov001_02158080_2* arg0, Struct_ov001_02158080* arg1) {
    GameState* var0 = GameState::GetInstance();
    int var1 = var0->GetTickCount() << 12;
    int var2 = arg0->unknown_1c_;
    if (!var2) {
        arg1->unknown_64_ = arg0->unknown_4_;
        arg1->unknown_68_ = arg0->unknown_8_;
        arg1->unknown_6c_ = arg0->unknown_c_;
        if (arg1->unknown_70_) {
            arg1->unknown_88_ = arg0->unknown_4_;
            arg1->unknown_8c_ = arg0->unknown_8_;
            arg1->unknown_90_ = arg0->unknown_c_;
        }
        arg1->unknown_3c_ = 0;
        return 0;
    }
    if (arg1->unknown_3c_ <= 0) {
        int var3 = var2 << 13;
        if (arg0->unknown_20_ == -1) {
            int var4 = arg0->unknown_4_ - arg1->unknown_64_;
            if (var4 > 0x6488) var4 -= 0x6488;
            else if (var4 < 0) var4 += 0x6488;
            int var5 = arg1->unknown_64_ - arg0->unknown_4_;
            if (var5 > 0x6488) var5 -= 0x6488;
            else if (var5 < 0) var5 += 0x6488;
            if (var4 < var5) arg1->unknown_cc_ = fix32_Divide(var4, var3);
            else arg1->unknown_cc_ = -fix32_Divide(var5, var3);
        } else {
            int var6;
            if (arg0->unknown_20_ == 0) var6 = arg1->unknown_64_ - arg0->unknown_4_;
            else var6 = arg0->unknown_4_ - arg1->unknown_64_;
            if (var6 > 0x6488) var6 -= 0x6488;
            else if (var6 < 0) var6 += 0x6488;
            arg1->unknown_cc_ = fix32_Divide(var6, var3);
            if (arg0->unknown_20_ == 0) arg1->unknown_cc_ = -arg1->unknown_cc_;
        }
        arg1->unknown_d4_ = fix32_Divide(arg0->unknown_8_ - arg1->unknown_68_, var3);
        arg1->unknown_d8_ = fix32_Divide(arg0->unknown_c_ - arg1->unknown_6c_, var3);
    }
    arg1->unknown_64_ += inline_ov001_02158080(arg1->unknown_cc_, var1);
    if (arg1->unknown_64_ > 0x6488) arg1->unknown_64_ -= 0x6488;
    else if (arg1->unknown_64_ < 0) arg1->unknown_64_ += 0x6488;
    arg1->unknown_68_ += inline_ov001_02158080(arg1->unknown_d4_, var1);
    arg1->unknown_6c_ += inline_ov001_02158080(arg1->unknown_d8_, var1);
    arg1->unknown_3c_ += var0->GetTickCount();
    if (arg1->unknown_3c_ >= (arg0->unknown_1c_ << 1)) {
        if (arg0->unknown_24_) {
            arg1->unknown_64_ = arg0->unknown_4_;
            arg1->unknown_68_ = arg0->unknown_8_;
            arg1->unknown_6c_ = arg0->unknown_c_;
            if (arg1->unknown_70_) {
                arg1->unknown_88_ = arg0->unknown_4_;
                arg1->unknown_8c_ = arg0->unknown_8_;
                arg1->unknown_90_ = arg0->unknown_c_;
            }
        }
        arg1->unknown_3c_ = 0;
        return 0;
    }
    return 1;
}
