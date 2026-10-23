#include <globaldefs.h>

#include "World/Zone3D.h"
#include "World/ZoneTerrain.h"
#include "World/Bounds3D.h"
#include "Graphics/Vector.h"

extern "C" float _fflt(int v);
extern "C" float _fdiv(float arg0, float arg1);
extern "C" int _ffix(float v);

// USA: func_02018fbc
extern "C" ARM int func_02018fbc(Zone3D* arg0, Vector3fix* arg1) {
    Vector3fix var0 = *arg1;
    Struct_02018fbc var1;
    Vector3fix var2;
    Vector3fix var3;
    Vector3fix var4;
    Vector3fix var5;

    var1.unknown_0_ = var0;
    var1.unknown_c_ = var0;
    var1.unknown_0_.x += 0x800;
    var1.unknown_0_.y += 0x1000;
    var1.unknown_0_.z += 0x800;
    var1.unknown_c_.x -= 0x800;
    var1.unknown_c_.y -= 0xa000;
    var1.unknown_c_.z -= 0x800;

    int var6;
    if (arg0->isInMainGrottoFloor_23b8_ != 0) {
        var6 = (int)(((float)(var0.x + 0x4000) / 4096.0f) / 8.0f)
             + ((int)(((float)(var0.z + 0x4000) / 4096.0f) / 8.0f) << 4);
    }

    for (int var7 = 0; var7 < arg0->unknown_82c_; var7++) {
        if (arg0->isInMainGrottoFloor_23b8_ == 0 || var6 == var7) {
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
                Vector3fix_Subtract(&var0, &var8.unknown_908_, &var2);
                var3 = var2;
                var3.y += 0x1000;
                var4 = var2;
                var4.y -= 0xa000;
                if (func_020312bc(var9, var10, &var3, &var4, &var5) != -1) {
                    var5.y += 0x199;
                    var0.y = var5.y;
                    var2.y = var5.y;
                }
            }
        }
    }
    return var0.y;
}
