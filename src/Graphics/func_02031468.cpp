#include <globaldefs.h>
#include "Graphics/Vector.h"

extern "C" ARM fix32_t func_02031468(const Vector3fix* arg0, const Vector3fix* arg1,
                                     const Vector3fix* arg2, Vector3fix* arg3)
{
    fix32_t var0 = Vector3fix_Distance(arg0, arg1);
    fix32_t var1 = Vector3fix_Distance(arg0, arg2);
    if (var0 == 0) {
        *arg3 = *arg2;
        return var1;
    }
    if (var1 == 0) {
        *arg3 = *arg2;
        return 0;
    }
    Vector3fix var2;
    Vector3fix var3;
    Vector3fix_Subtract(arg1, arg0, &var2);
    Vector3fixMultiplyScalar(&var2, fix32_Divide(0x1000, var0), &var2);
    Vector3fix_Subtract(arg2, arg0, &var3);
    Vector3fixMultiplyScalar(&var3, fix32_Divide(0x1000, var1), &var3);
    fix32_t var4 = Vector3fix_InnerProduct(&var2, &var3);
    if (var4 <= 0) {
        *arg3 = *arg0;
        return var1;
    }
    fix32_t var5 = FIX32_MULTIPLY(var1, var4);
    if (var0 < var5) {
        *arg3 = *arg1;
        return Vector3fix_Distance(arg2, arg1);
    }
    Vector3fixMultiplyScalar(&var2, var5, arg3);
    Vector3fix_Add(arg3, arg0, arg3);
    return Vector3fix_Distance(arg2, arg3);
}
