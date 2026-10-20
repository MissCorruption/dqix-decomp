#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct Tween020c0260
{
    int origin;
    int target;
    int counter;
    int frame;
};

struct State020c0278;
struct Obj020bc6fc;

struct SoundPlayer020bc2f0
{
    SignedAllocatorList playerList;
    SignedAllocatorList heapList;
    unsigned long playableSeqCount;
    unsigned long allocChBitFlag;
    unsigned char volume;
    unsigned char pad;
    unsigned short pad2;
};

struct ListLink020bc2f0
{
    void* prevObject;
    void* nextObject;
};

struct SequencePlayer020bc2f0
{
    void* handle;
    SoundPlayer020bc2f0* player;
    void* heap;
    ListLink020bc2f0 playerLink;
    ListLink020bc2f0 prioLink;
    Tween020c0260 fader;
    unsigned char status;
    unsigned char startFlag;
    unsigned char pauseFlag;
    unsigned char prepareFlag;
    unsigned long commandTag;
    unsigned short seqType;
    unsigned short pad2;
    unsigned short seqNo;
    unsigned short seqArcIndex;
    unsigned char playerNo;
    unsigned char prio;
    short volume;
    unsigned char initVolume;
    unsigned char extVolume;
    unsigned short pad3;
};

unsigned long ReadUncachedField4_020d29f4();
int IsValuePassedWraparound020d2718(unsigned int tag);
extern "C" void func_020bc79c(SequencePlayer020bc2f0* seqPlayer);
void AdvanceTweenStep020c0260(Tween020c0260* fader);
int EvaluateTween020c022c(Tween020c0260* fader);
void EnqueueEvent0x6Sub6_020d1e70(int playerNo, int volume);
int CheckField8GeFieldC(State020c0278* fader);
void DispatchType2Command020bc6fc(Obj020bc6fc* seqPlayer);
void EnqueueEvent0x3_020d1e30(int playerNo);

extern "C" SignedAllocatorList data_0210f3d8;
extern "C" const short data_020ed82c[];

static inline short CalculateDecibel(int scale)
{
    return data_020ed82c[scale];
}

static inline SequencePlayer020bc2f0* NextSeqPlayer(SequencePlayer020bc2f0* seqPlayer)
{
    return (SequencePlayer020bc2f0*)data_0210f3d8.ElementAfter((SignedAllocatorHeader*)seqPlayer);
}

// USA: func_020bc2f0
extern "C" ARM void func_020bc2f0()
{
    SequencePlayer020bc2f0* seqPlayer;
    SequencePlayer020bc2f0* next;
    unsigned long status;
    int fader;

    status = ReadUncachedField4_020d29f4();

    seqPlayer = NextSeqPlayer(NULL);
    if (seqPlayer == NULL)
        return;

    do
    {
        next = NextSeqPlayer(seqPlayer);

        if (!seqPlayer->startFlag)
        {
            if (IsValuePassedWraparound020d2718(seqPlayer->commandTag))
                seqPlayer->startFlag = 1;
        }

        if (seqPlayer->startFlag)
        {
            if ((status & (1 << seqPlayer->playerNo)) == 0)
            {
                func_020bc79c(seqPlayer);
                continue;
            }
        }

        AdvanceTweenStep020c0260(&seqPlayer->fader);

        fader = CalculateDecibel(seqPlayer->initVolume) + CalculateDecibel(seqPlayer->extVolume)
            + CalculateDecibel(seqPlayer->player->volume)
            + CalculateDecibel(EvaluateTween020c022c(&seqPlayer->fader) >> 8);

        if (fader < -32768)
            fader = -32768;
        else if (fader > 32767)
            fader = 32767;

        if (fader != seqPlayer->volume)
        {
            EnqueueEvent0x6Sub6_020d1e70(seqPlayer->playerNo, fader);
            seqPlayer->volume = (short)fader;
        }

        if (seqPlayer->status == 2)
        {
            if (CheckField8GeFieldC((State020c0278*)&seqPlayer->fader))
                DispatchType2Command020bc6fc((Obj020bc6fc*)seqPlayer);
        }

        if (seqPlayer->prepareFlag)
        {
            EnqueueEvent0x3_020d1e30(seqPlayer->playerNo);
            seqPlayer->prepareFlag = 0;
        }
    } while ((seqPlayer = next) != NULL);
}
