#include <globaldefs.h>
#include "std_library_functions.h"

void CleanInvalidateCacheRange(const void* addr, unsigned int size);

struct Struct_0204ab4c {
    char unknown_0_[2];
    unsigned short unknown_2_;
};

struct Struct_0204ab4c_2 {
    char unknown_0_[8];
    unsigned int unknown_8_;
    char unknown_c_[0x20 * 16];
};

// USA: func_0204ab4c
extern "C" ARM void func_0204ab4c(struct Struct_0204ab4c* arg0, struct Struct_0204ab4c_2* arg1) {
    unsigned int var0;
    int var1;
    int var2;
    memcpy(&var0, &arg1->unknown_8_, 4);
    if (arg0->unknown_2_ == 0xffff) {
        CleanInvalidateCacheRange((const void*)((int)&arg1->unknown_c_[0]), var0);
        return;
    }
    var1 = arg0->unknown_2_ & 0xff;
    for (var2 = 0; var2 < 16; var2++) {
        if (var1 & 1) {
            CleanInvalidateCacheRange((const void*)((int)&arg1->unknown_c_[var2 * 0x20]), 0x20);
        }
        var1 = (var1 >> 1) & 0xff;
    }
}
