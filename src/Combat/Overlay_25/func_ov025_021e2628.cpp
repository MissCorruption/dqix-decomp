#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_ov025_021ef988_2 {
#if defined(jpn)
    char unknown_0_[0xc];
#else
    char unknown1_0_[0x1c];
#endif
    unsigned int unknown_1c_;
};
extern struct Struct_ov025_021ef988_2 data_ov025_021ef988;


// USA: func_ov025_021e2628
extern "C" ARM int func_ov025_021e2628(int arg0, int arg1) {
    int var0 = (int)BackgroundLoader::GetInstance();
    if (!(data_ov025_021ef988.unknown_1c_ & 0x2000)) {
        ((BackgroundLoader*)((unsigned char*)var0))->AddFence();
        data_ov025_021ef988.unknown_1c_ |= 0x2000;
    }
    return ((BackgroundLoader*)(var0))->QueueLoadFileInGP2((const char*)(arg0), (const char*)(arg1), (SafeAllocator*)(0));
}
