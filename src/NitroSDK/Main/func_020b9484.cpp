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

fix32_t SampleScalarFromMATTrack(NSBXXAnimationMAT* mat, unsigned int metadata, unsigned int offset, unsigned int frame);


uint32_t SampleSinCosFromMATTrack(NSBXXAnimationMAT* mat, unsigned int metadata, unsigned int offset, unsigned int frame);


// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b9484
void CalculateTextureTransformFromMAT(NSBXXAnimationMAT* mat, unsigned short arg, unsigned int frame, MaterialRenderData* renderData)
{
    NSBXXAnimationMAT::Track* track = mat->tracks_.GetEntryByIndex_notVolatile<NSBXXAnimationMAT::Track>(arg);
    unsigned int renderFlags = renderData->flags_;

    fix32_t tx = SampleScalarFromMATTrack(mat, track->unk_18, track->unk_1c, frame);
    fix32_t ty = SampleScalarFromMATTrack(mat, track->unk_20, track->unk_24, frame);

    if (tx == 0 && ty == 0)
    {
        renderFlags |= 4;
    }
    else
    {
        renderData->translateX_ = tx;
        renderData->translateY_ = ty;
        renderFlags &= ~4;
    }
    

    uint32_t cos_sin = SampleSinCosFromMATTrack(mat, track->unk_10, track->unk_14, frame);
    if (cos_sin == 0x10000000) // cos = 1 and sin = 0, so no rotation 
    {
        renderFlags |= 2;
    }
    else
    {
        renderData->rotationSine_ = (fix16_t)cos_sin;
        renderData->rotationCosine_ = (fix16_t)(cos_sin >> 16);
        renderFlags &= ~2;
    }

    fix32_t sx = SampleScalarFromMATTrack(mat, track->unk_0, track->unk_4, frame);
    fix32_t sy = SampleScalarFromMATTrack(mat, track->unk_8, track->unk_c, frame);

    if (sx == 0x1000 && sy == 0x1000)
    {
        renderFlags |= 1;
    }
    else
    {
        renderData->extensionScaleX_ = sx;
        renderData->extensionScaleY_ = sy;
        renderFlags &= ~1;
    }

    renderData->flags_ = renderFlags;
}

void InitializeModelAnimationFromMAT(AnimationData* anim, void* pvMAT, NSBXXInternalModel* model);


void MATAnimationProcessingCallback(void* data, AnimationData* anim, int arg);

