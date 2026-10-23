#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_ov001_021592bc {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_02040bcc;

void Vector3fixMultiplyScalar(Vector3i const*, int, Vector3i*);
extern "C" void func_02041538(struct Struct_02040bcc* arg0);

struct Struct_020412f4 {
    char unknown_0_[0x44];
    Vector3i unknown_44_;
    char unknown_50_[0xb4 - 0x50];
    Vector3i unknown_b4_;
    char unknown_c0_[0xc8 - 0xc0];
    int unknown_c8_;
};

// USA: func_020412f4
extern "C" ARM void func_020412f4(struct Struct_020412f4* arg0) {
    Vector3i var0;
    Vector3fix_Subtract(&arg0->unknown_b4_, &arg0->unknown_44_, &var0);
    int var1 = Vector3fix_Length(&var0);
    if (arg0->unknown_c8_ < var1) {
        int var2 = fix32_Divide(arg0->unknown_c8_, var1);
        Vector3fixMultiplyScalar(&var0, var2, &var0);
        Vector3i var3;
        Vector3fix_Add(&arg0->unknown_44_, &var0, &var3);
        arg0->unknown_44_ = var3;
    } else {
        arg0->unknown_44_ = arg0->unknown_b4_;
        func_02041538((struct Struct_02040bcc*)arg0);
    }
}
