#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include <GameState/GameState.h>
#include <Resource/Brightness.h>
#include <Filesystem/BackgroundLoader.h>
#include <NitroSDK/Memory/AllocatorUnion.h>
#include <NitroSDK/Memory/HMRFAllocator.h>
#include <std_library_functions.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_0203cf58;
struct TagValueEntry020e385c;
struct LoadState02154f24
{
    char pad_0x0[8];
    unsigned short lookupId;
    unsigned short state;
    char pad_0xc[7];
    unsigned char pathVariant;
    char pad_0x14[4];
    unsigned short tag;
    char pad_0x1a[0x3e - 0x1a];
    char name[0x50 - 0x3e];
    unsigned short flags;
    char pad_0x52[0x74 - 0x52];
    int firstLoad;
#if !defined(jpn)
    int secondLoad;
#endif
    SafeAllocator allocator;
    unsigned int savedSize;
    char pad_0x94[8];
    unsigned char alternatePath;
    char pad_0x9d[0x110 - 0x9d];
    int optionalLoad;
};
struct LoadArguments02154f24
{
    unsigned short slot;
};
struct LookupRecord02154f24
{
    char pad_0x0[8];
    unsigned int index;
    char pad_0xc[0x34 - 0xc];
};
extern "C" void* func_0203cf4c();
extern "C" LoadArguments02154f24* func_02012fe4();
extern "C" void* func_0202ae18();
extern "C" void func_02012de4(AllocatorUnion*);
extern "C" void func_020a0cc4(int);
extern "C" void func_0203e0a0(void*, int);
extern "C" void func_ov017_021a316c(GameResources*);
extern "C" void func_0203cf58(Struct_0203cf58*);
extern "C" void func_02012da4(AllocatorUnion*, void*);
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern "C" void __clear(void*, unsigned int);
extern "C" void* func_0205ec34();
extern "C" int func_020649b0(void*, int, void*);
extern "C" void func_0206f81c(void*);
extern "C" TagValueEntry020e385c* func_020e3808();
extern "C" void* func_020e385c(TagValueEntry020e385c*, int, int);
extern "C" int func_0202c508(void*);
extern "C" void func_020e3994(TagValueEntry020e385c*, int, int);
extern "C" void func_020e392c(TagValueEntry020e385c*, int, int);
extern "C" int func_020100a8(GameState*);
extern "C" void func_020e39d4(TagValueEntry020e385c*, int, int, int);
extern AllocatorUnion data_02114e20;
extern const char data_ov001_02164bef[];
extern const char data_ov001_02164c01[];
extern const char data_ov001_02164c13[];
#if defined(jpn)
extern const char data_ov001_021661c1[];
#else
extern const char data_ov001_02164c21[];
#endif
extern const char data_ov001_02164c26[];
extern const char data_ov001_02164c2d[];
extern const char data_ov001_02164c39[];

static inline SafeAllocator* GetAllocator02154f24(GameResources* resources, int index)
{
    return &resources->allocator_array_38[index];
}

// USA: func_ov001_02154f24
extern "C" ARM int func_ov001_02154f24(LoadState02154f24* self)
{
    GameState* game = GameState::GetInstance();
    GameResources* resources = GetGameResources();
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    void* list = func_0203cf4c();
    LoadArguments02154f24* arguments = func_02012fe4();
    void* other = func_0202ae18();
    if (!TestFlags00(resources, 0x1000))
    {
        if (!func_02094b4c(func_02094a00()))
        {
            return self->state;
        }
    }
    if (IsBrightnessTransitionActive(resources))
    {
        return self->state;
    }
    func_02012de4(&data_02114e20);
    func_020a0cc4(0x40400);
    func_02012de4(&data_02114e20);
    if ((self->flags & 1) && !TestFlags00(resources, 0x1000))
    {
        func_0203e0a0(list, arguments->slot);
        func_ov017_021a316c(resources);
        func_0203cf58((Struct_0203cf58*)func_0203cf4c());
        SafeAllocator* previousAllocator = GetAllocator02154f24(resources, 7);
        self->savedSize = previousAllocator->GetSize();
        void* oldAllocator = previousAllocator->GetSignedAllocator();
        previousAllocator->Destroy();
        func_02012da4(&data_02114e20, oldAllocator);
    }
    else if (self->flags & 4)
    {
        func_0203e0a0(list, arguments->slot);
        func_ov017_021a316c(resources);
        func_0203cf58((Struct_0203cf58*)func_0203cf4c());
        resources->allocator_array_38[7].Reset();
    }
    unsigned int size = 0x40400;
    if (self->flags & 8)
    {
        size -= 0xa000;
    }
    if (self->flags & 1)
    {
        size += self->savedSize;
    }
    if (!TestFlags00(resources, 0x1000))
    {
        void* memory = func_02012d88(&data_02114e20, size);
        self->allocator.CreateTypeA(memory, size);
        self->allocator.Reset();
    }
    else
    {
        ((HMRFAllocator*)self->allocator.pSignedAlloc)->Free(1);
    }
    func_02012de4(&data_02114e20);
    char filename[80];
    if (self->alternatePath)
    {
        sprintf(filename, data_ov001_02164bef, self->name);
    }
    else if (self->pathVariant)
    {
        sprintf(filename, data_ov001_02164c01, self->name);
    }
    else
    {
        sprintf(filename, data_ov001_02164c13, self->name);
    }
    int length = strlen(filename) - 4;
#if defined(jpn)
    memcpy(filename + length, data_ov001_021661c1, 4);
    loader->AddFence();
    self->firstLoad = loader->QueueLoadFile(filename, &self->allocator);
#else
    memcpy(filename + length, data_ov001_02164c21, 4);
    char basename[16];
    __clear(basename, 16);
    memcpy(basename, self->name, strlen(self->name) - 4);
    char firstFile[16];
    sprintf(firstFile, data_ov001_02164c26, basename);
    char secondFile[32];
    sprintf(secondFile, data_ov001_02164c2d, basename);
    loader->AddFence();
    self->firstLoad = loader->QueueLoadFileInGP2(filename, firstFile, &self->allocator);
    self->secondLoad = loader->QueueLoadFileInGP2(filename, secondFile, &self->allocator);
#endif
    if (self->flags & 0x200)
    {
        self->optionalLoad = loader->QueueLoadFile(data_ov001_02164c39, &self->allocator);
    }
    void* context = func_0205ec34();
    LookupRecord02154f24 record;
    record.index = self->lookupId;
    if (func_020649b0(context, 10, &record))
    {
        func_0206f81c(&record);
    }
    TagValueEntry020e385c* table = func_020e3808();
    void* found = func_020e385c(table, 1, 0x71e8);
    if (func_0202c508(other) && !found && !func_020e385c(table, 1, self->tag))
    {
        func_020e3994(table, 1, -1);
        func_020e392c(table, 1, self->tag);
    }
    func_020e39d4(table, func_020100a8(game), 1, self->tag);
    return 2;
}
