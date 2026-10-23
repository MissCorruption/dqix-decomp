#include <globaldefs.h>
#include <NitroSDK/Matrix.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c223c
extern "C" ARM void Mat4x4_Multiply(const Matrix4x4* arg0, const Matrix4x4* arg1, Matrix4x4* arg2)
{
    Matrix4x4 var0;
    Matrix4x4* var1;
    register long var2, var3, var4, var5;
    register long var6, var7, var8, var9;

    if (arg2 == arg1)
    {
        var1 = &var0;
    }
    else
    {
        var1 = arg2;
    }

    var2 = arg0->entries[0];
    var3 = arg0->entries[1];
    var4 = arg0->entries[2];
    var5 = arg0->entries[3];

    var1->entries[0] = (long)(((int64_t)var2 * arg1->entries[0] + (int64_t)var3 * arg1->entries[4] + (int64_t)var4 * arg1->entries[8]
                            + (int64_t)var5 * arg1->entries[12]) >> 12);
    var1->entries[1] = (long)(((int64_t)var2 * arg1->entries[1] + (int64_t)var3 * arg1->entries[5] + (int64_t)var4 * arg1->entries[9]
                            + (int64_t)var5 * arg1->entries[13]) >> 12);
    var1->entries[3] = (long)(((int64_t)var2 * arg1->entries[3] + (int64_t)var3 * arg1->entries[7] + (int64_t)var4 * arg1->entries[11]
                            + (int64_t)var5 * arg1->entries[15]) >> 12);

    var6 = arg1->entries[2];
    var7 = arg1->entries[6];
    var8 = arg1->entries[10];
    var9 = arg1->entries[14];

    var1->entries[2] = (long)(((int64_t)var2 * var6 + (int64_t)var3 * var7 + (int64_t)var4 * var8 + (int64_t)var5 * var9) >> 12);

    var2 = arg0->entries[4];
    var3 = arg0->entries[5];
    var4 = arg0->entries[6];
    var5 = arg0->entries[7];

    var1->entries[6] = (long)(((int64_t)var2 * var6 + (int64_t)var3 * var7 + (int64_t)var4 * var8 + (int64_t)var5 * var9) >> 12);
    var1->entries[5] = (long)(((int64_t)var2 * arg1->entries[1] + (int64_t)var3 * arg1->entries[5] + (int64_t)var4 * arg1->entries[9]
                            + (int64_t)var5 * arg1->entries[13]) >> 12);
    var1->entries[7] = (long)(((int64_t)var2 * arg1->entries[3] + (int64_t)var3 * arg1->entries[7] + (int64_t)var4 * arg1->entries[11]
                            + (int64_t)var5 * arg1->entries[15]) >> 12);

    var6 = arg1->entries[0];
    var7 = arg1->entries[4];
    var8 = arg1->entries[8];
    var9 = arg1->entries[12];

    var1->entries[4] = (long)(((int64_t)var2 * var6 + (int64_t)var3 * var7 + (int64_t)var4 * var8 + (int64_t)var5 * var9) >> 12);

    var2 = arg0->entries[8];
    var3 = arg0->entries[9];
    var4 = arg0->entries[10];
    var5 = arg0->entries[11];

    var1->entries[8] = (long)(((int64_t)var2 * var6 + (int64_t)var3 * var7 + (int64_t)var4 * var8 + (int64_t)var5 * var9) >> 12);
    var1->entries[9] = (long)(((int64_t)var2 * arg1->entries[1] + (int64_t)var3 * arg1->entries[5] + (int64_t)var4 * arg1->entries[9]
                            + (int64_t)var5 * arg1->entries[13]) >> 12);
    var1->entries[11] = (long)(((int64_t)var2 * arg1->entries[3] + (int64_t)var3 * arg1->entries[7] + (int64_t)var4 * arg1->entries[11]
                             + (int64_t)var5 * arg1->entries[15]) >> 12);

    var6 = arg1->entries[2];
    var7 = arg1->entries[6];
    var8 = arg1->entries[10];
    var9 = arg1->entries[14];

    var1->entries[10] = (long)(((int64_t)var2 * var6 + (int64_t)var3 * var7 + (int64_t)var4 * var8 + (int64_t)var5 * var9) >> 12);

    var2 = arg0->entries[12];
    var3 = arg0->entries[13];
    var4 = arg0->entries[14];
    var5 = arg0->entries[15];

    var1->entries[14] = (long)(((int64_t)var2 * var6 + (int64_t)var3 * var7 + (int64_t)var4 * var8 + (int64_t)var5 * var9) >> 12);
    var1->entries[13] = (long)(((int64_t)var2 * arg1->entries[1] + (int64_t)var3 * arg1->entries[5] + (int64_t)var4 * arg1->entries[9]
                             + (int64_t)var5 * arg1->entries[13]) >> 12);
    var1->entries[12] = (long)(((int64_t)var2 * arg1->entries[0] + (int64_t)var3 * arg1->entries[4] + (int64_t)var4 * arg1->entries[8]
                             + (int64_t)var5 * arg1->entries[12]) >> 12);
    var1->entries[15] = (long)(((int64_t)var2 * arg1->entries[3] + (int64_t)var3 * arg1->entries[7] + (int64_t)var4 * arg1->entries[11]
                             + (int64_t)var5 * arg1->entries[15]) >> 12);

    if (var1 == &var0)
    {
        *arg2 = var0;
    }
}
