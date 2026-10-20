#include <globaldefs.h>
#include "System/Memory.h"

struct VideoFile {
    virtual void v0();
    virtual void v1();
    virtual int Seek(int offset);
    virtual int Read(void* buffer, int size);
    virtual int ReadAsync(void* buffer, int size);
    virtual int Await();

    int Tell() { return position; }

    int field_04;
    int position;
};

struct Stream_0218e800 {
    unsigned char pad_00[4];
    unsigned int width;
    unsigned int height;
    unsigned char pad_0c[0x30];
    void* lumaTable;
    void* chromaTable;
    void* rangeTable;
    unsigned char pad_48[0x454 - 0x48];
};

struct AudioDecoder {
    unsigned char pad_000[0x1cc];
    int mode;
    unsigned char pad_1d0[0x8c0 - 0x1d0];
    unsigned char codebook[0xc34];
    int state;
};

struct VideoHeader {
    char magic[4];
    signed char tag0;
    signed char tag1;
    unsigned short tagIdSizeDword;
    unsigned int frameCount;
    unsigned int width;
    unsigned int height;
    unsigned int fps;
    unsigned short audioCodec;
    unsigned short channelCount;
    unsigned int frequency;
    unsigned int biggestFrame;
    unsigned int audioOffset;
    unsigned int keyframeIndexOffset;
    unsigned int keyframeCount;
};

struct BlitTarget_0218e800 {
    const unsigned char* srcY;
    const unsigned char* srcC;
    unsigned short* dst;
    unsigned int pitch;
    int width;
    int height;
    const unsigned char* field_18;
};

struct VideoDecoder {
    VideoFile* file;
    VideoHeader header;
    Stream_0218e800* stream;
    int (*advance)(Stream_0218e800*);
    BlitTarget_0218e800 target;
    AudioDecoder* audio;
    unsigned char** framesY;
    unsigned char** framesC;
    unsigned int* qpTable;
    unsigned char* scratchY;
    unsigned char* scratchC;
    unsigned char* buffers[2];
    unsigned int frameSize[2];
    int bufferOffset[2];
    unsigned int frameExtra[2];
    int bufferIndex;
    void* keyframes;
    unsigned int writeIdx;
    unsigned int consumed;
    unsigned int available;
#if !defined(jpn)
    int wideFlag;
#endif
    unsigned int frameCount;
    unsigned int idx[6];
    unsigned int frame;
    unsigned char pad_c8[4];
    int fieldcc;
    int fieldd0;
    int base;
};

void* SafeAllocatorAllocate_0218bc8c(unsigned int);
void* GetOrStreamPoolBlockD_0218fcd4(void);
void* GetOrStreamPoolBlockA_0218fd50(void);
void* GetOrStreamPoolBlockB_0218fdc0(void);
void* GetOrStreamPoolBlockC_0218fe30(void);
extern "C" void func_020ca458(unsigned int value, void* dest, unsigned int size);
extern unsigned char data_ov016_02191d78[];

