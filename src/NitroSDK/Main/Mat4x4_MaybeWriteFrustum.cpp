#include <globaldefs.h>
#include <NitroSDK/Matrix.h>

#define REG_DIV_NUMER (*(uint64_t*)0x04000290)
#define REG_DIV_DENOM (*(uint64_t*)0x04000298)

static inline void StartDivision64_32SameMode(uint64_t numerator, unsigned long denominator)
{
    REG_DIV_NUMER = numerator;
    REG_DIV_DENOM = denominator;
}

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c28a0
extern "C" ARM void Mat4x4_MaybeWriteFrustum(fix32_t fovySin, fix32_t fovyCos, fix32_t aspect, fix32_t near, fix32_t far,
                                             fix32_t scaleW, Matrix4x4* out)
{
    long cotangent;
    int64_t inverse;

    cotangent = fix32_Divide(fovyCos, fovySin);
    StartDivision64_32SameMode((uint64_t)0x1000 << 32, near - far);
    if (scaleW != 0x1000)
    {
        cotangent = (cotangent * scaleW) / 0x1000;
    }

    out->entries[1] = 0;
    out->entries[2] = 0;
    out->entries[3] = 0;
    out->entries[4] = 0;
    out->entries[5] = cotangent;
    out->entries[6] = 0;
    out->entries[7] = 0;
    out->entries[8] = 0;
    out->entries[9] = 0;
    out->entries[11] = -scaleW;
    out->entries[12] = 0;
    out->entries[13] = 0;
    out->entries[15] = 0;

    inverse = GetHardwareDividerResult();
    StartDivision64_32SameMode((uint64_t)cotangent << 32, aspect);
    if (scaleW != 0x1000)
    {
        inverse = (inverse * scaleW) / 0x1000;
    }
    out->entries[10] = (long)(((far + near) * inverse + 0x80000000LL) >> 32);
    out->entries[14] = (long)(((long)(((int64_t)(near << 1) * far + 0x800) >> 12) * inverse + 0x80000000LL) >> 32);
    out->entries[0] = fix32_GetDivisionResult();
}
