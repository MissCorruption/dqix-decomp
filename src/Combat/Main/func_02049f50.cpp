#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_020489e8;

struct Struct_02049f50 {
    unsigned char unknown_0_[0x41];
    unsigned char unknown_41_;
    unsigned char unknown_42_[0x13c - 0x42];
    unsigned char* unknown_13c_;
};

#pragma optimize_for_size off
// USA: func_02049f50
extern "C" ARM void func_02049f50(struct Struct_02049f50* arg0, int arg1, int arg2) {
    if (arg2 <= 0) {
        arg0->unknown_41_ = (arg0->unknown_41_ & ~0x1f) | ((unsigned char)arg1 & 0x1f);
    }
    if (arg0->unknown_13c_ == NULL) return;
    int var0 = ((Object3D*)((struct Struct_020489e8*)arg0))->GetOwnAlpha();
    float var1 = (float)var0;
    ((AlphaTween*)((unsigned short*)(arg0->unknown_13c_ + 0x60)))->SetCurrentValue(var1);
    ((AlphaTween*)(arg0->unknown_13c_ + 0x60))->ConfigureTween(arg1, arg2);
}
