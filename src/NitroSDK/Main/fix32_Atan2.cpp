#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

extern "C" const short data_020ed450[128 + 1];

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c338c
extern "C" ARM fix32_t fix32_Atan2(fix32_t arg0, fix32_t arg1)
{
    long var0, var1, var2;
    int var3;

    if (arg0 > 0)
    {
        if (arg1 > 0)
        {
            if (arg1 > arg0)
            {
                var0 = arg0;
                var1 = arg1;
                var2 = 0;
                var3 = 1;
            }
            else if (arg1 < arg0)
            {
                var0 = arg1;
                var1 = arg0;
                var2 = 6434;
                var3 = 0;
            }
            else
            {
                return (short)3217;
            }
        }
        else if (arg1 < 0)
        {
            arg1 = -arg1;
            if (arg1 < arg0)
            {
                var0 = arg1;
                var1 = arg0;
                var2 = 6434;
                var3 = 1;
            }
            else if (arg1 > arg0)
            {
                var0 = arg0;
                var1 = arg1;
                var2 = 12868;
                var3 = 0;
            }
            else
            {
                return (short)9651;
            }
        }
        else
        {
            return (short)6434;
        }
    }
    else if (arg0 < 0)
    {
        arg0 = -arg0;
        if (arg1 < 0)
        {
            arg1 = -arg1;
            if (arg1 > arg0)
            {
                var0 = arg0;
                var1 = arg1;
                var2 = -12868;
                var3 = 1;
            }
            else if (arg1 < arg0)
            {
                var0 = arg1;
                var1 = arg0;
                var2 = -6434;
                var3 = 0;
            }
            else
            {
                return (short)-9651;
            }
        }
        else if (arg1 > 0)
        {
            if (arg1 < arg0)
            {
                var0 = arg1;
                var1 = arg0;
                var2 = -6434;
                var3 = 1;
            }
            else if (arg1 > arg0)
            {
                var0 = arg0;
                var1 = arg1;
                var2 = 0;
                var3 = 0;
            }
            else
            {
                return (short)-3217;
            }
        }
        else
        {
            return (short)-6434;
        }
    }
    else
    {
        if (arg1 >= 0)
        {
            return 0;
        }
        else
        {
            return (short)12868;
        }
    }

    if (var1 == 0)
    {
        return 0;
    }

    if (var3)
    {
        return (short)(var2 + data_020ed450[fix32_Divide(var0, var1) >> 5]);
    }
    else
    {
        return (short)(var2 - data_020ed450[fix32_Divide(var0, var1) >> 5]);
    }
}
