#include <globaldefs.h>
#include "Graphics/Vector.h"

struct Struct_020312bc { Vector3fix unknown_0_[3]; Vector3fix unknown_24_; };
extern "C" {
    int func_02031b84(const Vector3fix*, const Vector3fix*, const Vector3fix*,
                    const Vector3fix*, const Vector3fix*, const Vector3fix*,
                    fix32_t*, fix32_t*, fix32_t*, fix32_t*);
    int func_02032090(const Vector3fix*, const Vector3fix*, const Vector4fix*, fix32_t*, Vector3fix*);
}
extern "C" ARM int func_020319d8(const Struct_020312bc* arg0, int arg1,
                                 const Vector3fix* arg2, const Vector3fix* arg3, Vector3fix* arg4)
{
    int var0 = -1;
    fix32_t var1;
    for (int var2 = 0; var2 < arg1; ++var2) {
        const Struct_020312bc* var3 = &arg0[var2];
        if (var3->unknown_24_.y <= 0x800) {
            fix32_t var4, var5, var6, var7;
            if (func_02031b84(arg2, arg3, &var3->unknown_0_[0], &var3->unknown_0_[1],
                             &var3->unknown_0_[2], &var3->unknown_24_, &var4, &var5, &var6, &var7) == 1) {
                int64_t var8 = (int64_t)var3->unknown_0_[1].y * var5 + 0x800;
                int64_t var9 = (int64_t)var3->unknown_0_[0].y * var4 + 0x800;
                int64_t var10 = (int64_t)var3->unknown_0_[2].y * var6 + 0x800;
                fix32_t var11 = (fix32_t)(var8 >> 12);
                fix32_t var12 = (fix32_t)(var9 >> 12);
                fix32_t var13 = (fix32_t)(var10 >> 12);
                fix32_t var14 = var12 + var11;
                fix32_t var15 = var12 + var11 + var13;
                if (var0 < 0 || var1 < var15) {
                    var1 = var15;
                    var0 = var2;
                }
            }
        }
    }
    if (var0 >= 0) {
        const Struct_020312bc* var16 = &arg0[var0];
        Vector4fix var17;
        Vector3fix var18;
        Vector3fix var19;
        Vector4fix var20;
        fix32_t var21;
        var17.xyz = var16->unknown_24_;
        var17.w = Vector3fix_InnerProduct(&var17.xyz, &var16->unknown_0_[0]);
        Vector3fix_Subtract(&var16->unknown_0_[1], &var16->unknown_0_[0], &var19);
        Vector3fix_Subtract(&var16->unknown_0_[2], &var16->unknown_0_[0], &var18);
        Vector3fix_CrossProduct(&var19, &var18, &var20.xyz);
        var20.w = Vector3fix_InnerProduct(&var20.xyz, &var16->unknown_0_[0]);
        if (func_02032090(arg2, arg3, &var20, &var21, arg4) == 0)
            var0 = -1;
    }
    return var0;
}
