#include <globaldefs.h>
#include "Graphics/NSBXX/NSBXX.h"
#include "Graphics/NSBXX/Animation.h"

extern AnimationData::Callback data_020f1c74;
extern "C" void func_020ca390(int value, void* dst, unsigned int size);

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b7840
ARM void InitializeModelAnimationFromJAC(AnimationData* anim, void* rawData, NSBXXInternalModel* model)
{
    unsigned int index;
    uint16_t* offsets;
    NSBXXAnimationJAC* jac;
    anim->pRawData_ = rawData;
    jac = (NSBXXAnimationJAC*)rawData;
    anim->callback_ = data_020f1c74;
    anim->numEntries_ = model->numBoneMatrices_;
    func_020ca390(0, anim->entries_, sizeof(uint16_t) * anim->numEntries_);
    offsets = jac->trackOffsets_;
    for (index = 0; index < jac->numTracks_; ++index)
    {
        NSBXXAnimationJAC::Track* track = (NSBXXAnimationJAC::Track*)((unsigned char*)jac + offsets[index]);
        anim->entries_[index] = (track->flagsAndTargetBoneMatrix_ >> 24) | 0x100;
    }
}
