#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_020e3b8c {
    char unknown_0_[0x14];
    int unknown_14_[2];
};

// USA: func_020e3ed8
extern "C" ARM void func_020e3ed8(struct Struct_020e3b8c* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();
    int var1;
    for (var1 = 0; var1 < 2; var1++) {
        if (arg0->unknown_14_[var1] != -1) {
            ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_14_[var1]));
        }
    }
}
