#include <globaldefs.h>
#include "std_library_functions.h"
#include "Graphics/Vector.h"

struct Struct_ov001_02158654 {
    int unknown_0_;
    Vector3fix unknown_4_;
    char unknown_10_[0xc];
    int unknown_1c_;
};

struct Struct_ov001_02158654_2 {
    char unknown_0_[0x44];
    int unknown_44_;
    char unknown_48_[0x10];
    Vector3fix unknown_58_;
    char unknown_64_[0xd0];
    int unknown_134_;
    Vector3fix unknown_138_;
    char unknown_144_[0xc];
    Vector3fix unknown_150_;
    char unknown_15c_[0x8c8];
    int unknown_a24_;
};

// USA: func_ov001_02158654
extern "C" ARM int func_ov001_02158654(struct Struct_ov001_02158654* arg0, struct Struct_ov001_02158654_2* arg1) {
    if (arg0->unknown_1c_ <= -1) {
        arg1->unknown_134_ = 1;
        memcpy(&arg1->unknown_150_, &arg1->unknown_58_, 0xc);
        int var0 = arg1->unknown_44_ % 4;
        if (var0 == 0) {
            Vector3fix_Add(&arg1->unknown_58_, &arg0->unknown_4_, &arg1->unknown_58_);
        } else if (var0 == 2) {
            Vector3fix_Subtract(&arg1->unknown_58_, &arg0->unknown_4_, &arg1->unknown_58_);
        }
        arg1->unknown_44_++;
        arg1->unknown_a24_ = 1;
    } else {
        if (arg1->unknown_44_ >= arg0->unknown_1c_) {
            arg1->unknown_44_ = 0;
            arg1->unknown_134_ = 0;
            return 0;
        }

        if (arg1->unknown_44_ <= 0) {
            arg1->unknown_134_ = 1;
            memcpy(&arg1->unknown_138_, &arg0->unknown_4_, 0xc);
            arg1->unknown_a24_ = 1;
        }

        memcpy(&arg1->unknown_150_, &arg1->unknown_58_, 0xc);
        int var1 = arg1->unknown_44_ % 4;
        if (var1 == 0) {
            Vector3fix_Add(&arg1->unknown_58_, &arg1->unknown_138_, &arg1->unknown_58_);
        } else if (var1 == 2) {
            Vector3fix_Subtract(&arg1->unknown_58_, &arg1->unknown_138_, &arg1->unknown_58_);
            Vector3fix var2;
            Vector3fixDivideScalar(&arg0->unknown_4_, arg0->unknown_1c_ << 12, &var2);
            Vector3fixMultiplyScalar(&var2, arg1->unknown_44_ << 12, &var2);
            Vector3fix_Subtract(&var2, &arg1->unknown_138_, &arg0->unknown_4_);
        }

        arg1->unknown_44_++;
    }
    return 1;
}
