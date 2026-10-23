#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_0204a3f0_3;

struct Struct_0204a3f0_4 {
    unsigned int unknown_0_;
    char unknown_4_[0xa4];
    signed int unknown_a8_0_ : 1;
};

struct Struct_0204a3f0 {
    char unknown_0_[0x8];
    struct Struct_0204a3f0_4* unknown_8_;
};

struct Struct_0204a3f0_2 {
    char unknown_0_[0x21c];
    struct Struct_0204a3f0* unknown_21c_;
};

// USA: func_0204a3f0
extern "C" ARM void func_0204a3f0(struct Struct_0204a3f0_2* arg0, struct Struct_0204a3f0* arg1) {
    struct Struct_0204a3f0_4* var0;
    arg0->unknown_21c_ = arg1;
    ((Object3D*)((struct Struct_0204a3f0_3*)arg1))->EnableBoneTracking();
    var0 = arg0->unknown_21c_->unknown_8_;
    if (var0 == NULL) return;
    if (!var0->unknown_a8_0_) var0 = NULL;
    if (var0 != NULL) {
        var0->unknown_0_ |= 4;
    }
}
