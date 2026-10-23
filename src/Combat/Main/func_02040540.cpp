#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_0203cec4;
extern "C" void func_0203ceb4(unsigned char* arg0);
extern "C" void func_0203cec4(struct Struct_0203cec4* arg0, int arg1);

struct Struct_0203fc84;
extern "C" void func_0203fc84(struct Struct_0203fc84* arg0, int arg1);

struct Struct_02037d88_8;

struct Struct_02040540_2 {
    char unknown_0_[0x50];
    unsigned int unknown_50_;
};

struct Struct_02040540_3 {
    char unknown_0_[0xac];
    unsigned short unknown_ac_;
};

struct Struct_02040540 {
    char unknown_0_[0xc];
    unsigned int unknown_c_;
};

struct Struct_0203d028_17 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    struct Struct_02040540* unknown_c_;
    unsigned int unknown_10_;
    struct Struct_0203cec4* unknown_14_;
    struct Struct_02037d88_8* unknown_18_;
};

// USA: func_02040540
extern "C" ARM void func_02040540(struct Struct_0203d028_17* arg0) {
    if (arg0->unknown_c_ == NULL) return;
    arg0->unknown_0_ |= arg0->unknown_c_->unknown_c_;

    if (arg0->unknown_14_ != NULL) {
        if (arg0->unknown_0_ & 0x4) func_0203ceb4((unsigned char*)arg0->unknown_14_);
        if (arg0->unknown_0_ & 0x10) func_0203cec4(arg0->unknown_14_, 1);
        if (arg0->unknown_0_ & 0x20) func_0203fc84((struct Struct_0203fc84*)arg0->unknown_14_, 0x10);
        if (arg0->unknown_0_ & 0x100) ((struct Struct_02040540_2*)arg0->unknown_14_)->unknown_50_ |= 2;
        if (arg0->unknown_0_ & 0x400) ((struct Struct_02040540_2*)arg0->unknown_14_)->unknown_50_ |= 4;
        if (arg0->unknown_0_ & 0x800) ((struct Struct_02040540_2*)arg0->unknown_14_)->unknown_50_ |= 8;
    } else if (arg0->unknown_18_ != NULL) {
        if (arg0->unknown_0_ & 0x4) ((struct Struct_02040540_3*)arg0->unknown_18_)->unknown_ac_ |= 4;
        if (arg0->unknown_0_ & 0x20) ((Object3D*)arg0->unknown_18_)->SetInheritedAlpha(0x10);
    }

    if (arg0->unknown_0_ & 0x8) arg0->unknown_4_ = 0;
}
