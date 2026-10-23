#include <globaldefs.h>

struct Struct_020426bc {
    int unknown_0_;
    char unknown_4_;
    signed char unknown_5_0_ : 6;
    signed char unknown_5_6_ : 2;
    char unknown_6_[2];
};

extern "C" struct Struct_020426bc* func_0204254c(int arg0, int arg1);
extern "C" int func_020424e4(int arg0, int arg1);

// USA: func_020426bc
extern "C" ARM int func_020426bc(char* arg0, unsigned char* arg1, int arg2) {
    if (arg1 == 0) return 0;
    if (arg0 == 0) {
        if (arg1 != 0) *arg1 = 0;
        return 0;
    }
    int var0 = 0;
    for (;;) {
        signed char var1 = *arg0;
        if (var1 == 0) {
            *arg1 = 0;
            break;
        }
        int var2 = 1;
        int var3 = 0;
        struct Struct_020426bc* var4 = func_0204254c((int)arg0, arg2);
        if (var4 != 0) {
            var2 = var4->unknown_5_0_;
        }
        if (var1 == 0x20) var3 = 0xff;
        int var5 = func_020424e4((int)arg0, arg2);
        if (var5 > 0) var3 = var5 & 0xff;
        *arg1++ = (unsigned char)var3;
        arg0 += var2;
        var0++;
    }
    return var0;
}
