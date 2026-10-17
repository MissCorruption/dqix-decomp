#include "Graphics/NSBXX/NSBXX.h"
#include "System/LoadToVRAM.h"
#include <globaldefs.h>
#include <asmhacks.h>



int NSBXX_Tex_GetBlock1Length(NSBXXTex* tex);


int NSBXX_Tex_GetBlock2Length(NSBXXTex* tex);


void NSBXX_Tex_WriteImageVRAMOffsets(NSBXXTex* tex, int block1, int block2_3);


// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b2e78
void NSBXX_Tex_LoadImageToVRAM(NSBXXTex* tex, bool needsMapping)
{
    if (needsMapping)
        MemoryMapTextureImage();
    unsigned int block1Length = tex->block1NumEightBytes_ << 3;
    if (block1Length != 0)
    {
        LoadToTextureImage((const void*)((intptr_t)tex + tex->block1Offset_),
            (uint16_t)tex->block1VRAMLoadOffset_ << 3, block1Length);
        tex->maybeBlock1Flags_10_ |= (1 << 0);
    }
    int block3SourceOffset;
    unsigned int block2Length = tex->block2NumEightBytes_ << 3;
    if (block2Length != 0)
    {
        block3SourceOffset = tex->block3Offset_;
        unsigned int block2WriteOffset = (tex->block2Or3VRAMLoadOffset_ << 16) >> 13;
        int block2SourceOffset = tex->block2Offset_;
        
        LoadToTextureImage((const void*)((intptr_t)tex + block2SourceOffset),
            block2WriteOffset, block2Length);
        // I think the idea here is as follows: texture image data consists
        // of some of VRAM units A,B,C,D, which are each 0x20000 bytes.
        // If offset & 0x40000 == 0 then block 2 is put into the first
        // available unit and block 3 in the second, while if offset & 0x40000 != 0
        // then block 2 is put into the third unit and block 3 in the fourth.
        // I'm assuming the 0x20000 bit won't be set, as then things will be weird
        // (though I guess you could have block 2 in second unit and block 3
        // in latter half of the third).
        LoadToTextureImage((const void*)((intptr_t)tex + block3SourceOffset),
            (block2WriteOffset & 0x1ffff) / 2 + 0x20000 + ((block2WriteOffset & 0x40000) >> 2),
            block2Length >> 1);
        tex->maybeBlock23Flags_20_ |= (1 << 0);
    }
    if (needsMapping)
        MemoryUnmapTextureImage();
}

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
