#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
#define REGION_VALUE(jpnValue, usaValue) jpnValue
extern const char data_020f2a18[];
extern "C" void func_020728ac(int, int, void*, int, int, unsigned short, unsigned char);
struct TableA68;
extern "C" void* func_02072a68(TableA68*, int);
extern "C" void func_0204500c(void*, void*, int);
#else
#define REGION_VALUE(jpnValue, usaValue) usaValue
#endif

extern AllocatorUnion data_02114e20;
extern const char data_020f2810[];
extern const char data_020f2826[];

struct Struct02012dd0;
extern "C" unsigned int func_02012dd0(Struct02012dd0* self);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);
extern "C" void* func_020d6c00(void);
extern "C" void func_020466e4(unsigned int* obj, unsigned int mask);
struct Obj020397cc;
extern "C" void func_020397cc(struct Obj020397cc* obj, int arg1);
extern "C" int func_020421a0(void);
extern "C" void func_02046380(void* global);
#if !defined(jpn)
extern "C" void func_0204500c(void* global, void* entry, int a, int b);
#endif
extern "C" void func_020dfec0(void* dest, void* allocator, void* fileData, unsigned int size);
struct Obj02046574;
extern "C" void func_02046574(struct Obj02046574* obj, int index, char* name);
struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310* c, int key);

struct Obj020d9d60 {
    char pad[REGION_VALUE(0x24, 0x58)];
    SafeAllocator allocator;
};
extern "C" void func_020d9d60(struct Obj020d9d60* self);

struct Obj020d9b34 {
    unsigned char pad0[0x1];
    unsigned char field1;
    unsigned char pad1[0x8 - 0x2];
    signed char field8;
    unsigned char state;
    unsigned char pad2[0xc - 0xa];
    int taskId;
    char name[REGION_VALUE(0x1c, 0x40) - 0x10];
    char container[REGION_VALUE(0x24 - 0x1c, 0x58 - 0x40)];
    SafeAllocator allocator;
};

// USA: func_020d9b34
extern "C" ARM void func_020d9b34(struct Obj020d9b34* self) {
    if (self->state == 0) {
        if (func_02012dd0((Struct02012dd0*)&data_02114e20) < 0x400) {
            self->field1 = 1;
            return;
        }
        func_020397cc((struct Obj020397cc*)GameState::GetInstance()->GetUnknownGameObject(), 1);
        func_020466e4((unsigned int*)func_020d6c00(), 0xe);
        self->allocator.ResetAllocatorPointer();
        self->allocator.CreateTypeA(func_02012d88(&data_02114e20, 0x400), 0x400);
        self->allocator.Reset();
#if defined(jpn)
        self->taskId = BackgroundLoader::GetInstance()->QueueLoadFile(data_020f2a18, NULL);
#else
        self->taskId = BackgroundLoader::GetInstance()->QueueLoadFileInGP2(data_020f2810, data_020f2826, NULL);
#endif
        self->state++;
    } else if (self->state == 1) {
        BackgroundLoader* bl = BackgroundLoader::GetInstance();
        if (bl->GetTaskStatus(self->taskId) == 0) return;
        if (bl->GetDetailedTaskStatus(self->taskId) != 2) {
            bl->RemoveTask(self->taskId);
            self->taskId = -1;
            func_020d9d60((struct Obj020d9d60*)self);
            self->field1 = 1;
        } else {
            void* fileData;
            unsigned int size;
            bl->GetLoadedFileByID(self->taskId, &fileData, &size);
#if defined(jpn)
            func_020728ac((int)&self->container, (int)&self->allocator, fileData, size, 0, 0, 0);
#else
            func_020dfec0(&self->container, &self->allocator, fileData, size);
#endif
            bl->RemoveTask(self->taskId);
            self->taskId = -1;
            self->state++;
        }
    } else if (self->state == 2) {
        FontBankLoader* g = func_02094a00();
        func_02094b40(g);
        func_02094ab0(g);
        func_02094b30(g, 0x207, 0);
        self->state++;
    } else if (self->state == 3) {
        if (func_02094b4c(func_02094a00()) == 0) return;
        void* g = (void*)func_020421a0();
        func_02046380(g);
        func_02046574((struct Obj02046574*)g, 0, self->name);
#if defined(jpn)
        func_0204500c(g, func_02072a68((TableA68*)&self->container, self->field8), 0);
#else
        func_0204500c(g, (void*)func_020e0434((struct Container020e0310*)&self->container, self->field8), 0, 0xe3);
#endif
        *(int*)((char*)g + REGION_VALUE(0x868, 0x998)) = 1;
        self->state++;
    } else if (self->state == 4) {
        if (*(int*)((char*)func_020421a0() + REGION_VALUE(0x868, 0x998)) == 0) {
            func_020d9d60((struct Obj020d9d60*)self);
            self->field1 = 1;
        }
    }
}
