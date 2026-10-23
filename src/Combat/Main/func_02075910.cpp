#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_02108dfc {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    char* unknown_4_;
};

extern struct Struct_02108dfc data_02108dfc;
extern unsigned char data_020f0dc8;

extern "C" void func_020d0040(int arg0);
extern "C" int func_020d06d4();
extern "C" void func_020d0050(int arg0);
int GetCardReadManagerSharedStatus();
extern "C" int func_020d0834();
extern "C" void func_020758a0(void* arg0);
extern "C" void func_020d05ec(int arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, int arg6, int arg7, int arg8);

// USA: func_02075910
extern "C" ARM int func_02075910(int arg0, int arg1, int arg2, int arg3) {
    if (data_02108dfc.unknown_4_) {
        if (arg0 >= 0x8000) {
            arg0 -= 0x8000;
        }
        VectorizedInvertedMemcpy(data_02108dfc.unknown_4_ + arg0, (void*)arg1, (unsigned int)arg2);
        return 1;
    }

    if (data_020f0dc8 == 0) {
        return 0;
    }

    data_02108dfc.unknown_0_ = 0;
    int var0 = 1;
    func_020d0040((int)data_02108dfc.unknown_2_);

    int var1 = ((func_020d06d4() & 0xff) == 1);
    if (var1) {
        func_020d05ec(arg0, arg1, arg2, func_020758a0, 0, 1, 6, 1, 0);
    } else {
        var1 = ((func_020d06d4() & 0xff) == 2);
        if (var1) {
            func_020d05ec(arg0, arg1, arg2, func_020758a0, 0, 1, 6, 1, 0);
        } else {
            var1 = ((func_020d06d4() & 0xff) == 3);
            if (var1) {
                func_020d05ec(arg0, arg1, arg2, func_020758a0, 0, 1, 6, 1, 0);
            }
        }
    }

    if (arg3) {
        if (GetCardReadManagerSharedStatus()) {
            var0 = 0;
        }
    } else {
        func_020d0834();
        if (GetCardReadManagerSharedStatus()) {
            var0 = 0;
        }
        func_020d0050((int)data_02108dfc.unknown_2_);
        data_02108dfc.unknown_0_ = 1;
    }

    return var0;
}
