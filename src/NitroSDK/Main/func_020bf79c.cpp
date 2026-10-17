#include <globaldefs.h>
#include <System/Memory.h>
#include <System/Mutex.h>
#include <System/Cache.h>

/* NitroSystem snd sndarc_stream.c: MakeWaveData */

struct Obj020bf658;
void UpdateAndDispatch020bf658(struct Obj020bf658* obj);

/* The inner struct makes mwcc C++ copy it as one 4-byte block, as the SDK's C struct copy does. */
struct AdpcmState020bf79c {
    struct {
        short prevSample;
        unsigned char prevIndex;
        unsigned char padding;
    };
};

struct StrmPlayer020bf79c;
typedef int (*ReadStreamFunc020bf79c)(StrmPlayer020bf79c* player, void* dest, unsigned int size, unsigned int offset);
enum StrmFormat020bf79c { NNS_SND_STRM_FORMAT_PCM8, NNS_SND_STRM_FORMAT_PCM16 };
typedef void (*StrmCallback020bf79c)(int status, int numChannels, void* buffer[], unsigned int len,
                                     StrmFormat020bf79c format, void* arg);

struct StrmPlayer020bf79c {
    char stream[0xa8];                  /* 0x00 */
    char fileHeader[0x18];              /* 0xa8 */
    unsigned char format;               /* 0xc0 */
    unsigned char loopFlag;             /* 0xc1 */
    unsigned char numChannelsInfo;      /* 0xc2 */
    unsigned char pad_;
    unsigned short sampleRate;          /* 0xc4 */
    unsigned short timer;               /* 0xc6 */
    unsigned int loopStart;             /* 0xc8 */
    unsigned int loopEnd;               /* 0xcc */
    unsigned int dataOffset;            /* 0xd0 */
    unsigned int numBlocks;             /* 0xd4 */
    unsigned int blockSize;             /* 0xd8 */
    unsigned int blockSamples;          /* 0xdc */
    unsigned int lastBlockSize;         /* 0xe0 */
    unsigned int lastBlockSamples;      /* 0xe4 */
    char fader[0x10];                   /* 0xe8 */
    AdpcmState020bf79c adpcmState[6];   /* 0xf8 */
    int activeFlag : 1;                 /* 0x110 */
    int playFlag : 1;
    int startFlag : 1;
    int fadeOutFlag : 1;
    int dirtyFlag : 1;
    int finishFlag : 1;
    int monoFlag : 1;
    volatile int finishCounter;         /* 0x114 */
    volatile int prepareFlag;           /* 0x118 */
    volatile int commandCount;          /* 0x11c */
    int allocChannelCount;              /* 0x120 */
    unsigned char numChannels;          /* 0x124 */
    unsigned char padding;
    unsigned char chNoList[6];          /* 0x126 */
    void* buffer;                       /* 0x12c */
    unsigned int bufSize;               /* 0x130 */
    StrmCallback020bf79c strmCallback;  /* 0x134 */
    void* strmCallbackArg;              /* 0x138 */
    void* sndArcStrmCallback;           /* 0x13c */
    void* sndArcStrmCallbackArg;
    int strmNo;                         /* 0x144 */
    int playerNo;
    void* handle;                       /* 0x14c */
    int prio;
    int initVolume;                     /* 0x154 */
    int extVolume;                      /* 0x158 */
    int volume;                         /* 0x15c */
    unsigned int curSample;             /* 0x160 */
    void* openStreamFunc;               /* 0x164 */
    void* closeStreamFunc;              /* 0x168 */
    ReadStreamFunc020bf79c readStreamFunc;   /* 0x16c */
    void* cancelStreamFunc;             /* 0x170 */
};

struct LoadCommand020bf79c {
    void* link[2];                      /* 0x00 */
    StrmPlayer020bf79c* player;         /* 0x08 */
    int status;                         /* 0x0c */
    int numChannels;                    /* 0x10 */
    void* buffer[6];                    /* 0x14 */
    unsigned int bufLen;                /* 0x2c */
};

/* sndarc_stream.c statics: { ?, sPrepareThread, sDecodeBuffer } */
struct StrmStatics020bf79c {
    int f0;
    unsigned char* sPrepareThread;
    unsigned char* sDecodeBuffer;
};

extern const signed char data_020e9338[16];  /* cAdpcmIndexTable */
extern const short data_020e9348[89];        /* cAdpcmStepSizeTable */
extern struct StrmStatics020bf79c data_021103b0;
extern Mutex data_021103c8;                  /* sDecodeBufferMutex */

static inline short DecodeAdpcm(int code, AdpcmState020bf79c* state) {
    int step;
    int sample;
    int index;
    int d;

    sample = state->prevSample;
    index = state->prevIndex;

    step = data_020e9348[index];

    d = step >> 3;
    if (code & 4) d += step;
    if (code & 2) d += step >> 1;
    if (code & 1) d += step >> 2;

    if (code & 8) {
        sample -= d;
        if (sample < -32768) sample = -32768;
    } else {
        sample += d;
        if (sample > 32767) sample = 32767;
    }

    index += data_020e9338[code];

    if (index < 0) index = 0;
    else if (index > 89 - 1) index = 89 - 1;

    state->prevSample = (short)sample;
    state->prevIndex = (unsigned char)index;

    return (short)sample;
}

