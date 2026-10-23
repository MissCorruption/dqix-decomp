#include <globaldefs.h>
#include "Graphics/Vector.h"
#include "NitroSDK/Matrix.h"

struct Struct_020312bc {
    Vector3fix unknown_0_[3];
    Vector3fix unknown_24_;
};

extern "C" int func_02031b84(const Vector3fix*, const Vector3fix*, const Vector3fix*,
                              const Vector3fix*, const Vector3fix*, const Vector3fix*,
                              fix32_t*, fix32_t*, fix32_t*, fix32_t*);
extern "C" Vector3fix func_02031d20(const Vector3fix*, const Vector3fix*,
                                    const Vector3fix*, const Vector3fix*);

extern "C" ARM int func_020315b8(const Struct_020312bc* arg0, int arg1,
                                  const Vector3fix* arg2, fix32_t arg3,
                                  Vector3fix* arg4, const Vector3fix* arg5)
{
    int var0 = -1;
    fix32_t var1;
    bool var2, var3;
    int64_t var4 = (int64_t)arg3 * arg3 + 0x800;
    fix32_t var5 = (fix32_t)(var4 >> 12);
    *arg4 = *arg2;
    Vector3fix var6 = *arg2;
    Vector3fix var7 = *arg2;
    Vector3fix var8;
    for (int var9 = 0; var9 < 2; ++var9) {
        int var10 = 0;
        var1 = -arg3;
        int var11 = -1;
        for (int var12 = 0; var12 < arg1; ++var12) {
            var2 = false;
            var3 = false;
            const Struct_020312bc* var13 = &arg0[var12];
            Vector3fix var14 = *arg4;
            if (var13->unknown_24_.y > 0x800)
                continue;
            Vector3fix var15, var16, var17, var18, var19, var20, var21;
            var15 = *arg4;
            Vector3fixMultiplyScalar(&var13->unknown_24_, var1, &var21);
            Vector3fix_Add(&var15, &var21, &var16);
            var17 = var13->unknown_0_[0];
            var18 = var13->unknown_0_[1];
            var19 = var13->unknown_0_[2];
            var20 = var13->unknown_24_;
            fix32_t var22, var23, var24, var25;
            int var26 = func_02031b84(&var15, &var16, &var17, &var18, &var19, &var20,
                                        &var22, &var23, &var24, &var25);
            if (var26 == 1 && var9 == 0) {
                Vector3fix var27;
                Vector3fix_Subtract(&var16, &var15, &var27);
                Vector3fixMultiplyScalar(&var27, var25, &var27);
                Vector3fix_Add(&var15, &var27, arg4);
                Vector3fixMultiplyScalar(&var20, arg3, &var27);
                Vector3fix_Add(arg4, &var27, arg4);
                var2 = true;
                var0 = var12;
                var3 = true;
                ++var10;
            } else if (var26 == var11 && var9 >= 1) {
                Vector3fix var28;
                var28 = func_02031d20(arg4, &var17, &var18, &var19);
                Vector3fix var29;
                Vector3fix_Subtract(arg4, &var28, &var29);
                fix32_t var30 = FIX32_MULTIPLY(var29.y, var29.y);
                fix32_t var31 = FIX32_MULTIPLY(var29.x, var29.x);
                fix32_t var32 = FIX32_MULTIPLY(var29.z, var29.z);
                fix32_t var33 = var31 + var30;
                fix32_t var34 = var31 + var30 + var32;
                if (var34 < var5) {
                    fix32_t var35 = fix32_Divide(arg3, fix32_Sqrt(var34));
                    Vector3fixMultiplyScalar(&var29, var35, &var29);
                    Vector3fix_Add(&var28, &var29, arg4);
                    var2 = true;
                    if (var0 == var11)
                        var0 = var12;
                }
            }
            if (!var2)
                continue;
            var20 = var13->unknown_24_;
            if (arg5) {
                Vector3fix var36 = *arg5;
                var36.y = arg2->y;
                if (Vector3fix_Distance(arg4, &var6) > 4) {
                    fix32_t var37 = Vector3fix_InnerProduct(&var20, &var8);
                    if (var37 < 0xfd7 && var37 > 0x800) {
                        Vector3fix var38, var39;
                        Vector3fix_Subtract(&var36, &var6, &var38);
                        Vector3fix_Subtract(&var36, arg4, &var39);
                        fix32_t var40 = Vector3fix_InnerProduct(&var38, &var39);
                        fix32_t var41 = Vector3fix_Distance(&var38, &var39);
                        if (var40 < var41 * 0x4cc) {
                            Vector3fix var42;
                            Vector3fix_Subtract(&var36, &var7, &var42);
                            fix32_t var43 = Vector3fix_InnerProduct(&var38, &var42);
                            fix32_t var44 = Vector3fix_InnerProduct(&var39, &var42);
                            if (var43 < 0 || var44 < 0) {
                                arg4->z = arg5->z;
                                arg4->x = arg5->x;
                                return var0;
                            }
                        }
                    }
                }
            }
            if (var3 || var10 == 0)
                var8 = var20;
            var6 = var14;
        }
    }
    return var0;
}
