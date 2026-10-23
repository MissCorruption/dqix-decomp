#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"

struct ByteHeader0204693c020d8484 {
    signed char byte0;
    signed char byte1;
    signed char byte2;
    signed char byte3;
};
struct List020727d8 {
    void* entries;
    short capacity;
    short count;
};
struct Obj020d8484 {
    struct ByteHeader0204693c020d8484 header;
    int field4;
    int field8;
    struct List020727d8 list;
    SafeAllocator allocator;
};

extern "C" int func_020100f8(char* obj);
extern "C" void func_020a27ac(void* obj);
extern "C" void func_020727ec(struct List020727d8* list);
extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);
extern int data_02114e20;

// USA: func_020d8484
extern "C" ARM void func_020d8484(struct Obj020d8484* self) {
    func_020a27ac((void*)func_020100f8((char*)GameState::GetInstance()));
    void* p = self->allocator.GetSignedAllocator();
    if (p != NULL) {
        self->allocator.Reset();
        self->allocator.Destroy();
        func_020727ec(&self->list);
        func_02012da4((AllocatorUnion*)&data_02114e20, p);
    }
    self->header.byte1 = 1;
}
