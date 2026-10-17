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


// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b9778
void SetMaterialTextureForRender(NSBXXTex* tex, const char* textureName, MaterialRenderData* renderData)
{
    NSBXXTexTexture* innerTexture = tex ? (NSBXXTexTexture*)NSBXXNameList_Search(&tex->textureList_, textureName) : NULL;
    unsigned int vramOffset;
    if ((innerTexture->paramTEXIMAGE_PARAMS_ & 0x1c000000) != 0x14000000)
        vramOffset = (unsigned short)tex->block1VRAMLoadOffset_ & ~0xe0000000;
    else
        vramOffset = (unsigned short)tex->block2Or3VRAMLoadOffset_ & ~0xe0000000;

    // extract the transform mode (top 2 bits) and flip/reflect settings (bits 16-19)
    renderData->paramTEXIMAGE_PARAMS_ &= 0xc00f0000;
    renderData->paramTEXIMAGE_PARAMS_ |= innerTexture->paramTEXIMAGE_PARAMS_ + vramOffset;
    
    renderData->materialWidth_ = innerTexture->unk_4 & 0x7ff;
    renderData->materialHeight_ = (innerTexture->unk_4 & 0x3ff800) >> 11;


    int newWidth = innerTexture->unk_4 & 0x7ff;
    int newHeight = (innerTexture->unk_4 & 0x3ff800) >> 11;

    // wtf is the point of this? you just set it to these values...
    fix32_t rescaleX = (newWidth == renderData->materialWidth_) ? 0x1000 : fix32_Divide(newWidth << 12, renderData->materialWidth_ << 12);
    renderData->materialxScale_ = rescaleX;

    fix32_t rescaleY = (newHeight == renderData->materialHeight_) ? 0x1000 : fix32_Divide(newHeight << 12, renderData->materialHeight_ << 12);
    renderData->materialyScale_ = rescaleY;
}

void SetMaterialPaletteForRender(NSBXXTex* tex, const char* paletteName, MaterialRenderData* renderData);


void MPTAnimationProcessingCallback(void* data, AnimationData* anim, int arg);
