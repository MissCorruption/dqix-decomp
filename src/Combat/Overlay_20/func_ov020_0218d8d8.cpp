#include <globaldefs.h>

#if defined(jpn)
enum { kAllocatorOffset = 0x400 };
#else
enum { kAllocatorOffset = 0x470 };
#endif

#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"

extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);
extern "C" unsigned char func_0200fb9c(char* obj);

struct Actor0209c678;
extern "C" void func_0209c678(struct Actor0209c678* actor, int arg);

struct Actor0209c20c;
extern "C" void func_0209c20c(struct Actor0209c20c* actor);

struct Obj_0205e8ec;
extern "C" void func_0205e8ec(struct Obj_0205e8ec* a);

extern AllocatorUnion data_02114e20;
extern char data_02109bf4;
extern char data_02108760;

struct AllocGroup0218d8d8 {
    char pad[kAllocatorOffset];
    SafeAllocator allocator;
};

// USA: func_ov020_0218d8d8
extern "C" ARM void func_ov020_0218d8d8(struct AllocGroup0218d8d8* obj) {
    GameState* battleStruct = GameState::GetInstance();
    SignedAllocatorHeader* header = obj->allocator.GetSignedAllocator();
    obj->allocator.Destroy();
    func_02012da4(&data_02114e20, header);
    if (func_0200fb9c((char*)battleStruct) == 2) {
        return;
    }
    func_0209c678((struct Actor0209c678*)&data_02109bf4, 0);
    func_0209c20c((struct Actor0209c20c*)&data_02109bf4);
    func_0205e8ec((struct Obj_0205e8ec*)&data_02108760);
}
