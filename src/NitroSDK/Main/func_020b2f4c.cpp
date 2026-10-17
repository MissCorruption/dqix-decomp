#include "Graphics/NSBXX/NSBXX.h"
#include "System/LoadToVRAM.h"
#include <globaldefs.h>
#include <asmhacks.h>



int NSBXX_Tex_GetBlock1Length(NSBXXTex* tex);


int NSBXX_Tex_GetBlock2Length(NSBXXTex* tex);


void NSBXX_Tex_WriteImageVRAMOffsets(NSBXXTex* tex, int block1, int block2_3);


void NSBXX_Tex_LoadImageToVRAM(NSBXXTex* tex, bool needsMapping);


int NSBXX_Tex_GetBlock4Length(NSBXXTex* tex);


void NSBXX_Tex_WritePaletteVRAMOffset(NSBXXTex* tex, int offset);


// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b2f4c
void NSBXX_Tex_LoadPaletteToVRAM(NSBXXTex* tex, bool needsMapping)
{
    if (needsMapping)
        MemoryMapTexturePalette();

    LoadToTexturePalette((const void*)((intptr_t)tex + tex->block4Offset_),
        (uint16_t)tex->block4VRAMLoadOffset_ << 3,
        tex->block4NumEightBytes_ << 3);
    tex->maybeBlock4Flags_32_ |= (1 << 0);

    if (needsMapping)
        MemoryUnmapTexturePalette();
}

extern "C" void AttachTextureImageToModelMaterials(
    NSBXXModelMaterialData* materialData, NSBXXMaterialPairing* pairing,
    NSBXXTex* tex0, NSBXXTexTexture* texture);


extern "C" void DetachTextureImageFromModelMaterials(NSBXXModelMaterialData* materialData, NSBXXMaterialPairing* pairing);


extern "C" bool NSBXX_AttachTextureImageToModel(NSBXXInternalModel* model, NSBXXTex* tex0);


extern "C" void NSBXX_DetachTextureImageFromModel(NSBXXInternalModel* model);


// not a match
extern "C" void AttachTexturePaletteToModelMaterials(
    NSBXXModelMaterialData* materialData, NSBXXMaterialPairing* pairing,
    NSBXXTex* tex0, NSBXXTexPalette* palette);


bool NSBXX_AttachTexturePaletteToModel(NSBXXInternalModel* model, NSBXXTex* tex0);


extern "C" void NSBXX_DetachTexturePaletteFromModel(NSBXXInternalModel* model);


extern "C" int NSBXX_LinkTEX0ToMDL0(NSBXXMdl* mdl0, NSBXXTex* tex0);


extern "C" void NSBXX_UnlinkTEX0FromMDL0(NSBXXMdl* mdl0);
