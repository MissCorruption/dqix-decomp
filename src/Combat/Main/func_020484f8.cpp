#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_020484f8_3;
struct Struct_020484f8_4;
struct Struct_0203d028_18;

struct Struct_020484f8 {
    char unknown_0_[0x8];
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
};

struct Struct_020484f8_2 {
    struct Struct_020484f8* unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
};

// USA: func_020484f8
extern "C" ARM void func_020484f8(Object3D* arg0, Struct_020484f8_2* arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    *(unsigned int*)(var0 + 0xb0) = arg1->unknown_4_;
    *(struct Struct_020484f8**)(var0 + 0xac) = arg1->unknown_0_;
    *(unsigned int*)(var0 + 0xb4) = arg1->unknown_8_;
    ((Object3D*)((struct Struct_0203d028_18*)var0))->SetScale(0x10a, 0x10a, 0x10a);
    ((Object3D*)((struct Struct_020484f8_3*)var0))->SetRadius((*(struct Struct_020484f8**)(var0 + 0xac))->unknown_c_ << 2);
    ((Object3D*)((struct Struct_020484f8_4*)var0))->SetHeight((*(struct Struct_020484f8**)(var0 + 0xac))->unknown_e_);
    if ((*(struct Struct_020484f8**)(var0 + 0xac))->unknown_8_ == 0x140) {
        ((Object3D*)var0)->EnableFlag(0x20000000);
    }
    if (((Object3D*)var0)->GetFlags() & 0x20000000) return;
    ((Object3D*)var0)->UseRenderConfigDiffuseColor();
}
