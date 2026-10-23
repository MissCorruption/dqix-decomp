#pragma once

#include "World/Zone3D.h"

struct Struct_0201a300_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    int unknown_c_;
};

struct Struct_0201a300 { Struct_0201a300_3* unknown_0_; Struct_0201a300_3* unknown_4_; };
struct Struct_0201a300_2 { unsigned short unknown_0_; unsigned short unknown_2_; };

struct Struct_01ff87a4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    Struct_0201a300_3* unknown_4_;
    Struct_0201a300* unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    unsigned char unknown_24_;
    unsigned char unknown_25_;
    unsigned char unknown_26_[2];
    Struct_0201a300_2* unknown_28_;
};

// Known prefix used by the tile graph builder and its resource-load callers.
struct Struct_0201a300_4 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[0xa];
    unsigned char unknown_c_;
    unsigned char unknown_d_[3];
    SafeAllocator* unknown_10_;
#if !defined(jpn)
    int unknown_14_;
#endif
    Struct_01ff87a4 unknown_18_;
};

#if defined(jpn)
#else
#endif

extern "C" int func_0201a300(Zone3D* arg0, int arg1, Struct_0201a300_4* arg2,
                            const TileFeaturePlacementData* arg3, FloorMap* arg4);
