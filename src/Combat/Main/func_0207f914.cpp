#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0207f914_32 = 0x1c };
#else
enum { Enum_0207f914_32 = 0x20 };
#endif

#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"

extern "C" void __clear(void* arg0, int arg1);

extern char data_020f0fd0[];
extern char data_020f0fdc[];
extern char data_020f0fe7[];

struct Struct_0207f914 {
    char unknown_0_[0x14];
    int unknown_14_;
    char unknown_18_[Enum_0207f914_32 - 0x18];
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
};

#if defined(jpn)
extern "C" ARM void func_02080654(struct Struct_0207f914* arg0, int arg1, int arg2) {
    if (arg1 != 0 && arg2 != 0) {
        arg0->unknown_14_ = arg1;
        BackgroundLoader* var0 = BackgroundLoader::GetInstance();
        arg0->unknown_20_ = var0->QueueLoadFile((const char*)arg2, (SafeAllocator*)0);
    }
}
#else
// USA: func_0207f914
extern "C" ARM void func_0207f914(struct Struct_0207f914* arg0, int arg1, int arg2, int arg3) {
    if (arg1 != 0 && arg2 != 0 && arg3 != 0) {
        arg0->unknown_14_ = arg1;
        int var0 = (int)BackgroundLoader::GetInstance();
        char var1[0x20];
        __clear(var1, 0x20);
        char var2[0x20];
        __clear(var2, 0x20);
        char var3[0x20];
        __clear(var3, 0x20);
        sprintf(var3, data_020f0fd0, arg3);
        sprintf(var2, data_020f0fdc, arg3);
        sprintf(var1, data_020f0fe7, arg3);
        arg0->unknown_20_ = ((BackgroundLoader*)(var0))->QueueLoadFileInGP2((const char*)(arg2), (const char*)((int)var3), (SafeAllocator*)(0));
        arg0->unknown_24_ = ((BackgroundLoader*)(var0))->QueueLoadFileInGP2((const char*)(arg2), (const char*)((int)var2), (SafeAllocator*)(0));
        arg0->unknown_28_ = ((BackgroundLoader*)(var0))->QueueLoadFileInGP2((const char*)(arg2), (const char*)((int)var1), (SafeAllocator*)(0));
    }
}

#endif
