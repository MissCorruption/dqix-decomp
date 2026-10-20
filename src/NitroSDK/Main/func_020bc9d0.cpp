#include <globaldefs.h>
#include <NitroSDK/Memory/SignedAllocator.h>
#include <NitroSDK/Interrupts.h>

struct Foo020bcbc4;

void CallIfFlag0x24Bit0(Foo020bcbc4* stream);
int AllocateFlagBit_020bbeb0();
void PostEvent0x0E_020d2038(int channelNo, int format, int buffer, int loop, int loopStart, int length, int volume,
                   int shift, int timer, int pan);
void EnqueueEvent0x12_020d1f70(int alarmNo, int tick, int period, int callback, int arg);
void Call020bcd30WithFlag1_020bcd20(void* arg);
extern "C" void func_020bcd30(void* stream, int status);

struct StreamChannel020bc9d0 {
    void* buffer;
    int volume;
};

struct SoundStream020bc9d0 {
    char link[8];
    char preSleepInfo[0xc];
    char postSleepInfo[0xc];
    int format;
    int activeFlag : 1;
    int startFlag : 1;
    unsigned long chBufLen;
    int interval;
    void* callback;
    void* callbackArg;
    int curBuffer;
    int volume;
    int alarmNo;
    unsigned long chBitMask;
    int numChannels;
    unsigned char channelNo[16];
};

extern StreamChannel020bc9d0 data_0210fcf4[16];
extern SignedAllocatorList data_0210fca8;

// USA: func_020bc9d0
extern "C" ARM int func_020bc9d0(SoundStream020bc9d0* stream, int format, void* buffer, unsigned long bufferSize,
                                 int timer, int interval, void* callback, void* arg) {
    StreamChannel020bc9d0* channel;
    unsigned int samples;
    unsigned int alarmTimer;
    int channelNo;
    int index;

    if (stream->activeFlag)
        CallIfFlag0x24Bit0((Foo020bcbc4*)stream);

    bufferSize /= 32 * interval * stream->numChannels;
    stream->chBufLen = bufferSize * interval * 32;

    samples = stream->chBufLen;
    if (format == 1)
        samples >>= 1;
    alarmTimer = timer * samples / interval;

    stream->alarmNo = AllocateFlagBit_020bbeb0();
    if (stream->alarmNo < 0)
        return 0;

    for (index = 0; index < stream->numChannels; index++) {
        channelNo = stream->channelNo[index];
        channel = &data_0210fcf4[channelNo];
        channel->buffer = (unsigned char*)buffer + stream->chBufLen * index;
        channel->volume = 0;
        PostEvent0x0E_020d2038(channelNo, format, (int)channel->buffer, 1, 0, (int)(stream->chBufLen >> 2), 127, 0,
                      timer << 5, 64);
    }

    EnqueueEvent0x12_020d1f70(stream->alarmNo, alarmTimer, alarmTimer, (int)Call020bcd30WithFlag1_020bcd20, (int)stream);
    data_0210fca8.InsertAtEnd((SignedAllocatorHeader*)stream);

    stream->format = format;
    stream->interval = interval;
    stream->callback = callback;
    stream->callbackArg = arg;
    stream->curBuffer = 0;
    stream->volume = 0;
    stream->activeFlag = 1;

    {
        int oldState = DisableIRQInterrupts();
        stream->interval = 1;
        func_020bcd30(stream, 0);
        stream->interval = interval;
        SetIRQInterruptState(oldState);
    }
    return 1;
}
