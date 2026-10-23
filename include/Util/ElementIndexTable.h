#pragma once

struct Struct_02019568 {
    char unknown_0_[0x20];
};

struct Struct_020177d4 {
    char unknown_0_[0xc];
    struct Struct_02019568 *unknown_c_;
    int unknown_10_;
};

extern "C" Struct_02019568 *func_0201f2a4(Struct_020177d4 *arg0, int arg1);
