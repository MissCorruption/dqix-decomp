#include <globaldefs.h>

#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/GameResources.h"

extern "C" void func_020a0cc4(unsigned int);
struct Struct02012dd0;
extern "C" unsigned int func_02012dd0(Struct02012dd0* self);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);
extern AllocatorUnion data_02114e20;

// USA: func_020a36cc
extern "C" ARM int func_020a36cc(void** allocation, unsigned int requestedBytes) {
    GameResources* resources = GetGameResources();
    unsigned int availableBytes = func_02012dd0((Struct02012dd0*)&data_02114e20);
    if (availableBytes < requestedBytes) {
        func_020a0cc4(requestedBytes);
        resources->unknown_4490[0] = 1;
    }
    *allocation = func_02012d88(&data_02114e20, requestedBytes);
    return 1;
}
