#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"

#if defined(jpn)
extern int data_020f2cb0;
extern int data_020f2ca4;
#else
extern int data_020f2a1c;
extern int data_020f2a14;
#endif


struct Struct_ov023_021e05e4 {
    unsigned int unknown_0_[2];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 28;
};

// USA: func_ov023_021e05e4
extern "C" ARM int func_ov023_021e05e4(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e05e4_1908=0x6f0, Enum_ov023_021e05e4_1584=0x62c, Enum_ov023_021e05e4_256=0x80, Enum_ov023_021e05e4_1856=0x6bc};
#else
 enum {Enum_ov023_021e05e4_1908=0x774, Enum_ov023_021e05e4_1584=0x630, Enum_ov023_021e05e4_256=0x100, Enum_ov023_021e05e4_1856=0x740};
#endif
    int var0 = (int)BackgroundLoader::GetInstance();

    if (*(unsigned short*)((char*)arg0 + Enum_ov023_021e05e4_1908) & 0x1000) return 8;
    if (*(void**)((char*)arg0 + 0x4c) == 0) return 3;

    memset((char*)arg0 + Enum_ov023_021e05e4_1584, 0, Enum_ov023_021e05e4_256);

#if defined(jpn)
    int var1 = ((BackgroundLoader*)(var0))->QueueLoadFileInGP2((const char*)(data_020f2cb0), (const char*)(data_020f2ca4), (SafeAllocator*)(0));
#else
    int var1 = ((BackgroundLoader*)(var0))->QueueLoadFileInGP2((const char*)(data_020f2a1c), (const char*)(data_020f2a14), (SafeAllocator*)(0));
#endif

    *(int*)((char*)arg0 + Enum_ov023_021e05e4_1856) = var1;

    unsigned int var2 = ((struct Struct_ov023_021e05e4*)(*(void**)((char*)arg0 + 0x4c)))->unknown_8_0_;
    int var3 = var2 <= 7;
    if (var3 != 0) return 3;

    if (*(unsigned short*)((char*)arg0 + Enum_ov023_021e05e4_1908) & 0x400) return 3;
    return 8;
}
