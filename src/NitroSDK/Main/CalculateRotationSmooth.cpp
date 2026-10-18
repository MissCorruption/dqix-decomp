#include <globaldefs.h>
#include "Graphics/NSBXX/NSBXX.h"
#include "Graphics/NSBXX/Animation.h"
#include "Graphics/NSBXX/RenderCommands_Common.h"

bool GetMatrixFromIndex(Matrix3x3*, intptr_t, intptr_t, int);

static inline void CalculateThirdRowByCrossProduct(Matrix3x3* mat)
{
    fix32_t m23 = mat->entries[5];
    fix32_t m11 = mat->entries[0];
    fix32_t m21 = mat->entries[3];
    fix32_t m13 = mat->entries[2];
    fix32_t m12 = mat->entries[1];
    fix32_t m22 = mat->entries[4];

    mat->entries[6] = (m12 * m23 - m13 * m22) >> 12;
    mat->entries[7] = (m13 * m21 - m11 * m23) >> 12;
    mat->entries[8] = (m11 * m22 - m12 * m21) >> 12;
}

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b89b0
ARM void CalculateRotationSmooth(Matrix3x3* out, fix32_t time, NSBXXAnimationJAC::Track::ChannelNonConst* channel, NSBXXAnimationJAC* jac)
{
    unsigned int basisOffset, pivotOffset;
    pivotOffset = jac->pivotDataOffset_;
    basisOffset = jac->basisMatricesOffset_;
    unsigned int flags = channel->metadata_;

    unsigned int frameBIdx;
    unsigned int frameAIdx;
    fix32_t reducedTime;
    int preMultiply;
    uint16_t* samples = (uint16_t*)((intptr_t)jac + channel->samplesOffset_);

    frameAIdx = time >> 12;

    if (frameAIdx == jac->numFrames_ - 1)
    {
        if ((flags & 0xc0000000) != 0)
        {
            if (flags & 0x40000000)
            {
                frameAIdx = (frameAIdx & 1) + (frameAIdx / 2);
            }
            else
            {
                frameAIdx = (frameAIdx & 3) + (frameAIdx / 4);
            }
        }
        if (jac->unk_8 & 2)
        {
            frameBIdx = 0;
        }
        else
        {
            bool isBasis = GetMatrixFromIndex(out, (intptr_t)jac + pivotOffset,
                (intptr_t)jac + basisOffset, samples[frameAIdx]);
            if (isBasis)
                CalculateThirdRowByCrossProduct(out);
            else
                Vector3fix_Normalize(&out->rows[2], &out->rows[2]);
            return;
        }
    }
    else if ((flags & 0xc0000000) != 0)
    {
        unsigned int endFrame = (flags & 0x1fff0000) >> 16;
        if (flags & 0x40000000)
        {
            if (frameAIdx >= endFrame)
            {
                frameAIdx = endFrame / 2;
                frameBIdx = frameAIdx + 1;
            }
            else
            {
                frameAIdx = frameAIdx / 2;
                frameBIdx = frameAIdx + 1;
                reducedTime = time & 0x1fff;
                preMultiply = 2;
                goto skip_default_values;
            }
        }
        else
        {
            if (frameAIdx >= endFrame)
            {
                frameAIdx = (frameAIdx & 3) + (frameAIdx / 4);
                frameBIdx = frameAIdx + 1;
            }
            else
            {
                frameAIdx = frameAIdx / 4;
                frameBIdx = frameAIdx + 1;
                reducedTime = time & 0x3fff;
                preMultiply = 4;
                goto skip_default_values;
            }
        }
    }
    else
    {
        frameBIdx = frameAIdx + 1;
    }

    reducedTime = time & 0xfff;
    preMultiply = 1;
skip_default_values:
    int anyBasisMatrices = 0;
    Matrix3x3 matrixA;
    Matrix3x3 matrixB;

    anyBasisMatrices |= GetMatrixFromIndex(&matrixA, (intptr_t)jac + pivotOffset,
        (intptr_t)jac + basisOffset, samples[frameAIdx]);
    anyBasisMatrices |= GetMatrixFromIndex(&matrixB, (intptr_t)jac + pivotOffset,
        (intptr_t)jac + basisOffset, samples[frameBIdx]);

    out->entries[0] = matrixA.entries[0] * preMultiply + ((reducedTime * (matrixB.entries[0] - matrixA.entries[0])) >> 12);
    out->entries[1] = matrixA.entries[1] * preMultiply + ((reducedTime * (matrixB.entries[1] - matrixA.entries[1])) >> 12);
    out->entries[2] = matrixA.entries[2] * preMultiply + ((reducedTime * (matrixB.entries[2] - matrixA.entries[2])) >> 12);
    out->entries[3] = matrixA.entries[3] * preMultiply + ((reducedTime * (matrixB.entries[3] - matrixA.entries[3])) >> 12);
    out->entries[4] = matrixA.entries[4] * preMultiply + ((reducedTime * (matrixB.entries[4] - matrixA.entries[4])) >> 12);
    out->entries[5] = matrixA.entries[5] * preMultiply + ((reducedTime * (matrixB.entries[5] - matrixA.entries[5])) >> 12);
    Vector3fix_Normalize(&out->rows[0], &out->rows[0]);
    Vector3fix_Normalize(&out->rows[1], &out->rows[1]);
    if (!anyBasisMatrices)
    {
        out->entries[6] = matrixA.entries[6] * preMultiply + ((reducedTime * (matrixB.entries[6] - matrixA.entries[6])) >> 12);
        out->entries[7] = matrixA.entries[7] * preMultiply + ((reducedTime * (matrixB.entries[7] - matrixA.entries[7])) >> 12);
        out->entries[8] = matrixA.entries[8] * preMultiply + ((reducedTime * (matrixB.entries[8] - matrixA.entries[8])) >> 12);
        Vector3fix_Normalize(&out->rows[2], &out->rows[2]);
    }
    else
        CalculateThirdRowByCrossProduct(out);
}
