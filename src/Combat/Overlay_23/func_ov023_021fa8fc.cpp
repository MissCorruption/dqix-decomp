#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"

extern "C" void* func_ov011_021849c8(int arg0);
extern "C" int func_ov023_021f6bb8(void* arg0);
extern "C" void func_ov023_021f6bb0(void* arg0, int arg1);
extern char data_ov023_021fec3c;

// USA: func_ov023_021fa8fc
#if defined(jpn)
extern char data_ov023_021fdef4;

extern "C" ARM int func_ov023_021fa8fc(void* arg0, int arg1) {
    void* var0 = func_ov011_021849c8(arg1);
    if (func_ov023_021f6bb8(var0) >= 0) {
        return *(int*)((char*)arg0 + 0x1c);
    }
    int var1 = (int)BackgroundLoader::GetInstance();
    char var2[0x50];
    sprintf(var2, &data_ov023_021fdef4, *(int*)((char*)arg0 + 0x10));
    int var3 = ((BackgroundLoader*)(var1))->QueueLoadFile((const char*)((int)var2), (SafeAllocator*)(0));
    func_ov023_021f6bb0(var0, var3);
    return 1;
}
#else
extern "C" ARM int func_ov023_021fa8fc(void* arg0, int arg1) {
    void* var4 = func_ov011_021849c8(arg1);
    int var5 = func_ov023_021f6bb8(var4);
    if (var5 < 0) {
        int var6 = (int)BackgroundLoader::GetInstance();
        char var7[0x50];
        if (*(int*)((char*)arg0 + 0x20) != 0) {
            sprintf(var7, &data_ov023_021fec3c, *(int*)((char*)arg0 + 0x20));
        } else {
            sprintf(var7, &data_ov023_021fec3c, *(int*)((char*)arg0 + 0x10));
        }
        int var8;
        if (*(int*)((char*)arg0 + 0x20) != 0) {
            var8 = ((BackgroundLoader*)(var6))->QueueLoadFileInGP2((const char*)((int)var7), (const char*)(*(int*)((char*)arg0 + 0x10)), (SafeAllocator*)(0));
        } else {
            var8 = ((BackgroundLoader*)(var6))->QueueLoadFile((const char*)((int)var7), (SafeAllocator*)(0));
        }
        func_ov023_021f6bb0(var4, var8);
        return 1;
    }
    return *(int*)((char*)arg0 + 0x1c);
}
#endif
