#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_020534ac;
extern "C" {
}
extern "C" void func_ov023_021db314(void* arg0, short* arg1, short* arg2);
extern "C" int func_020e0028(void* arg0, void* arg1, int arg2, int arg3, void* arg4, int arg5);
extern "C" void func_ov023_021e0eb8(void* arg0);

// USA: func_ov023_021e0a90
extern "C" ARM int func_ov023_021e0a90(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e0a90_1864=0x6c4};
#else
 enum {Enum_ov023_021e0a90_1864=0x748};
#endif
    if (*(int*)((char*)arg0 + Enum_ov023_021e0a90_1864) == -1) {
        return 0xd;
    }

    int var0 = (int)BackgroundLoader::GetInstance();
    if (((BackgroundLoader*)(var0))->GetTaskStatus((int)(*(int*)((char*)arg0 + Enum_ov023_021e0a90_1864)))) {
        int var1;
        int var2;
        ((BackgroundLoader*)((struct Struct_020534ac*)var0))->GetLoadedFileByID((int)(*(int*)((char*)arg0 + Enum_ov023_021e0a90_1864)), (void**)(&var1), (unsigned int*)(&var2));
#if defined(jpn)
        {
#else
        if (var1 != 0 && var2 != 0) {
#endif

            short var3[12];
            short var4;
            func_ov023_021db314((char*)arg0 + 0x6c, var3, &var4);
            func_020e0028((char*)arg0 + 0x8c, (char*)arg0 + 0x28, var1, var2, var3, (unsigned short)var4);
        }

        ((BackgroundLoader*)(var0))->RemoveTask((int)(*(int*)((char*)arg0 + Enum_ov023_021e0a90_1864)));
        *(int*)((char*)arg0 + Enum_ov023_021e0a90_1864) = -1;
        func_ov023_021e0eb8(arg0);
        return 0xd;
    }

    return 0xb;
}
