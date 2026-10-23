#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_01ff8b48_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

void Vector3fixDivideScalar(Vector3i const*, int, Vector3i*);

struct Struct_020a1034 {
    int unknown_0_;
    Vector3i unknown_4_;
    Vector3i unknown_10_;
    char unknown_1c_[0x8];
    int unknown_24_;
};

// USA: func_020a1034
extern "C" ARM void func_020a1034(struct Struct_020a1034* arg0) {
    Vector3i var0;
    Vector3fix_Subtract(&arg0->unknown_10_, &arg0->unknown_4_, &var0);
    if (Vector3fix_Length(&var0) < 0x199) {
        arg0->unknown_4_ = arg0->unknown_10_;
        arg0->unknown_0_ = 0;
    } else {
        Vector3i var1;
        Vector3fixDivideScalar(&var0, arg0->unknown_24_, &var1);
        Vector3fix_Add(&arg0->unknown_4_, &var1, &arg0->unknown_4_);
    }
}
