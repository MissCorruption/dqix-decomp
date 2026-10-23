#include "World/ZoneWarpScript.h"

// USA: func_0201ce80
extern "C" ARM int func_0201ce80(Script::Parameter *arg0, int arg1) {
    Script::Parameter *var0 = arg0;
    Struct_020134e0::Struct_0201cb60_3 var1;
    var1.func_0201ce10();
    fix32_t var2     = (int) (4096.0f * (arg0++)->ToFloat());
    fix32_t var3     = (int) (4096.0f * (arg0++)->ToFloat());
    fix32_t var4     = (int) (4096.0f * (arg0++)->ToFloat());
    fix32_t var5 = (int) (4096.0f * (arg0++)->ToFloat()) / 2;
    fix32_t var6 = (int) (4096.0f * (arg0++)->ToFloat()) / 2;
    fix32_t var7 = (int) (4096.0f * (arg0++)->ToFloat()) / 2;

    var1.unknown_4_[0] = var2 + var5;
    var1.unknown_4_[1] = var3 + var6;
    var1.unknown_4_[2] = var4 + var7;
    var1.unknown_4_[3] = var2 - var5;
    var1.unknown_4_[4] = var3 - var6;
    var1.unknown_4_[5] = var4 - var7;

    var1.unknown_58_[0] = var2;
    var1.unknown_58_[1] = var3;
    var1.unknown_58_[2] = var4;

    var1.unknown_52_ = 4096.0f * (arg0++)->ToFloat();

    fix32_t var8 = FIX32_MULTIPLY(var5, var5);
    fix32_t var9 = FIX32_MULTIPLY(var7, var7);
    var1.unknown_54_               = var9;
    var1.unknown_54_               = var8 + var9;

    if (!func_0201cb60(arg0, arg1 - (arg0 - var0), var1)) return 0;
    data_020fdc20.unknown_8_->func_0201e574(var1);
    return 1;
}
