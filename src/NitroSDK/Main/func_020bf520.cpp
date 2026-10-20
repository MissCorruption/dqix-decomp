#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"
#include "NitroSDK/ProcessorContext.h"

extern "C" void VectorizedMemset(void* dst, int value, unsigned int size);

struct StrmPlayer020bf520 {
    char pad0[0x11c];
    int commandCount;
};

struct LoadCommand020bf520 {
    SignedAllocatorHeader* prev;
    SignedAllocatorHeader* next;
    StrmPlayer020bf520* player;
    int status;
    int numChannels;
    void* buffer[6];
    unsigned int bufLen;
};

struct StrmThread020bf520 {
    char pad0[0x4c0];
    BlockedContextList threadQ;
    char pad1[0x4e0 - 0x4c8];
    SignedAllocatorList commandList;
};

struct Statics020bf520 { int f0; StrmThread020bf520* prepareThread; };

extern SignedAllocatorList data_02110a40;
extern StrmThread020bf520 data_02110560;
extern Statics020bf520 data_021103b0;

SignedAllocatorHeader* PopFirstFromGlobalList020bf418(void);
void InsertAllocatorHeaderLocked_020bf458(SignedAllocatorHeader* header);

// USA: func_020bf520
extern "C" ARM void func_020bf520(int status, int numChannels, void* buffer[], unsigned int len, int format, void* arg) {
    StrmPlayer020bf520* player = (StrmPlayer020bf520*)arg;
    LoadCommand020bf520* command;
    StrmThread020bf520* thread;
    int ch;

    if (player->commandCount >= 2) {
        command = NULL;
        while ((command = (LoadCommand020bf520*)data_02110a40.ElementAfter((SignedAllocatorHeader*)command)) != NULL) {
            if (command->player == player)
                break;
        }

        for (ch = 0; ch < command->numChannels; ch++) {
            VectorizedMemset(command->buffer[ch], 0, command->bufLen);
        }

        data_02110a40.Remove((SignedAllocatorHeader*)command);
        player->commandCount--;
        InsertAllocatorHeaderLocked_020bf458((SignedAllocatorHeader*)command);
    }

    command = (LoadCommand020bf520*)PopFirstFromGlobalList020bf418();

    command->player = player;
    command->status = status;
    command->numChannels = numChannels;
    for (ch = 0; ch < numChannels; ch++) {
        command->buffer[ch] = buffer[ch];
    }
    command->bufLen = len;

    thread = &data_02110560;
    if (status == 0 && data_021103b0.prepareThread)
        thread = data_021103b0.prepareThread;

    player->commandCount++;
    thread->commandList.InsertAtEnd((SignedAllocatorHeader*)command);

    UnblockContexts(&thread->threadQ);
}
