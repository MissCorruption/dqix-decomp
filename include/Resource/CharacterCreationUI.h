#pragma once

#include "World/Object3D.h"
#include "Memory/SafeAllocator.h"

struct Struct_0205ac40;
struct Struct_0205ac40_2;
struct Struct_0205a254;

struct Struct_02000c9c_6 {
    int unknown_0_;
    const char* unknown_4_;
};

struct Struct_0201099c_3 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 20;
    Struct_02000c9c_6* unknown_4_;
};

struct Struct_02000c9c_7 {
    unsigned char unknown_0_[0x10];
    void* unknown_10_;
    void* unknown_14_;
    unsigned int unknown_18_;
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
    unsigned char unknown_1e_;
    unsigned char unknown_1f_;
};

struct Struct_ov023_021d9c7c {
    unsigned char unknown_0_[4];
    int unknown_4_[20];
    int unknown_54_[16];
    unsigned char unknown_94_[4];
    Struct_02000c9c_7* unknown_98_;
    void* unknown_9c_;
    short unknown_a0_[8];
    unsigned char unknown_b0_;
    unsigned char unknown_b1_;
    unsigned char unknown_b2_;
    unsigned char unknown_b3_;
    unsigned char unknown_b4_;
    unsigned char unknown_b5_;
    unsigned char unknown_b6_;
    unsigned char unknown_b7_;
    unsigned int unknown_b8_;
};

struct Struct_ov009_02188c2c {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_, unknown_c_;
    unsigned char unknown_10_;
    unsigned char unknown_11_[3];
    int unknown_14_;
    int unknown_18_, unknown_1c_;
    int* unknown_20_;
    int* unknown_24_;
    int* unknown_28_;
    int* unknown_2c_;
    unsigned int unknown_30_;
    short unknown_34_;
    unsigned char unknown_36_[6];
    unsigned char unknown_3c_;
    unsigned char unknown_3d_;
    unsigned char unknown_3e_[2];
};

struct Struct_ov009_02188e70 {
    int unknown_0_, unknown_4_;
    int unknown_8_, unknown_c_;
    int unknown_10_, unknown_14_;
    int unknown_18_, unknown_1c_;
};

struct Struct_ov009_021842a0 {
#if defined(jpn)
    SafeAllocator unknown_0_[8];
#else
    SafeAllocator unknown1_0_[9];
#endif
    SafeAllocator* unknown_b4_;
    SafeAllocator* unknown_b8_;
#if defined(jpn)
    unsigned char unknown_a8_[0xc0 - 0xa8];
#else
    unsigned char unknown_bc_[0xe0 - 0xbc];
#endif
    Struct_0201099c_3 unknown_e0_;
    unsigned char unknown_e8_[0x10];
    char* unknown_f8_;
#if defined(jpn)
    unsigned char unknown_dc_[0x11c - 0xdc];
#else
    unsigned char unknown_fc_[0x158 - 0xfc];
#endif
    Struct_02000c9c_7 unknown_158_[4];
    unsigned char unknown_1d8_[0x20];
    Struct_ov023_021d9c7c unknown_1f8_[2];
    unsigned char unknown_370_[0x7d8 - 0x370];
    Struct_0205ac40* unknown_7d8_;
    Struct_0205ac40_2* unknown_7dc_;
    Struct_0205a254* unknown_7e0_;
    Struct_0205ac40* unknown_7e4_;
    Struct_0205ac40_2* unknown_7e8_;
    Struct_0205a254* unknown_7ec_;
    unsigned char unknown_7f0_[0x7f8 - 0x7f0];
    void* unknown_7f8_;
    void* unknown_7fc_;
    unsigned int unknown_800_;
    int unknown_804_;
    unsigned char unknown_808_[0x70];
    Object3D unknown_878_;
    unsigned char unknown_924_[0x2c8];
    Struct_ov009_02188c2c unknown_bec_;
    Struct_ov009_02188e70 unknown_c2c_;
    short unknown_c4c_, unknown_c4e_;
    short unknown_c50_, unknown_c52_;
    short unknown_c54_, unknown_c56_;
    signed char unknown_c58_;
    unsigned char unknown_c59_;
    unsigned char unknown_c5a_[0x7e];
    Object3D unknown_cd8_;
    unsigned char unknown_d84_;
    unsigned char unknown_d85_[3];
    void* unknown_d88_;
    int unknown_d8c_;
    int unknown_d90_;
    unsigned char unknown_d94_;
    unsigned char unknown_d95_;
    unsigned char unknown_d96_[6];
    unsigned int unknown_d9c_;
    signed char unknown_da0_[2];
    unsigned char unknown_da2_;
    unsigned char unknown_da3_;
    unsigned char unknown_da4_[2];
    unsigned char unknown_da6_[2];
    unsigned char unknown_da8_[2];
    unsigned char unknown_daa_[2];
    unsigned char unknown_dac_[2];
    unsigned char unknown_dae_[2];
#if defined(jpn)
    char unknown_d74_[2][11];
    unsigned char unknown_d8a_[2];
    unsigned char unknown1_d8c_;
    signed char unknown_d8d_;
    signed char unknown_d8e_;
#endif
};
