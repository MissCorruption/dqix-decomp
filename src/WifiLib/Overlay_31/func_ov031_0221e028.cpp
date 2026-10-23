#include "NitroSDK/OverlayResponse.h"

extern "C" unsigned short func_ov031_0221e5f8(unsigned short);
extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);

// USA: func_ov031_0221e028
extern "C" THUMB void func_ov031_0221e028(void* arg0, int arg1, int arg2, int arg3, signed char arg4, signed char arg5, const void* arg6) {
    Struct_ov031_0221d3b0* var0 = (Struct_ov031_0221d3b0*)arg0;
    var0->unknown_0_ = func_ov031_0221e5f8(1);
    var0->unknown_2_[0] = 0;
    var0->unknown_2_[1] = 0;
    var0->unknown_6_ = func_ov031_0221e5f8(arg1);
    var0->unknown_8_ = 0;
    var0->unknown_a_ = func_ov031_0221e5f8(arg2);
    var0->unknown_c_ = func_ov031_0221e5f8(arg3);
    var0->unknown_e_ = arg4;
    var0->unknown_f_ = arg5;
    func_ov031_0221e51c(&var0->unknown_10_, arg6, sizeof(var0->unknown_10_));
}
