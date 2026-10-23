#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_020534ac;

extern "C" void func_ov023_021f5448(void* arg0, int arg1, int arg2, int arg3);
extern "C" int func_ov023_021f5410(void* arg0);
extern "C" int func_ov023_021f5340(void* arg0);

extern int data_ov023_021fe334;

// USA: func_ov023_021f5340
extern "C" ARM int func_ov023_021f5340(void* arg0) {
    char* var0 = (char*)arg0;
    int var1 = (int)BackgroundLoader::GetInstance();
    short var2 = *(short*)(var0 + 0xc);
    switch (var2) {
    case 1:
        *(int*)(var0 + 0x10) = ((BackgroundLoader*)(var1))->QueueLoadFile((const char*)(data_ov023_021fe334), (SafeAllocator*)(0));
        *(short*)(var0 + 0xc) = 2;
        return func_ov023_021f5340(var0);
    case 2:
        if (((BackgroundLoader*)(var1))->GetTaskStatus((int)(*(int*)(var0 + 0x10))) == 0) return 0;
        *(short*)(var0 + 0xc) = 3;
        return func_ov023_021f5340(var0);
    case 3: {
        int var3 = 0, var4 = 0;
        ((BackgroundLoader*)((struct Struct_020534ac*)var1))->GetLoadedFileByID((int)(*(int*)(var0 + 0x10)), (void**)(&var3), (unsigned int*)(&var4));
        func_ov023_021f5448(var0, *(int*)(var0 + 0x14), var3, var4);
        func_ov023_021f5410(var0);
        return 1;
    }
    default:
        return 1;
    }
}
