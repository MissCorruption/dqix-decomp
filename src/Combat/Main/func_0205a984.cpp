#include <globaldefs.h>
#include <Memory/SafeAllocator.h>

struct AnimFrame0205a984 {
    unsigned short* content;
    unsigned short frames;
    unsigned short pad;
};
struct AnimSequence0205a984 {
    unsigned short frameCount;
    unsigned short loopStart;
    int animType;
    int playMode;
    AnimFrame0205a984* frames;
};
struct Table02b005c {
    unsigned short count;
    unsigned short pad;
    AnimSequence0205a984* entries;
};
struct FrameInfo0205a984 {
    unsigned short frames;
    unsigned short index;
};
struct Track0205a984 {
    int playMode;
    unsigned short field_4;
    unsigned short field_6;
    unsigned short index;
    unsigned short frameCount;
    FrameInfo0205a984* frames;
    unsigned short field_10;
    unsigned short field_12;
    unsigned char field_14;
    unsigned char field_15;
};
struct TrackBank0205a984 {
    Track0205a984* tracks;
    unsigned short count;
};
struct AnimScript0205a984 {
    char pad_0[0x3c];
    TrackBank0205a984* bank;
};

int GetAnimBankBlockAlias020aff00(void*, void**);
AnimSequence0205a984* GetEntry16IfInRange_020b005c(Table02b005c*, unsigned int);

// USA: func_0205a984
extern "C" ARM int func_0205a984(AnimScript0205a984* self, void* data, unsigned int length, SafeAllocator* allocator) {
    void* buffer = data;
    Table02b005c* header;
    if (!buffer) buffer = 0;
    else if (!length) buffer = 0;
    else if (!GetAnimBankBlockAlias020aff00(buffer, (void**)&header)) buffer = 0;
    if (!buffer) return 1;
    Track0205a984* track;
    AnimSequence0205a984* sequence;
    unsigned short i;
    unsigned short count;
    Track0205a984* tracks;
    TrackBank0205a984* bank = self->bank;
    if (bank && allocator) {
        count = header->count;
        tracks = (Track0205a984*)allocator->Allocate(count * sizeof(Track0205a984));
        bank->tracks = tracks;
        bank->count = count;
        for (i = 0; i < count; ++i) {
            sequence = GetEntry16IfInRange_020b005c(header, i);
            if (sequence) {
                track = &tracks[i];
                track->playMode = 0;
                track->field_6 = 0;
                track->field_4 = 0;
                track->index = 0;
                track->frameCount = 0;
                track->frames = 0;
                track->field_10 = 0;
                track->field_12 = 0;
                track->field_14 = 0xff;
                track->field_15 = 1;
                track->playMode = sequence->playMode;
                track->frameCount = sequence->frameCount;
                track->index = i;
                FrameInfo0205a984* frames = (FrameInfo0205a984*)allocator->Allocate(track->frameCount * sizeof(FrameInfo0205a984));
                track->frames = frames;
                for (unsigned short j = 0; j < track->frameCount; ++j) {
                    AnimFrame0205a984* frame = &sequence->frames[j];
                    if (frame) {
                        FrameInfo0205a984* info = &frames[j];
                        info->frames = 0;
                        info->index = 0;
                        info->frames = frame->frames;
                        info->index = *frame->content;
                    }
                }
            }
        }
    }
    return 0;
}
