#include "Graphics/NSBXX/NSBXX.h"
#include "Graphics/NSBXX/Animation.h"
#include "Graphics/NSBXX/RenderCommands_Common.h"

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b7f54
ARM void CalculateTranslationAmountFrameAligned(fix32_t* out, fix32_t time, NSBXXAnimationJAC::Track::ChannelNonConst* channel, NSBXXAnimationJAC* jac)
{
    unsigned int frame = (unsigned int)(time >> 12);
    const void* pArray = (const void*)((const unsigned char*)jac + channel->samplesOffset_);
    unsigned int info = channel->metadata_;
    unsigned int last_interp;
    unsigned int idx;
    unsigned int idx_sub;

    if (!(info & 0xc0000000))
    {
        idx = frame;
        goto TRANS_NONINTERP;
    }

    last_interp = (info & 0x1fff0000) >> 16;

    if (info & 0x40000000)
    {
        if (frame & 1)
        {
            if (frame > last_interp)
            {
                idx = (last_interp >> 1) + 1;
                goto TRANS_NONINTERP;
            }
            else
            {
                idx = frame >> 1;
                goto TRANS_INTERP_2;
            }
        }
        else
        {
            idx = frame >> 1;
            goto TRANS_NONINTERP;
        }
    }
    else
    {
        if (frame & 3)
        {
            if (frame > last_interp)
            {
                idx = (last_interp >> 2) + (frame & 3);
                goto TRANS_NONINTERP;
            }

            if (frame & 1)
            {
                fix32_t v, v_sub;
                if (frame & 2)
                {
                    idx_sub = (frame >> 2);
                    idx = idx_sub + 1;
                }
                else
                {
                    idx = (frame >> 2);
                    idx_sub = idx + 1;
                }

                if (info & 0x20000000)
                {
                    const fix16_t* p_fx16 = (const fix16_t*)pArray;

                    v = *(p_fx16 + idx);
                    v_sub = *(p_fx16 + idx_sub);
                    *out = (v + v + v + v_sub) >> 2;
                }
                else
                {
                    const fix32_t* p_fx32 = (const fix32_t*)pArray;

                    v = *(p_fx32 + idx);
                    v_sub = *(p_fx32 + idx_sub);

                    *out = (fix32_t)(((int64_t)v + v + v + v_sub) >> 2);
                }
                return;
            }
            else
            {
                idx = frame >> 2;
                goto TRANS_INTERP_2;
            }
        }
        else
        {
            idx = frame >> 2;
            goto TRANS_NONINTERP;
        }
    }

TRANS_INTERP_2:
    if (info & 0x20000000)
    {
        const fix16_t* p_fx16 = (const fix16_t*)pArray;

        *out = (*(p_fx16 + idx) + *(p_fx16 + idx + 1)) >> 1;
    }
    else
    {
        const fix32_t* p_fx32 = (const fix32_t*)pArray;

        fix32_t v1 = *(p_fx32 + idx) >> 1;
        fix32_t v2 = *(p_fx32 + idx + 1) >> 1;
        *out = v1 + v2;
    }
    return;

TRANS_NONINTERP:
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
