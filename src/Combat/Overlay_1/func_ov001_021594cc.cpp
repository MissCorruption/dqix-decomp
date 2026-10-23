#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_ov001_021594cc { int unknown_0_; Vector3fix unknown_4_; int unknown_10_; int unknown_14_; };
struct Struct_ov001_021594cc_2 {
    char unknown_0_[0x4c];
    int unknown_4c_;
    char unknown_50_[0x30];
    Vector3fix unknown_80_;
    char unknown_8c_[0x14];
    Vector3fix unknown_a0_;
};

inline int inline_ov001_021594cc(int arg0, int arg1) { return (int)(((long long)arg0 * arg1 + 0x800) >> 12); }

// USA: func_ov001_021594cc
extern "C" ARM int func_ov001_021594cc(Struct_ov001_021594cc* arg0, Struct_ov001_021594cc_2* arg1) {
    GameState* var0 = GameState::GetInstance();
    int var1 = var0->GetTickCount() << 12;
    if (arg0->unknown_10_ < 0) {
        arg1->unknown_80_.x += arg0->unknown_4_.x;
        arg1->unknown_80_.y += arg0->unknown_4_.y;
        arg1->unknown_80_.z += arg0->unknown_4_.z;
        if (arg1->unknown_80_.x > 0x6487) arg1->unknown_80_.x -= 0x6487;
        else if (arg1->unknown_80_.x <= 0) arg1->unknown_80_.x += 0x6487;
        if (arg1->unknown_80_.y > 0x6487) arg1->unknown_80_.y -= 0x6487;
        else if (arg1->unknown_80_.y <= 0) arg1->unknown_80_.y += 0x6487;
        if (arg1->unknown_80_.z > 0x6487) arg1->unknown_80_.z -= 0x6487;
        else if (arg1->unknown_80_.z <= 0) arg1->unknown_80_.z += 0x6487;
    } else {
        if (arg1->unknown_4c_ >= arg0->unknown_10_ * 2) {
            memcpy(&arg1->unknown_80_, &arg0->unknown_4_, 12);
            arg1->unknown_4c_ = 0;
            return 0;
        }
        if (arg1->unknown_4c_ <= 0) {
            int var2 = arg0->unknown_10_ << 13;
            int var3;
            if (arg0->unknown_14_) var3 = arg1->unknown_80_.x - arg0->unknown_4_.x;
            else var3 = arg0->unknown_4_.x - arg1->unknown_80_.x;
            if (var3 > 0x6487) var3 -= 0x6487;
            else if (var3 < 0) var3 += 0x6487;
            arg1->unknown_a0_.x = fix32_Divide(var3, var2);
            int var4;
            if (arg0->unknown_14_) var4 = arg1->unknown_80_.y - arg0->unknown_4_.y;
            else var4 = arg0->unknown_4_.y - arg1->unknown_80_.y;
            if (var4 > 0x6487) var4 -= 0x6487;
            else if (var4 < 0) var4 += 0x6487;
            arg1->unknown_a0_.y = fix32_Divide(var4, var2);
            int var5;
            if (arg0->unknown_14_) var5 = arg1->unknown_80_.z - arg0->unknown_4_.z;
            else var5 = arg0->unknown_4_.z - arg1->unknown_80_.z;
            if (var5 > 0x6487) var5 -= 0x6487;
            else if (var5 < 0) var5 += 0x6487;
            arg1->unknown_a0_.z = fix32_Divide(var5, var2);
            if (arg0->unknown_14_) {
                arg1->unknown_a0_.x = -arg1->unknown_a0_.x;
                arg1->unknown_a0_.y = -arg1->unknown_a0_.y;
                arg1->unknown_a0_.z = -arg1->unknown_a0_.z;
            }
        } else {
            arg1->unknown_80_.x += inline_ov001_021594cc(arg1->unknown_a0_.x, var1);
            if (arg1->unknown_80_.x > 0x6487) arg1->unknown_80_.x -= 0x6487;
            else if (arg1->unknown_80_.x <= 0) arg1->unknown_80_.x += 0x6487;
            arg1->unknown_80_.y += inline_ov001_021594cc(arg1->unknown_a0_.y, var1);
            if (arg1->unknown_80_.y > 0x6487) arg1->unknown_80_.y -= 0x6487;
            else if (arg1->unknown_80_.y <= 0) arg1->unknown_80_.y += 0x6487;
            arg1->unknown_80_.z += inline_ov001_021594cc(arg1->unknown_a0_.z, var1);
            if (arg1->unknown_80_.z > 0x6487) arg1->unknown_80_.z -= 0x6487;
            else if (arg1->unknown_80_.z <= 0) arg1->unknown_80_.z += 0x6487;
        }
        arg1->unknown_4c_ += var0->GetTickCount();
    }
    return 1;
}
