#include <globaldefs.h>
#include "NitroSDK/OverlayMD5.h"

extern "C" void func_ov031_02222818(void*, const void*, unsigned int);
extern "C" void func_ov031_02221f78(unsigned int*, const unsigned char*);

// USA: func_ov031_02221eac
extern "C" THUMB void func_ov031_02221eac(Struct_ov031_02221e84* arg0, const void* arg1, unsigned int arg2) {
    const unsigned char* var0 = static_cast<const unsigned char*>(arg1);
    unsigned int var1;
    unsigned int var2 = (arg0->unknown_10_[0] >> 3) & 63;
    arg0->unknown_10_[0] += arg2 << 3;
    if (arg0->unknown_10_[0] < (arg2 << 3)) arg0->unknown_10_[1]++;
    arg0->unknown_10_[1] += arg2 >> 29;
    var1 = 64 - var2;
    if (arg2 >= var1) {
        func_ov031_02222818(arg0->unknown_18_ + var2, var0, var1);
        func_ov031_02221f78(arg0->unknown_0_, arg0->unknown_18_);
        if (var1 + 63 < arg2) {
            do {
                func_ov031_02221f78(arg0->unknown_0_, var0 + var1);
                var1 += 64;
            } while (var1 + 63 < arg2);
        }
        var2 = 0;
    } else var1 = 0;
    func_ov031_02222818(arg0->unknown_18_ + var2, var0 + var1, arg2 - var1);
}
