#include "Graphics/NSBXX/NSBXX.h"
#include "Graphics/NSBXX/Animation.h"
#include "Graphics/NSBXX/RenderCommands_Common.h"

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b80b4
ARM void CalculateTranslationAmountSmooth(fix32_t* out, fix32_t time, NSBXXAnimationJAC::Track::ChannelNonConst* channel, NSBXXAnimationJAC* jac)
{
    const void* pArray = (const void*)((const uint8_t*)jac + channel->samplesOffset_);
    unsigned int info = channel->metadata_;

    unsigned int last_interp;
    unsigned int idx;
    fix32_t remainder;
    int step;
    unsigned int step_shift;
    unsigned int frame;

    frame = (unsigned int)(time >> 12);

    if (frame == jac->numFrames_ - 1)
    {
        if (!(info & 0xc0000000))
        {
            idx = frame;
        }
        else if (info & 0x40000000)
        {
            idx = (frame >> 1) + (frame & 1);
        }
        else
        {
            idx = (frame >> 2) + (frame & 3);
        }

        if (jac->unk_8 & 2)
        {
            fix32_t v0, v1;
            remainder = time & 0xfff;

            if (info & 0x20000000)
            {
                const fix16_t* p_fx16 = (const fix16_t*)pArray;

                v0 = *(p_fx16 + idx);
                v1 = *p_fx16;
            }
            else
            {
                const fix32_t* p_fx32 = (const fix32_t*)pArray;

                v0 = *(p_fx32 + idx);
                v1 = *p_fx32;
            }

            *out = v0 + (((v1 - v0) * remainder) >> 12);
            return;
        }
        else
        {
            if (info & 0x20000000)
            {
                *out = *((const fix16_t*)pArray + idx);
            }
            else
            {
                *out = *((const fix32_t*)pArray + idx);
            }
            return;
        }
    }

    if (!(info & 0xc0000000))
    {
        goto TRANS_EX_0;
    }

    last_interp = (info & 0x1fff0000) >> 16;

    if (info & 0x40000000)
    {
        if (frame >= last_interp)
        {
            idx = (last_interp >> 1);
            goto TRANS_EX_0_1;
        }
        else
        {
            idx = frame >> 1;
            remainder = time & 0x1fff;
            step = 2;
            step_shift = 1;
            goto TRANS_EX;
        }
    }
    else
    {
        if (frame >= last_interp)
        {
            idx = (frame >> 2) + (frame & 3);
            goto TRANS_EX_0_1;
        }
        else
        {
            idx = frame >> 2;
            remainder = time & 0x3fff;
            step = 4;
            step_shift = 2;
            goto TRANS_EX;
        }
    }

TRANS_EX_0:
    idx = frame;

TRANS_EX_0_1:
    remainder = time & 0xfff;
    step = 1;
    step_shift = 0;

TRANS_EX:
    {
        fix32_t v0, v1;
        if (info & 0x20000000)
        {
            const fix16_t* p_fx16 = (const fix16_t*)pArray;

            v0 = *(p_fx16 + idx);
            v1 = *(p_fx16 + idx + 1);
        }
        else
        {
            const fix32_t* p_fx32 = (const fix32_t*)pArray;

            v0 = *(p_fx32 + idx);
            v1 = *(p_fx32 + idx + 1);
        }

        *out = ((v0 * step) + (((v1 - v0) * remainder) >> 12)) >> step_shift;
    }
    return;
}
