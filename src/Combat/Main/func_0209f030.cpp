#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0209f030_3 {
    unsigned char unknown_0_[0x16];
    unsigned short unknown_16_;
    unsigned char unknown_18_[0x28];
};

struct Struct_0209f030 {
    int unknown_0_;
    Struct_0209f030_3 unknown_4_[16];
};

struct Struct_0209f030_2 {
    unsigned char unknown_0_[4];
    unsigned char* unknown_4_;
    unsigned char unknown_8_[0x90];
    Struct_0209f030 unknown_98_;
    Struct_0209f030 unknown_49c_;
};

// USA: func_0209f030
extern "C" ARM void func_0209f030(struct Struct_0209f030_2* arg0, int arg1, int arg2, int arg3)
{
    if (arg1 == 0) {
        int var0;
        arg0->unknown_98_.unknown_0_ = 0;
        var0 = *(arg0->unknown_4_ + 0x8e07);
        for (int var1 = 0; var1 < var0; var1++) {
            Struct_0209f030_3* var2 = (Struct_0209f030_3*)(arg0->unknown_4_ + 0x5c60) + var1;
            unsigned short var3;
            int var4;
            if (var2 == NULL) {
                continue;
            }
            var3 = var2->unknown_16_;
            if (arg3 != 0) {
                if (var3 < arg2) {
                    continue;
                }
            } else {
                if (var3 >= arg2) {
                    continue;
                }
            }
            var4 = arg0->unknown_98_.unknown_0_;
            arg0->unknown_98_.unknown_0_ = arg0->unknown_98_.unknown_0_ + 1;
            memcpy(&arg0->unknown_98_.unknown_4_[var4], var2, 0x40);
        }
        return;
    }

    arg0->unknown_49c_.unknown_0_ = 0;
    memset(arg0->unknown_49c_.unknown_4_, 0, 0x400);
    for (int var5 = 0; var5 < arg0->unknown_98_.unknown_0_; var5++) {
        Struct_0209f030_3* var6 = &arg0->unknown_98_.unknown_4_[var5];
        unsigned short var7 = var6->unknown_16_;
        int var8;
        if (arg3 != 0) {
            if (var7 < arg2) {
                continue;
            }
        } else {
            if (var7 >= arg2) {
                continue;
            }
        }
        var8 = arg0->unknown_49c_.unknown_0_;
        arg0->unknown_49c_.unknown_0_ = arg0->unknown_49c_.unknown_0_ + 1;
        memcpy(&arg0->unknown_49c_.unknown_4_[var8], var6, 0x40);
    }
    arg0->unknown_98_.unknown_0_ = arg0->unknown_49c_.unknown_0_;
    memcpy(arg0->unknown_98_.unknown_4_, arg0->unknown_49c_.unknown_4_, 0x400);
}
