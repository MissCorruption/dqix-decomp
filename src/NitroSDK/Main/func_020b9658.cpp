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


void CalculateTextureTransformFromMAT(NSBXXAnimationMAT* mat, unsigned short arg, unsigned int frame, MaterialRenderData* renderData);


void InitializeModelAnimationFromMAT(AnimationData* anim, void* pvMAT, NSBXXInternalModel* model);


// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b9658
void MATAnimationProcessingCallback(void* data, AnimationData* anim, int arg)
{
    MaterialRenderData* renderData = (MaterialRenderData*)data;
    CalculateTextureTransformFromMAT((NSBXXAnimationMAT*)anim->pRawData_, arg, anim->time_ >> 12, renderData);
    // set texcoord transform source to 1 (texcoord source)
    renderData->paramTEXIMAGE_PARAMS_ = (renderData->paramTEXIMAGE_PARAMS_ & ~0xc0000000) | 0x40000000;
    renderData->flags_ |= 8; // use extension data
}
