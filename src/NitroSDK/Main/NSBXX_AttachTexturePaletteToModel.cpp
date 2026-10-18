#include "Graphics/NSBXX/NSBXX.h"
#include <globaldefs.h>

extern "C" void AttachTexturePaletteToModelMaterials(
    NSBXXModelMaterialData* materialData, NSBXXMaterialPairing* pairing,
    NSBXXTex* tex0, NSBXXTexPalette* palette);

struct DictEntryHeader
{
    uint16_t sizeUnit;
    uint16_t ofsName;
};

static inline const char* GetResNameByIdx(const NSBXXNameList* dict, unsigned int idx)
{
    const DictEntryHeader* hdr;
    if (dict != NULL && idx < dict->numEntries_)
    {
        hdr = (const DictEntryHeader*)((const uint8_t*)dict + dict->offsetToDataStart_);
        return (const char*)((const uint8_t*)hdr + hdr->ofsName + 16 * idx);
    }
    else
    {
        return NULL;
    }
}

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

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b33f0
extern "C" ARM bool NSBXX_AttachTexturePaletteToModel(NSBXXInternalModel* model, NSBXXTex* tex0)
{
    NSBXXModelMaterialData* materialData = model->GetMaterialData();
    NSBXXNameList* pairings = (NSBXXNameList*)((intptr_t)materialData + materialData->palettePairingsOffset_);
    unsigned int i;
    bool success = true;

    for (i = 0; i < pairings->numEntries_; ++i)
    {
        const char* name = GetResNameByIdx(pairings, i);
        NSBXXTexPalette* palette = (tex0 && tex0->paletteListOffset_)
            ? (NSBXXTexPalette*)NSBXXNameList_Search((NSBXXNameList*)((intptr_t)tex0 + tex0->paletteListOffset_), name)
            : NULL;

        if (palette != NULL)
        {
            NSBXXMaterialPairing* pairing = (NSBXXMaterialPairing*)GetResDataByIdx(pairings, i);
            if (!(pairing->flags_ & 1))
                AttachTexturePaletteToModelMaterials(materialData, pairing, tex0, palette);
        }
        else
        {
            success = false;
        }
    }
    return success;
}
