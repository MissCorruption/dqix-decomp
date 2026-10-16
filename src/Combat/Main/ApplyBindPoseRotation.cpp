#include <globaldefs.h>
#include "Graphics/NSBXX/RenderCommands.h"
#include "Graphics/NSBXX/PivotMatrixLookup.h"

struct BoneDictionaryData020b7a20 {
    unsigned short elementStride;
    unsigned short dataSectionSize;
    unsigned char entries[];
};

extern RenderCommandHandler* data_0210a274;
extern "C" void func_020ca7d0(void*);

// USA: func_020b7a20
ARM void ApplyBindPoseRotation(BoneMatrixRenderData* output) {
    long form;
    RenderCommandHandler* handler = data_0210a274;
    NSBXXNameList*& list = handler->boneList_;
    unsigned int index = handler->instructionPointer_[1];
    NSBXXBoneMatrix* bone;
    if (list) {
        unsigned int* offset;
        if (list && index < list->numEntries_) {
            BoneDictionaryData020b7a20* section = (BoneDictionaryData020b7a20*)((char*)list + list->offsetToDataStart_);
            offset = (unsigned int*)(section->entries + section->elementStride * index);
        } else offset = 0;
        if (offset) { bone = (NSBXXBoneMatrix*)((char*)list + *offset); goto boneReady; }
    }
    bone = 0;
boneReady:
    NSBXXBoneMatrix::RotationMatrixData* rotation = (NSBXXBoneMatrix::RotationMatrixData*)(bone + 1);
    if (!(bone->flags_ & 1)) rotation = (NSBXXBoneMatrix::RotationMatrixData*)((NSBXXBoneMatrix::Translation*)rotation + 1);
    if (!(bone->flags_ & 2)) {
        if (bone->flags_ & 8) {
            int entryB;
            NSBXXBoneMatrix::PivotMatrixData* pivot = (NSBXXBoneMatrix::PivotMatrixData*)rotation;
            form = (bone->flags_ & 0xf0) >> 4;
            int entryA = pivot->a;
            entryB = pivot->b;
            func_020ca7d0(&output->rotationMatrix_);
            output->rotationMatrix_.entries[form] = (bone->flags_ & 0x100) ? -0x1000 : 0x1000;
            output->rotationMatrix_.entries[data_020e9284[form].a] = entryA;
            output->rotationMatrix_.entries[data_020e9284[form].b] = entryB;
            if (bone->flags_ & 0x200) entryB = -entryB;
            output->rotationMatrix_.entries[data_020e9284[form].c] = entryB;
            if (bone->flags_ & 0x400) entryA = -entryA;
            output->rotationMatrix_.entries[data_020e9284[form].d] = entryA;
        } else {
            output->rotationMatrix_.entries[0] = bone->m_11;
            output->rotationMatrix_.entries[1] = rotation->entries[0];
            output->rotationMatrix_.entries[2] = rotation->entries[1];
            output->rotationMatrix_.entries[3] = rotation->entries[2];
            output->rotationMatrix_.entries[4] = rotation->entries[3];
            output->rotationMatrix_.entries[5] = rotation->entries[4];
            output->rotationMatrix_.entries[6] = rotation->entries[5];
            output->rotationMatrix_.entries[7] = rotation->entries[6];
            output->rotationMatrix_.entries[8] = rotation->entries[7];
        }
    } else {
        output->flags_ |= 2;
    }
}
