#include <globaldefs.h>
#include <NitroSDK/Memory.h>
#include <NitroSDK/Mutex.h>
#include <NitroSDK/Cache.h>

struct Obj020bf658;
extern "C" void func_020bf658(struct Obj020bf658* obj);

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
    char stream[0xa8];
    char fileHeader[0x18];
    unsigned char format;
    unsigned char loopFlag;
    unsigned char numChannelsInfo;
    unsigned char pad_;
    unsigned short sampleRate;
    unsigned short timer;
    unsigned int loopStart;
    unsigned int loopEnd;
    unsigned int dataOffset;
    unsigned int numBlocks;
    unsigned int blockSize;
    unsigned int blockSamples;
    unsigned int lastBlockSize;
    unsigned int lastBlockSamples;
    char fader[0x10];
    AdpcmState020bf79c adpcmState[6];
    int activeFlag : 1;
    int playFlag : 1;
    int startFlag : 1;
    int fadeOutFlag : 1;
    int dirtyFlag : 1;
    int finishFlag : 1;
    int monoFlag : 1;
    volatile int finishCounter;
    volatile int prepareFlag;
    volatile int commandCount;
    int allocChannelCount;
    unsigned char numChannels;
    unsigned char padding;
    unsigned char chNoList[6];
    void* buffer;
    unsigned int bufSize;
    StrmCallback020bf79c strmCallback;
    void* strmCallbackArg;
    void* sndArcStrmCallback;
    void* sndArcStrmCallbackArg;
    int strmNo;
    int playerNo;
    void* handle;
    int prio;
    int initVolume;
    int extVolume;
    int volume;
    unsigned int curSample;
    void* openStreamFunc;
    void* closeStreamFunc;
    ReadStreamFunc020bf79c readStreamFunc;
    void* cancelStreamFunc;
};

struct LoadCommand020bf79c {
    void* link[2];
    StrmPlayer020bf79c* player;
    int status;
    int numChannels;
    void* buffer[6];
    unsigned int bufLen;
};

struct StrmStatics020bf79c {
    int f0;
    unsigned char* sPrepareThread;
    unsigned char* sDecodeBuffer;
};

extern const signed char data_020e9338[16];
extern const short data_020e9348[89];
extern struct StrmStatics020bf79c data_021103b0;
extern Mutex data_021103c8;

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
            func_020bf658((struct Obj020bf658*)player);
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
