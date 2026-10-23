#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_020534ac;

struct Struct_02075d64;
extern "C" void func_02075d64(struct Struct_02075d64* arg0);

extern "C" void func_02076080(void* arg0, void* arg1, int arg2, int arg3);

// USA: func_ov023_021e0328
extern "C" ARM int func_ov023_021e0328(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e0328_1848=0x6b4, Enum_ov023_021e0328_1908=0x6f0};
#else
 enum {Enum_ov023_021e0328_1848=0x738, Enum_ov023_021e0328_1908=0x774};
#endif
    if (*(int*)((char*)arg0 + Enum_ov023_021e0328_1848) == -1) {
        return 5;
    }

    int var0 = (int)BackgroundLoader::GetInstance();
    if (((BackgroundLoader*)(var0))->GetTaskStatus((int)(*(int*)((char*)arg0 + Enum_ov023_021e0328_1848)))) {
        int var1, var2;
        ((BackgroundLoader*)((struct Struct_020534ac*)var0))->GetLoadedFileByID((int)(*(int*)((char*)arg0 + Enum_ov023_021e0328_1848)), (void**)(&var1), (unsigned int*)(&var2));
        func_02075d64(*(struct Struct_02075d64**)((char*)arg0 + 0xc8));

#if defined(jpn)
        if (var1 != 0) {
#else
        if (var1 != 0 && var2 != 0) {
#endif

            ((SafeAllocator*)(*(void**)((char*)arg0 + 0x40)))->Reset();
            func_02076080(*(void**)((char*)arg0 + 0xc8), *(void**)((char*)arg0 + 0x40), var1, var2);
            *(unsigned short*)((char*)arg0 + Enum_ov023_021e0328_1908) &= ~8;
        }

        ((BackgroundLoader*)(var0))->RemoveTask((int)(*(int*)((char*)arg0 + Enum_ov023_021e0328_1848)));
        *(int*)((char*)arg0 + Enum_ov023_021e0328_1848) = -1;

        int var3 = *(int*)((char*)arg0 + 0xc4);
        *(int*)((char*)arg0 + 0xc4) = *(int*)((char*)arg0 + 0xc8);
        *(int*)((char*)arg0 + 0xc8) = var3;

        int var4 = *(int*)((char*)arg0 + 0x3c);
        *(int*)((char*)arg0 + 0x3c) = *(int*)((char*)arg0 + 0x40);
        *(int*)((char*)arg0 + 0x40) = var4;

        *(unsigned short*)((char*)arg0 + Enum_ov023_021e0328_1908) |= 2;
        return 5;
    }

    return 3;
}
