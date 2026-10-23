#include <globaldefs.h>
#include "std_library_functions.h"
#include "Graphics/Vector.h"

struct Struct_ov001_02158494 {
    int unknown_0_;
    Vector3fix unknown_4_;
    char unknown_10_[0xc];
    int unknown_1c_;
};

struct Struct_ov001_02158494_2 {
    char unknown_0_[0x44];
    int unknown_44_;
    char unknown_48_[0x4];
    Vector3fix unknown_4c_;
    Vector3fix unknown_58_;
    char unknown_64_[0xd0];
    int unknown_134_;
    Vector3fix unknown_138_;
    Vector3fix unknown_144_;
    Vector3fix unknown_150_;
};

// USA: func_ov001_02158494
extern "C" ARM int func_ov001_02158494(Struct_ov001_02158494* arg0, Struct_ov001_02158494_2* arg1) {
    int var0 = arg0->unknown_1c_;
    if (var0 <= -1) {
        arg1->unknown_134_ = 1;
        memcpy(&arg1->unknown_144_, &arg1->unknown_4c_, sizeof(Vector3fix));
        memcpy(&arg1->unknown_150_, &arg1->unknown_58_, sizeof(Vector3fix));
        if (arg1->unknown_44_ % 4 == 0) {
            Vector3fix_Add(&arg1->unknown_4c_, &arg0->unknown_4_, &arg1->unknown_4c_);
            Vector3fix_Add(&arg1->unknown_58_, &arg0->unknown_4_, &arg1->unknown_58_);
        } else if (arg1->unknown_44_ % 4 == 2) {
            Vector3fix_Subtract(&arg1->unknown_4c_, &arg0->unknown_4_, &arg1->unknown_4c_);
            Vector3fix_Subtract(&arg1->unknown_58_, &arg0->unknown_4_, &arg1->unknown_58_);
        }
        arg1->unknown_44_++;
    } else {
        if (arg1->unknown_44_ >= var0) {
            arg1->unknown_44_ = 0;
            arg1->unknown_134_ = 0;
            return 0;
        }
        if (arg1->unknown_44_ <= 0) {
            arg1->unknown_134_ = 1;
            memcpy(&arg1->unknown_138_, &arg0->unknown_4_, sizeof(Vector3fix));
        }
        memcpy(&arg1->unknown_144_, &arg1->unknown_4c_, sizeof(Vector3fix));
        memcpy(&arg1->unknown_150_, &arg1->unknown_58_, sizeof(Vector3fix));
        if (arg1->unknown_44_ % 4 == 0) {
            Vector3fix_Add(&arg1->unknown_4c_, &arg1->unknown_138_, &arg1->unknown_4c_);
            Vector3fix_Add(&arg1->unknown_58_, &arg1->unknown_138_, &arg1->unknown_58_);
        } else if (arg1->unknown_44_ % 4 == 2) {
            Vector3fix_Subtract(&arg1->unknown_4c_, &arg1->unknown_138_, &arg1->unknown_4c_);
            Vector3fix_Subtract(&arg1->unknown_58_, &arg1->unknown_138_, &arg1->unknown_58_);
            Vector3fix var1;
            Vector3fixDivideScalar(&arg0->unknown_4_, arg0->unknown_1c_ << 12, &var1);
            Vector3fixMultiplyScalar(&var1, arg1->unknown_44_ << 12, &var1);
            Vector3fix_Subtract(&var1, &arg1->unknown_138_, &arg0->unknown_4_);
        }
        arg1->unknown_44_++;
    }
    return 1;
}
