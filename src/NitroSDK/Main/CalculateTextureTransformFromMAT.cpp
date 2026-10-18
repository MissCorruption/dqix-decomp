#include <globaldefs.h>
#include "Graphics/NSBXX/RenderCommands.h"

int SampleScalarFromMATTrack(NSBXXAnimationMAT*, unsigned int, unsigned int, unsigned int);
unsigned int SampleSinCosFromMATTrack(NSBXXAnimationMAT*, unsigned int, unsigned int, unsigned int);

struct MATDictionaryEntries {
    unsigned short entryStride;
    unsigned short dataSectionSize;
    unsigned char entries[1];
};

static inline const NSBXXAnimationMAT::Track* GetMATTrack(const NSBXXNameList* tracks, unsigned int index) {
    if (tracks && index < (unsigned int)tracks->numEntries_) {
        const MATDictionaryEntries* data = (const MATDictionaryEntries*)((const unsigned char*)tracks + tracks->offsetToDataStart_);
        return (const NSBXXAnimationMAT::Track*)(data->entries + data->entryStride * index);
    }
    return NULL;
}

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b9484
ARM void CalculateTextureTransformFromMAT(NSBXXAnimationMAT* animation, unsigned short index, unsigned int frame, MaterialRenderData* result) {
    const NSBXXAnimationMAT::Track* track = GetMATTrack(&animation->tracks_, index);
    unsigned int flag = result->flags_;
    {
        int transS = SampleScalarFromMATTrack(animation, track->unk_18, track->unk_1c, frame);
        int transT = SampleScalarFromMATTrack(animation, track->unk_20, track->unk_24, frame);
        if (transS == 0 && transT == 0) {
            flag |= 4;
        } else {
            flag &= ~4;
            result->translateX_ = transS;
            result->translateY_ = transT;
        }
    }
    {
        unsigned int data = SampleSinCosFromMATTrack(animation, track->unk_10, track->unk_14, frame);
        if (data == 0x10000000) {
            flag |= 2;
        } else {
            result->rotationSine_ = (short)data;
            result->rotationCosine_ = (short)(data >> 16);
            flag &= ~2;
        }
    }
    {
        int scaleS = SampleScalarFromMATTrack(animation, track->unk_0, track->unk_4, frame);
        int scaleT = SampleScalarFromMATTrack(animation, track->unk_8, track->unk_c, frame);
        if (scaleS == 0x1000 && scaleT == 0x1000) {
            flag |= 1;
        } else {
            flag &= ~1;
            result->extensionScaleX_ = scaleS;
            result->extensionScaleY_ = scaleT;
        }
    }
    result->flags_ = flag;
}
