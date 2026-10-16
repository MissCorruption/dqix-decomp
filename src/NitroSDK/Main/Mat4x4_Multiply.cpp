#include <globaldefs.h>
#include <System/Matrix.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c223c
extern "C" ARM void Mat4x4_Multiply(const Matrix4x4* inA, const Matrix4x4* inB, Matrix4x4* out)
{
    Matrix4x4 tmp;
    Matrix4x4* p;
    register long x, y, z, w;
    register long xx, yy, zz, ww;

    if (out == inB)
    {
        p = &tmp;
    }
    else
    {
        p = out;
    }

    x = inA->entries[0];
    y = inA->entries[1];
    z = inA->entries[2];
    w = inA->entries[3];

    p->entries[0] = (long)(((int64_t)x * inB->entries[0] + (int64_t)y * inB->entries[4] + (int64_t)z * inB->entries[8]
                            + (int64_t)w * inB->entries[12]) >> 12);
    p->entries[1] = (long)(((int64_t)x * inB->entries[1] + (int64_t)y * inB->entries[5] + (int64_t)z * inB->entries[9]
                            + (int64_t)w * inB->entries[13]) >> 12);
    p->entries[3] = (long)(((int64_t)x * inB->entries[3] + (int64_t)y * inB->entries[7] + (int64_t)z * inB->entries[11]
                            + (int64_t)w * inB->entries[15]) >> 12);

    xx = inB->entries[2];
    yy = inB->entries[6];
    zz = inB->entries[10];
    ww = inB->entries[14];

    p->entries[2] = (long)(((int64_t)x * xx + (int64_t)y * yy + (int64_t)z * zz + (int64_t)w * ww) >> 12);

    x = inA->entries[4];
    y = inA->entries[5];
    z = inA->entries[6];
    w = inA->entries[7];

    p->entries[6] = (long)(((int64_t)x * xx + (int64_t)y * yy + (int64_t)z * zz + (int64_t)w * ww) >> 12);
    p->entries[5] = (long)(((int64_t)x * inB->entries[1] + (int64_t)y * inB->entries[5] + (int64_t)z * inB->entries[9]
                            + (int64_t)w * inB->entries[13]) >> 12);
    p->entries[7] = (long)(((int64_t)x * inB->entries[3] + (int64_t)y * inB->entries[7] + (int64_t)z * inB->entries[11]
                            + (int64_t)w * inB->entries[15]) >> 12);

    xx = inB->entries[0];
    yy = inB->entries[4];
    zz = inB->entries[8];
    ww = inB->entries[12];

    p->entries[4] = (long)(((int64_t)x * xx + (int64_t)y * yy + (int64_t)z * zz + (int64_t)w * ww) >> 12);

    x = inA->entries[8];
    y = inA->entries[9];
    z = inA->entries[10];
    w = inA->entries[11];

    p->entries[8] = (long)(((int64_t)x * xx + (int64_t)y * yy + (int64_t)z * zz + (int64_t)w * ww) >> 12);
    p->entries[9] = (long)(((int64_t)x * inB->entries[1] + (int64_t)y * inB->entries[5] + (int64_t)z * inB->entries[9]
                            + (int64_t)w * inB->entries[13]) >> 12);
    p->entries[11] = (long)(((int64_t)x * inB->entries[3] + (int64_t)y * inB->entries[7] + (int64_t)z * inB->entries[11]
                             + (int64_t)w * inB->entries[15]) >> 12);

    xx = inB->entries[2];
    yy = inB->entries[6];
    zz = inB->entries[10];
    ww = inB->entries[14];

    p->entries[10] = (long)(((int64_t)x * xx + (int64_t)y * yy + (int64_t)z * zz + (int64_t)w * ww) >> 12);

    x = inA->entries[12];
    y = inA->entries[13];
    z = inA->entries[14];
    w = inA->entries[15];

    p->entries[14] = (long)(((int64_t)x * xx + (int64_t)y * yy + (int64_t)z * zz + (int64_t)w * ww) >> 12);
    p->entries[13] = (long)(((int64_t)x * inB->entries[1] + (int64_t)y * inB->entries[5] + (int64_t)z * inB->entries[9]
                             + (int64_t)w * inB->entries[13]) >> 12);
    p->entries[12] = (long)(((int64_t)x * inB->entries[0] + (int64_t)y * inB->entries[4] + (int64_t)z * inB->entries[8]
                             + (int64_t)w * inB->entries[12]) >> 12);
    p->entries[15] = (long)(((int64_t)x * inB->entries[3] + (int64_t)y * inB->entries[7] + (int64_t)z * inB->entries[11]
                             + (int64_t)w * inB->entries[15]) >> 12);

    if (p == &tmp)
    {
        *out = tmp;
    }
}
