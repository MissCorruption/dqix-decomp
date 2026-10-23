#include "NitroSDK/OverlayResponse.h"

extern unsigned char data_ov031_0224eda0[];
struct Struct_ov031_0224e720;
extern Struct_ov031_0224e720 data_ov031_0224e720;
extern unsigned char data_ov031_0224e6e0[];
extern "C" unsigned int func_ov031_0221e610(unsigned int arg0);
extern "C" void func_ov031_0221d060(int arg0);
extern "C" void func_ov031_0221e52c(void* arg0, int arg1, unsigned int arg2);
extern "C" int func_ov031_0221db48(int arg0, Struct_ov031_0221d450* arg1, int arg2, void* arg3, void* arg4);

// USA: func_ov031_0221d52c
// KEEP-NAME
extern "C" THUMB int func_ov031_0221d52c(int arg0, Struct_ov031_0221d3b0_2* arg1, int* arg2, Struct_ov031_0221d3b0_3* arg3) {
    if (arg0 != 1) {
        ++*arg2;
        return arg0;
    }
    Struct_ov031_0221d3b0* var0 = &arg1->unknown_c_;
    Struct_ov031_0221d450* var1 = &arg1->unknown_24_;
    if (func_ov031_0221d7e0(&arg3->unknown_0_[1], &var0->unknown_10_) < 0) {
        ++*arg2;
        return arg0;
    }
    if (!func_ov031_0221e638(var1->unknown_2_)) {
        ++*arg2;
        return arg0;
    }
    if (var1->unknown_0_ == 7) {
        if (func_ov031_0221e610(var1->unknown_4_) == (unsigned int)-2)
            func_ov031_0221d060(20);
        else if (func_ov031_0221e610(var1->unknown_4_) == (unsigned int)-3)
            func_ov031_0221d060(21);
        else
            func_ov031_0221d060(24);
        return -1;
    }
    func_ov031_0221e52c(data_ov031_0224eda0, 0, 0x6a0);
    if (func_ov031_0221db48(0, var1, func_ov031_0221e638(var0->unknown_a_),
            data_ov031_0224eda0, &data_ov031_0224e720) < 0) {
        ++*arg2;
        return arg0;
    }
    if (!(*(unsigned int*)(data_ov031_0224e6e0 + 0x30) & *(unsigned int*)(data_ov031_0224e6e0 + 0x2c)))
        return arg0;
    *arg2 = 0;
    return 2;
}
