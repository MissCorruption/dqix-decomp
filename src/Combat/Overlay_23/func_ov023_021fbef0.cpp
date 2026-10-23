#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" void* func_ov011_021849c8(void*);
extern "C" int func_ov023_021f6bb8(void*);
extern "C" void func_ov023_021f6bb0(void*, int);

extern int data_020f2a38;
extern int data_020f2a30;

// USA: func_ov023_021fbef0
#if defined(jpn)
extern "C" ARM int func_ov023_021fbef0(void* arg0, void* arg1) {
    void* var0 = func_ov011_021849c8(arg1);
    if (func_ov023_021f6bb8(var0) >= 0) {
        return *(int*)((char*)arg0 + 0x1c);
    }
    int var1 = ((BackgroundLoader*)((int)BackgroundLoader::GetInstance()))->QueueLoadGP1((const char*)(data_020f2a38), (SafeAllocator*)(0));
    func_ov023_021f6bb0(var0, var1);
    return 1;
}
#else
extern "C" ARM int func_ov023_021fbef0(void* arg0, void* arg1) {
    void* var2 = func_ov011_021849c8(arg1);
    if (func_ov023_021f6bb8(var2) >= 0) {
        return *(int*)((char*)arg0 + 0x1c);
    }
    int var3 = ((BackgroundLoader*)((int)BackgroundLoader::GetInstance()))->QueueLoadFileInGP2((const char*)(data_020f2a38), (const char*)(data_020f2a30), (SafeAllocator*)(0));
    func_ov023_021f6bb0(var2, var3);
    return 1;
}
#endif
