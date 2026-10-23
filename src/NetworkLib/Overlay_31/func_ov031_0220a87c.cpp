#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_0200fd14_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_[1];
};
struct Struct_ov031_0220a87c { unsigned char unknown_0_[0x8]; unsigned char unknown_8_, unknown_9_; unsigned char unknown_a_[2]; void* unknown_c_; };

extern void* (*data_ov031_0224c994)(unsigned int);
extern void (*data_ov031_0224c9c0)(void*);
extern "C" int func_ov031_0220963c(void* arg0, Struct_0200fd14_2* arg1);
extern "C" unsigned int func_ov031_022037a8(const void* arg0, unsigned int arg1, const void* arg2, unsigned int arg3, Struct_ov031_0220a87c* arg4);

static inline int inline_ov031_0220a87c(const unsigned char* arg0, unsigned int arg1, const unsigned char* arg2, unsigned int arg3, Struct_ov031_0220a87c* arg4, void* arg5) {
    int var0;
    int var1;
    int var2;
    int var3 = 0;
    int var4 = arg1 + arg3;
    do {
        var0 = var4 > 0xb4f ? 0xb4f : var4;
        Struct_0200fd14_2* var5 = (Struct_0200fd14_2*)data_ov031_0224c994(var0 + 0x19);
        if (var5 == NULL) return var3;
        var1 = arg1 >= var0 ? var0 : arg1;
        var2 = var0 - var1;
        VectorizedInvertedMemcpy(arg0, var5->unknown_5_, var1);
        arg0 += var1;
        arg1 -= var1;
        VectorizedInvertedMemcpy(arg2, var5->unknown_5_ + var1, var2);
        arg2 += var2;
        var5->unknown_0_ = 0x17;
        var5->unknown_1_ = 3;
        var5->unknown_2_ = 0;
        var5->unknown_3_ = var0 >> 8;
        var5->unknown_4_ = var0;
        unsigned int var6 = func_ov031_0220963c(arg5, var5);
        if (func_ov031_022037a8(var5, var6, 0, 0, arg4) < var6) var0 = 0;
        data_ov031_0224c9c0(var5);
        var4 -= var0;
        var3 += var0;
    } while (var4 != 0 && var0 != 0);
    return var3;
}

// USA: func_ov031_0220a87c
extern "C" ARM int func_ov031_0220a87c(const unsigned char* arg0, unsigned int arg1, const unsigned char* arg2, unsigned int arg3, Struct_ov031_0220a87c* arg4) {
    return inline_ov031_0220a87c(arg0, arg1, arg2, arg3, arg4, arg4->unknown_c_);
}
