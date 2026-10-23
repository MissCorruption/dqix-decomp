#include <globaldefs.h>

struct Struct_ov031_0221e54c {
    int unknown_0_;
    int unknown_4_;
};

extern "C" int func_ov031_0220783c(Struct_ov031_0221e54c*, int, unsigned long long);
extern "C" unsigned long long func_0200cf24(long long, long long);

// USA: func_ov031_0221e54c
extern "C" THUMB int func_ov031_0221e54c(void* arg0, const Struct_ov031_0221e54c* arg1, int arg2, int arg3, const Struct_ov031_0221e54c* arg4) {
    Struct_ov031_0221e54c var0 = *arg1;
    unsigned long long var1 = 0;
    var1 += func_0200cf24(arg4->unknown_0_, 0x1ff6210) >> 6;
    var1 += func_0200cf24(arg4->unknown_4_, 0x1ff6210) >> 6;
    return func_ov031_0220783c(&var0, 1, var1);
}
