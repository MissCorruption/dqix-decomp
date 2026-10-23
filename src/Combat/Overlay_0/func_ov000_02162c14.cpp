#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x371c
#else
#define REGION_OFFSET_0 0x3760
#endif

struct Struct_ov000_02162c14 {
    char unknown_0_[0x18];
    signed char unknown_18_;
    char unknown_19_[0x1c - 0x19];
    signed char unknown_1c_;
    signed char unknown_1d_;
    char unknown_1e_[0x26 - 0x1e];
    unsigned short unknown_26_;
    char unknown_28_[0x2c - 0x28];
    short unknown_2c_;
    signed char unknown_2e_;
};

extern "C" struct Struct_ov000_02162c14* func_ov000_02161318(char* arg0, int arg1);
extern "C" int func_ov000_021761c8(char* arg0, int arg1);
extern "C" int func_ov000_021761ec(char* arg0, int arg1);

// USA: func_ov000_02162c14
extern "C" ARM void func_ov000_02162c14(char* arg0, int arg1, char* arg2) {
    struct Struct_ov000_02162c14* var0 = func_ov000_02161318(arg0 + REGION_OFFSET_0, arg1);
    if (var0 == 0) {
        return;
    }
    signed char var1 = var0->unknown_18_;
    arg2[0] = *(signed char*)((char*)var0 + var1 + 0x10);
    arg2[1] = var0->unknown_1c_;
    arg2[2] = (signed char)func_ov000_021761c8(arg0 + REGION_OFFSET_0, var0->unknown_1d_);
    arg2[3] = (signed char)func_ov000_021761ec(arg0 + REGION_OFFSET_0, var0->unknown_1d_);
    *(short*)(arg2 + 6) = var0->unknown_2c_;
    arg2[4] = var0->unknown_2e_;
    *(unsigned short*)(arg2 + 8) = var0->unknown_26_;
}
