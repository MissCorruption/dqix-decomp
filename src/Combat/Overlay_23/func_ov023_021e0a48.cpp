#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_0201099c_14;
extern "C" void func_020dfc6c(struct Struct_0201099c_14*);


#if defined(jpn)
extern int data_020f2cb0;
#else
extern int data_020f2a1c;
#endif
#if defined(jpn)
extern int data_020f2cac;
#else
extern int data_020f2a10;
#endif


// USA: func_ov023_021e0a48
extern "C" ARM int func_ov023_021e0a48(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e0a48_1732=0x6c4};
#else
 enum {Enum_ov023_021e0a48_1864=0x748};
#endif
    int var0 = (int)BackgroundLoader::GetInstance();
    func_020dfc6c((struct Struct_0201099c_14*)((char*)arg0 + 0x8c));
#if defined(jpn)
    *(int*)((char*)arg0 + Enum_ov023_021e0a48_1732) = ((BackgroundLoader*)(var0))->QueueLoadFileInGP2((const char*)(data_020f2cb0), (const char*)(data_020f2cac), (SafeAllocator*)(0));
#else
    *(int*)((char*)arg0 + Enum_ov023_021e0a48_1864) = ((BackgroundLoader*)(var0))->QueueLoadFileInGP2((const char*)(data_020f2a1c), (const char*)(data_020f2a10), (SafeAllocator*)(0));
#endif

    return 0xc;
}
