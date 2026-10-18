#include "Graphics/NSBXX/NSBXX.h"
#include <globaldefs.h>

struct DictEntryHeader
{
    uint16_t sizeUnit;
    uint16_t ofsName;
};

static inline void* GetResDataByIdx(const NSBXXNameList* dict, unsigned int idx)
{
    const DictEntryHeader* hdr;
    if (dict != NULL && idx < dict->numEntries_)
    {
        hdr = (const DictEntryHeader*)((const uint8_t*)dict + dict->offsetToDataStart_);
        return (void*)((const uint8_t*)hdr + sizeof(DictEntryHeader) + hdr->sizeUnit * idx);
    }
    else
    {
        return NULL;
    }
}

static inline NSBXXMaterial* GetMatDataByIdx(const NSBXXModelMaterialData* mat, unsigned int idx)
{
    uint32_t* data;
    if (mat)
    {
        data = (uint32_t*)GetResDataByIdx(&mat->materialOffsetList_, idx);
        if (data)
        {
            return (NSBXXMaterial*)((intptr_t)mat + *data);
        }
    }
    return NULL;
}

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b2f9c
extern "C" ARM void AttachTextureImageToModelMaterials(
    NSBXXModelMaterialData* materialData, NSBXXMaterialPairing* pairing,
    NSBXXTex* tex0, NSBXXTexTexture* texture)
{
    uint8_t* indexArray = (uint8_t*)materialData + pairing->offsetToIndexArray_;
    unsigned int vramOffset;
    unsigned int i;

    if ((texture->paramTEXIMAGE_PARAMS_ & 0x1c000000) != 0x14000000)
        vramOffset = (unsigned short)tex0->block1VRAMLoadOffset_ & ~0xe0000000;
    else
        vramOffset = (unsigned short)tex0->block2Or3VRAMLoadOffset_ & ~0xe0000000;

    for (i = 0; i < pairing->arraySize_; ++i)
    {
        NSBXXMaterial* material = GetMatDataByIdx(materialData, *(indexArray + i));
        material->paramTEXIMAGE_PARAMS_ |= texture->paramTEXIMAGE_PARAMS_ + vramOffset;

        int width = texture->unk_4 & 0x7ff;
        int height = (texture->unk_4 & 0x3ff800) >> 11;

        if (width == material->width_)
            material->xScale_ = 1 << 12;
        else
            material->xScale_ = fix32_Divide(width << 12, material->width_ << 12);

        if (height == material->height_)
            material->yScale_ = 1 << 12;
        else
            material->yScale_ = fix32_Divide(height << 12, material->height_ << 12);
    }

    pairing->flags_ |= 1;
}
