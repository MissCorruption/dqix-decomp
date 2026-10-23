#include "World/ZoneWarpScript.h"
#include <globaldefs.h>

// USA: func_0201d044
extern "C" ARM int func_0201d044(Script::Parameter* arg0, int arg1)
{
    Struct_020134e0::Struct_02018300 var0;
    var0.func_0201d424();
    int var1 = (arg0++)->ToInt();
    var0.unknown_4_ = var1;
    bool var2 = false;
    if (var0.unknown_4_ >= 10)
    {
        var0.unknown_4_ -= 10;
        var2 = true;
    }

    Vector3fix var3;
    arg0 = arg0->ToVec3fix(&var3);
    var0.unknown_8_.unknown1_0_ = var3;
    arg0 = arg0->ToVec3fix(&var3);
    var0.unknown_14_.unknown1_0_ = var3;

    if (var2)
    {
        fix32_t var4 = 4096.0f * (arg0++)->ToFloat();
        var0.unknown_22_ = fix32ReduceAngle0To2Pi(var4);
    }
    var0.unknown_20_ = 4096.0f * (arg0++)->ToFloat();

    fix32_t var5 = var0.unknown_14_.unknown1_0_.x / 2;
    fix32_t var6 = var0.unknown_14_.unknown1_0_.z / 2;
    fix32_t var7 = FIX32_MULTIPLY(var5, var5);
    fix32_t var8 = FIX32_MULTIPLY(var6, var6);
    var0.unknown_24_ = var8;
    var0.unknown_24_ = var7 + var8;

    if (var0.unknown_4_ == 2)
    {
        var0.unknown_2c_.unknown1_0_.unknown_0_ = (arg0++)->ToInt();
        var0.unknown_2c_.unknown1_0_.unknown_1_ = (arg0++)->ToInt();
        var0.unknown_2c_.unknown1_0_.unknown_2_4_ = (arg0++)->ToInt();
    }
    else if (var0.unknown_4_ == 3)
    {
        var0.unknown_2c_.unknown2_0_.unknown_0_ = (arg0++)->ToInt();
    }
    else if (var0.unknown_4_ == 4)
    {
        int var9 = (arg0++)->ToInt();
        var0.unknown_2c_.unknown3_0_.unknown_1_ = -1;
        var0.unknown_2c_.unknown3_0_.unknown_0_0_ = var9;
        var0.unknown_2c_.unknown3_0_.unknown_0_7_ = 0;
        switch (var0.unknown_2c_.unknown3_0_.unknown_0_0_)
        {
        case 0:
            var0.unknown_2c_.unknown3_0_.unknown_4_.unknown_0_.unknown1_0_.y = 4096.0f * (arg0++)->ToFloat();
            var0.unknown_2c_.unknown3_0_.unknown_4_.unknown_0_.unknown1_0_.z = 4096.0f * (arg0++)->ToFloat();
            break;
        case 1:
            arg0 = arg0->ToVec3fix(&var3);
            var0.unknown_2c_.unknown3_0_.unknown_4_.unknown_0_.unknown1_0_ = var3;
            break;
        case 2:
        case 3:
            arg0 = arg0->ToVec3fix(&var3);
            var0.unknown_2c_.unknown3_0_.unknown_4_.unknown_0_.unknown1_0_ = var3;
            break;
        case 4:
        case 5:
        {
            Vector3fix var10;
            Vector3fix var11;
            arg0 = arg0->ToVec3fix(&var10);
            arg0 = arg0->ToVec3fix(&var11);
            Struct_0201d044 var12;
            Vector3fix_Subtract(&var11, &var10, &var12.unknown_0_.unknown1_0_);
            fix32_t var13 = Vector3fix_Length(&var12.unknown_0_.unknown1_0_);
            Vector3fix_Normalize(&var12.unknown_0_.unknown1_0_, &var12.unknown_0_.unknown1_0_);
            var12.unknown_c_ = Vector3fix_InnerProduct(&var12.unknown_0_.unknown1_0_, &var10);
            Vector3fix var14  = { 0, 0, 0 };
            if (var0.unknown_2c_.unknown3_0_.unknown_0_0_ == 4)
            {
                var14.x = 4096.0f * (arg0++)->ToFloat();
            }
            var14.y = 4096.0f * (arg0++)->ToFloat();
            var14.z = 4096.0f * (arg0++)->ToFloat();
            Vector3fix var15;
            arg0 = arg0->ToVec3fix(&var15);
            var0.unknown_2c_.unknown3_0_.unknown_4_.func_0201d474(var12);
            var0.unknown_2c_.unknown3_0_.unknown_14_ = var13;
            var0.unknown_2c_.unknown3_0_.unknown_18_ = var14;
            var0.unknown_2c_.unknown3_0_.unknown_24_ = var15;
            break;
        }
        }
        var0.unknown_2c_.unknown3_0_.unknown_30_.x = 0;
        var0.unknown_2c_.unknown3_0_.unknown_30_.y = 0;
        var0.unknown_2c_.unknown3_0_.unknown_30_.z = 0;
        if (arg1 > 12)
        {
            arg0 = arg0->ToVec3fix(&var3);
            var0.unknown_2c_.unknown3_0_.unknown_30_ = var3;
        }
    }
    else if (var0.unknown_4_ == 5)
    {
        var0.unknown_2c_.unknown4_0_.unknown_0_ = (arg0++)->ToInt();
        var0.unknown_2c_.unknown4_0_.unknown_2_ = (arg0++)->ToInt();
        var0.unknown_2c_.unknown4_0_.unknown_4_ = 0;
    }

    Struct_020134e0* var16 = data_020fdc20.unknown_8_;
    var0.unknown_70_ = NULL;
    var16->func_0201e710(var0);
    return 1;
}
