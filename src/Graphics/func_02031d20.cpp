#include <globaldefs.h>
#include "Graphics/Vector.h"

static inline fix32_t inline_02031d20(fix32_t arg0, fix32_t arg1)
{
    int64_t var0 = (int64_t)arg0 * (int64_t)arg1;
    return (fix32_t)((var0 + (int64_t)0x800) >> 12);
}

// Keep widened dot products: their spill/reload behavior is present in the original.
extern "C" ARM Vector3fix func_02031d20(const Vector3fix* arg0, const Vector3fix* arg1,
                                        const Vector3fix* arg2, const Vector3fix* arg3)
{
    Vector3fix var0, var1, var2;
    Vector3fix_Subtract(arg2, arg1, &var0);
    Vector3fix_Subtract(arg3, arg1, &var1);
    Vector3fix_Subtract(arg0, arg1, &var2);
    fix32_t var3 = Vector3fix_InnerProduct(&var0, &var2);
    fix32_t var4 = Vector3fix_InnerProduct(&var1, &var2);
    if (var3 <= 0 && var4 <= 0)
        return *arg1;
    Vector3fix var5;
    Vector3fix_Subtract(arg0, arg2, &var5);
    fix32_t var6 = Vector3fix_InnerProduct(&var0, &var5);
    fix32_t var7 = Vector3fix_InnerProduct(&var1, &var5);
    if (var6 >= 0 && var7 <= var6)
        return *arg2;
    fix32_t var8 = inline_02031d20(var3, var7) - inline_02031d20(var6, var4);
    if (var8 <= 0 && var3 >= 0 && var6 <= 0) {
        fix32_t var9 = fix32_Divide((fix32_t)var3, (fix32_t)(var3 - var6));
        Vector3fix var10;
        Vector3fixMultiplyScalar(&var0, var9, &var10);
        Vector3fix_Add(arg1, &var10, &var10);
        return var10;
    }
    Vector3fix var11;
    Vector3fix_Subtract(arg0, arg3, &var11);
    fix32_t var12 = Vector3fix_InnerProduct(&var0, &var11);
    fix32_t var13 = Vector3fix_InnerProduct(&var1, &var11);
    if (var13 >= 0 && var12 <= var13)
        return *arg3;
    fix32_t var14 = inline_02031d20(var12, var4) - inline_02031d20(var3, var13);
    if (var14 <= 0 && var4 >= 0 && var13 <= 0) {
        fix32_t var15 = fix32_Divide((fix32_t)var4, (fix32_t)(var4 - var13));
        Vector3fix var16;
        Vector3fixMultiplyScalar(&var1, var15, &var16);
        Vector3fix_Add(arg1, &var16, &var16);
        return var16;
    }
    fix32_t var17 = inline_02031d20(var6, var13) - inline_02031d20(var12, var7);
    if (var17 <= 0 && var7 - var6 >= 0 && var12 - var13 >= 0) {
        fix32_t var18 = fix32_Divide((fix32_t)(var7 - var6), (fix32_t)((var7 - var6) + (var12 - var13)));
        Vector3fix var19;
        Vector3fix_Subtract(arg3, arg2, &var19);
        Vector3fixMultiplyScalar(&var19, var18, &var19);
        Vector3fix_Add(arg2, &var19, &var19);
        return var19;
    }
    return *arg0;
}
