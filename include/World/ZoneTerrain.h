#pragma once

#include "NitroSDK/Matrix.h"
#include "World/Bounds3D.h"

class Zone3D;
class Object3D;

struct Struct_02018fbc_2 {
    Vector3fix unknown_0_;
    Vector3fix unknown_c_;
    Vector3fix unknown_18_;
    Vector3fix unknown_24_;
};

struct Struct_02018fbc_3 {
    short unknown_0_[96][12];
    int unknown_900_;
    int unknown_904_;
    Vector3fix unknown_908_;
    int unknown_914_;
    int unknown_918_;
    unsigned char unknown_91c_[0x980 - 0x91c];
};


extern "C" int func_02017d90(Zone3D*, int, Struct_02018fbc_3*, Struct_02018fbc, Object3D*);
extern "C" void func_02031188(Struct_02018fbc_2*, short*);
extern "C" int func_020312bc(Struct_02018fbc_2*, int, Vector3fix*, Vector3fix*, Vector3fix*);
extern "C" int func_020319d8(Struct_02018fbc_2*, int, Vector3fix*, Vector3fix*, Vector3fix*);
extern "C" int func_020315b8(Struct_02018fbc_2*, int, Vector3fix*, int, Vector3fix*, int);

extern "C" Zone3D* func_02012fe4();
extern "C" int func_02018fbc(Zone3D* arg0, Vector3fix* arg1);
extern "C" Vector3fix func_02019210(Zone3D* arg0, const Vector3fix* arg1,
                                   const Vector3fix* arg2, int arg3);
