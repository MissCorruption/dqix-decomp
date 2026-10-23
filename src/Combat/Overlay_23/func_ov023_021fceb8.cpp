#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" void* func_ov011_021849c8(void*);
extern "C" int func_ov023_021f6bb8(void*);
extern "C" void func_ov023_021f6bb0(void*, int);

extern char data_ov023_021ff7b4;

// USA: func_ov023_021fceb8
extern "C" ARM int func_ov023_021fceb8(void* arg0, void* arg1) {
    void* var0 = func_ov011_021849c8(arg1);
    if (func_ov023_021f6bb8(var0) >= 0) {
        return *(int*)((char*)arg0 + 0x1c);
    }
    char var1[0x50];
    int var2 = (int)BackgroundLoader::GetInstance();
    sprintf(var1, (const char*)&data_ov023_021ff7b4, *(int*)((char*)arg0 + 0x10));
    int var3 = ((BackgroundLoader*)(var2))->QueueLoadFile((const char*)((int)var1), (SafeAllocator*)(0));
    func_ov023_021f6bb0(var0, var3);
    return 1;
}
