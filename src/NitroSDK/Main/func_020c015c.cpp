#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct BlockedContextList;
void BlockCurrentContext(struct BlockedContextList* p);

struct Mutex;
void* LockMutex(Mutex*);
extern "C" void func_020bf79c(void* arg0);

extern "C" ARM SignedAllocatorHeader* func_020bf3c8(SignedAllocatorList* arg0);
extern "C" void func_020bf458(SignedAllocatorHeader* arg0);

struct Struct_ov031_02290f8c;
void UnlockMutex(Mutex*);

// USA: func_020c015c
extern "C" ARM void func_020c015c(void *arg0) {
    char *var0 = (char*)arg0;
    for (;;) {
        BlockCurrentContext((BlockedContextList*)(var0 + 0x4c0));
    retry:
        LockMutex((Mutex*)(var0 + 0x4c8));
        {
            SignedAllocatorHeader *var1 = func_020bf3c8((SignedAllocatorList*)(var0 + 0x4e0));
            if (var1 == 0) {
                UnlockMutex((Mutex*)(var0 + 0x4c8));
            } else {
                func_020bf79c(var1);
                func_020bf458(var1);
                UnlockMutex((Mutex*)(var0 + 0x4c8));
                goto retry;
            }
        }
    }
}
