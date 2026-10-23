#pragma once

#include "World/Zone3D.h"

struct Struct_02012ff0 {
    short unknown_0_;
    short unknown_2_;
    Object3D* unknown_4_;
    Animation3D* unknown_8_;
    Animation3D* unknown_c_;
    Animation3D* unknown_10_;
    Animation3D* unknown_14_;
};

struct Struct_02015134 {
    char unknown_0_[0x68];
    void *unknown_68_;
};
struct Struct_02015134_2 {
    unsigned short unknown_0_;
    void *unknown_4_;
};
struct Struct_02014a24 {
    char unknown_0_[4];
    int unknown_4_;
};

struct Struct_02014a24_2 {
    int unknown_0_;
    unsigned char *unknown_4_;
    int unknown_8_;
    int unknown_c_;
    char unknown_10_[0x30];
    Struct_02012ff0 *unknown_40_;
};

extern "C" void *func_0201f144(unsigned char *arg0, int arg1);
extern "C" void func_02012ff0(Struct_02012ff0 *arg0);
extern "C" int func_02015134(Zone3D* arg0, Struct_02012ff0* arg1, Struct_02014a24* arg2);
extern "C" int func_020151cc(Zone3D *arg0, Struct_02012ff0 *arg1, Struct_02014a24 *arg2);
extern "C" int func_02014d80(Zone3D *arg0, void *arg1, Struct_02012ff0 *arg2, Struct_02014a24 *arg3);
extern "C" void func_020177d4(Zone3D *arg0, void *arg1, SafeAllocator *arg2);

extern "C" int func_02014a24(Zone3D *arg0, void *arg1);
