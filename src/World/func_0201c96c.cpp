#include "World/ZoneWarpScript.h"
#include <globaldefs.h>

// USA: func_0201c96c
extern "C" ARM int func_0201c96c(Script::Parameter *arg0, int arg1) {
    float var0 = arg0[0].ToFloat();
    float var1 = arg0[1].ToFloat();
    float var2 = arg0[2].ToFloat();
    float var3 = arg0[3].ToFloat();
    float var4 = arg0[4].ToFloat();
    float var5 = arg0[5].ToFloat();
    float var6;
    int var7 = arg0[6].ToInt();
    int var8 = arg0[7].ToInt();
    var6 = 0;
    if (arg1 >= 9) var6 = arg0[8].ToFloat();

    Struct_020134e0::Struct_0201c96c var9;
    var9.unknown_0_[0] = 4096.0f * (var0 + (var3 / 2.0f));
    var9.unknown_0_[1] = 4096.0f * (var1 + (var4 / 2.0f));
    var9.unknown_0_[2] = 4096.0f * (var2 + (var5 / 2.0f));

    var9.unknown_0_[3] = 4096.0f * (var0 - (var3 / 2.0f));
    var9.unknown_0_[4] = 4096.0f * (var1 - (var4 / 2.0f));
    var9.unknown_0_[5] = 4096.0f * (var2 - (var5 / 2.0f));

    var9.unknown_18_[0] = var7;
    var9.unknown_18_[1] = var8;
    var9.unknown_20_    = 4096.0f * var6;

    data_020fdc20.unknown_8_->func_0201e4b0(var9);
    return 1;
}
