#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_02048850_2 {
    char unknown_0_[0xc];
    short unknown_c_;
    short unknown_e_;
};

struct Struct_02048850 {
    char unknown_0_[0x144];
    struct Struct_02048850_2* unknown_144_;
};

// USA: func_02048850
extern "C" ARM void func_02048850(struct Struct_02048850* arg0, struct Struct_02048850_2* arg1) {
    arg0->unknown_144_ = arg1;
    ((Object3D*)((struct Struct_020484f8_3*)(arg0)))->SetRadius((int)(arg1->unknown_c_ << 2));
    ((Object3D*)((struct Struct_020484f8_4*)(arg0)))->SetHeight((int)(arg0->unknown_144_->unknown_e_));
}
