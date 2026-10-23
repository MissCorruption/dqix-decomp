#include "NitroSDK/OverlayResponse.h"

extern "C" int func_ov031_0221d6a8(Struct_ov031_0221d3b0*);

// USA: func_ov031_0221d3b0
extern "C" THUMB int func_ov031_0221d3b0(int arg0, Struct_ov031_0221d3b0_2* arg1, int* arg2, Struct_ov031_0221d3b0_3* arg3) {
    Struct_ov031_0221d3b0* var0 = &arg1->unknown_c_;
    if (func_ov031_0221e638(var0->unknown_0_) < 1) {
        (*arg2)++;
        return arg0;
    }
    if (var0->unknown_f_ != 0x11) {
        (*arg2)++;
        return arg0;
    }
    if (func_ov031_0221d6a8(&arg1->unknown_c_) > 0) {
        (*arg2)++;
        return arg0;
    }
    switch (func_ov031_0221e638(var0->unknown_6_)) {
    case 0x1010:
        arg0 = func_ov031_0221d450(arg0, arg1, arg2, arg3);
        break;
    case 0x2010:
        arg0 = func_ov031_0221d52c(arg0, arg1, arg2, arg3);
        break;
    case 0x3010:
        arg0 = func_ov031_0221d604(arg0, arg1, arg2, arg3);
        break;
    }
    return arg0;
}
