#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"

extern "C" void __clear(void* arg0, int arg1);
struct Struct_02015ef4_4;
extern "C" unsigned short func_020de234(struct Struct_02015ef4_4* arg0, int arg1);
struct Struct_02075d64;
extern "C" void func_02075d64(struct Struct_02075d64* arg0);

extern char data_ov023_021fdc23[];
extern char data_ov023_021fdc36[];

// USA: func_ov023_021e0244
extern "C" ARM int func_ov023_021e0244(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e0244_1908=0x6f0, Enum_ov023_021e0244_1848=0x6b4};
#else
 enum {Enum_ov023_021e0244_1908=0x774, Enum_ov023_021e0244_1848=0x738};
#endif
    int var0 = (int)BackgroundLoader::GetInstance();
    int var1 = 0;

    if (*(void**)((char*)arg0 + 0x4c) != 0) {
        char var2[0x40];
        __clear(var2, 0x40);

        if ((*(unsigned short*)((char*)arg0 + Enum_ov023_021e0244_1908) & 0x1000) != 0) {
            struct Struct_02015ef4_4* var3 = *(struct Struct_02015ef4_4**)((char*)arg0 + 0x4c);
            unsigned short var4 = func_020de234(var3, 0);
            struct Struct_02015ef4_4* var5 = *(struct Struct_02015ef4_4**)((char*)arg0 + 0x4c);
            unsigned int var6 = *(unsigned int*)((char*)var5 + 0x10);
            int var7 = (var6 << 4) >> 0x18;
            sprintf(var2, data_ov023_021fdc23, var7, var4);
        } else {
            struct Struct_02015ef4_4* var8 = *(struct Struct_02015ef4_4**)((char*)arg0 + 0x4c);
            unsigned short var9 = func_020de234(var8, 0);
            struct Struct_02015ef4_4* var10 = *(struct Struct_02015ef4_4**)((char*)arg0 + 0x4c);
            unsigned int var11 = *(unsigned int*)((char*)var10 + 0x10);
            int var12 = (var11 << 4) >> 0x18;
            sprintf(var2, data_ov023_021fdc36, var12, var9);
        }

        int var13 = ((BackgroundLoader*)(var0))->QueueLoadFile((const char*)((int)var2), (SafeAllocator*)(0));
        *(int*)((char*)arg0 + Enum_ov023_021e0244_1848) = var13;
        var1 = 1;
    }

    if (var1 != 0) return 4;

    *(unsigned short*)((char*)arg0 + Enum_ov023_021e0244_1908) |= 8;
    func_02075d64(*(struct Struct_02075d64**)((char*)arg0 + 0xc8));
    return 6;
}
