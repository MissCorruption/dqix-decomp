#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Filesystem/FileIO.h"

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_020de848(void* arg0);

extern "C" void* func_020de9a4(void* arg0, void* arg1, void* arg2, unsigned int arg3, int arg4, unsigned int arg5);

#if defined(jpn)
extern "C" void func_020e0484(void*, SafeAllocator*, char*, int, unsigned int, int);
#endif
extern AllocatorUnion data_02114e20;
extern char* data_020f2a38;
extern char* data_020f2a30;

// USA: func_0207d6dc
extern "C" ARM void* func_0207d6dc(SafeAllocator* arg0, int arg1, int arg2) {
    unsigned int var0 = (unsigned int)arg2 << 8;
    void* var1 = func_02012d88(&data_02114e20, var0);
    arg0->CreateTypeA(var1, var0);
    arg0->Reset();
    func_020de848((char*)arg0 + 0x14);
#if defined(jpn)
    func_020e0484((char*)arg0 + 0x14, arg0, data_020f2a38, arg1, (unsigned int)arg2 & 0xffff, 1);
#else
    BackgroundLoader::AddLockGlobal();
    unsigned int var2 = 0;
    void* var3 = ExtractFileFromGP2(data_020f2a38, data_020f2a30, &var2);
    if (var3 != NULL) {
        func_020de9a4((char*)arg0 + 0x14, arg0, var3, var2, arg1, (unsigned int)arg2 & 0xffff);
    }
    BackgroundLoader::RemoveLockGlobal();
#endif
    *(void**)((char*)arg0 + 0x2c) = (char*)arg0 + 0x14;
    return (char*)arg0 + 0x14;
}
