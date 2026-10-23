#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);
extern "C" void func_020a0c0c(void);
struct ResetObj020d7a5c;
extern "C" struct ResetObj020d7a5c* func_020d7a50();
struct Obj020d7aa0;
extern "C" void func_020d7aa0(struct Obj020d7aa0* obj);

extern int data_02114e20;

struct Obj021a55b0 {
    char pad[0x8];
    int field8;
    SafeAllocator allocator;
};

// USA: func_ov017_021a55b0
extern "C" ARM void func_ov017_021a55b0(struct Obj021a55b0* self) {
    void* p = self->allocator.GetSignedAllocator();
    if (p != NULL) {
        self->allocator.Destroy();
        func_02012da4((AllocatorUnion*)&data_02114e20, p);
        func_020a0c0c();
    }
    func_020d7aa0((struct Obj020d7aa0*)func_020d7a50());
    self->allocator.ResetAllocatorPointer();
    self->field8 = 0;
}
