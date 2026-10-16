#include <globaldefs.h>
#include "System/Matrix.h"

extern "C" const short data_020ed450[128 + 1];

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c338c
extern "C" ARM fix32_t fix32_Atan2(fix32_t y, fix32_t x)
{
    long a, b, c;
    int sign;

    if (y > 0)
    {
        if (x > 0)
        {
            if (x > y)
            {
                a = y;
                b = x;
                c = 0;
                sign = 1;
            }
            else if (x < y)
            {
                a = x;
                b = y;
                c = 6434;
                sign = 0;
            }
            else
            {
                return (short)3217;
            }
        }
        else if (x < 0)
        {
            x = -x;
            if (x < y)
            {
                a = x;
                b = y;
                c = 6434;
                sign = 1;
            }
            else if (x > y)
            {
                a = y;
                b = x;
                c = 12868;
                sign = 0;
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
    else if (y < 0)
    {
        y = -y;
        if (x < 0)
        {
            x = -x;
            if (x > y)
            {
                a = y;
                b = x;
                c = -12868;
                sign = 1;
            }
            else if (x < y)
            {
                a = x;
                b = y;
                c = -6434;
                sign = 0;
            }
            else
            {
                return (short)-9651;
            }
        }
        else if (x > 0)
        {
            if (x < y)
            {
                a = x;
                b = y;
                c = -6434;
                sign = 1;
            }
            else if (x > y)
            {
                a = y;
                b = x;
                c = 0;
                sign = 0;
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
        if (x >= 0)
        {
            return 0;
        }
        else
        {
            return (short)12868;
        }
    }

    if (b == 0)
    {
        return 0;
    }

    if (sign)
    {
        return (short)(c + data_020ed450[fix32_Divide(a, b) >> 5]);
    }
    else
    {
        return (short)(c - data_020ed450[fix32_Divide(a, b) >> 5]);
    }
}
