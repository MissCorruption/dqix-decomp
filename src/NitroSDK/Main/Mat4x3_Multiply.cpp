#include <globaldefs.h>
#include <NitroSDK/Matrix.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c1d60
extern "C" ARM void Mat4x3_Multiply(const Matrix4x3* arg0, const Matrix4x3* arg1, Matrix4x3* arg2)
{
    Matrix4x3 var0;
    Matrix4x3* var1;
    register long var2, var3, var4, var5, var6, var7;

    if (arg2 == arg1)
    {
        var1 = &var0;
    }
    else
    {
        var1 = arg2;
    }

    var2 = arg0->rows[0].x;
    var3 = arg0->rows[0].y;
    var4 = arg0->rows[0].z;

    var1->rows[0].x = (long)(((int64_t)var2 * arg1->rows[0].x + (int64_t)var3 * arg1->rows[1].x + (int64_t)var4 * arg1->rows[2].x) >> 12);
    var1->rows[0].y = (long)(((int64_t)var2 * arg1->rows[0].y + (int64_t)var3 * arg1->rows[1].y + (int64_t)var4 * arg1->rows[2].y) >> 12);

    var5 = arg1->rows[0].z;
    var6 = arg1->rows[1].z;
    var7 = arg1->rows[2].z;

    var1->rows[0].z = (long)(((int64_t)var2 * var5 + (int64_t)var3 * var6 + (int64_t)var4 * var7) >> 12);

    var2 = arg0->rows[1].x;
    var3 = arg0->rows[1].y;
    var4 = arg0->rows[1].z;

    var1->rows[1].z = (long)(((int64_t)var2 * var5 + (int64_t)var3 * var6 + (int64_t)var4 * var7) >> 12);
    var1->rows[1].y = (long)(((int64_t)var2 * arg1->rows[0].y + (int64_t)var3 * arg1->rows[1].y + (int64_t)var4 * arg1->rows[2].y) >> 12);

    var5 = arg1->rows[0].x;
    var6 = arg1->rows[1].x;
    var7 = arg1->rows[2].x;

    var1->rows[1].x = (long)(((int64_t)var2 * var5 + (int64_t)var3 * var6 + (int64_t)var4 * var7) >> 12);

    var2 = arg0->rows[2].x;
    var3 = arg0->rows[2].y;
    var4 = arg0->rows[2].z;

    var1->rows[2].x = (long)(((int64_t)var2 * var5 + (int64_t)var3 * var6 + (int64_t)var4 * var7) >> 12);
    var1->rows[2].y = (long)(((int64_t)var2 * arg1->rows[0].y + (int64_t)var3 * arg1->rows[1].y + (int64_t)var4 * arg1->rows[2].y) >> 12);
    var5 = arg1->rows[0].z;
    var6 = arg1->rows[1].z;
    var7 = arg1->rows[2].z;

    var1->rows[2].z = (long)(((int64_t)var2 * var5 + (int64_t)var3 * var6 + (int64_t)var4 * var7) >> 12);

    var2 = arg0->rows[3].x;
    var3 = arg0->rows[3].y;
    var4 = arg0->rows[3].z;

    var1->rows[3].z = (long)((((int64_t)var2 * var5 + (int64_t)var3 * var6 + (int64_t)var4 * var7) >> 12) + arg1->rows[3].z);
    var1->rows[3].y = (long)((((int64_t)var2 * arg1->rows[0].y + (int64_t)var3 * arg1->rows[1].y + (int64_t)var4 * arg1->rows[2].y) >> 12)
                          + arg1->rows[3].y);
    var1->rows[3].x = (long)((((int64_t)var2 * arg1->rows[0].x + (int64_t)var3 * arg1->rows[1].x + (int64_t)var4 * arg1->rows[2].x) >> 12)
                          + arg1->rows[3].x);

    if (var1 == &var0)
    {
        *arg2 = var0;
    }
}
