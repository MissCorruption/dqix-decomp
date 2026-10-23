#include <globaldefs.h>

extern "C" void func_0205ac40(void* arg0, void* arg1);

struct Struct_ov000_02181164 {
    char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    char unknown_1c_[0x22 - 0x1c];
    unsigned char unknown_22_;
    char unknown_23_[0x26 - 0x23];
    signed char unknown_26_;
    char unknown_27_[0x28 - 0x27];
};

// USA: func_ov000_02181164
extern "C" ARM void func_ov000_02181164(void* arg0, int arg1, struct Struct_ov000_02181164* arg2, int arg3, int arg4,
    int arg5, int arg6, int arg7) {
    if (arg1 < 0) return;
    if (arg2 == NULL) return;
    do {
        struct Struct_ov000_02181164* var0 = &arg2[arg1 % 10];
        var0->unknown_14_ = arg3 << 12;
        var0->unknown_18_ = arg4 << 12;
        var0->unknown_22_ = arg6;
        var0->unknown_26_ = arg5 & 3;
        func_0205ac40((char*)arg0 + 0x11c, var0);
        arg6++;
        arg3 -= arg7;
        arg1 /= 10;
    } while (arg1 != 0);
}
