#include "Combat/Main/ElementLookup.h"
#include "GameState/GameState.h"
#include "Resource/Script.h"
#include "World/ZoneWarpScript.h"
#include <globaldefs.h>

// USA: func_0201cb60
extern "C" ARM bool func_0201cb60(Script::Parameter *arg0, int arg1, Struct_020134e0::Struct_0201cb60_3 &arg2) {
    Script::Parameter *var0 = arg0;
    Struct_0201cb60_2 *var1       = static_cast<Struct_0201cb60_2 *>(func_02011584(GameState::GetInstance()));

    arg2.unknown_0_ = (arg0++)->ToInt();
    if (var0[1].type == 0) {
        Struct_0201cb60 *var2 = func_0209998c(var1, (arg0++)->ToString());
        if (var2 == NULL) return false;
        arg2.unknown_1c_ = var2->unknown_0_;
    } else {
        arg2.unknown_1c_ = (arg0++)->ToInt();
    }
    arg2.unknown_64_[0] = (arg0++)->ToInt();
    arg2.unknown_64_[1] = (arg0++)->ToInt();

    Vector3fix var3;
    arg0           = arg0->ToVec3fix(&var3);
    arg2.unknown_20_[0] = var3;
    arg2.unknown_50_    = 4096.0f * (arg0++)->ToFloat();

    if (arg1 - (arg0 - var0) > 0) {
        arg2.unknown_6c_ = (arg0++)->ToInt();
    }
    if (arg1 - (arg0 - var0) > 0) {
        arg0           = arg0->ToVec3fix(&var3);
        arg2.unknown_20_[1] = var3;
        arg0           = arg0->ToVec3fix(&var3);
        arg2.unknown_20_[2] = var3;
        arg0           = arg0->ToVec3fix(&var3);
        arg2.unknown_20_[3] = var3;
    }
    return true;
}

// USA: func_0201ccc8
extern "C" ARM int func_0201ccc8(Script::Parameter *arg0, int arg1) {
    Struct_020134e0::Struct_0201cb60_3 var0;
    var0.func_0201ce10();
    Script::Parameter *var1 = arg0;
    fix32_t var2      = (int) (4096.0f * (var1++)->ToFloat());
    fix32_t var3      = (int) (4096.0f * (var1++)->ToFloat());
    fix32_t var4      = (int) (4096.0f * (var1++)->ToFloat());
    fix32_t var5      = (int) (4096.0f * (var1++)->ToFloat()) / 2;
    fix32_t var6      = (int) (4096.0f * (var1++)->ToFloat()) / 2;
    fix32_t var7      = (int) (4096.0f * (var1++)->ToFloat()) / 2;

    fix32_t var8 = var2 + var5;
    fix32_t var9 = var2 - var5;
    fix32_t var10 = var3 + var6;
    fix32_t var11 = var3 - var6;
    fix32_t var12 = var4 + var7;
    fix32_t var13 = var4 - var7;

    var0.unknown_58_[1] = var3;
    var0.unknown_4_[0]  = var8;
    var0.unknown_58_[0] = var2;
    var0.unknown_58_[2] = var4;
    var0.unknown_4_[1]  = var10;
    var0.unknown_4_[2]  = var12;
    var0.unknown_4_[3]  = var9;
    var0.unknown_4_[4]  = var11;
    var0.unknown_4_[5]  = var13;

    if (!func_0201cb60(var1, arg1 - (var1 - arg0), var0)) return 0;
    data_020fdc20.unknown_8_->func_0201e574(var0);
    return 1;
}
