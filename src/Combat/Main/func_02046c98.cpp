#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern int data_020f00cc;

struct Struct_02046c98 {
    unsigned char unknown_0_[0xe8];
    int unknown_e8_;   // 0xe8
    int unknown_ec_;   // 0xec
};

// USA: func_02046c98
extern "C" ARM void func_02046c98(struct Struct_02046c98* arg0) {
    if (arg0->unknown_e8_ != 0) return;
    arg0->unknown_ec_ = ((BackgroundLoader*)((int)BackgroundLoader::GetInstance()))->QueueLoadFile((const char*)((int)&data_020f00cc), (SafeAllocator*)(0));
}
