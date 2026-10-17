#include "Graphics/NSBXX/NSBXX.h"
#include "Graphics/NSBXX/RenderCommands_Common.h"
#include "Graphics/NSBXX/Animation.h"



#if defined(jpn)
#define data_020f1c7c data_020f1de8
#endif

extern "C"
{
    // memset
    void func_020ca390(int, void*, unsigned);
}

// processing callback for M.PT animations
extern void (*data_020f1c7c)(void*, AnimationData*, int);

void InitializeModelAnimationFromMPT(AnimationData* anim, void* pvMPT, NSBXXInternalModel* model);


void SetMaterialTextureForRender(NSBXXTex* tex, const char* textureName, MaterialRenderData* renderData);


void SetMaterialPaletteForRender(NSBXXTex* tex, const char* paletteName, MaterialRenderData* renderData);


// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b98b8
void MPTAnimationProcessingCallback(void* data, AnimationData* anim, int arg)
{
    MaterialRenderData* renderData = (MaterialRenderData*)data;

    NSBXXAnimationMPT* mpt = (NSBXXAnimationMPT*)anim->pRawData_;

    NSBXXAnimationMPT::Track::Keyframe* keyframe = NSBXX_PatternAnimation_GetKeyframe(mpt, arg, anim->time_ >> 12);
    const char* textureName = NSBXX_PatternAnimation_GetTextureName(mpt, keyframe->textureIdx_);
    SetMaterialTextureForRender(anim->pTex0_, textureName, renderData);

    if (keyframe->paletteIdx_ != 0xff)
    {
        const char* paletteName = NSBXX_PatternAnimation_GetPaletteName(mpt, keyframe->paletteIdx_);
        SetMaterialPaletteForRender(anim->pTex0_, paletteName, renderData);
    }
}