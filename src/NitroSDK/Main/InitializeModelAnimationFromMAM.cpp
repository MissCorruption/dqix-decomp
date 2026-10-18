#include "Graphics/NSBXX/NSBXX.h"
#include "Graphics/NSBXX/RenderCommands_Common.h"
#include "Graphics/NSBXX/Animation.h"

#if defined(jpn)
#define data_020f1c80 data_020f1dec
#endif

extern "C"
{
    void func_020ca390(int, void*, unsigned);
}

extern void (*data_020f1c80)(void* data, AnimationData* anim, int arg);

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

static inline int GetMatIdxByName(NSBXXModelMaterialData* mat, const char* name)
{
    if (mat)
        return NSBXXNameList_SearchIndex(&mat->materialOffsetList_, name);
    else
        return -1;
}

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b90b4
ARM void InitializeModelAnimationFromMAM(AnimationData* anim, void* pvMAM, NSBXXInternalModel* model)
{
    unsigned int track;
    NSBXXAnimationMAM* mam = (NSBXXAnimationMAM*)pvMAM;
    NSBXXModelMaterialData* materials = model->GetMaterialData();

    anim->callback_ = data_020f1c80;
    anim->numEntries_ = model->numMaterials_;

    func_020ca390(0, &anim->entries_[0], anim->numEntries_ * 2);

    for (track = 0; track < mam->tracks_.numEntries_; ++track)
    {
        const char* name = GetResNameByIdx(&mam->tracks_, track);
        int idx = GetMatIdxByName(materials, name);
        if (!(idx < 0))
        {
            anim->entries_[idx] = track | 0x100;
        }
    }
}
