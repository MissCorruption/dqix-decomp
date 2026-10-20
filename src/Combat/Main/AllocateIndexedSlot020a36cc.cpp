#include <globaldefs.h>

#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/GameResources.h"

extern "C" void func_020a0cc4(unsigned int);
struct Struct02012dd0;
unsigned int GetMaxAlloc02012dd0(Struct02012dd0* self);
void* AllocateAligned4_02012d88(AllocatorUnion* alloc, unsigned int size);
extern AllocatorUnion data_02114e20;

// USA: func_020a36cc
ARM int AllocateIndexedSlot020a36cc(void** allocation, unsigned int requestedBytes) {
    GameResources* resources = GetGameResources();
    unsigned int availableBytes = GetMaxAlloc02012dd0((Struct02012dd0*)&data_02114e20);
    if (availableBytes < requestedBytes) {
        func_020a0cc4(requestedBytes);
        resources->unknown_4490[0] = 1;
    }
    *allocation = AllocateAligned4_02012d88(&data_02114e20, requestedBytes);
    return 1;
}
