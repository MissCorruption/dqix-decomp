#include <globaldefs.h>
#include "NitroSDK/Cache.h"
#include "NitroSDK/Memory.h"

extern "C" int func_020d424c(int arg0, int arg1);
extern "C" void* func_020d41d8(void);
extern "C" void func_020d404c(int arg0, int arg1);
extern "C" int func_020d4168(void* arg0, unsigned int arg1);

struct Struct_020d54d0 { unsigned short unknown_0_; };

struct Struct_020d54d0_2 {
    unsigned short unknown_0_;
    Struct_020d54d0* unknown_4_;
    unsigned char unknown_8_[0x18];
    int unknown_20_;
    unsigned char unknown_24_[2];
    unsigned short unknown_26_;
};


// USA: func_020d54d0
extern "C" ARM int func_020d54d0(int arg0, Struct_020d54d0* arg1, const void* arg2, int arg3, unsigned short arg4) {
    int var0 = func_020d424c(1, 2);
    if (var0 != 0) {
        return var0;
    }
    if (arg1 == NULL) {
        return 6;
    }
    CleanCacheRange(arg1, arg1->unknown_0_ << 1);
    void* var1 = func_020d41d8();
    *(unsigned short*)((char*)var1 + 0x150) = 0;
    *(int*)((char*)var1 + 0x14c) = 0;
    func_020d404c(0xc, arg0);
    struct Struct_020d54d0_2 var2;
    var2.unknown_0_ = 0xc;
    var2.unknown_4_ = arg1;
    if (arg2 != NULL) {
        VectorizedInvertedMemcpy(arg2, var2.unknown_8_, 0x18);
    } else {
        VectorizedMemset(var2.unknown_8_, 0, 0x18);
    }
    var2.unknown_20_ = arg3;
    var2.unknown_26_ = arg4;
    var0 = func_020d4168(&var2, 0x28);
    return (var0 == 0) ? 2 : var0;
}
