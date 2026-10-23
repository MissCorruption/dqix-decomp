#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "std_library_functions.h"

struct Struct_ov031_0222faac {
    unsigned char unknown_0_[0x40];
    unsigned char unknown_40_[0x80];
    unsigned char unknown_c0_[4];
    unsigned char unknown_c4_[4];
    unsigned char unknown_c8_[4];
    unsigned char unknown_cc_[4];
    unsigned char unknown_d0_[0x16];
    unsigned char unknown_e6_0_ : 2;
    unsigned char unknown_e6_2_ : 6;
    unsigned char unknown_e7_[9];
    unsigned char unknown_f0_[4];
    unsigned char unknown_f4_;
    unsigned char unknown_f5_;
    unsigned char unknown_f6_;
};

extern "C" Struct_ov031_0222faac* func_ov031_02235c70();
extern "C" void func_ov031_0222ff34(unsigned char*, int);
extern "C" void func_ov031_02230088(unsigned char*, int);

// USA: func_ov031_0222faac
extern "C" ARM void func_ov031_0222faac(int arg0, int arg1) {
    Struct_ov031_0222faac* var0 = func_ov031_02235c70();
    switch (arg0) {
    case 0:
        func_ov031_0222ff34(var0->unknown_40_, arg1);
        return;
    case 1: {
        int var1;
        unsigned char var2[0x21];
        switch (var0->unknown_e6_0_) {
        case 0: return;
        case 1: var1 = 10; break;
        case 2: var1 = 26; break;
        case 3: var1 = 32; break;
        }
        if (var0->unknown_e6_2_ == 1) var1 /= 2;
        VectorizedMemset(var2, 0, sizeof(var2));
        memset(var2, '*', var1);
        func_ov031_0222ff34(var2, arg1);
        return;
    }
    case 3:
        if (var0->unknown_f5_ != 0) return;
        func_ov031_02230088(var0->unknown_c0_, arg1);
        return;
    case 4:
        if (var0->unknown_f5_ != 0) return;
        func_ov031_02230088(var0->unknown_f0_, arg1);
        return;
    case 5:
        if (var0->unknown_f5_ != 0) return;
        func_ov031_02230088(var0->unknown_c4_, arg1);
        return;
    case 7:
        if (var0->unknown_f6_ != 0) return;
        func_ov031_02230088(var0->unknown_c8_, arg1);
        return;
    case 8:
        if (var0->unknown_f6_ != 0) return;
        func_ov031_02230088(var0->unknown_cc_, arg1);
        return;
    }
}
