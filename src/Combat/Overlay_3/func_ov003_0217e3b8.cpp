#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/Graphics.h"
#include "Resource/Brightness.h"

struct Obj020397cc;

struct Task0217e3b8
{
    unsigned char kind;
    unsigned char finished;
    char unk_2[6];
    int step;
    SafeAllocator allocator;
    void* menu;
};

extern "C" unsigned int* func_0200fb8c(int* gameState);
extern "C" char* func_020100f8(char* gameState);
extern "C" void func_020397cc(Obj020397cc* obj, int arg1);
extern "C" void func_020397c0(void* obj);
extern "C" void func_020a28a0(unsigned char* camera, unsigned char flags);
extern "C" void func_020a28b0(unsigned char* camera, int flags);
extern "C" void func_020a0cc4(unsigned int size);
extern "C" void func_020a0c0c(void);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);
extern "C" void func_020a1df8(int id);
extern "C" void func_ov003_021681c8(void* menu);
extern "C" void func_ov003_021680d4(void* menu, SafeAllocator* alloc);
extern "C" int func_ov017_021959b4(void);
extern "C" void func_ov003_021685cc(void* menu);
extern "C" int func_ov003_02168438(void* menu, int ticks);
extern "C" void func_ov003_02168324(void* menu);
extern "C" int func_ov003_021685c4(void* menu);
extern "C" void func_ov003_0217e36c(Task0217e3b8* self);

extern AllocatorUnion data_02114e20;

// USA: func_ov003_0217e3b8
extern "C" ARM void func_ov003_0217e3b8(Task0217e3b8* self)
{
    GameState* gameState = GameState::GetInstance();
    unsigned int* resources = func_0200fb8c((int*)gameState);
    GameObject* object = gameState->GetUnknownGameObject();
    char* camera = func_020100f8((char*)gameState);
    SetFlags04((GameResources*)resources, 0xc0);
    func_020397cc((Obj020397cc*)object, 1);
    func_020a28a0((unsigned char*)camera, 3);
    int ticks = gameState->GetTickCount();
    if (ticks < 0)
        ticks = 1;

    if (self->step == 0)
    {
        func_020a0cc4(R(0x16e14,0x16e18));
        void* buffer = func_02012d88(&data_02114e20, R(0x16e14,0x16e18));
        if (buffer == 0)
        {
            func_020a0c0c();
            self->finished = 1;
            return;
        }
        self->allocator.CreateTypeA(buffer, R(0x16e14,0x16e18));
        self->allocator.Reset();
        self->menu = self->allocator.Allocate(R(0x5d4,0x5d8));
        if (self->menu == 0)
        {
            func_020a0c0c();
            self->finished = 1;
            return;
        }
        func_020a1df8(3);
        func_ov003_021681c8(self->menu);
        func_ov003_021680d4(self->menu, &self->allocator);
        self->step++;
    }
    else if (self->step == 1)
    {
        if (func_ov017_021959b4())
            func_ov003_021685cc(self->menu);
        if (func_ov003_02168438(self->menu, ticks))
            self->step++;
    }
    else if (self->step == 2)
    {
        func_ov003_02168324(self->menu);
        self->step++;
    }
    else if (self->step == 3)
    {
        DISPCNT = (DISPCNT & ~0x1f00) | (func_ov003_021685c4(self->menu) << 8);
        func_ov003_0217e36c(self);
        ClearFlags04((GameResources*)resources, 0xc0);
        func_020397c0(object);
        func_020a28b0((unsigned char*)camera, 3);
        func_020a0c0c();
        self->finished = 1;
    }
}
