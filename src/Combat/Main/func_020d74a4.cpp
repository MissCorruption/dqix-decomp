#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_020d74a4_2 {
    char unknown_0_[0xe8];
    Matrix4x3 unknown_e8_;
};

struct Struct_020d74a4 {
    char unknown_0_[0x4];
    struct Struct_020d74a4_2* unknown_4_;
    char unknown_8_[0x3c];
    Vector3i unknown_44_;
    char unknown_50_[0x5c];
    int unknown_ac_;
    char unknown_b0_[0x28];
};

// USA: func_020d74a4
extern "C" ARM void func_020d74a4(struct Struct_020d74a4* arg0, int arg1, Vector3i arg2) {
    Matrix4x3 var0;
    if (arg0[arg1].unknown_ac_ == 0) {
        arg0[arg1].unknown_44_ = arg2;
    } else {
        struct Struct_020d74a4_2* var1;
        Mat4x3_WriteIdentity(&var0);
        Mat4x3_ApplyTranslation(&var0, &var0, arg2.x, arg2.y, arg2.z);
        var1 = arg0[arg1].unknown_4_;
        var1->unknown_e8_ = var0;
    }
}
