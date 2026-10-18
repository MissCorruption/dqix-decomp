#include "Graphics/NSBXX/NSBXX.h"
#include "Graphics/NSBXX/Animation.h"
#include "Graphics/NSBXX/RenderCommands_Common.h"
#include <globaldefs.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b8210
ARM void CalculateScalingAmountFrameAligned(fix32_t* out, fix32_t time, NSBXXAnimationJAC::Track::ChannelNonConst* channel, NSBXXAnimationJAC* jac)
{
    uint32_t frame = (uint32_t)(time >> 12);
    const void* pArray = (const void*)((uint8_t*)jac + channel->samplesOffset_);
    uint32_t info = channel->metadata_;
    uint32_t last_interp;
    uint32_t idx;
    uint32_t idx_sub;

    if (!(info & 0xc0000000))
    {
        idx = frame;
        goto SCALE_NONINTERP;
    }

    last_interp = (info & 0x1fff0000) >> 16;

    if (info & 0x40000000)
    {
        if (frame & 1)
        {
            if (frame > last_interp)
            {
                idx = (last_interp >> 1) + 1;
                goto SCALE_NONINTERP;
            }
            else
            {
                idx = frame >> 1;
                goto SCALE_INTERP_2;
            }
        }
        else
        {
            idx = frame >> 1;
            goto SCALE_NONINTERP;
        }
    }
    else
    {
        if (frame & 3)
        {
            if (frame > last_interp)
            {
                idx = (last_interp >> 2) + (frame & 3);
                goto SCALE_NONINTERP;
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
                    const NSBXXAnimationJAC::ScaleSample16* p_fx16 = (const NSBXXAnimationJAC::ScaleSample16*)pArray;

                    v = p_fx16[idx].primary_;
                    v_sub = p_fx16[idx_sub].primary_;
                    out[0] = (v + (v << 1) + v_sub) >> 2;

                    v = p_fx16[idx].secondary_;
                    v_sub = p_fx16[idx_sub].secondary_;
                    out[1] = (v + (v << 1) + v_sub) >> 2;
                }
                else
                {
                    const NSBXXAnimationJAC::ScaleSample32* p_fx32 = (const NSBXXAnimationJAC::ScaleSample32*)pArray;

                    v = p_fx32[idx].primary_;
                    v_sub = p_fx32[idx_sub].primary_;

                    out[0] = (fix32_t)(((long long)v + v + v + v_sub) >> 2);

                    v = p_fx32[idx].secondary_;
                    v_sub = p_fx32[idx_sub].secondary_;

                    out[1] = (fix32_t)(((long long)v + v + v + v_sub) >> 2);
                }
                return;
            }
            else
            {
                idx = frame >> 2;
                goto SCALE_INTERP_2;
            }
        }
        else
        {
            idx = frame >> 2;
            goto SCALE_NONINTERP;
        }
    }

SCALE_NONINTERP:
    if (info & 0x20000000)
    {
        const NSBXXAnimationJAC::ScaleSample16* p_fx16 = (const NSBXXAnimationJAC::ScaleSample16*)pArray;

        out[0] = p_fx16[idx].primary_;
        out[1] = p_fx16[idx].secondary_;
    }
    else
    {
        const NSBXXAnimationJAC::ScaleSample32* p_fx32 = (const NSBXXAnimationJAC::ScaleSample32*)pArray;

        out[0] = p_fx32[idx].primary_;
        out[1] = p_fx32[idx].secondary_;
    }
    return;

SCALE_INTERP_2:
    if (info & 0x20000000)
    {
        const NSBXXAnimationJAC::ScaleSample16* p_fx16 = (const NSBXXAnimationJAC::ScaleSample16*)pArray + idx;

        out[0] = (p_fx16[0].primary_ + p_fx16[1].primary_) >> 1;
        out[1] = (p_fx16[0].secondary_ + p_fx16[1].secondary_) >> 1;
    }
    else
    {
        const NSBXXAnimationJAC::ScaleSample32* p_fx32 = (const NSBXXAnimationJAC::ScaleSample32*)pArray + idx;

        out[0] = (p_fx32[0].primary_ + p_fx32[1].primary_) >> 1;
        out[1] = (p_fx32[0].secondary_ + p_fx32[1].secondary_) >> 1;
    }
    return;
}
