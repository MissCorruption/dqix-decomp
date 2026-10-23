#include <globaldefs.h>

struct Struct_ov009_0218aa28 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern "C" void Vector3fix_Subtract(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1, struct Struct_ov009_0218aa28* arg2);
extern "C" void Vector3fix_Normalize(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1);
extern "C" int fix32_Atan2(int arg0, int arg1);
int fix32ReduceAngle0To2Pi(int angle);

struct Struct_02033834;
extern "C" void func_02033874(struct Struct_02033834* arg0, int arg1);

struct Struct_020338d4 {
    char unknown_0_[0x44];
    struct Struct_ov009_0218aa28 unknown_44_;
};

// USA: func_020338d4
extern "C" ARM void func_020338d4(struct Struct_020338d4* arg0, struct Struct_ov009_0218aa28* arg1) {
    struct Struct_ov009_0218aa28 var0;
    Vector3fix_Subtract(arg1, &arg0->unknown_44_, &var0);
    Vector3fix_Normalize(&var0, &var0);
    int var1 = fix32ReduceAngle0To2Pi(fix32_Atan2(var0.unknown_0_, var0.unknown_8_));
    func_02033874((struct Struct_02033834*)arg0, var1);
}
