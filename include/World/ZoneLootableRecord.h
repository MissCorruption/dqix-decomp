#pragma once

#include <globaldefs.h>

struct Struct_0204719c
{
    int unknown_0_;
    void* unknown_4_;
};

struct Struct_02012fa4
{
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
    Struct_0204719c unknown_14_;
    unsigned int unknown_1c_[25];
    unsigned short unknown_80_;
    unsigned short unknown_82_;
    unsigned char unknown_84_0_ : 1;
    unsigned char unknown_84_1_ : 1;
    unsigned char unknown_84_2_ : 1;
    unsigned char unknown_84_3_ : 5;
};

struct Struct_020133cc
{
    unsigned short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    unsigned char unknown_6_[2];
    Struct_02012fa4 unknown_8_[2];
    Struct_02012fa4 unknown_118_[4];
    unsigned char unknown_338_[0x30];
};

extern "C" void func_02048004(Struct_02012fa4* arg0, Struct_02012fa4* arg1);
extern "C" void func_02047230(Struct_02012fa4* arg0);
extern "C" void func_02048080(Struct_0204719c* arg0);
extern "C" void func_0204719c(void* arg0);

