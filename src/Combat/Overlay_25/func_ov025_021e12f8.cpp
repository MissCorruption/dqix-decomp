#include <globaldefs.h>

struct Struct_ov025_021e120c {
    unsigned char unknown_0_[6];
};

extern "C" void func_ov000_0216f82c(Struct_ov025_021e120c* arg0, const int* arg1);

static inline int inline_ov025_021e120c(unsigned char* arg0, unsigned int arg1) {
    return arg0[arg1] >= 0xf2 ? 1 : 0;
}

static inline void inline_ov025_021e120c_2(unsigned char* arg0, unsigned int arg1, unsigned char arg2) {
    if (arg1 < 0x51) {
        arg0[arg1] = arg2;
    }
}

// USA: func_ov025_021e12f8
extern "C" ARM void func_ov025_021e12f8(unsigned char* arg0, int arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4, unsigned char arg5) {
    if (arg3 == arg5) {
        return;
    }
    if (arg4 != 0) {
        arg4--;
    }
    if (arg4 == 0) {
        arg5++;
    }
    Struct_ov025_021e120c var0;
    Struct_ov025_021e120c var1;
    int var2;
    var2 = arg1;
    func_ov000_0216f82c(&var1, &var2);
    var0 = var1;
    for (int var3 = 0; var3 < 6; var3++) {
        unsigned char var4 = var0.unknown_0_[var3];
        if (var4 >= 0x51) {
            continue;
        }
        if (arg4 == 0 && inline_ov025_021e120c(arg0, var4)) {
            continue;
        }
        if (arg5 < arg3) {
            func_ov025_021e12f8(arg0, var4, arg2, arg3, arg4, arg5);
        }
        if (arg4 != 0) {
            continue;
        }
        inline_ov025_021e120c_2(arg0, var4, arg2);
    }
}
