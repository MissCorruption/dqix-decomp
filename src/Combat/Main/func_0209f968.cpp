#include <globaldefs.h>

#include "Combat/ManagerSelection.h"
#include <std_library_functions.h>

struct Struct_0209f968 {
    unsigned char unknown_0_[0x12];
    short unknown_12_;
    unsigned short unknown_14_;
    unsigned short unknown_16_;
    unsigned char unknown_18_[0x28];
};

// USA: func_0209f968
extern "C" ARM void func_0209f968(void *arg0, int arg1, int arg2, int arg3) {
    Struct_0209e5b4_3 *var0 = static_cast<Struct_0209e5b4_3 *>(arg0);
    int var1                = sizeof(Struct_0209e5b4);
    int var2                = *reinterpret_cast<int *>(var0->unknown_4_ + 0x8e20);
    if (arg1 != 0) {
        var0->unknown_98_.unknown_0_ = 0;
        int var3         = var0->unknown_4_[0x8e07];
        for (int var4 = 0; var4 < var2; var4++) {
            for (int var5 = 0; var5 < 4; var5++) {
                var0->unknown_49c_.unknown_0_ = 0;
                memset(var0->unknown_49c_.unknown_4_, 0, sizeof(var0->unknown_49c_.unknown_4_));
                for (int var6 = 0; var6 < var3; var6++) {
                    Struct_0209f968 *var7 =
                        reinterpret_cast<Struct_0209f968 *>(var0->unknown_4_ + 0x5c60 + var6 * var1);
                    if (var7 != NULL && var7->unknown_16_ == var4 && var7->unknown_12_ == var5 && var7->unknown_14_ == arg2) {
                        int var8 = var0->unknown_49c_.unknown_0_++;
                        memcpy(&var0->unknown_49c_.unknown_4_[var8], var7, var1);
                    }
                }
                if (var0->unknown_49c_.unknown_0_ >= arg3 && var0->unknown_49c_.unknown_0_ + var0->unknown_98_.unknown_0_ < 16) {
                    memcpy(&var0->unknown_98_.unknown_4_[var0->unknown_98_.unknown_0_], var0->unknown_49c_.unknown_4_,
                           var0->unknown_49c_.unknown_0_ * var1);
                    var0->unknown_98_.unknown_0_ += var0->unknown_49c_.unknown_0_;
                }
            }
        }
    } else {
        var0->unknown_49c_.unknown_0_ = 0;
        memset(var0->unknown_49c_.unknown_4_, 0, sizeof(var0->unknown_49c_.unknown_4_));
        for (int var9 = 0; var9 < var2; var9++) {
            for (int var10 = 0; var10 < 4; var10++) {
                int var11 = 0;
                Struct_0209e5b4 var12[16] = {};
                for (int var13 = 0; var13 < var0->unknown_98_.unknown_0_; var13++) {
                    Struct_0209f968 *var14 =
                        reinterpret_cast<Struct_0209f968 *>(&var0->unknown_98_.unknown_4_[var13]);
                    if (var14->unknown_16_ == var9 && var14->unknown_12_ == var10 && var14->unknown_14_ == arg2) {
                        memcpy(&var12[var11++], var14, var1);
                    }
                }
                if (var11 >= arg3 && var11 + var0->unknown_49c_.unknown_0_ < 16) {
                    memcpy(&var0->unknown_49c_.unknown_4_[var0->unknown_49c_.unknown_0_], var12, var11 * var1);
                    var0->unknown_49c_.unknown_0_ += var11;
                }
            }
        }
        var0->unknown_98_.unknown_0_ = var0->unknown_49c_.unknown_0_;
        memcpy(var0->unknown_98_.unknown_4_, var0->unknown_49c_.unknown_4_, sizeof(var0->unknown_49c_.unknown_4_));
    }
}
