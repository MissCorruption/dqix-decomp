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

static inline NSBXXInternalModel* GetMdlByIdx(const NSBXXMdl* mdl0, unsigned int idx)
{
    if (mdl0 != NULL)
    {
        const uint32_t* offset = (const uint32_t*)GetResDataByIdx(&mdl0->nameList_, idx);
        if (offset != NULL)
            return (NSBXXInternalModel*)((intptr_t)mdl0 + *offset);
    }
    return NULL;
}

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b357c
extern "C" ARM int NSBXX_LinkTEX0ToMDL0(NSBXXMdl* mdl0, NSBXXTex* tex0)
{
    unsigned int i;
    int success = true;

    for (i = 0; i < mdl0->nameList_.numEntries_; ++i)
    {
        NSBXXInternalModel* model = GetMdlByIdx(mdl0, i);
        success &= NSBXX_AttachTextureImageToModel(model, tex0);
        success &= NSBXX_AttachTexturePaletteToModel(model, tex0);
    }
    return success;
}
