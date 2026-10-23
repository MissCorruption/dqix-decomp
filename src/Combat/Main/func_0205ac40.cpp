#include <globaldefs.h>
#include "std_library_functions.h"
#include "Graphics/SpriteAffineTransform.h"

struct Struct_0205ac40_4 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    short unknown_6_;
};

extern "C" void* func_0203bd08();
extern "C" Struct_0205ac40_4* func_0203be4c(void*);
extern "C" Struct_0205ac40_4* func_0203be40(void*);
extern "C" void func_020b0a1c(Struct_0205ac40_4*, unsigned short, Struct_0205ac40_2*, Struct_0205ac40_3*, int*, unsigned short, int);

// USA: func_0205ac40
extern "C" ARM void func_0205ac40(Struct_0205ac40* arg0, Struct_0205ac40_2* arg1) {
    int var0;
    unsigned short var1;
    int var2;
    void* var3;
    Struct_0205ac40_4* var4;
    Struct_0205ac40_3* var5;
    bool var6;
    Struct_0205ac40_4* var7;
    Struct_0205ac40_3 var8;
    Struct_0205ac40_3 var9;
    int var10[2];
    if (arg1 != NULL) {
        var3 = func_0203bd08();
        var5 = NULL;
        var4 = func_0203be4c(var3);
        if (arg0->unknown_50_ == 0) var4 = func_0203be40(var3);
        var6 = false;
        if (arg1->unknown_23_) {
            func_0205b0d8(arg0, &var8, &var9, arg1);
            var5 = &var8;
            if (arg1->unknown_24_) var6 = true;
        }
        unsigned short var11 = arg1->unknown_22_ & 0x7f;
        unsigned short var12 = 128 - var11;
        if (var5 != NULL) {
            Struct_0205ac40_4* var13 = var4 + arg1->unknown_20_ * 4;
            var13[0].unknown_6_ = var9.unknown_0_[0] >> 4;
            var13[1].unknown_6_ = var9.unknown_0_[1] >> 4;
            var13[2].unknown_6_ = var9.unknown_0_[2] >> 4;
            var13[3].unknown_6_ = var9.unknown_0_[3] >> 4;
        }
        COPY_ARRAY(var10, arg1->unknown_14_);
        if (var10[1] < -0x40000 || var10[1] >= 0xc0000) return;
        var7 = var4 + var11;
        func_020b0a1c(var7, var12, arg1, var5, arg1->unknown_14_, arg1->unknown_20_, var6);
        var0 = arg1->unknown_25_;
        var2 = arg1->unknown_26_;
        if (var0 < 0 && var2 < 0) return;
        int var14 = func_0205b174(arg0, arg1);
        var1 = arg1->unknown_0_;
        while (var1 != 0) {
            if (var0 >= 0) {
                var7->unknown_0_ = (var7->unknown_0_ & ~0xc00) | (var14 << 10);
                var7->unknown_4_ = (var7->unknown_4_ & ~0xf000) | (var0 << 12);
            }
            if (var2 >= 0)
                var7->unknown_4_ = (var7->unknown_4_ & ~0xc00) | (var2 << 10);
            ++var7;
            --var1;
        }
    }
}
