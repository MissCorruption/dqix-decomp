#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" int func_ov017_021d60f4(void*);
struct AllocatorUnion;
extern "C" void func_02012da4(struct AllocatorUnion*, void*);
struct Struct02012dd0;
extern "C" unsigned int func_02012dd0(struct Struct02012dd0*);

extern SafeAllocator* data_ov001_021658b8[8];
extern struct AllocatorUnion data_02114e20;

// USA: func_ov001_0215ea40
extern "C" ARM int func_ov001_0215ea40(void* self) {
    int idx = func_ov017_021d60f4(self);
    if (idx < 0 || idx >= 8) return 0;
    SafeAllocator* alloc = data_ov001_021658b8[idx];
    if (alloc == NULL) return 0;
    SignedAllocatorHeader* signedAlloc = alloc->GetSignedAllocator();
    if (signedAlloc != NULL) {
        alloc->Destroy();
        func_02012da4(&data_02114e20, signedAlloc);
    }
    func_02012dd0((struct Struct02012dd0*)&data_02114e20);
    return 1;
}
