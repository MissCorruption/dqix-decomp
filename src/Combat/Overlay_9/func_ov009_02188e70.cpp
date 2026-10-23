// USA: func_ov009_02188e70
#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"

extern "C" ARM void func_ov009_02188e70(Struct_ov009_021842a0* arg0, int arg1) {
    Struct_ov009_02188e70* var0 = &arg0->unknown_c2c_;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5 = var0->unknown_18_;
    var1 = var0->unknown_4_;
    var2 = var0->unknown_8_;
    var3 = var0->unknown_c_;
    var4 = var0->unknown_14_;
#if defined(jpn)
    int var6 = arg1 % var5;
    int var7 = arg1 / var5;
    arg0->unknown_c4c_ = var0->unknown_10_ * var6 + var0->unknown_0_;
    arg0->unknown_c4e_ = var4 * var7 + var1;
#else
    arg0->unknown_c4c_ = var0->unknown_10_ * (arg1 % var5) + var0->unknown_0_;
    arg0->unknown_c4e_ = var4 * (arg1 / var5) + var1;
#endif
    arg0->unknown_c50_ = var2;
    arg0->unknown_c52_ = var3;
#if defined(jpn)
    if (arg0->unknown_c58_ == 8) {
        if (var6 >= 5)
            arg0->unknown_c4c_ += 8;
        if (var6 == var5 - 1) {
            arg0->unknown_c4c_ += 16;
            arg0->unknown_c50_ += 8;
            if (var7 == 5)
                arg0->unknown_c50_ += 8;
        }
    }
#endif
    arg0->unknown_c54_ = arg0->unknown_c4c_;
    arg0->unknown_c56_ = arg0->unknown_c4e_;
}
