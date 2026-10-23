#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_02206758 {
    char unknown_0_[0x10];
    char* unknown_10_;
    int unknown_14_;
    char* unknown_18_;
    int unknown_1c_;
};

// USA: func_ov031_02206758
extern "C" ARM int func_ov031_02206758(char* arg0, int arg1, Struct_ov031_02206758* arg2) {
    int var0 = arg2->unknown_14_;
    int var1 = arg2->unknown_1c_;
    if (var0 > arg1) {
        var0 = arg1;
        var1 = 0;
    } else {
        int var2 = arg1 - var0;
        if (var1 > var2) {
            var1 = var2;
        }
    }
    if (var0 > 0) {
        VectorizedInvertedMemcpy(arg2->unknown_10_, arg0, var0);
        arg2->unknown_10_ += var0;
        arg2->unknown_14_ -= var0;
    }
    if (var1 > 0) {
        VectorizedInvertedMemcpy(arg2->unknown_18_, arg0 + var0, var1);
        arg2->unknown_18_ += var1;
        arg2->unknown_1c_ -= var1;
    }
    return var0 + var1;
}
