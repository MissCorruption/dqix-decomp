#include "Graphics/NSBXX/NSBXX.h"
#include "Graphics/NSBXX/RenderCommands_Common.h"
#include "Graphics/NSBXX/Animation.h"



#if defined(jpn)
#define data_020f1c78 data_020f1de4
#endif

extern "C"
{
    // memset
    void func_020ca390(int, void*, unsigned);
}

// processing callback for M.AT animations
extern void (*data_020f1c78)(void* data, AnimationData* anim, int arg);

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b9278
fix32_t SampleScalarFromMATTrack(NSBXXAnimationMAT* mat, unsigned int metadata, unsigned int offset, unsigned int frame)
{
    unsigned int lowWeightIdx;
    unsigned int highWeightIdx;
    
    if (metadata & 0x20000000)
        return offset;
    
    fix32_t* samples = (fix32_t*)((intptr_t)mat + offset);
    fix16_t* samples16 = (fix16_t*)samples;

    unsigned int averageIdx;
    if ((metadata & 0xc0000000) == 0)
    {
        goto compute_direct;
    }

{
    unsigned int endFrame = metadata & 0xffff;
    if (metadata & 0x40000000)
    {
        if (frame & 1)
        {
            if (frame > endFrame)
            {
                frame = (endFrame >> 1) + 1;
                goto compute_direct;
            }
            else
            {
                averageIdx = frame >> 1;
                goto compute_average;
            }
        }
        else
        {
            frame >>= 1;
            goto compute_direct;
        }
    }
    else
    {
        unsigned int mod4 = frame & 3;
        if (mod4 != 0)
        {
            if (frame > endFrame)
            {
                frame = mod4 + (endFrame >> 2);
                goto compute_direct;
            }
            else
            {
                if (frame & 1) // split as 3/4 and 1/4
                {
                    if (frame & 2)
                    {
                        highWeightIdx = (frame >> 2) + 1;
                        lowWeightIdx = frame >> 2;
                    }
                    else
                    {
                        highWeightIdx = frame >> 2;
                        lowWeightIdx = (frame >> 2) + 1;
                    }

                    fix32_t contrib75;
                    fix32_t contrib25;

                    if (metadata & 0x10000000)
                    {
                        contrib75 = samples16[highWeightIdx];
                        contrib25 = samples16[lowWeightIdx];
                    }
                    else
                    {
                        contrib75 = samples[highWeightIdx];
                        contrib25 = samples[lowWeightIdx];
                    }
                    contrib75 *= 3;
                    return (contrib75 + contrib25) >> 2;
                }
                else
                {
                    averageIdx = frame >> 2;
                    goto compute_average;
                }
            }
        }
        else
        {
            frame >>= 2;
            goto compute_direct;
        }
    }
}

compute_direct:
    return (metadata & 0x10000000) ? samples16[frame] : samples[frame];
compute_average:
    fix32_t sampleA, sampleB;
    if (metadata & 0x10000000)
    {
        sampleA = *(samples16 + averageIdx);
        sampleB = *(samples16 + averageIdx + 1);
    }
    else
    {
        sampleA = *(samples + averageIdx);
        sampleB = *(samples + averageIdx + 1);
    }
    return (sampleA + sampleB) >> 1;
}

uint32_t SampleSinCosFromMATTrack(NSBXXAnimationMAT* mat, unsigned int metadata, unsigned int offset, unsigned int frame);


void CalculateTextureTransformFromMAT(NSBXXAnimationMAT* mat, unsigned short arg, unsigned int frame, MaterialRenderData* renderData);


void InitializeModelAnimationFromMAT(AnimationData* anim, void* pvMAT, NSBXXInternalModel* model);


void MATAnimationProcessingCallback(void* data, AnimationData* anim, int arg);

