#include <globaldefs.h>
#include "Graphics/Vector.h"

extern "C" ARM int func_02031b84(const Vector3fix* arg0, const Vector3fix* arg1,
                                 const Vector3fix* arg2, const Vector3fix* arg3,
                                 const Vector3fix* arg4, const Vector3fix* arg5,
                                 fix32_t* arg6, fix32_t* arg7, fix32_t* arg8,
                                 fix32_t* arg9)
{
    Vector3fix var0, var1, var2, var3, var4, var5;
    Vector3fix_Subtract(arg3, arg2, &var0);
    Vector3fix_Subtract(arg4, arg2, &var1);
    Vector3fix_Subtract(arg0, arg1, &var2);
    Vector3fix_CrossProduct(&var0, &var1, &var3);
    fix32_t var6 = Vector3fix_InnerProduct(&var2, &var3);
    if (var6 <= 0)
        return 0;
    Vector3fix_Subtract(arg0, arg2, &var4);
    *arg9 = Vector3fix_InnerProduct(&var4, &var3);
    if (*arg9 < 0)
        return 0;
    if (*arg9 > var6)
        return 0;
    Vector3fix_CrossProduct(&var2, &var4, &var5);
    *arg7 = Vector3fix_InnerProduct(&var1, &var5);
    if (*arg7 < 0 || *arg7 > var6)
        return -1;
    *arg8 = -Vector3fix_InnerProduct(&var0, &var5);
    if (*arg8 < 0 || *arg7 + *arg8 > var6)
        return -1;
    fix32_t var7 = fix32_Divide(0x1000, var6);
    *arg9 = FIX32_MULTIPLY(*arg9, var7);
    *arg7 = FIX32_MULTIPLY(*arg7, var7);
    *arg8 = FIX32_MULTIPLY(*arg8, var7);
    *arg6 = 0x1000 - *arg7 - *arg8;
    return 1;
}
