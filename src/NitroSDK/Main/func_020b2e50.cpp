#include "Graphics/NSBXX/NSBXX.h"
#include "System/LoadToVRAM.h"
#include <globaldefs.h>
#include <asmhacks.h>



int NSBXX_Tex_GetBlock1Length(NSBXXTex* tex);


// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b2e50
int NSBXX_Tex_GetBlock2Length(NSBXXTex* tex)
{
    return (tex != NULL) ? tex->block2NumEightBytes_ << 3 : 0;
}

void NSBXX_Tex_WriteImageVRAMOffsets(NSBXXTex* tex, int block1, int block2_3);


void NSBXX_Tex_LoadImageToVRAM(NSBXXTex* tex, bool needsMapping);


int NSBXX_Tex_GetBlock4Length(NSBXXTex* tex);


void NSBXX_Tex_WritePaletteVRAMOffset(NSBXXTex* tex, int offset);


void NSBXX_Tex_LoadPaletteToVRAM(NSBXXTex* tex, bool needsMapping);


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