// USA: func_020bf79c
extern "C" ARM void func_020bf79c(LoadCommand020bf79c* command) {
    StrmPlayer020bf79c* player = command->player;
    int loopFlag;
    long destOffset;
    unsigned int restSize;
    unsigned int blockNo;
    unsigned int blockSize;
    unsigned int blockSamples;
    unsigned int blockOffsetSample;
    unsigned int blockOffset;
    unsigned int offset;
    unsigned int samples;
    unsigned int size;
    unsigned int readSize;
    int ch;

    if (player->finishFlag && player->finishCounter > 0) {
        player->finishCounter--;
    }

    destOffset = 0;

    restSize = command->bufLen;
    while (restSize > 0) {
        if (player->finishFlag) {
            for (ch = 0; ch < command->numChannels; ch++) {
                VectorizedMemset((unsigned char*)(command->buffer[ch]) + destOffset, 0, restSize);
            }
            break;
        }

        blockNo = player->curSample / player->blockSamples;

        if (blockNo < player->numBlocks - 1) {
            blockSize = player->blockSize;
            blockSamples = player->blockSamples;
        } else {
            blockSize = player->lastBlockSize;
            blockSamples = player->lastBlockSamples;
        }

        blockOffsetSample = player->curSample;
        blockOffsetSample -= blockNo * player->blockSamples;

        samples = restSize;
        if (player->format != 0) {
            samples >>= 1;
        }

        if (player->dirtyFlag) {
            if (blockOffsetSample == 0) {
                player->dirtyFlag = 0;
            } else {
                samples = blockOffsetSample;
                blockOffsetSample = 0;
            }
        }

        loopFlag = 0;
        if (blockOffsetSample + samples >= blockSamples) {
            samples = blockSamples - blockOffsetSample;

            if (blockNo >= player->numBlocks - 1) {
                if (player->loopFlag) {
                    loopFlag = 1;
                } else {
                    player->finishFlag = 1;
                }
            }
        }

        blockOffset = blockOffsetSample;
        size = samples;
        switch (player->format) {
        case 0:
            readSize = size;
            break;
        case 1:
            blockOffset <<= 1;
            size <<= 1;
            readSize = size;
            break;
        case 2: {
            unsigned int endSample = blockOffsetSample + samples;
            blockOffset >>= 1;
            endSample++;
            endSample >>= 1;
            readSize = endSample - blockOffset;
            if (blockOffsetSample == 0) {
                readSize += sizeof(AdpcmState020bf79c);
            } else {
                blockOffset += sizeof(AdpcmState020bf79c);
            }
            size <<= 1;
            break;
        }
        }

        offset = blockOffset;
        offset += blockNo * player->blockSize * player->numChannelsInfo;
        offset += player->dataOffset;

        for (ch = 0; ch < command->numChannels; ch++) {
            void* dest;
            void* read_dest;

            dest = read_dest = (unsigned char*)(command->buffer[ch]) + destOffset;

            if (ch < player->numChannelsInfo) {
                int resultSize;

                if (player->format == 2) {
                    LockMutex(&data_021103c8);
                    read_dest = data_021103b0.sDecodeBuffer;
                }

                resultSize = player->readStreamFunc(player, read_dest, readSize, offset + ch * blockSize);

                if (resultSize != readSize) {
                    size = 0;
                    samples = 0;
                    loopFlag = 0;
                    player->finishFlag = 1;
                    if (player->format == 2) {
                        UnlockMutex(&data_021103c8);
                    }
                    break;
                }

                if (player->format == 2) {
                    AdpcmState020bf79c* state = &player->adpcmState[ch];
                    unsigned char* srcp = data_021103b0.sDecodeBuffer;
                    short* destp = (short*)dest;
                    unsigned int i;
                    unsigned int end;

                    if (blockOffsetSample == 0) {
                        *state = *((AdpcmState020bf79c*)srcp)++;
                    }

                    end = blockOffsetSample + samples;

                    i = blockOffsetSample;
                    if (i & 0x01) {
                        *destp++ = DecodeAdpcm((*srcp >> 4) & 0x0f, state);
                        i++;
                        srcp++;
                    }
                    while (i < (end & ~0x01)) {
                        *destp++ = DecodeAdpcm(*srcp & 0x0f, state);
                        i++;
                        *destp++ = DecodeAdpcm((*srcp >> 4) & 0x0f, state);
                        i++;
                        srcp++;
                    }
                    if (i < end) {
                        *destp++ = DecodeAdpcm(*srcp & 0x0f, state);
                        i++;
                    }
                    UnlockMutex(&data_021103c8);
                }
            } else {
                if (player->monoFlag) {
                    VectorizedMemset(dest, 0, size);
                } else {
                    VectorizedInvertedMemcpy((unsigned char*)(command->buffer[0]) + destOffset, dest, size);
                }
            }
        }

        if (player->dirtyFlag) {
            player->dirtyFlag = 0;
            continue;
        }

        if (loopFlag) {
            player->curSample = player->loopStart;
        } else {
            player->curSample += samples;
        }

        destOffset += size;

        restSize -= size;

        if (player->finishFlag && player->sndArcStrmCallback) {
            UpdateAndDispatch020bf658((struct Obj020bf658*)player);
        }
    }

    if (player->strmCallback != NULL) {
        player->strmCallback(command->status, command->numChannels, command->buffer, command->bufLen,
                             player->format == 0 ? NNS_SND_STRM_FORMAT_PCM8 : NNS_SND_STRM_FORMAT_PCM16,
                             player->strmCallbackArg);
    }

    for (ch = 0; ch < command->numChannels; ch++) {
        CleanInvalidateCacheRange(command->buffer[ch], command->bufLen);
    }

    if (command->status == 0) {
        player->prepareFlag = 1;
    }
}
