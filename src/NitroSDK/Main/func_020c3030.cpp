#include <globaldefs.h>

#include "NitroSDK/Matrix.h"

#define REG_SQRTCNT_020c3030      (*(volatile unsigned short*)0x040002b0)
#define REG_SQRT_RESULT_020c3030  (*(volatile unsigned int*)0x040002b4)
#define REG_SQRTPARAM_LO_020c3030 (*(volatile unsigned int*)0x040002b8)
#define REG_SQRTPARAM_HI_020c3030 (*(volatile unsigned int*)0x040002bc)

// USA: func_020c3030
extern "C" ARM fix32_t Vector3fix_Distance(const Vector3fix* arg0, const Vector3fix* arg1) {
    int var0 = arg0->x - arg1->x;
    long long var1 = (long long)var0 * var0;
    int var2 = arg0->y - arg1->y;
    var1 += (long long)var2 * var2;
    int var3 = arg0->z - arg1->z;
    var1 += (long long)var3 * var3;
    REG_SQRTCNT_020c3030 = 1;
    unsigned long long var4 = (unsigned long long)var1 << 2;
    REG_SQRTPARAM_LO_020c3030 = (unsigned int)var4;
    REG_SQRTPARAM_HI_020c3030 = (unsigned int)(var4 >> 32);
    while (REG_SQRTCNT_020c3030 & 0x8000) {}
    return (int)(REG_SQRT_RESULT_020c3030 + 1) >> 1;
}
