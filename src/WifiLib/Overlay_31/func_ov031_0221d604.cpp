#include "NitroSDK/OverlayResponse.h"

extern "C" unsigned int func_ov031_0221e610(unsigned int);
extern "C" void func_ov031_0221d060(int);

// USA: func_ov031_0221d604
extern "C" THUMB int func_ov031_0221d604(int arg0, Struct_ov031_0221d3b0_2* arg1, int* arg2, Struct_ov031_0221d3b0_3* arg3) {
    if (arg0 != 2) { ++*arg2; return arg0; }
    Struct_ov031_0221d450* var0 = &arg1->unknown_24_;
    Struct_ov031_0221d3b0* var1 = (Struct_ov031_0221d3b0*)((unsigned char*)arg1 + 12);
    if (func_ov031_0221d7e0(&arg3->unknown_0_[2], &var1->unknown_10_) < 0) { ++*arg2; return arg0; }
    if (var0->unknown_0_ != 7) { ++*arg2; return arg0; }
    if (func_ov031_0221e638(var0->unknown_2_) == 0) { ++*arg2; return arg0; }
    if (func_ov031_0221e610(var0->unknown_4_) == 0) return 100;
    if (func_ov031_0221e610(var0->unknown_4_) == -2) {
        func_ov031_0221d060(20);
        return -1;
    }
    if (func_ov031_0221e610(var0->unknown_4_) == -3) {
        func_ov031_0221d060(21);
        return -1;
    }
    func_ov031_0221d060(24);
    return -1;
}
