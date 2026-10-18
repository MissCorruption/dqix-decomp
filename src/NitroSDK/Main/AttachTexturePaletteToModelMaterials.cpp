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
// USA: func_020b3310
extern "C" ARM void AttachTexturePaletteToModelMaterials(
    NSBXXModelMaterialData* materialData, NSBXXMaterialPairing* pairing,
    NSBXXTex* tex0, NSBXXTexPalette* palette)
{
    uint8_t* base = (uint8_t*)materialData + pairing->offsetToIndexArray_;
    unsigned short plttBase = palette->offsetWithinBlock4_;
    unsigned short vramOffset = (unsigned short)tex0->block4VRAMLoadOffset_ & ~0xe0000000;
    unsigned int j;

    if (!(palette->unk_2 & 1))
    {
        plttBase >>= 1;
        vramOffset >>= 1;
    }

    for (j = 0; j < pairing->arraySize_; ++j)
    {
        NSBXXMaterial* material = GetMatDataByIdx(materialData, *(base + j));
        material->texturePaletteVRAMOffset_ = (unsigned short)(plttBase + vramOffset);
    }

    pairing->flags_ |= 1;
}
