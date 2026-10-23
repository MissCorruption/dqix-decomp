#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_02000c9c_79 {
    char unknown_0_[0x30];
    short unknown_30_;
    signed char unknown_32_;
    char unknown_33_[0x44 - 0x33];
};

struct Struct_ov025_021eb0f4 {
    char unknown_0_[0x124];
    int unknown_124_;
    struct Struct_02000c9c_79 unknown_128_[1];
};


struct Struct_ov025_021eb0f4_2 {
    char unknown_0_[0x582];
    unsigned char unknown_582_;
    char unknown_583_[1];
    unsigned short unknown_584_[1];
};

// USA: func_ov025_021eb0f4
extern "C" ARM int func_ov025_021eb0f4(struct Struct_ov025_021eb0f4_2* arg0) {
    struct Struct_ov025_021eb0f4* var0 = (struct Struct_ov025_021eb0f4*)(int)BackgroundLoader::GetInstance();
    unsigned short* var1 = arg0->unknown_584_;
    for (int var2 = 0; var2 < arg0->unknown_582_; var1++, var2++) {
        if (!((BackgroundLoader*)(var0))->GetTaskStatus((int)(*var1))) {
            return 0;
        }
    }
    return 1;
}
