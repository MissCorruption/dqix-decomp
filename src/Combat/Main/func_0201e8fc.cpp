#include <globaldefs.h>
#include "World/Bounds3D.h"
#include "Graphics/Vector.h"

struct Struct_ov009_0218aa28 { int unknown_0_; int unknown_4_; int unknown_8_; };

extern "C" ARM void func_0201ce78(int* arg0, int arg1, int arg2, int arg3);

struct Struct_0201e8fc {
    Vector3fix unknown_0_;
    Vector3fix unknown_c_;
    short unknown_18_;
    int unknown_1c_, unknown_20_, unknown_24_, unknown_28_;
};

struct Struct_0201e8fc_2 {
    unsigned char unknown_0_[0x80];
    unsigned short unknown_80_;
    unsigned char unknown_82_[2];
    struct Struct_0201e8fc* unknown_84_;
};

// USA: func_0201e8fc
extern "C" ARM void* func_0201e8fc(struct Struct_0201e8fc_2* arg0, struct Struct_ov009_0218aa28* arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_80_; var0++) {
        struct Struct_0201e8fc* var1 = &arg0->unknown_84_[var0];
        Vector3fix var2;
        Matrix4x3 var3;
        Struct_02018fbc var4;
        int var5;

        if (arg1->unknown_0_ < var1->unknown_1c_ || arg1->unknown_8_ < var1->unknown_20_) continue;
        if (arg1->unknown_0_ > var1->unknown_24_ || arg1->unknown_8_ > var1->unknown_28_) continue;

        Vector3fix_Subtract((const Vector3fix*)arg1, &var1->unknown_0_, &var2);
        var5 = fix32ReduceAngle0To2Pi(-(short)var1->unknown_18_);
        var3 = RotationMatrixY(var5);
        Mat4x3_ApplyToVector(&var2, &var3, &var2);
        Vector3fix_Add(&var2, &var1->unknown_0_, &var2);

        func_0201ce78(&var4.unknown_c_.x, var1->unknown_0_.x - var1->unknown_c_.x / 2, var1->unknown_0_.y - var1->unknown_c_.y / 2, var1->unknown_0_.z - var1->unknown_c_.z / 2);
        func_0201ce78(&var4.unknown_0_.x, var1->unknown_0_.x + var1->unknown_c_.x / 2, var1->unknown_0_.y + var1->unknown_c_.y / 2, var1->unknown_0_.z + var1->unknown_c_.z / 2);

        if (func_02031118(&var2, &var4) != 0)
            return var1;
    }
    return 0;
}
