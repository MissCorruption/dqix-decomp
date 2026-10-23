#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "Filesystem/BackgroundLoader.h"

extern "C" void func_02022b90(void* arg0, int* arg1);

struct Struct_020dc3d4 {
    unsigned char unknown_0_[IS_JPN ? 0x919 : 0x9c5];
    unsigned char unknown_9c5_;
    unsigned char unknown_9c6_[0xa0c - 0x9c6];
    int unknown_a0c_;
};

// USA: func_020e063c
extern "C" ARM void func_020e063c(struct Struct_020dc3d4* arg0, int arg1, int arg2) {
    int var0 = (int)BackgroundLoader::GetInstance();
    arg0->unknown_9c5_ = 1;
    func_02022b90(arg0, &arg0->unknown_a0c_);
    arg0->unknown_a0c_ = ((BackgroundLoader*)(var0))->QueueLoadFileInGP2((const char*)(arg1), (const char*)(arg2), (SafeAllocator*)(0));
}
