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
// USA: func_020c28a0
extern "C" ARM void Mat4x4_MaybeWriteFrustum(fix32_t arg0, fix32_t arg1, fix32_t arg2, fix32_t arg3, fix32_t arg4,
                                             fix32_t arg5, Matrix4x4* arg6)
{
    long var0;
    int64_t var1;

    var0 = fix32_Divide(arg1, arg0);
    inline_020c28a0((uint64_t)0x1000 << 32, arg3 - arg4);
    if (arg5 != 0x1000)
    {
        var0 = (var0 * arg5) / 0x1000;
    }

    arg6->entries[1] = 0;
    arg6->entries[2] = 0;
    arg6->entries[3] = 0;
    arg6->entries[4] = 0;
    arg6->entries[5] = var0;
    arg6->entries[6] = 0;
    arg6->entries[7] = 0;
    arg6->entries[8] = 0;
    arg6->entries[9] = 0;
    arg6->entries[11] = -arg5;
    arg6->entries[12] = 0;
    arg6->entries[13] = 0;
    arg6->entries[15] = 0;

    var1 = GetHardwareDividerResult();
    inline_020c28a0((uint64_t)var0 << 32, arg2);
    if (arg5 != 0x1000)
    {
        var1 = (var1 * arg5) / 0x1000;
    }
    arg6->entries[10] = (long)(((arg4 + arg3) * var1 + 0x80000000LL) >> 32);
    arg6->entries[14] = (long)(((long)(((int64_t)(arg3 << 1) * arg4 + 0x800) >> 12) * var1 + 0x80000000LL) >> 32);
    arg6->entries[0] = fix32_GetDivisionResult();
}
