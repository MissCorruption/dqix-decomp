#include "NitroSDK/OverlayResponse.h"

struct Struct_ov031_0224e720;
extern Struct_ov031_0224e720 data_ov031_0224e720;
extern int data_ov031_0224e6e0;
extern "C" unsigned int func_ov031_0221e610(unsigned int);
extern "C" void func_ov031_0221d060(int);
extern "C" int func_ov031_0221d82c(unsigned int*, Struct_ov031_0224e720*);
extern "C" bool func_ov031_0221dc58(int);

// USA: func_ov031_0221d450
extern "C" THUMB int func_ov031_0221d450(int arg0, Struct_ov031_0221d3b0_2* arg1, int* arg2, Struct_ov031_0221d3b0_3* arg3) {
    if (arg0) {
        ++*arg2;
        return arg0;
    }
    Struct_ov031_0221d3b0* var0 = &arg1->unknown_c_;
    Struct_ov031_0221d450* var1 = &arg1->unknown_24_;
    if (func_ov031_0221d7e0(&arg3->unknown_0_[0], &var0->unknown_10_) < 0) {
        ++*arg2;
        return arg0;
    }
    if (!func_ov031_0221e638(var1->unknown_2_)) {
        ++*arg2;
        return arg0;
    }
    if (var1->unknown_0_ == 7) {
        if (func_ov031_0221e610(var1->unknown_4_) == 0xfffffffeU) {
            func_ov031_0221d060(20);
        } else if (func_ov031_0221e610(var1->unknown_4_) == 0xfffffffdU) {
            func_ov031_0221d060(21);
        } else {
            func_ov031_0221d060(24);
        }
        return -1;
    }
    if (var1->unknown_0_ != 1) {
        ++*arg2;
        return arg0;
    }
    int var2 = func_ov031_0221d82c(&var1->unknown_4_, &data_ov031_0224e720);
    if (var2 < 0) {
        if (var2 == -2) {
            func_ov031_0221d060(22);
            return -1;
        }
        ++*arg2;
        return arg0;
    }
    data_ov031_0224e6e0 = func_ov031_0221dc58(func_ov031_0221e638(var0->unknown_c_));
    *arg2 = 0;
    return 1;
}
