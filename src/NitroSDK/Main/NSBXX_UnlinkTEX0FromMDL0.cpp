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

static inline NSBXXInternalModel* GetMdlByIdx(const NSBXXMdl* mdlSet, unsigned int idx)
{
    if (mdlSet != NULL)
    {
        const uint32_t* data = (const uint32_t*)GetResDataByIdx(&mdlSet->nameList_, idx);
        if (data != NULL)
            return (NSBXXInternalModel*)((intptr_t)mdlSet + *data);
    }
    return NULL;
}

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b362c
extern "C" ARM void NSBXX_UnlinkTEX0FromMDL0(NSBXXMdl* mdl0)
{
    unsigned int i;

    for (i = 0; i < mdl0->nameList_.numEntries_; ++i)
    {
        NSBXXInternalModel* mdl = GetMdlByIdx(mdl0, i);

        NSBXX_DetachTextureImageFromModel(mdl);
        NSBXX_DetachTexturePaletteFromModel(mdl);
    }
}
