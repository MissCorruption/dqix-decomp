#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_02033b58;
extern "C" void func_02033b58(struct Struct_02033b58* arg0, unsigned char arg1);
struct Struct_02010604;
extern "C" int func_02033b88(struct Struct_02010604* arg0, int arg1);

struct Struct_02076da0 {
    unsigned char unknown_0_[0xb0];
    unsigned short unknown_b0_;
    unsigned short unknown_b2_;
    unsigned short unknown_b4_;
    unsigned char unknown_b6_[0x130 - 0xb6];
    int unknown_130_;
    unsigned char unknown_134_[0x17a - 0x134];
    unsigned char unknown_17a_;
};

// USA: func_02076da0
extern "C" ARM int func_02076da0(struct Struct_02076da0* arg0) {
    if (arg0->unknown_130_ == 0) func_02033b58((struct Struct_02033b58*)arg0, 0);
    else func_02033b88((struct Struct_02010604*)arg0, 0);
    arg0->unknown_b0_ = 0x328;
    arg0->unknown_b2_ = 0;
    arg0->unknown_b4_ = 0;
    ((Object3D*)((unsigned char*)arg0))->DisableFlag(0x80);
    arg0->unknown_17a_ = 0;
    return 1;
}