// USA: func_ov016_0218e800
extern "C" ARM int func_ov016_0218e800(VideoDecoder* self, VideoFile* file, unsigned int frameCount) {
    char chunkId[2];
    unsigned short chunkSize;
    unsigned int frameHeader;

    self->file = file;
    self->base = file->Tell();
    if (!self->file->Read(&self->header, 0x30)) return 0;

    if (self->header.magic[0] != 'M' || self->header.magic[1] != 'O' || self->header.magic[2] != 'D' ||
        self->header.magic[3] != 'S' || self->header.tag0 != 'N' ||
        (self->header.tag1 != '2' && self->header.tag1 != '3') || self->header.tagIdSizeDword != 10)
        return 0;

    if (self->header.tag0 == 'N' && self->header.tag1 == '3') {
        do {
            if (!self->file->Read(chunkId, 2)) return 0;
            if (!self->file->Read(&chunkSize, 2)) return 0;
            if (!self->file->Seek(self->file->Tell() + chunkSize * 4)) return 0;
        } while (chunkId[0] != 'H' || chunkId[1] != 'E');
    }

    if (self->header.audioCodec != 0 && self->header.audioCodec != 1 && self->header.audioCodec != 2
#if !defined(jpn)
        && self->header.audioCodec != 3 && self->header.audioCodec != 4
#endif
        )
        return 0;

    self->stream = (Stream_0218e800*)SafeAllocatorAllocate_0218bc8c(sizeof(Stream_0218e800));
    func_020ca458(0, self->stream, sizeof(Stream_0218e800));
    self->advance = (int (*)(Stream_0218e800*))GetOrStreamPoolBlockD_0218fcd4();
    self->stream->lumaTable = GetOrStreamPoolBlockA_0218fd50();
    self->stream->chromaTable = data_ov016_02191d78;
    self->stream->rangeTable = (unsigned char*)GetOrStreamPoolBlockC_0218fe30() + 0x40;
    self->target.width = self->header.width;
    self->target.height = self->header.height;
    self->target.field_18 = (const unsigned char*)GetOrStreamPoolBlockB_0218fdc0();
    self->stream->width = self->header.width;
    self->stream->height = self->header.height;

    if (self->header.width > 0x100) return 0;
    if (frameCount < 6) return 0;

    self->frameCount = frameCount;
    self->framesY = (unsigned char**)SafeAllocatorAllocate_0218bc8c(frameCount * 4);
    if (!self->framesY) return 0;
    self->framesC = (unsigned char**)SafeAllocatorAllocate_0218bc8c(self->frameCount * 4);
    if (!self->framesC) return 0;

    unsigned int i;
    for (i = 0; i < self->frameCount; i++) {
        self->framesY[i] = (unsigned char*)SafeAllocatorAllocate_0218bc8c(self->header.height << 8);
        if (!self->framesY[i]) return 0;
        self->framesC[i] = (unsigned char*)SafeAllocatorAllocate_0218bc8c((self->header.height >> 1) << 8);
        if (!self->framesC[i]) return 0;
        func_020ca458(0, self->framesY[i], self->header.height << 8);
        VectorizedMemset(self->framesC[i], 0x80, (self->header.height >> 1) << 8);
    }

    self->qpTable = (unsigned int*)SafeAllocatorAllocate_0218bc8c(self->frameCount * 4);
    if (!self->qpTable) return 0;

    self->writeIdx = 0;
    self->idx[0] = 0;
    for (int k = 1; k < 6; k++) {
        self->idx[k] = self->frameCount - k;
    }
    self->frame = 0;
    self->available = 0;
    self->consumed = 0;

    for (int b = 0; b < 2; b++) {
        self->buffers[b] = (unsigned char*)SafeAllocatorAllocate_0218bc8c(self->header.biggestFrame + 0x400);
        if (!self->buffers[b]) return 0;
    }

    if (self->header.audioCodec != 0) {
        self->audio = (AudioDecoder*)SafeAllocatorAllocate_0218bc8c(self->header.channelCount * sizeof(AudioDecoder));
        if (!self->audio) return 0;
        func_020ca458(0, self->audio, self->header.channelCount * sizeof(AudioDecoder));
    }

    int saved = self->file->Tell();
    self->file->Seek(self->header.keyframeIndexOffset + self->base);
    self->keyframes = SafeAllocatorAllocate_0218bc8c(self->header.keyframeCount << 3);
    if (!self->file->Read(self->keyframes, self->header.keyframeCount << 3)) return 0;
    self->file->Seek(saved);

    if (self->header.audioCodec == 1) {
        int j;
        int resume = self->file->Tell();
        self->file->Seek(self->header.audioOffset + self->base);
        for (j = 0; j < self->header.channelCount; j++) {
            if (!self->file->Read(self->audio[j].codebook, sizeof(self->audio[j].codebook))) return 0;
            self->audio[j].state = 2;
        }
        self->file->Seek(resume);
    } else if (self->header.audioCodec == 2) {
        for (int j = 0; j < self->header.channelCount; j++) {
            self->audio[j].mode = 2;
        }
    }

    self->file->Read(&frameHeader, 4);
    self->frameSize[0] = frameHeader >> 14;
    self->frameExtra[0] = frameHeader & 0x3fff;
    self->bufferOffset[0] = 0;
    self->file->Read(self->buffers[0], self->frameSize[0] + 4);
    self->bufferIndex = 1;
    return 1;
}
