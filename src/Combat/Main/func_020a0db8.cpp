#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_0202ee38 {
    int unknown_0_;
    Vector3i unknown_4_;
    Vector3i unknown_10_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
};

// USA: func_020a0db8
extern "C" ARM void func_020a0db8(struct Struct_0202ee38* arg0, int* arg1, int* arg2, int arg3) {
    arg0->unknown_4_ = *(const Vector3i*)arg1;
    arg0->unknown_10_ = *(const Vector3i*)arg2;
    arg0->unknown_24_ = arg3;
    arg0->unknown_0_ = 2;
}
