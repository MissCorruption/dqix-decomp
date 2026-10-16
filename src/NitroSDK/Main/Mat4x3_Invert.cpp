#include <globaldefs.h>
#include <System/Matrix.h>

extern "C" void func_020ca544(const void* pSrc, void* pDest);

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c19d4
extern "C" ARM int Mat4x3_Invert(const Matrix4x3* in, Matrix4x3* out)
{
    Matrix4x3 tmp;
    Matrix4x3* p;
    long det, det00, det10, det20, tmp01, tmp02, tmp11, tmp12, tmp21, tmp22;

    if (in == out)
    {
        p = &tmp;
    }
    else
    {
        p = out;
    }

    det00 = (long)(((int64_t)in->rows[1].y * in->rows[2].z - (int64_t)in->rows[1].z * in->rows[2].y + (int64_t)0x800) >> 12);
    det10 = (long)(((int64_t)in->rows[1].x * in->rows[2].z - (int64_t)in->rows[1].z * in->rows[2].x + (int64_t)0x800) >> 12);
    det20 = (long)(((int64_t)in->rows[1].x * in->rows[2].y - (int64_t)in->rows[1].y * in->rows[2].x + (int64_t)0x800) >> 12);

    det = (long)(((int64_t)in->rows[0].x * det00 - (int64_t)in->rows[0].y * det10 + (int64_t)in->rows[0].z * det20
                  + (int64_t)0x800) >> 12);
    if (0 == det)
    {
        return -1;
    }

    fix32_QueueComputeReciprocal(det);

    tmp01 = (long)(((int64_t)in->rows[0].y * in->rows[2].z - (int64_t)in->rows[2].y * in->rows[0].z) >> 12);
    tmp02 = (long)(((int64_t)in->rows[0].y * in->rows[1].z - (int64_t)in->rows[1].y * in->rows[0].z) >> 12);
    tmp11 = (long)(((int64_t)in->rows[0].x * in->rows[2].z - (int64_t)in->rows[2].x * in->rows[0].z) >> 12);
    tmp12 = (long)(((int64_t)in->rows[0].x * in->rows[1].z - (int64_t)in->rows[1].x * in->rows[0].z) >> 12);

    det = fix32_GetDivisionResult();
    p->rows[0].x = (long)(((int64_t)det * det00) >> 12);
    p->rows[0].y = -(long)(((int64_t)det * tmp01) >> 12);
    p->rows[0].z = (long)(((int64_t)det * tmp02) >> 12);

    p->rows[1].x = -(long)(((int64_t)det * det10) >> 12);
    p->rows[1].y = (long)(((int64_t)det * tmp11) >> 12);
    p->rows[1].z = -(long)(((int64_t)det * tmp12) >> 12);

    p->rows[2].x = (long)(((int64_t)det * det20) >> 12);

    tmp21 = (long)(((int64_t)in->rows[0].x * in->rows[2].y - (int64_t)in->rows[2].x * in->rows[0].y) >> 12);
    p->rows[2].y = -(long)(((int64_t)det * tmp21) >> 12);

    tmp22 = (long)(((int64_t)in->rows[0].x * in->rows[1].y - (int64_t)in->rows[1].x * in->rows[0].y) >> 12);
    p->rows[2].z = (long)(((int64_t)det * tmp22) >> 12);

    p->rows[3].x = -(long)(((int64_t)p->rows[0].x * in->rows[3].x + (int64_t)p->rows[1].x * in->rows[3].y
                            + (int64_t)p->rows[2].x * in->rows[3].z) >> 12);

    p->rows[3].y = -(long)(((int64_t)p->rows[0].y * in->rows[3].x + (int64_t)p->rows[1].y * in->rows[3].y
                            + (int64_t)p->rows[2].y * in->rows[3].z) >> 12);

    p->rows[3].z = -(long)(((int64_t)p->rows[0].z * in->rows[3].x + (int64_t)p->rows[1].z * in->rows[3].y
                            + (int64_t)p->rows[2].z * in->rows[3].z) >> 12);

    if (p == &tmp)
    {
        func_020ca544(&tmp, out);
    }

    return 0;
}
