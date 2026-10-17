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

unsigned short GetColorFromMaterialAnimation(NSBXXAnimationMAM* mam, unsigned int trackEntry, unsigned int frame);


// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b8fc8
unsigned short GetAlphaFromMaterialAnimation(NSBXXAnimationMAM* mam, unsigned int trackEntry, unsigned int frame)
{
    if (trackEntry & 0x20000000)
        return (unsigned short)trackEntry;

    uint8_t* samples = (uint8_t*)((intptr_t)mam + (trackEntry & 0xffff));
    if ((trackEntry & 0xc0000000) == 0)
        return samples[frame];

    unsigned int frameCount = (trackEntry & 0x1fff0000) >> 16;
    if (trackEntry & 0x40000000)
    {
        if (frame & 1)
        {
            if (frame > frameCount)
                return *(samples + (frameCount >> 1) + 1);
            return (*(samples + (frame >> 1)) + *(samples + (frame >> 1) + 1)) >> 1;
        }
        else
        {
            return samples[frame >> 1];
        }
    }
    else
    {
        if ((frame & 3) != 0)
        {
            if (frame > frameCount)
                return *(samples + (frameCount >> 2) + (frame & 3));

            if (frame & 1)
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

                unsigned int contrib75 = samples[highWeightIdx] * 3;
                unsigned int contrib25 = samples[lowWeightIdx];
                return (contrib75 + contrib25) >> 2;
            }
            else
            {
                return (*(samples + (frame >> 2)) + *(samples + (frame >> 2) + 1)) >> 1;
            }
        }
        else
        {
            return samples[frame >> 2];
        }
    }
}

void InitializeModelAnimationFromMAM(AnimationData* anim, void* pvMAM, NSBXXInternalModel* model);


void MAMAnimationProcessingCallback(void* data, AnimationData* anim, int arg);

