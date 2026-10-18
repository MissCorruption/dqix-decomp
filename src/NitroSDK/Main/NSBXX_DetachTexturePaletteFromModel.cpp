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

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b34f8
extern "C" ARM void NSBXX_DetachTexturePaletteFromModel(NSBXXInternalModel* model)
{
    NSBXXModelMaterialData* materialData = model->GetMaterialData();
    NSBXXNameList* pairings = (NSBXXNameList*)((intptr_t)materialData + materialData->palettePairingsOffset_);
    unsigned int i;

    for (i = 0; i < pairings->numEntries_; ++i)
    {
        NSBXXMaterialPairing* pairing = (NSBXXMaterialPairing*)GetResDataByIdx(pairings, i);
        if (pairing->flags_ & 1)
            pairing->flags_ &= ~1;
    }
}
