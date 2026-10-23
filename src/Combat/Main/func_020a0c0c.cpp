#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

struct Struct02012dd0;
extern "C" unsigned int func_02012dd0(struct Struct02012dd0* self);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);
extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);
unsigned int LoadROMFilesystemFileTables(void* where, unsigned int capacity);
void CacheMainFileAccessors();

extern AllocatorUnion data_02114e20;
extern void* data_02109d90;

// USA: func_020a0c0c
extern "C" ARM void func_020a0c0c() {
    unsigned int max;
    void* tmp;
    BackgroundLoader* loader;
    unsigned int size;

    if (data_02109d90 != NULL)
        return;

    size = LoadROMFilesystemFileTables(NULL, 0);
    max = func_02012dd0((Struct02012dd0*)&data_02114e20);
    if (size + 0x10 > max)
        return;

    loader = BackgroundLoader::GetInstance();
    if (loader != NULL)
        loader->AddLock();

    tmp = func_02012d88(&data_02114e20, max - (size + 0x10));
    data_02109d90 = func_02012d88(&data_02114e20, size);
    func_02012da4(&data_02114e20, tmp);

    if (data_02109d90 != NULL)
        LoadROMFilesystemFileTables(data_02109d90, size);

    if (loader != NULL)
        loader->RemoveLock();

    CacheMainFileAccessors();
}
