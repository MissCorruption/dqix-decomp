#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/Memory/SignedAllocator.h"
#include "GameState/GameState.h"

struct Container020dedd0;
struct Element020de650;
extern "C" struct Element020de650* func_020dedd0(struct Container020dedd0* c, int key);

extern "C" void* func_0207d6dc(SafeAllocator* self, int param1, int param2);
extern "C" void* func_02010828(GameState* battleStruct);

struct KeyedList0207c378;
extern "C" int func_0207c378(struct KeyedList0207c378* obj, int value, int amount, int key);

extern "C" void func_0207cc18(void* self, struct Element020de650* elem);

extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);

extern AllocatorUnion data_02114e20;

struct Obj0207d134 {
    char pad[0x2c];
    struct Container020dedd0* container;
    void* field30;
};

struct ElemFlags0207d134 {
    char pad[8];
    unsigned int nibble : 4;
};

// USA: func_0207d134
extern "C" ARM int func_0207d134(struct Obj0207d134* self, short key, int amount) {
    int flag = 0;
    if (self->container == NULL) {
        func_0207d6dc((SafeAllocator*)self, (int)&key, 1);
        flag = 1;
    }
    int ret = 0;
    struct Element020de650* elem = func_020dedd0(self->container, key);
    if (elem != NULL) {
        GameState* battleStruct = GameState::GetInstance();
        char* p = (char*)func_02010828(battleStruct) + 0x1d4;
        unsigned int nibble = ((struct ElemFlags0207d134*)elem)->nibble;
        ret = func_0207c378((struct KeyedList0207c378*)p, key, amount, nibble);
        if (ret) {
            func_0207cc18(self, elem);
            self->field30 = *(void**)((char*)elem + 4);
        }
    }
    if (flag) {
        SafeAllocator* alloc = (SafeAllocator*)self;
        SignedAllocatorHeader* sig = alloc->GetSignedAllocator();
        alloc->Destroy();
        func_02012da4(&data_02114e20, sig);
        self->container = NULL;
    }
    return ret;
}
