#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void func_020d0040(int arg0);
extern "C" int func_020d06d4();
extern "C" void func_020d0050(int arg0);
extern "C" void func_020758a4(void* arg0);
int GetCardReadManagerSharedStatus();
extern "C" int func_020d0834();
extern "C" void func_020d05ec(const void* arg0, int arg1, unsigned int arg2, void (*arg3)(void*), int arg4, int arg5, int arg6, int arg7, int arg8);

struct Struct_02108dfc {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    void* unknown_4_;
};

extern struct Struct_02108dfc data_02108dfc;
extern unsigned char data_020f0dc8;

// USA: func_02075acc
extern "C" ARM int func_02075acc(int arg0, void* arg1, unsigned int arg2, int arg3) {
    int var0;
    int var1;
    int var2;
    int var3;

    if (data_02108dfc.unknown_4_ != 0) {
        if (arg0 >= 0x8000) {
            arg0 -= 0x8000;
        }
        VectorizedInvertedMemcpy(arg1, (void*)((unsigned char*)data_02108dfc.unknown_4_ + arg0), arg2);
        return 1;
    }

    if (data_020f0dc8 == 0) {
        return 0;
    }

    data_02108dfc.unknown_0_ = 0;
    var0 = 1;
    func_020d0040((int)data_02108dfc.unknown_2_);

    var1 = (func_020d06d4() & 0xff) == 1;
    if (var1) {
        func_020d05ec(arg1, arg0, arg2, func_020758a4, 0, 1, 8, 10, 2);
    } else {
        var2 = (func_020d06d4() & 0xff) == 2;
        if (var2) {
            func_020d05ec(arg1, arg0, arg2, func_020758a4, 0, 1, 7, 10, 2);
        } else {
            var3 = (func_020d06d4() & 0xff) == 3;
            if (var3) {
                func_020d05ec(arg1, arg0, arg2, func_020758a4, 0, 1, 8, 10, 2);
            }
        }
    }

    if (arg3 != 0) {
        if (GetCardReadManagerSharedStatus() != 0) {
            var0 = 0;
        }
    } else {
        func_020d0834();
        if (GetCardReadManagerSharedStatus() != 0) {
            var0 = 0;
        }
        func_020d0050((int)data_02108dfc.unknown_2_);
        data_02108dfc.unknown_0_ = 1;
    }

    return var0;
}
