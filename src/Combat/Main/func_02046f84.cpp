#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

extern "C" int func_0200fb8c(int* obj);
extern "C" void func_0202e874(unsigned char* obj, unsigned short val);
struct AngleTrig0202e9a4;
extern "C" void func_0202e9a4(struct AngleTrig0202e9a4* objParam, int angle);
extern "C" void func_0202eab8(void* obj);
extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);

extern int data_02114e20;

struct Struct02046f84 {
    int field0;
    int field4;
    char pad[0x24 - 8];
    SafeAllocator allocator;
    int field38;
};

// USA: func_02046f84
extern "C" ARM void func_02046f84(struct Struct02046f84* s) {
    GameState* battleStruct = GameState::GetInstance();
    func_0200fb8c((int*)battleStruct);
    void* obj = func_020100bc(battleStruct);
    func_0202e874((unsigned char*)obj, 0);
    func_0202e9a4((struct AngleTrig0202e9a4*)obj, 0xf000);
    func_0202eab8(obj);

    if (s->field38 == 0) {
        void* p = s->allocator.GetSignedAllocator();
        if (p != NULL) {
            s->allocator.Reset();
            s->allocator.Destroy();
            func_02012da4((AllocatorUnion*)&data_02114e20, p);
        }
    }
    s->field0 = 0;
    s->field4 = 0;
}
