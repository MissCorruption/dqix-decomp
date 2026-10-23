#pragma once

struct Struct_0203cdd0 {
    char unknown_0_[0x60];
    int unknown_60_;
};

struct Struct_0203e0a0 {
    char unknown_0_[0xc];
    void *unknown_c_;
};

struct Struct_0203dce4 {
    int unknown_0_;
    unsigned char unknown_4_[0x10];
    void* unknown_14_;
    void* unknown_18_;
    void* unknown_1c_;
};

extern "C" void func_02040af0(Struct_0203dce4* arg0, int arg1);
extern "C" int func_020409e0(Struct_0203dce4* arg0);
extern "C" int func_02040a20(Struct_0203dce4* arg0);

extern "C" int func_0203cdd0(Struct_0203cdd0 *arg0);
extern "C" int func_02040528(int *arg0);
extern "C" void *func_02040538(Struct_0203e0a0 *arg0);
