#include <globaldefs.h>

#include "Combat/ManagerSelection.h"
#include "std_library_functions.h"

// USA: func_0209f498
extern "C" ARM void func_0209f498(void *arg0, int arg1) {
    Struct_0209e5b4_3 *var0 = static_cast<Struct_0209e5b4_3 *>(arg0);
    int var1                = sizeof(Struct_0209e5b4);
    if (arg1 == 0) {
        int var2;
        var0->unknown_98_.unknown_0_ = 0;
        var2             = var0->unknown_4_[0x8e07];
        for (int var3 = 0; var3 < var2; ++var3) {
            Struct_0209e5b4 *var4 = reinterpret_cast<Struct_0209e5b4 *>(var0->unknown_4_ + 0x5c60) + var3;
            if (var4 != NULL) {
                int var5 = 0;
                if (var4->unknown_12_ >= 7 && var4->unknown_12_ <= 18) {
                    var5 = 1;
                }
                if (var5 != 0) {
                    continue;
                }
                int var6 = 0;
                for (int var7 = 0; var7 < 8; ++var7) {
                    if (var4->unknown_30_[var7] > 0) {
                        var6 = 1;
                        break;
                    }
                }
                if (var6 == 0) {
                    int var8 = var0->unknown_98_.unknown_0_++;
                    memcpy(&var0->unknown_98_.unknown_4_[var8], var4, var1);
                }
            }
        }
        return;
    }
    var0->unknown_49c_.unknown_0_ = 0;
    memset(var0->unknown_49c_.unknown_4_, 0, sizeof(var0->unknown_49c_.unknown_4_));
    for (int var9 = 0; var9 < var0->unknown_98_.unknown_0_; ++var9) {
        Struct_0209e5b4 *var10 = &var0->unknown_98_.unknown_4_[var9];
        int var11            = 0;
        if (var10->unknown_12_ >= 7 && var10->unknown_12_ <= 18) {
            var11 = 1;
        }
        if (var11 == 0) {
            int var12 = 0;
            for (int var13 = 0; var13 < 8; ++var13) {
                if (var10->unknown_30_[var13] > 0) {
                    var12 = 1;
                    break;
                }
            }
            if (var12 == 0) {
                int var14 = var0->unknown_49c_.unknown_0_++;
                memcpy(&var0->unknown_49c_.unknown_4_[var14], var10, var1);
            }
        }
    }
    var0->unknown_98_.unknown_0_ = var0->unknown_49c_.unknown_0_;
    memcpy(var0->unknown_98_.unknown_4_, var0->unknown_49c_.unknown_4_, sizeof(var0->unknown_98_.unknown_4_));
}
