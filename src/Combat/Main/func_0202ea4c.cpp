#include <globaldefs.h>

struct Struct_ov009_0218aa28 { int unknown_0_, unknown_4_, unknown_8_; };

extern "C" void Vector3fix_Subtract(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1, struct Struct_ov009_0218aa28* arg2);
extern "C" void Vector3fix_Normalize(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1);
extern "C" int fix32_Atan2(int arg0, int arg1);
int fix32ReduceAngle0To2Pi(int angle);
struct Struct_02028460_3;
extern "C" int Vector3fix_Distance(struct Struct_02028460_3* arg0, struct Struct_02028460_3* arg1);

struct Struct_0202ea4c {
    char unknown_0_[4];
    struct Struct_ov009_0218aa28 unknown_4_;
    struct Struct_ov009_0218aa28 unknown_10_;
    char unknown_1c_[0x70 - 0x1c];
    int unknown_70_;
    int unknown_74_;
    int unknown_78_;
};

// USA: func_0202ea4c
extern "C" ARM void func_0202ea4c(struct Struct_0202ea4c* arg0) {
    struct Struct_ov009_0218aa28 var0;
    Vector3fix_Subtract(&arg0->unknown_4_, &arg0->unknown_10_, &var0);
    var0.unknown_4_ = 0;
    Vector3fix_Normalize(&var0, &var0);
    arg0->unknown_70_ = fix32ReduceAngle0To2Pi(fix32_Atan2(var0.unknown_0_, var0.unknown_8_));
    arg0->unknown_74_ = arg0->unknown_4_.unknown_4_ - arg0->unknown_10_.unknown_4_;
    arg0->unknown_78_ = Vector3fix_Distance((struct Struct_02028460_3*)&arg0->unknown_4_, (struct Struct_02028460_3*)&arg0->unknown_10_);
}
