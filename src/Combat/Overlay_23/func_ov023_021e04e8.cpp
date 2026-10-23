#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_020534ac;

extern "C" void func_ov023_021e20f0(void* arg0, void* arg1, int arg2, int arg3);

extern "C" void func_ov023_021dbd10(void* arg0, void* arg1);

struct Struct_ov023_021e04e8 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
};

// USA: func_ov023_021e04e8
extern "C" ARM int func_ov023_021e04e8(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e04e8_1852=0x6b8, Enum_ov023_021e04e8_1946=0x716};
#else
 enum {Enum_ov023_021e04e8_1852=0x73c, Enum_ov023_021e04e8_1946=0x79a};
#endif
    if (*(int*)((char*)arg0 + Enum_ov023_021e04e8_1852) == -1) {
        void* var0 = *(void**)((char*)arg0 + 0x4c);
        if (var0 != 0) {
            func_ov023_021dbd10((char*)arg0 + 0xcc, var0);
        }
        return 7;
    }

    int var1 = (int)BackgroundLoader::GetInstance();
    if (((BackgroundLoader*)(var1))->GetTaskStatus((int)(*(int*)((char*)arg0 + Enum_ov023_021e04e8_1852)))) {
        int var2, var3;
        ((BackgroundLoader*)((struct Struct_020534ac*)var1))->GetLoadedFileByID((int)(*(int*)((char*)arg0 + Enum_ov023_021e04e8_1852)), (void**)(&var2), (unsigned int*)(&var3));

#if defined(jpn)
        {
#else
        if (var2 != 0 && var3 != 0) {
#endif

            ((SafeAllocator*)arg0)->Reset();
            func_ov023_021e20f0((char*)arg0 + 0xcc, arg0, var2, var3);
        }

        ((BackgroundLoader*)(var1))->RemoveTask((int)(*(int*)((char*)arg0 + Enum_ov023_021e04e8_1852)));
        *(int*)((char*)arg0 + Enum_ov023_021e04e8_1852) = -1;

        void* var4 = *(void**)((char*)arg0 + 0x4c);
        if (var4 != 0) {
            func_ov023_021dbd10((char*)arg0 + 0xcc, var4);
            int var5 = ((struct Struct_ov023_021e04e8*)*(void**)((char*)arg0 + 0x4c))->unknown_8_0_ <= 7;
            *(unsigned char*)((char*)arg0 + Enum_ov023_021e04e8_1946) = var5 != 0;
        }

        return 7;
    }

    return 5;
}
