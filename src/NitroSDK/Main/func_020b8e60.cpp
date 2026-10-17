#include "Graphics/NSBXX/NSBXX.h"
#include "Graphics/NSBXX/RenderCommands_Common.h"
#include "Graphics/NSBXX/Animation.h"



#if defined(jpn)
#define data_020f1c80 data_020f1dec
#endif

extern "C"
{
    // memset
    void func_020ca390(int, void*, unsigned);
}

// processing callback for M.AM animations
extern void (*data_020f1c80)(void* data, AnimationData* anim, int arg);

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b8e60
unsigned short GetColorFromMaterialAnimation(NSBXXAnimationMAM* mam, unsigned int trackEntry, unsigned int frame)
{
    if (trackEntry & 0x20000000)
        return (unsigned short)trackEntry;

    uint16_t* samples = (uint16_t*)((intptr_t)mam + (trackEntry & 0xffff));
    if ((trackEntry & 0xc0000000) == 0)
        return samples[frame];

    unsigned int lookupIndex;

    unsigned int frameCount = (trackEntry & 0x1fff0000) >> 16;
    if (trackEntry & 0x40000000)
    {
        if (frame & 1)
        {
            if (frame > frameCount)
            {
                return *(samples + (frameCount >> 1) + 1);
            }
            lookupIndex = frame >> 1;
        }
        else
        {
            return *(samples + (frame >> 1));
        }
    }
    else 
    {
        unsigned int mod4 = frame & 3;
        if (mod4 != 0)
        {
            if (frame > frameCount)
            {
                return *(samples + (frameCount >> 2) + mod4);
            }

            if (frame & 1) // split by 1/4 and 3/4
            {
                unsigned int highWeightIdx;
                unsigned int lowWeightIdx;

                if (frame & 2)
                {
                    lowWeightIdx = frame >> 2;
                    highWeightIdx = (frame >> 2) + 1;
                }
                else
                {
                    lowWeightIdx = (frame >> 2) + 1;
                    highWeightIdx = frame >> 2;
                }
            
                unsigned int highWeight = samples[highWeightIdx];
                unsigned int lowWeight = samples[lowWeightIdx];

                unsigned int rbsum = (highWeight & 0x7c1f) * 3;
                unsigned int gsum = (highWeight & 0x3e0) * 3;

                rbsum += (lowWeight & 0x7c1f);
                gsum += (lowWeight & 0x3e0);

                return ((rbsum >> 2) & 0x7c1f) | ((gsum >> 2) & 0x3e0);
            }
            else
            {
                lookupIndex = frame >> 2;
            }
        }
        else
        {
            return samples[frame >> 2];
        }
    }

    unsigned int a = *(samples + lookupIndex);
    unsigned int b = *(samples + lookupIndex + 1);
    return (((a & 0x7c1f) + (b & 0x7c1f)) >> 1) & 0x7c1f |
        (((a & 0x3e0) + (b & 0x3e0)) >> 1) & 0x3e0;
}

unsigned short GetAlphaFromMaterialAnimation(NSBXXAnimationMAM* mam, unsigned int trackEntry, unsigned int frame);


void InitializeModelAnimationFromMAM(AnimationData* anim, void* pvMAM, NSBXXInternalModel* model);


void MAMAnimationProcessingCallback(void* data, AnimationData* anim, int arg);

