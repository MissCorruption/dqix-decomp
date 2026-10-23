#pragma once

#include "NitroSDK/Matrix.h"
#include "Grotto/Main/TileFeatures.h"

class Zone3D;
class Model3D;
class Struct_020134e0;
class FloorMap;

struct Struct_02016874 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    union {
        void* unknown_4_;
        Model3D* unknown1_4_;
    };
};

struct Struct_02016874_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    signed char unknown_4_0_ : 7;
    signed char unknown_4_7_ : 1;
    char unknown_5_;
    short unknown_6_;
    Vector3i unknown_8_;
    unsigned char unknown_14_[0x10];
    Struct_02016874* unknown_24_;
    Struct_02016874_2* unknown_28_;
    Struct_02016874_2* unknown_2c_;
    unsigned char unknown_30_[4];
    short unknown_34_;
    short unknown_36_;
    short unknown_38_;
    short unknown_3a_;
    Vector3i unknown_3c_;
    Vector3i unknown_48_;
    unsigned char unknown_54_[4];
    Vector3i unknown_58_;
    Vector3i unknown_64_;
};

struct Struct_02018b34 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    unsigned char unknown_18_[0x20];
    unsigned char unknown_38_;
    unsigned char unknown_39_[3];
};

struct Struct_02013454 {
    int unknown_0_;
    Struct_02018b34 unknown_4_;
    int unknown_40_;
    Struct_02016874_2* unknown_44_;
    Vector3i unknown_48_;
    Struct_02013454* unknown_54_;
};

struct Struct_02013490 {
    Struct_02013454* unknown_0_;
    TileFeaturePlacementData unknown_4_;
    Matrix3x3 unknown_14_;
    int unknown_38_;
    Vector3i unknown_3c_;
};

extern "C" Struct_02013454* func_020196fc(Zone3D* arg0, int arg1);
extern "C" void func_02013490(Struct_02013490* arg0);
extern "C" void func_02013454(Struct_02013454* arg0);
extern "C" void func_0201f01c(Struct_02018b34* arg0);
extern "C" void func_0201aedc(Zone3D* arg0);
extern "C" TileFeaturePlacementData* func_0201e434(Struct_020134e0* arg0, const char* arg1);
extern "C" TileFeaturePlacementData* func_02019f24(TileFeaturePlacementData* arg0, const TileFeaturePlacementData* arg1);
extern "C" int func_02019728(Zone3D* arg0, int arg1, Struct_020134e0* arg2, TileFeaturePlacementData* arg3, FloorMap* arg4);

