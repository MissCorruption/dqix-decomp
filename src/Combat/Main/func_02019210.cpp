#include <globaldefs.h>
#include "World/Zone3D.h"
#include "World/ZoneTerrain.h"
#include "World/Bounds3D.h"
#include "Graphics/Vector.h"

// USA: func_02019210
extern "C" ARM Vector3fix func_02019210(Zone3D* arg0, const Vector3fix* arg1,
                                       const Vector3fix* arg2, int arg3) {
    Vector3fix var0;
    Vector3fix_Add(arg1, arg2, &var0);
    Vector3fix_Length(arg2);

    Struct_02018fbc var1;
    if (var0.x < arg1->x) {
        var1.unknown_0_.x = arg1->x;
        var1.unknown_c_.x = var0.x;
    } else {
        var1.unknown_0_.x = var0.x;
        var1.unknown_c_.x = arg1->x;
    }
    if (var0.y < arg1->y) {
        var1.unknown_0_.y = arg1->y;
        var1.unknown_c_.y = var0.y;
    } else {
        var1.unknown_0_.y = var0.y;
        var1.unknown_c_.y = arg1->y;
    }
    if (var0.z < arg1->z) {
        var1.unknown_0_.z = arg1->z;
        var1.unknown_c_.z = var0.z;
    } else {
        var1.unknown_0_.z = var0.z;
        var1.unknown_c_.z = arg1->z;
    }

    Vector3fix var2 = *arg1;
    Vector3fix var3;
    Vector3fix_Add(arg1, arg2, &var3);
    if (arg3 > 0) {
        Vector3fix var4;
        Vector3fix_Normalize(&var3, &var4);
        Vector3fix var5;
        Vector3fixMultiplyScalar(&var4, arg3, &var5);
        Vector3fix_Add(&var3, &var5, &var3);
    }

    int var6;
    if (arg0->isInMainGrottoFloor_23b8_) {
        var6 = (int)(((float)(arg1->x + 0x4000) / 4096.0f) / 8.0f)
             + ((int)(((float)(arg1->z + 0x4000) / 4096.0f) / 8.0f) << 4);
    }

    for (int var7 = 0; var7 < arg0->unknown_82c_; var7++) {
        if (!arg0->isInMainGrottoFloor_23b8_ || var6 == var7) {
            Struct_02018fbc_3 var8;
            Struct_02018fbc_2 var9[96];
            int var10 = func_02017d90(arg0, var7, &var8, var1, 0);
            if (var10 > 0) {
                Struct_02018fbc_2* var11 = var9;
                int var12;
                for (int var13 = 0; var13 < var10; var13++, var11++) {
                    var12 = var8.unknown_904_ << 12;
                    func_02031188(var11, &var8.unknown_0_[var13][0]);
                    Vector3fixMultiplyScalar(&var11->unknown_0_, var12, &var11->unknown_0_);
                    Vector3fixMultiplyScalar(&var11->unknown_c_, var12, &var11->unknown_c_);
                    Vector3fixMultiplyScalar(&var11->unknown_18_, var12, &var11->unknown_18_);
                }
                Vector3fix var14 = var2;
                Vector3fix var15 = var3;
                Vector3fix_Subtract(&var2, &var8.unknown_908_, &var14);
                Vector3fix_Subtract(&var3, &var8.unknown_908_, &var15);
                Vector3fix var16;
                if (func_020319d8(var9, var10, &var14, &var15, &var16) >= 0) {
                    if (func_020315b8(var9, var10, &var16, arg3, &var16, 0) >= 0) {
                        Vector3fix_Add(&var16, &var8.unknown_908_, &var3);
                        var0 = var3;
                    }
                }
            }
        }
    }
    return var0;
}
