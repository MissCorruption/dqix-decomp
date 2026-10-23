#include <globaldefs.h>
#include <NitroSDK/Matrix.h>

#define REG_DIV_NUMER (*(uint64_t*)0x04000290)
#define REG_DIV_DENOM (*(uint64_t*)0x04000298)

static inline void inline_020c28a0(uint64_t arg0, unsigned long arg1)
{
    REG_DIV_NUMER = arg0;
    REG_DIV_DENOM = arg1;
}

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c29ec
extern "C" ARM void Mat4x4_WriteProjectionUnknown(fix32_t arg0, fix32_t arg1, fix32_t arg2, fix32_t arg3, fix32_t arg4,
                                                  fix32_t arg5, fix32_t arg6, Matrix4x4* arg7)
{
    int64_t var0;
    int64_t var1;
    int64_t var2;

    fix32_QueueComputeReciprocal(arg3 - arg2);

    arg7->entries[1] = 0;
    arg7->entries[2] = 0;
    arg7->entries[3] = 0;
    arg7->entries[4] = 0;
    arg7->entries[6] = 0;
    arg7->entries[7] = 0;
    arg7->entries[8] = 0;
    arg7->entries[9] = 0;
    arg7->entries[11] = 0;
    arg7->entries[15] = arg6;

    var0 = GetHardwareDividerResult();
    inline_020c28a0((uint64_t)0x1000 << 32, arg0 - arg1);
    if (arg6 != 0x1000)
    {
        var0 = (var0 * arg6) / 0x1000;
    }
    arg7->entries[0] = (long)((0x2000 * var0 + 0x80000000LL) >> 32);

    var1 = GetHardwareDividerResult();
    inline_020c28a0((uint64_t)0x1000 << 32, arg4 - arg5);
    if (arg6 != 0x1000)
    {
        var1 = (var1 * arg6) / 0x1000;
    }
    arg7->entries[5] = (long)((0x2000 * var1 + 0x80000000LL) >> 32);

    var2 = GetHardwareDividerResult();
    if (arg6 != 0x1000)
    {
        var2 = (var2 * arg6) / 0x1000;
    }
    arg7->entries[10] = (long)((0x2000 * var2 + 0x80000000LL) >> 32);

    arg7->entries[12] = (long)((-(arg3 + arg2) * var0 + 0x80000000LL) >> 32);
    arg7->entries[13] = (long)((-(arg0 + arg1) * var1 + 0x80000000LL) >> 32);
    arg7->entries[14] = (long)(((arg5 + arg4) * var2 + 0x80000000LL) >> 32);
}
