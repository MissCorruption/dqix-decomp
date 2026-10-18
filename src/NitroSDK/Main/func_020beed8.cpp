#include <globaldefs.h>

struct Outer020beeac;
struct Tween020c01ec;
struct Tween020c0260;
struct Obj020bcc4c;
struct SoundStream020bc9d0;

struct StrmInfo020beed8 {
    unsigned int fileId;
    unsigned char volume;
    unsigned char playerPrio;
    unsigned char playerNo;
    unsigned char flags;
};

struct StrmPlayer020beed8;
typedef int (*OpenStreamFunc020beed8)(StrmPlayer020beed8* player, unsigned int fileId);
typedef void (*CloseStreamFunc020beed8)(StrmPlayer020beed8* player);

struct StrmPlayer020beed8 {
    char stream[0xa8];                  /* 0x00 */
    char fileHeader[0x18];              /* 0xa8 */
    unsigned char format;               /* 0xc0 */
    unsigned char loopFlag;
    unsigned char numChannelsInfo;      /* 0xc2 */
    unsigned char pad_;
    unsigned short sampleRate;          /* 0xc4 */
    unsigned short timer;               /* 0xc6 */
    char infoRest[0xe8 - 0xc8];
    char fader[0x10];                   /* 0xe8 */
    char adpcmState[0x18];              /* 0xf8 */
    int activeFlag : 1;                 /* 0x110 */
    int playFlag : 1;
    int startFlag : 1;
    int fadeOutFlag : 1;
    int dirtyFlag : 1;
    int finishFlag : 1;
    int monoFlag : 1;
    int finishCounter;                  /* 0x114 */
    int prepareFlag;                    /* 0x118 */
    int commandCount;                   /* 0x11c */
    int allocChannelCount;              /* 0x120 */
    unsigned char numChannels;          /* 0x124 */
    unsigned char padding;
    unsigned char chNoList[6];          /* 0x126 */
    void* buffer;                       /* 0x12c */
    unsigned int bufSize;               /* 0x130 */
    void* strmCallback;                 /* 0x134 */
    void* strmCallbackArg;
    void* sndArcStrmCallback;
    void* sndArcStrmCallbackArg;
    int strmNo;                         /* 0x144 */
    int playerNo;
    void* handle;                       /* 0x14c */
    int prio;
    int initVolume;                     /* 0x154 */
    int extVolume;                      /* 0x158 */
    int volume;                         /* 0x15c */
    unsigned int curSample;             /* 0x160 */
    OpenStreamFunc020beed8 openStreamFunc;   /* 0x164 */
    CloseStreamFunc020beed8 closeStreamFunc; /* 0x168 */
    void* readStreamFunc;
    void* cancelStreamFunc;
};

void* AttachOrRefreshEntry_020bee20(void** self, int index, int value);
void InitActionHandlers020bffc4(void* obj, unsigned int id);
void ResetField14cAndClearFlags020beeac(struct Outer020beeac* p);
void ResetTween020c01ec(struct Tween020c01ec* t);
void RetargetTween020c0204(struct Tween020c0260* t, int end, int duration);
int AcquireRefAt0x120_020bf29c(void* obj, int a, int b);
void ReleaseRefAt0x120_020bf2d4(void* obj);
void SetBitForListEntry020bcc4c(struct Obj020bcc4c* obj, int i, int arg);
extern "C" int func_020bc9d0(SoundStream020bc9d0* stream, int format, void* buffer, unsigned long bufferSize,
                             int timer, int interval, void* callback, void* arg);
extern "C" void func_020bf520(int status, int numChannels, void* buffer[], unsigned int len, int format, void* arg);

// USA: func_020beed8
extern "C" ARM int func_020beed8(void** handle, const StrmInfo020beed8* strmInfo, int playerNo, int playerPrio,
                                 int strmNo, unsigned int offset, void* strmCallback, void* strmCallbackArg,
                                 void* sndArcStrmCallback, void* sndArcStrmCallbackArg) {
    StrmPlayer020beed8* player;
    int format;
    int numChannels;
    unsigned long long tmpU64;
    int ret;

    player = (StrmPlayer020beed8*)AttachOrRefreshEntry_020bee20(handle, playerNo, playerPrio);
    if (player == NULL)
        return 0;

    InitActionHandlers020bffc4(player, strmInfo->fileId);

    if (!player->openStreamFunc(player, strmInfo->fileId)) {
        ResetField14cAndClearFlags020beeac((struct Outer020beeac*)player);
        return 0;
    }

    tmpU64 = player->sampleRate;
    tmpU64 *= offset;
    tmpU64 /= 1000;
    player->curSample = (unsigned int)tmpU64;

    if (player->curSample != 0 && player->format == 2) {
        player->dirtyFlag = 1;
    } else {
        player->dirtyFlag = 0;
    }

    player->finishCounter = 4;
    player->finishFlag = 0;
    player->playFlag = 0;
    player->prepareFlag = 0;
    player->startFlag = 0;
    player->fadeOutFlag = 0;
    player->commandCount = 0;

    player->strmCallback = strmCallback;
    player->strmCallbackArg = strmCallbackArg;
    player->sndArcStrmCallback = sndArcStrmCallback;
    player->sndArcStrmCallbackArg = sndArcStrmCallbackArg;

    player->strmNo = strmNo;

    player->volume = 0;
    player->initVolume = strmInfo->volume;
    player->extVolume = 127;

    ResetTween020c01ec((struct Tween020c01ec*)player->fader);
    RetargetTween020c0204((struct Tween020c0260*)player->fader, 127 << 8, 1);

    switch (player->format) {
    case 0:
        format = 0;
        break;
    case 1:
    case 2:
        format = 1;
        break;
    }

    numChannels = player->numChannelsInfo;
    if (strmInfo->flags & 1) {
        numChannels = 2;
    }
    if (numChannels > player->numChannels) {
        numChannels = player->numChannels;
    }
    player->monoFlag = (numChannels == 1) ? 1 : 0;

    ret = AcquireRefAt0x120_020bf29c(player, numChannels, (int)player->chNoList);
    if (!ret) {
        player->closeStreamFunc(player);
        ResetField14cAndClearFlags020beeac((struct Outer020beeac*)player);
        return 0;
    }

    ret = func_020bc9d0((SoundStream020bc9d0*)player->stream, format, player->buffer,
                        player->bufSize * numChannels / player->numChannels, player->timer, 4,
                        (void*)func_020bf520, player);
    if (!ret) {
        ReleaseRefAt0x120_020bf2d4(player);
        player->closeStreamFunc(player);
        ResetField14cAndClearFlags020beeac((struct Outer020beeac*)player);
        return 0;
    }

    if (numChannels == 2) {
        struct Obj020bcc4c* stream = (struct Obj020bcc4c*)player->stream;
        SetBitForListEntry020bcc4c(stream, 0, 0);
        SetBitForListEntry020bcc4c(stream, 1, 127);
    }

    return 1;
}
