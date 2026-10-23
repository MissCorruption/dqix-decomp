#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_0203d028_20 {
    char unknown_0_[0xc4];
    char unknown_c4_;
    char unknown_c5_[0xb];
    int unknown_d0_;
};

// USA: func_02041598
extern "C" ARM int func_02041598(struct Struct_0203d028_20* arg0, int arg1, int) {
    arg0->unknown_c4_ = arg1;
    return ((Object3D*)arg0)->MaybeSetBCFGAnimation((unsigned char)arg1, arg0->unknown_d0_);
}
