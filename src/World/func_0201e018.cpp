#include <globaldefs.h>
#include "World/ZoneWarpScript.h"
#include "Graphics/Vector.h"

#if defined(usa) || defined(jpn)

// USA: func_0201e018
extern "C" ARM int func_0201e018(Script::Parameter* arg0, int arg1)
{
    Struct_020134e0::Struct_0201dfcc var0;
    arg0 = arg0->ToVec3fix(&var0.unknown_0_.unknown1_0_);
    arg0 = arg0->ToVec3fix(&var0.unknown_c_.unknown1_0_);
    var0.unknown_18_ = 4096.0f * (arg0++)->ToFloat();

    fix32_t var1 = -var0.unknown_c_.unknown1_0_.x / 2;
    fix32_t var2 = -var0.unknown_c_.unknown1_0_.z / 2;
    fix32_t var3 = var0.unknown_c_.unknown1_0_.x / 2;
    fix32_t var4 = var0.unknown_c_.unknown1_0_.z / 2;

    Vector3fix var5[4] = { 0 };

    var5[0].x = var1;
    var5[0].z = var2;
    var5[1].x = var1;
    var5[1].z = var4;
    var5[2].x = var3;
    var5[2].z = var2;
    var5[3].x = var3;
    var5[3].z = var4;

    Matrix4x3 var6;
    var6 = RotationMatrixY(var0.unknown_18_);

    for (int var7 = 0; var7 < 4; var7++)
        Mat4x3_ApplyToVector(&var5[var7], &var6, &var5[var7]);

    var0.unknown_1c_ = var5[0].x;
    var0.unknown_20_ = var5[0].z;
    var0.unknown_24_ = var5[0].x;
    var0.unknown_28_ = var5[0].z;

    for (int var8 = 1; var8 < 4; var8++)
    {
        if (var0.unknown_1c_ > var5[var8].x)
            var0.unknown_1c_ = var5[var8].x;
        if (var0.unknown_20_ > var5[var8].z)
            var0.unknown_20_ = var5[var8].z;
        if (var0.unknown_24_ < var5[var8].x)
            var0.unknown_24_ = var5[var8].x;
        if (var0.unknown_28_ < var5[var8].z)
            var0.unknown_28_ = var5[var8].z;
    }

    var0.unknown_1c_ += var0.unknown_0_.unknown1_0_.x;
    var0.unknown_20_ += var0.unknown_0_.unknown1_0_.z;
    var0.unknown_24_ += var0.unknown_0_.unknown1_0_.x;
    var0.unknown_28_ += var0.unknown_0_.unknown1_0_.z;
    data_020fdc20.unknown_8_->func_0201e88c(var0);
    return 1;
}
#endif
