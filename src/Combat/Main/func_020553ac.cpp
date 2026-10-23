#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_020553ac {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    char unknown_14_[0xc0 - 0x14];
    char unknown_c0_[0x1e8 - 0xc0];
    int unknown_1e8_;
    int unknown_1ec_;
};

extern "C" void func_02054f80(void* arg0);

// USA: func_020553ac
extern "C" ARM void func_020553ac(struct Struct_020553ac* arg0) {
    arg0->unknown_0_ = -1;
    arg0->unknown_1ec_ = 0;
    arg0->unknown_4_ = 0;
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_10_ = 0;
    arg0->unknown_1e8_ = 0;
    ((Object3D*)&arg0->unknown_14_)->Initialize();
    func_02054f80(&arg0->unknown_c0_);
}
