#include <globaldefs.h>
#include "NitroSDK/Cache.h"

extern "C" int func_0204a5e4(int arg0, int arg1);

struct Struct_0204fbf8 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
};

struct Struct_0204fbf8_2 {
    char unknown_0_[0x4];
    struct Struct_0204fbf8* unknown_4_;
    void* unknown_8_;
    char unknown_c_[0xa0 - 0xc];
    int unknown_a0_;
    int unknown_a4_;
};

// USA: func_0204fbf8
extern "C" ARM void func_0204fbf8(Struct_0204fbf8_2* arg0) {
    unsigned char var0 = arg0->unknown_4_->unknown_1c_4_;
    unsigned char var1 = arg0->unknown_4_->unknown_1c_0_;
    unsigned char var2[2];
    var2[0] = var1;
    var2[1] = var0;
    void (*var3)(void*, int, unsigned int) = (void(*)(void*, int, unsigned int))func_0204a5e4(var2[0], var2[1]);
    CleanInvalidateCacheRange(arg0->unknown_8_, arg0->unknown_a4_);
    var3(arg0->unknown_8_, arg0->unknown_a0_, arg0->unknown_a4_);
}
