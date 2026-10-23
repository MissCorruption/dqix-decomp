#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_02055558 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    char unknown_14_[0xc0 - 0x14];
    char unknown_c0_[4];
};

extern "C" void func_02054f80(void* arg0);

// USA: func_02055558
extern "C" ARM int func_02055558(struct Struct_02055558* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    ((Object3D*)&arg0->unknown_14_)->Initialize();
    func_02054f80(&arg0->unknown_c0_);
    arg0->unknown_0_ = arg1;
    arg0->unknown_4_ = arg2;
    arg0->unknown_8_ = arg5;
    arg0->unknown_c_ = arg3;
    arg0->unknown_10_ = arg4;
    return 1;
}
