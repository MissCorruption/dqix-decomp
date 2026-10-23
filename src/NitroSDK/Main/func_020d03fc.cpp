#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/Interrupts.h"

struct BackupCommand020d03fc {
    int result;
    unsigned int type;
    unsigned int id;
    unsigned int source;
    unsigned int destination;
    unsigned int length;
    unsigned char field_0x18[8];
    unsigned int eraseUnitSize;
};

struct BackupManager020d03fc {
    BackupCommand020d03fc* command;
    unsigned char field_0x4[0x18];
    unsigned int source;
    unsigned int destination;
    unsigned int length;
    unsigned int dmaChannel;
    int requestType;
    int retryCount;
    int requestMode;
    void (*callback)(void*);
    void* callbackArg;
    unsigned int field_0x40;
    ProcessorContext thread;
    unsigned char field_0x104[8];
    BlockedContextList busyQueue;
    unsigned int flags;
    unsigned int instructionThreshold;
    unsigned int dataThreshold;
    unsigned char cache[0x100];
};

struct BackupGlobal020d03fc {
    BackupCommand020d03fc* command;
};

extern BackupGlobal020d03fc data_021118e0;
#define BACKUP_MIDDLEWARE ((const void*)0x02000bc4)
extern "C" void func_02000b9c(const void*);
extern "C" int func_020d06e8();
extern "C" int func_020d0fc4(BackupManager020d03fc*, int, int);
extern "C" void VectorizedInvertedMemcpy(const void*, void*, unsigned int);

static inline bool IsBackupTaskCancelled(const BackupManager020d03fc* manager) {
    return (manager->flags & 0x40) != 0;
}

static inline void EndBackupTask(BackupManager020d03fc* manager, int ownTask) {
    void (*const callback)(void*) = manager->callback;
    void* const arg = manager->callbackArg;
    {
        const int interruptState = DisableIRQInterrupts();
        manager->flags &= ~0x4c;
        UnblockContexts(&manager->busyQueue);
        if (manager->flags & 0x10) MarkContextReadyAndSwitch(&manager->thread);
        SetIRQInterruptState(interruptState);
    }
    if (ownTask && callback) callback(arg);
}

// USA: func_020d03fc
extern "C" ARM void func_020d03fc(BackupManager020d03fc* manager) {
    const int requestType = manager->requestType;
    const int requestMode = manager->requestMode;
    const int retryCount = manager->retryCount;
    unsigned int size = sizeof(manager->cache);
    func_02000b9c(BACKUP_MIDDLEWARE);
    if (requestType == 11) {
        size = func_020d06e8();
    } else if (requestType == 15) {
        size = data_021118e0.command->eraseUnitSize;
    }
    do {
        const unsigned int length = size < manager->length ? size : manager->length;
        manager->command->length = length;
        if (IsBackupTaskCancelled(manager)) {
            manager->flags &= ~0x40;
            manager->command->result = 7;
            break;
        }
        switch (requestMode) {
        case 0:
            InvalidateDataCacheRange(manager->cache, length);
            manager->command->source = manager->source;
            manager->command->destination = (unsigned int)manager->cache;
            break;
        case 1:
        case 2:
            VectorizedInvertedMemcpy((const void*)manager->source, manager->cache, length);
            CleanInvalidateCacheRange(manager->cache, length);
            DrainWriteBuffer();
            manager->command->source = (unsigned int)manager->cache;
            manager->command->destination = manager->destination;
            break;
        case 3:
            manager->command->source = manager->source;
            manager->command->destination = manager->destination;
            break;
        }
        if (!func_020d0fc4(manager, requestType, retryCount)) break;
        if (requestMode == 2) {
            if (func_020d0fc4(manager, 9, 1)) goto advanceChunk;
            break;
        } else if (requestMode == 0) {
            VectorizedInvertedMemcpy(manager->cache, (void*)manager->destination, length);
        }
advanceChunk:
        manager->source += length;
        manager->destination += length;
        manager->length -= length;
    } while (manager->length > 0);
    EndBackupTask(manager, 1);
}
