#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_020dbdc0;
extern "C" void func_020dbf70(struct Struct_020dbdc0* arg0);

struct Struct_020dbf18 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};

// USA: func_020dbf18
extern "C" ARM int func_020dbf18(struct Struct_020dbf18* arg0, int arg1, int arg2, int arg3, int arg4) {
    int var0 = (int)BackgroundLoader::GetInstance();
    func_020dbf70((struct Struct_020dbdc0*)arg0);
    arg0->unknown_0_ = arg2;
    arg0->unknown_4_ = arg3;
    arg0->unknown_8_ = arg4;
    arg0->unknown_c_ = ((BackgroundLoader*)(var0))->QueueLoadFile((const char*)(arg1), (SafeAllocator*)(0));
    arg0->unknown_10_ = 1;
    return 0;
}
