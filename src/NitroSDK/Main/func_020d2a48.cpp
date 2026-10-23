#include <globaldefs.h>
#include "NitroSDK/Cache.h"

struct SNDSharedWork {
    unsigned int finishCommandTag;
    unsigned int playerStatus;
    unsigned short channelStatus;
    unsigned short captureStatus;
    unsigned int padding[5];
    struct {
        short variable[16];
        unsigned int tickCounter;
    } player[16];
    short globalVariable[16];
};

// USA: func_020d2a48
extern "C" ARM void func_020d2a48(void* p0) {
    SNDSharedWork* work = (SNDSharedWork*)p0;
    int playerNo, variableNo;

    work->playerStatus = 0;
    work->channelStatus = 0;
    work->captureStatus = 0;
    work->finishCommandTag = 0;

    for (playerNo = 0; playerNo < 16; playerNo++) {
        work->player[playerNo].tickCounter = 0;
        for (variableNo = 0; variableNo < 16; variableNo++) {
            work->player[playerNo].variable[variableNo] = -1;
        }
    }

    for (variableNo = 0; variableNo < 16; variableNo++) {
        work->globalVariable[variableNo] = -1;
    }

    CleanInvalidateCacheRange(work, sizeof(SNDSharedWork));
}
