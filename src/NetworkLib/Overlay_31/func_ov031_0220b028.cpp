#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_0220b028 {
    unsigned char unknown_0_[0x10];
    unsigned int unknown_10_;
    unsigned int unknown_14_;
    unsigned char unknown_18_[0x40];
};

extern "C" void func_ov031_0220abc4(Struct_ov031_0220b028*, const void*);

// USA: func_ov031_0220b028
extern "C" ARM void func_ov031_0220b028(Struct_ov031_0220b028* arg0, const void* arg1, unsigned int arg2) {
    int var0;
    unsigned int var1, var2;
    var1 = (arg0->unknown_10_ >> 3) & 0x3f;
    if ((arg0->unknown_10_ += (arg2 << 3)) < (arg2 << 3)) arg0->unknown_14_++;
    arg0->unknown_14_ += (arg2 >> 29);
    var2 = 0x40 - var1;
    if (arg2 >= var2) {
        VectorizedInvertedMemcpy(arg1, arg0->unknown_18_ + var1, var2);
        var1 = 0;
        func_ov031_0220abc4(arg0, arg0->unknown_18_);
        for (var0 = var2; var0 + 63 < arg2; var0 += 64) {
            func_ov031_0220abc4(arg0, (const void*)((unsigned int)arg1 + var0));
        }
    } else {
        var0 = 0;
    }
    VectorizedInvertedMemcpy((const void*)((unsigned int)arg1 + var0), arg0->unknown_18_ + var1, arg2 - var0);
}
