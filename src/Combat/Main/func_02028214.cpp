#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02028214_3 {
    unsigned char* unknown_0_;
    unsigned char* unknown_4_;
};

struct Struct_02028214 {
    unsigned char unknown_0_;
    char unknown_1_;
    unsigned char unknown_2_;
    char unknown_3_[9];
    unsigned char** unknown_c_;
};

struct Struct_02028214_2 {
    char unknown_0_[2];
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    struct Struct_02028214* unknown_4_;
    struct Struct_02028214_3* unknown_8_;
    char unknown_c_[0x10];
    int unknown_1c_;
};

// USA: func_02028214
extern "C" ARM void func_02028214(void* arg0, int arg1) {
    struct Struct_02028214_2* var0 = (struct Struct_02028214_2*)arg0;
    int var1;
    for (var1 = 0; var1 < var0->unknown_2_; var1++) {
        struct Struct_02028214* var2 = &var0->unknown_4_[var1];
        var2->unknown_2_ = 0;
        int var3;
        for (var3 = 0; var3 < var0->unknown_3_; var3++) {
            struct Struct_02028214_3* var4 = &var0->unknown_8_[var3];
            if (*var4->unknown_0_ == var2->unknown_0_ || *var4->unknown_4_ == var2->unknown_0_) {
                var2->unknown_2_++;
            }
        }
    }
    int var5;
    for (var5 = 0; var5 < var0->unknown_2_; var5++) {
        struct Struct_02028214* var6 = &var0->unknown_4_[var5];
        var6->unknown_c_ = (unsigned char**)((SafeAllocator*)((void*)arg1))->Allocate(var6->unknown_2_ << 2);
        int var7 = 0;
        if (var6->unknown_c_ == NULL) {
            var6->unknown_2_ = 0;
            continue;
        }
        int var8;
        for (var8 = 0; var8 < var0->unknown_3_; var8++) {
            struct Struct_02028214_3* var9 = &var0->unknown_8_[var8];
            unsigned char var10 = var6->unknown_0_;
            if (*var9->unknown_0_ == var10) {
                var6->unknown_c_[var7] = var9->unknown_4_;
                var7++;
            } else if (*var9->unknown_4_ == var10) {
                var6->unknown_c_[var7] = var9->unknown_0_;
                var7++;
            }
            if (var7 == var6->unknown_2_) break;
        }
        var6->unknown_2_ = var7;
    }
    var0->unknown_1c_ = 1;
}
