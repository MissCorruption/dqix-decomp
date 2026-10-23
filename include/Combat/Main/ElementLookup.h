#pragma once

struct Struct_0201cb60 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    char unknown_5_[7];
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};

struct Struct_0201cb60_2 {
    struct Struct_0201cb60 *unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern "C" void *func_02011584(void *arg0);
extern "C" Struct_0201cb60 *func_0209998c(Struct_0201cb60_2 *arg0, const char *arg1);
