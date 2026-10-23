#include <globaldefs.h>
#include "Combat/BattleHeapOwner.h"
#include "Resource/FontBankLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/Graphics.h"
#include "Resource/Brightness.h"

struct Obj020397cc;
struct Obj021b2c88;

extern "C" GameResources* func_0200fb8c(int* gameState);
extern "C" void func_020397cc(Obj020397cc* obj, int arg1);
extern "C" int func_020100f8(char* obj);
extern "C" void func_020a28a0(unsigned char* obj, unsigned char mask);
extern "C" void func_020a28b0(unsigned char* obj, int mask);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);
extern "C" void func_020a1df8(int id);
extern "C" void func_020a1ef0(int id);
extern "C" void func_020397c0(void* obj);
extern "C" void func_020a0cc4(unsigned int size, int ticks);
extern "C" void func_020a0c0c(void);
extern "C" void func_ov003_02174114(void* obj);
extern "C" int func_ov003_021745fc(void* obj);
extern "C" void func_ov003_02174454(void* obj);
extern "C" void func_ov017_021b2c88(Obj021b2c88* self);

struct Task_021b2ce8 {
    unsigned char byte0;
    unsigned char done;
    char pad2[6];
    int state;
    SafeAllocator allocator;
};

extern AllocatorUnion data_02114e20;

// USA: func_ov017_021b2ce8
extern "C" ARM void func_ov017_021b2ce8(Task_021b2ce8* self) {
#if defined(jpn)
 enum { regionalSize = 0xfcc };
#else
 enum { regionalSize = 0x1050 };
#endif
    GameState* gs = GameState::GetInstance();
    GameResources* res = func_0200fb8c((int*)gs);
    SetFlags04(res, 0xc0);
    GameObject* leader = gs->GetUnknownGameObject();
    func_020397cc((Obj020397cc*)leader, 1);
    unsigned char* camera = (unsigned char*)func_020100f8((char*)gs);
    func_020a28a0(camera, 3);
    int ticks = gs->GetTickCount();
    if (ticks < 0) {
        ticks = 1;
    }

    if (self->state == 0) {
        func_020a0cc4(0x33820, ticks);
        void* buffer = func_02012d88(&data_02114e20, 0x32000);
        if (buffer == NULL) {
            func_020a0c0c();
            self->done = 1;
            return;
        }
        self->allocator.CreateTypeA(buffer, 0x32000);
        self->allocator.Reset();
        data_ov017_021d840c = static_cast<BattleHeapOwner*>(self->allocator.Allocate(regionalSize));
        if (data_ov017_021d840c == NULL) {
            func_020a0c0c();
            self->done = 1;
            return;
        }
        func_020a1df8(3);
        func_020a1ef0(1);
        func_ov003_02174114(data_ov017_021d840c);
        func_ov003_02173f70(data_ov017_021d840c, &self->allocator);
        SetFlags00(res, 0x6000);
        self->state++;
    } else if (self->state == 1) {
        if (func_ov003_021745fc(data_ov017_021d840c)) {
            FontBankLoader* g = func_02094a00();
            func_02094b40(g);
            func_02094ab0(g);
            func_02094b34(g, 0x6f, 5000, 1, 1);
            self->state++;
        }
    } else if (self->state == 2) {
        if (func_02094b4c(func_02094a00())) {
            func_ov003_02174454(data_ov017_021d840c);
            self->state++;
        }
    } else {
        ClearFlags04(res, 0xc0);
        DISPCNT = (data_ov017_021d840c->bgMode << 8) | (DISPCNT & ~0x1f00);
        func_020a28b0(camera, 3);
        func_ov017_021b2c88((Obj021b2c88*)self);
        func_020a0c0c();
        self->done = 1;
        ClearFlags00(res, 0x6000);
        func_020397c0(leader);
    }
}
