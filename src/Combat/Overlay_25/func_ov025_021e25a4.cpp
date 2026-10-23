#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" int func_ov025_021e24d0(char* arg0, char* arg1, char* arg2);

#if defined(jpn)
struct Struct_ov025_021ef988 { char unknown_0_[0xc]; unsigned int unknown_1c_; };
#else
struct Struct_ov025_021ef988 { char unknown_0_[0x1c]; unsigned int unknown_1c_; };
#endif
extern Struct_ov025_021ef988 data_ov025_021ef988;

// USA: func_ov025_021e25a4
extern "C" ARM void func_ov025_021e25a4(char* arg0) {
    char var0[0x50];
    char var1[0x50];
    int var2 = (int)BackgroundLoader::GetInstance();
    if (!(data_ov025_021ef988.unknown_1c_ & 0x2000)) {
        ((BackgroundLoader*)((unsigned char*)var2))->AddFence();
        data_ov025_021ef988.unknown_1c_ |= 0x2000;
    }
    if (func_ov025_021e24d0(arg0, var0, var1)) {
        ((BackgroundLoader*)(var2))->QueueLoadFileInGP2((const char*)((int)var0), (const char*)((int)var1), (SafeAllocator*)(0));
    } else {
        ((BackgroundLoader*)(var2))->QueueLoadFile((const char*)((int)arg0), (SafeAllocator*)(0));
    }
}
