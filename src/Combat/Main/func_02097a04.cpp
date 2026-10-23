#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_020534ac;

struct Struct_02013fb4;
extern "C" void func_02097ac0(void* arg0, void* arg1, struct Struct_02013fb4* arg2, int arg3);

extern "C" {
}

extern int data_020f14ec;

struct Struct_02097a04 {
    char unknown_0_[0x18];
    int unknown_18_;
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
};

// USA: func_02097a04
extern "C" ARM int func_02097a04(struct Struct_02097a04* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();
    unsigned char var1 = arg0->unknown_1c_;
    if (var1 == 0) {
        arg0->unknown_18_ = ((BackgroundLoader*)(var0))->QueueLoadFile((const char*)((int)&data_020f14ec), (SafeAllocator*)(0));
        arg0->unknown_1c_ = arg0->unknown_1c_ + 1;
        goto ret0;
    }
    if (var1 != 1 || !((BackgroundLoader*)(var0))->GetTaskStatus((int)(arg0->unknown_18_))) {
        goto ret0;
    }
    {
        int var2, var3;
        ((BackgroundLoader*)((struct Struct_020534ac*)var0))->GetLoadedFileByID((int)(arg0->unknown_18_), (void**)(&var2), (unsigned int*)(&var3));
        if (var2 != 0) {
            func_02097ac0(arg0, (void*)arg0->unknown_1d_, (struct Struct_02013fb4*)var2, var3);
        }
    }
    ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_18_));
    arg0->unknown_18_ = -1;
    arg0->unknown_1c_ = 0;
    return 1;
ret0:
    return 0;
}
