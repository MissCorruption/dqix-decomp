#include <globaldefs.h>

#include "Combat/ManagerSelection.h"
#include <std_library_functions.h>

// USA: func_0209f774
extern "C" ARM void func_0209f774(void *arg0, int arg1) {
    Struct_0209e5b4_3 *var0 = static_cast<Struct_0209e5b4_3 *>(arg0);
    int var1                = sizeof(Struct_0209e5b4);
    if (arg1 == 0) {
        int var2;
        int var3;
        var0->unknown_98_.unknown_0_ = 0;
        var2             = var0->unknown_4_[0x8e07];
        for (var3 = 0; var3 < var2; var3++) {
            Struct_0209e5b4 *var4 = reinterpret_cast<Struct_0209e5b4 *>(var0->unknown_4_ + 0x5c60 + var3 * var1);
            if (var4 != NULL && var4->unknown_1f_ != 0) {
                int var5 = var0->unknown_98_.unknown_0_++;
                memcpy(&var0->unknown_98_.unknown_4_[var5], var4, var1);
            }
        }
        return;
    }
    var0->unknown_49c_.unknown_0_ = 0;
    memset(var0->unknown_49c_.unknown_4_, 0, sizeof(var0->unknown_49c_.unknown_4_));
    int var6;
    for (var6 = 0; var6 < var0->unknown_98_.unknown_0_; var6++) {
        Struct_0209e5b4 *var7 = &var0->unknown_98_.unknown_4_[var6];
        if (var7->unknown_1f_ != 0) {
            int var8 = var0->unknown_49c_.unknown_0_++;
            memcpy(&var0->unknown_49c_.unknown_4_[var8], var7, var1);
        }
    }
    var0->unknown_98_.unknown_0_ = var0->unknown_49c_.unknown_0_;
    memcpy(var0->unknown_98_.unknown_4_, var0->unknown_49c_.unknown_4_, sizeof(var0->unknown_49c_.unknown_4_));
}
