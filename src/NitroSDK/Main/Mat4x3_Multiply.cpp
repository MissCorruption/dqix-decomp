#include <globaldefs.h>
#include <System/Matrix.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c1d60
extern "C" ARM void Mat4x3_Multiply(const Matrix4x3* inA, const Matrix4x3* inB, Matrix4x3* out)
{
    Matrix4x3 tmp;
    Matrix4x3* p;
    register long x, y, z, xx, yy, zz;

    if (out == inB)
    {
        p = &tmp;
    }
    else
    {
        p = out;
    }

    x = inA->rows[0].x;
    y = inA->rows[0].y;
    z = inA->rows[0].z;

    p->rows[0].x = (long)(((int64_t)x * inB->rows[0].x + (int64_t)y * inB->rows[1].x + (int64_t)z * inB->rows[2].x) >> 12);
    p->rows[0].y = (long)(((int64_t)x * inB->rows[0].y + (int64_t)y * inB->rows[1].y + (int64_t)z * inB->rows[2].y) >> 12);

    xx = inB->rows[0].z;
    yy = inB->rows[1].z;
    zz = inB->rows[2].z;

    p->rows[0].z = (long)(((int64_t)x * xx + (int64_t)y * yy + (int64_t)z * zz) >> 12);

    x = inA->rows[1].x;
    y = inA->rows[1].y;
    z = inA->rows[1].z;

    p->rows[1].z = (long)(((int64_t)x * xx + (int64_t)y * yy + (int64_t)z * zz) >> 12);
    p->rows[1].y = (long)(((int64_t)x * inB->rows[0].y + (int64_t)y * inB->rows[1].y + (int64_t)z * inB->rows[2].y) >> 12);

    xx = inB->rows[0].x;
    yy = inB->rows[1].x;
    zz = inB->rows[2].x;

    p->rows[1].x = (long)(((int64_t)x * xx + (int64_t)y * yy + (int64_t)z * zz) >> 12);

    x = inA->rows[2].x;
    y = inA->rows[2].y;
    z = inA->rows[2].z;

    p->rows[2].x = (long)(((int64_t)x * xx + (int64_t)y * yy + (int64_t)z * zz) >> 12);
    p->rows[2].y = (long)(((int64_t)x * inB->rows[0].y + (int64_t)y * inB->rows[1].y + (int64_t)z * inB->rows[2].y) >> 12);
    xx = inB->rows[0].z;
    yy = inB->rows[1].z;
    zz = inB->rows[2].z;

    p->rows[2].z = (long)(((int64_t)x * xx + (int64_t)y * yy + (int64_t)z * zz) >> 12);

    x = inA->rows[3].x;
    y = inA->rows[3].y;
    z = inA->rows[3].z;

    p->rows[3].z = (long)((((int64_t)x * xx + (int64_t)y * yy + (int64_t)z * zz) >> 12) + inB->rows[3].z);
    p->rows[3].y = (long)((((int64_t)x * inB->rows[0].y + (int64_t)y * inB->rows[1].y + (int64_t)z * inB->rows[2].y) >> 12)
                          + inB->rows[3].y);
    p->rows[3].x = (long)((((int64_t)x * inB->rows[0].x + (int64_t)y * inB->rows[1].x + (int64_t)z * inB->rows[2].x) >> 12)
                          + inB->rows[3].x);

    if (p == &tmp)
    {
        *out = tmp;
    }
}
