#include <globaldefs.h>
#include "NitroSDK/Cache.h"
#include <std_library_functions.h>

extern "C" int func_02050064(void* arg0);
extern "C" void func_0204fa0c(void* arg0, short arg1, short arg2);
extern "C" int func_0204a5e4(int arg0, int arg1);

struct Struct_0204ffc0 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
};

struct Struct_0204ffc0_2 {
    char unknown_0_[0x4];
    Struct_0204ffc0* unknown_4_;      // 0x4
    void* unknown_8_;                  // 0x8
    char unknown_c_[0xa0-0xc];
    int unknown_a0_;                 // 0xa0
    int unknown_a4_;                    // 0xa4
    char unknown_a8_[0xbc-0xa8];
    short unknown_bc_;                   // 0xbc
    short unknown_be_;                   // 0xbe
    char unknown_c0_[0xc5-0xc0];
    unsigned char unknown_c5_;        // 0xc5
};

// USA: func_0204ffc0
extern "C" ARM void func_0204ffc0(Struct_0204ffc0_2* arg0, int) {
    if (arg0->unknown_4_ == NULL || arg0->unknown_8_ == NULL)
        return;
    unsigned char var0 = arg0->unknown_4_->unknown_1c_0_;
    unsigned char var1 = arg0->unknown_4_->unknown_1c_4_;
    int var2 = func_02050064(arg0);
    if (!var2)
        return;
    if (var2) {
        memcpy(arg0->unknown_8_, (void*)(var2 + arg0->unknown_a0_), arg0->unknown_a4_);
    }
    arg0->unknown_c5_ |= 0x40;
    func_0204fa0c(arg0, arg0->unknown_bc_, arg0->unknown_be_);
    void (*var3)(void*, int, unsigned int) = (void(*)(void*, int, unsigned int))func_0204a5e4(var0, var1);
    CleanInvalidateCacheRange(arg0->unknown_8_, arg0->unknown_a4_);
    var3(arg0->unknown_8_, arg0->unknown_a0_, arg0->unknown_a4_);
}
