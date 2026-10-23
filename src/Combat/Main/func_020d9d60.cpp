#include <globaldefs.h>
#if defined(jpn)
enum { kAllocatorOffset = 0x24 };
#else
enum { kAllocatorOffset = 0x58 };
#endif

#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"

extern "C" void func_020397c0(void* obj);
extern "C" void* func_020d6c00(void);
struct FlagWord020466f4;
extern "C" void func_020466f4(struct FlagWord020466f4* word, unsigned int mask);
extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);
extern int data_02114e20;

struct Obj020d9d60 {
    char pad[kAllocatorOffset];
    SafeAllocator allocator;
};

// USA: func_020d9d60
extern "C" ARM void func_020d9d60(struct Obj020d9d60* self) {
    func_020397c0((void*)GameState::GetInstance()->GetUnknownGameObject());
    ClearFlags00(GetGameResources(), 0x10);
    func_020466f4((struct FlagWord020466f4*)func_020d6c00(), 0xe);
    void* p = self->allocator.GetSignedAllocator();
    if (p == NULL) return;
    self->allocator.Destroy();
    func_02012da4((AllocatorUnion*)&data_02114e20, p);
}
