#include <globaldefs.h>
#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

#include "Filesystem/BackgroundLoader.h"

struct Struct_ov014_021845ec;
extern "C" int func_ov014_02188d10(struct Struct_ov014_021845ec* arg0);
extern "C" void func_ov014_02188d48(void* arg0, int arg1, void* arg2, unsigned int arg3, short arg4);
extern "C" int func_ov014_02188c34(void* arg0);

extern int data_ov014_021897c4;

// USA: func_ov014_02188c34
extern "C" ARM int func_ov014_02188c34(void* arg0) {
    char* var0 = (char*)arg0;
    int var1 = (int)BackgroundLoader::GetInstance();
    short var2 = *(short*)(var0 + 0x16);
    switch (var2) {
    case 1:
#if defined(jpn)
        *(int*)(var0 + 0x18) = ((BackgroundLoader*)(var1))->QueueLoadFile((const char*)(*(int*)&data_ov014_021897c4), (SafeAllocator*)(0));
#else
        *(int*)(var0 + 0x18) = ((BackgroundLoader*)(var1))->QueueLoadFileInGP2((const char*)(*(int*)((char*)&data_ov014_021897c4 + 4)), (const char*)(*(int*)&data_ov014_021897c4), (SafeAllocator*)(0));
#endif
        *(short*)(var0 + 0x16) = 2;
        return func_ov014_02188c34(var0);
    case 2:
        if (((BackgroundLoader*)(var1))->GetTaskStatus((int)(*(int*)(var0 + 0x18))) == 0) return 0;
        *(short*)(var0 + 0x16) = 3;
        return func_ov014_02188c34(var0);
    case 3: {
        int var3 = 0, var4 = 0;
        ((BackgroundLoader*)(var1))->GetLoadedFileByID((int)(*(int*)(var0 + 0x18)), (void**)(&var3), (unsigned int*)(&var4));
        func_ov014_02188d48(var0, *(int*)(var0 + 0x1c), (void*)var3, (unsigned int)var4, *(short*)(var0 + 0x14));
        func_ov014_02188d10((struct Struct_ov014_021845ec*)var0);
        return 1;
    }
    default:
        return 1;
    }
}
