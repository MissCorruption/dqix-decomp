#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/Brightness.h"

void TailForward02012da4(AllocatorUnion* alloc, void* data);

extern int data_02114e20;

struct Obj021bef84 {
    char pad[0x44];
    SafeAllocator allocator;
};

// USA: func_ov017_021bef84  (semantic: ClearAllocatorAndBits_021bef84)
extern "C" ARM void func_ov017_021bef84(struct Obj021bef84* self) {
    int h = (int)GetGameResources();
    void* p = self->allocator.GetSignedAllocator();
    if (p != NULL) {
        self->allocator.Destroy();
        TailForward02012da4((AllocatorUnion*)&data_02114e20, p);
    }
    ClearFlags04((GameResources*)h, 0xc0);
}
