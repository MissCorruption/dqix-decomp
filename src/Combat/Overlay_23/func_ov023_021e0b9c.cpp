#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_020534ac;

extern "C" {
    void func_020df850(void* arg0, void* arg1, int arg2, int arg3, int arg4);
}

struct Struct_ov023_021e0b9c {
    char unknown_0_[0x28];
    int unknown_28_;
    char unknown_2c_[0x4c - 0x2c];
    void* unknown_4c_;
    char unknown_50_[0x7c - 0x50];
    int unknown_7c_;
#if defined(jpn)
    char unknown_80_[0x6c8 - 0x80];
#else
    char unknown1_80_[0x74c - 0x80];
#endif

    int unknown_74c_;
};

// USA: func_ov023_021e0b9c
extern "C" ARM int func_ov023_021e0b9c(struct Struct_ov023_021e0b9c* arg0) {
    if (arg0->unknown_74c_ == -1) {
        return -1;
    }

    int var0 = (int)BackgroundLoader::GetInstance();
    if (((BackgroundLoader*)(var0))->GetTaskStatus((int)(arg0->unknown_74c_))) {
        int var1, var2;
        ((BackgroundLoader*)((struct Struct_020534ac*)var0))->GetLoadedFileByID((int)(arg0->unknown_74c_), (void**)(&var1), (unsigned int*)(&var2));
#if defined(jpn)
        {
#else
        if (var1 != 0 && var2 != 0) {
#endif

            int var3 = *(short*)((char*)arg0->unknown_4c_ + 0x18);
            func_020df850(&arg0->unknown_7c_, &arg0->unknown_28_, var1, var2, var3);
        }

        ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_74c_));
        arg0->unknown_74c_ = -1;
        return 0xf;
    }

    return 0xd;
}
