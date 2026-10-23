#ifndef SYSTEM_OVERLAY_RESPONSE_H
#define SYSTEM_OVERLAY_RESPONSE_H

#include <globaldefs.h>

struct Struct_ov031_0221d7e0 {
    unsigned char unknown_0_[6];
    unsigned short unknown_6_;
};

struct Struct_ov031_0221d3b0 {
    unsigned short unknown_0_;
    unsigned short unknown_2_[2];
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
    Struct_ov031_0221d7e0 unknown_10_;
    Struct_ov031_0221d7e0* inline_ov031_0221c5ac() { return &unknown_10_; }
};

struct Struct_ov031_0221d450 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
};

struct Struct_ov031_0221d3b0_2 {
    unsigned char unknown_0_[12];
    Struct_ov031_0221d3b0 unknown_c_;
    Struct_ov031_0221d450 unknown_24_;
    Struct_ov031_0221d3b0* inline_ov031_0221c5ac_2() { return &unknown_c_; }
};

struct Struct_ov031_0221d3b0_3 {
    Struct_ov031_0221d7e0 unknown_0_[3];
    Struct_ov031_0221d7e0* inline_ov031_0221c5ac_3() { return &unknown_0_[2]; }
};

#if defined(jpn)
#define data_ov031_0224e720 data_ov031_0224f320
#define data_ov031_0224eda0 data_ov031_0224f9a0
#endif

extern "C" {
unsigned short func_ov031_0221e638(unsigned short);
int func_ov031_0221d7e0(Struct_ov031_0221d7e0*, Struct_ov031_0221d7e0*);
int func_ov031_0221d450(int, Struct_ov031_0221d3b0_2*, int*, Struct_ov031_0221d3b0_3*);
int func_ov031_0221d52c(int, Struct_ov031_0221d3b0_2*, int*, Struct_ov031_0221d3b0_3*);
int func_ov031_0221d604(int, Struct_ov031_0221d3b0_2*, int*, Struct_ov031_0221d3b0_3*);
}

#endif
