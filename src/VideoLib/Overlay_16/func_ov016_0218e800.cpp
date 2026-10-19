#include <globaldefs.h>
#include "System/Memory.h"

#if defined(jpn)
#define func_020ca458 func_020cbf24
#endif

// Opens a video stream: reads and validates the stream header, skips tagged header chunks up to
// the end-of-header chunk, then allocates the decoder state, frame buffers and per-channel audio
// decoders.

// Vtable at data_ov016_0219d0a0: Seek is SeekIfInactive_0218f540, Read is SeekAndReadSync_0218f58c.
struct VideoFile {
    virtual void v0();
    virtual void v1();
    virtual int Seek(int offset);
    virtual int Read(void* buffer, int size);
    virtual int ReadAsync(void* buffer, int size);
    virtual int Await();

    int Tell() { return position; }

    int field_04;
    int position;   // 0x08
};

struct Stream_0218e800 {
    unsigned char pad_00[4];
    unsigned int width;     // 0x04
    unsigned int height;    // 0x08
    unsigned char pad_0c[0x30];
    void* lumaTable;        // 0x3c
    void* chromaTable;      // 0x40
    void* rangeTable;       // 0x44
    unsigned char pad_48[0x454 - 0x48];
};

struct AudioDecoder {
    unsigned char pad_000[0x1cc];
    int mode;               // 0x1cc
    unsigned char pad_1d0[0x8c0 - 0x1d0];
    unsigned char codebook[0xc34];  // 0x8c0
    int state;              // 0x14f4
};

struct VideoHeader {
    char magic[4];          // 0x04
    signed char tag0;       // 0x08
    signed char tag1;       // 0x09
    unsigned short tagIdSizeDword; // 0x0a
    unsigned int frameCount;     // 0x0c
    unsigned int width;     // 0x10
    unsigned int height;    // 0x14
    unsigned int fps;            // 0x18
    unsigned short audioCodec;   // 0x1c
    unsigned short channelCount; // 0x1e
    unsigned int frequency;      // 0x20
    unsigned int biggestFrame; // 0x24
    unsigned int audioOffset; // 0x28
    unsigned int keyframeIndexOffset;  // 0x2c
    unsigned int keyframeCount;   // 0x30
};

struct BlitTarget_0218e800 {
    const unsigned char* srcY;      // 0x3c
    const unsigned char* srcC;      // 0x40
    unsigned short* dst;            // 0x44
    unsigned int pitch;             // 0x48
    int width;                      // 0x4c
    int height;                     // 0x50
    const unsigned char* field_18;  // 0x54
};

struct VideoDecoder {
    VideoFile* file;            // 0x00
    VideoHeader header;         // 0x04
    Stream_0218e800* stream;        // 0x34
    int (*advance)(Stream_0218e800*);  // 0x38
    BlitTarget_0218e800 target;          // 0x3c
    AudioDecoder* audio;        // 0x58
    unsigned char** framesY;    // 0x5c
    unsigned char** framesC;    // 0x60
    unsigned int* qpTable;      // 0x64
    unsigned char* scratchY;    // 0x68
    unsigned char* scratchC;    // 0x6c
    unsigned char* buffers[2];  // 0x70
    unsigned int frameSize[2];  // 0x78
    int bufferOffset[2];        // 0x80
    unsigned int frameExtra[2]; // 0x88
    int bufferIndex;            // 0x90
    void* keyframes;            // 0x94
    unsigned int writeIdx;      // 0x98
    unsigned int consumed;      // 0x9c
    unsigned int available;     // 0xa0
#if !defined(jpn)
    int wideFlag;               // 0xa4
#endif
    unsigned int frameCount;    // 0xa8
    unsigned int idx[6];        // 0xac
    unsigned int frame;         // 0xc4
    unsigned char pad_c8[4];
    int fieldcc;                // 0xcc
    int fieldd0;                // 0xd0
    int base;                   // 0xd4
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
