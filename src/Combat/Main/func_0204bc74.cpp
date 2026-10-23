#include <globaldefs.h>

struct Struct_0204bc74 {
    char unknown_0_[0x14];
    unsigned short (*unknown_14_)[32];
};

// USA: func_0204bc74
extern "C" ARM void func_0204bc74(struct Struct_0204bc74 *arg0, unsigned short arg1, int arg2, int arg3, int arg4, int arg5, unsigned short arg6) {
    unsigned short (*var0)[32] = arg0->unknown_14_;
    if (var0 == 0) {
        return;
    }
    if (arg2 + arg4 <= 0 || arg3 + arg5 <= 0) {
        return;
    }
    if (arg2 >= 0x20 || arg3 >= 0x19) {
        return;
    }

    if (arg2 < 0) {
        arg4 = (short)(arg2 + arg4);
        arg2 = 0;
    } else if (arg2 + arg4 >= 0x20) {
        arg4 = (short)(0x20 - arg2);
    }

    if (arg3 < 0) {
        arg5 = arg5 + arg3;
        arg5 = (short)arg5;
        arg3 = 0;
    } else if (arg3 + arg5 >= 0x19) {
        arg5 = (short)(0x19 - arg3);
    }
    unsigned short *var1 = var0[arg3] + arg2;
    if (arg6 != 0xffff) {
        arg6 = arg6 << 12;
    } else {
        arg6 = 0;
    }
    arg1 = arg1 & 0xfff;
    arg1 |= arg6;

    short var2 = 0;
    short var3;
    while (var2 < arg5) {
        var3 = 0;
        while (var3 < arg4) {
            var1[var3] = arg1;
            var3 = var3 + 1;
        }
        var1 += 32;
        var2 = var2 + 1;
    }
}
