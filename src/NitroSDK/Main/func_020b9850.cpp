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


// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b9850
void SetMaterialPaletteForRender(NSBXXTex* tex, const char* paletteName, MaterialRenderData* renderData)
{
    NSBXXTexPalette* palette;
    if (tex != NULL && tex->paletteListOffset_ != 0)
    {
        NSBXXNameList* paletteList = (NSBXXNameList*)((intptr_t)tex + tex->paletteListOffset_);
        palette = (NSBXXTexPalette*)NSBXXNameList_Search(paletteList, paletteName);
    }
    else
    {
        palette = NULL;
    }

    
    unsigned short blockStartPos = (unsigned short)tex->block4VRAMLoadOffset_ & ~0xe0000000;
    unsigned short offsetInBlock = palette->offsetWithinBlock4_;
    if (!(palette->unk_2 & 1))
    {
        offsetInBlock >>= 1; 
        blockStartPos >>= 1;
    }

    renderData->texturePaletteBase_ = offsetInBlock + blockStartPos;
}

void MPTAnimationProcessingCallback(void* data, AnimationData* anim, int arg);
