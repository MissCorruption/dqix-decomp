#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_0203d028_21 {
    char unknown_0_[0xcc];
    int unknown_cc_;
    int unknown_d0_;
};

// USA: func_020415b0
extern "C" ARM int func_020415b0(Struct_0203d028_21* arg0, int arg1, int) {
    arg0->unknown_cc_ = arg1;
    return ((Object3D*)arg0)->MaybeSetRegularAnimation((char const*)arg1, arg0->unknown_d0_);
}
