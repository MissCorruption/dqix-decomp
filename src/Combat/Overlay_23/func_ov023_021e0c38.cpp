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
extern int data_020f2c9c;
#else
extern int data_020f2a20;
#endif


// USA: func_ov023_021e0c38
extern "C" ARM int func_ov023_021e0c38(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e0c38_1740=0x6cc};
#else
 enum {Enum_ov023_021e0c38_1872=0x750};
#endif
    int var0 = (int)BackgroundLoader::GetInstance();
    func_020dfc6c((struct Struct_0201099c_14*)((char*)arg0 + 0xa4));
#if defined(jpn)
    *(int*)((char*)arg0 + Enum_ov023_021e0c38_1740) = ((BackgroundLoader*)(var0))->QueueLoadFileInGP2((const char*)(data_020f2cb0), (const char*)(data_020f2c9c), (SafeAllocator*)(0));
#else
    *(int*)((char*)arg0 + Enum_ov023_021e0c38_1872) = ((BackgroundLoader*)(var0))->QueueLoadFileInGP2((const char*)(data_020f2a1c), (const char*)(data_020f2a20), (SafeAllocator*)(0));
#endif

    return 0x3;
}
