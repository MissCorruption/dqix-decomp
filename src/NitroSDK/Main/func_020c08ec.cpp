#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_020c08ec {
    unsigned int unknown_0_[5];
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    unsigned int unknown_1c_;
    unsigned char unknown_20_[0x40];
};

typedef void (*Type_0200fd14)(Struct_020c08ec*, const void*, unsigned int);
extern Type_0200fd14 data_020f2154;

// USA: func_020c08ec
extern "C" ARM void func_020c08ec(Struct_020c08ec* arg0, const unsigned char* arg1, unsigned int arg2) {
    unsigned char* var0 = arg0->unknown_20_;
    if (arg2 == 0) {
        return;
    }

    unsigned int var1 = arg0->unknown_14_;
    unsigned int var2 = var1 + (arg2 << 3);
    if (var2 < var1) {
        arg0->unknown_18_ = arg0->unknown_18_ + 1;
    }
    arg0->unknown_18_ = arg0->unknown_18_ + (arg2 >> 0x1d);
    arg0->unknown_14_ = var2;

    unsigned int var3 = arg0->unknown_1c_;
    if (var3 != 0) {
        if (var3 + arg2 >= 0x40) {
            unsigned int var4 = 0x40 - var3;
            VectorizedInvertedMemcpy(arg1, var0 + var3, var4);
            arg2 -= var4;
            arg1 += var4;
            data_020f2154(arg0, var0, 0x40);
            arg0->unknown_1c_ = 0;
        } else {
            VectorizedInvertedMemcpy(arg1, var0 + var3, arg2);
            arg0->unknown_1c_ = arg0->unknown_1c_ + arg2;
            return;
        }
    }

    if (arg2 >= 0x40) {
        int var5 = arg2 & ~0x3f;
        arg2 -= var5;
        if (((unsigned int)arg1 & 0x3) == 0) {
            data_020f2154(arg0, arg1, var5);
            arg1 += var5;
        } else {
            do {
                VectorizedInvertedMemcpy(arg1, var0, 0x40);
                arg1 += 0x40;
                data_020f2154(arg0, var0, 0x40);
                var5 -= 0x40;
            } while (var5 > 0);
        }
    }

    arg0->unknown_1c_ = arg2;
    if (arg2 == 0) {
        return;
    }
    VectorizedInvertedMemcpy(arg1, var0, arg2);
}
