#include <globaldefs.h>

#if defined(jpn)
struct Struct_020e848c {
    signed char unknown_0_;
    const unsigned char* unknown_4_;
};

extern unsigned char data_020f008a[];
extern unsigned char data_020f008d[];
extern unsigned char data_020f0090[];
extern Struct_020e848c data_020e848c[];

// JPN: func_02042ea4
extern "C" ARM void func_02042ea4(unsigned char* arg0, const unsigned char* arg1) {
    if (arg0 == NULL) return;
    if (arg1 == NULL) {
        arg0[0] = 0;
        arg0[1] = 0;
        return;
    }

    const Struct_020e848c* var0;
    int var1 = (signed char)arg1[0];
    if (var1 >= 'A' && var1 <= 'Z') {
        const unsigned char* const var2 = data_020f008a;
        int var3 = var1 - 'A';
        arg0[0] = var2[0];
        arg0[1] = var2[1] + var3;
        return;
    }
    if (var1 >= 'a' && var1 <= 'z') {
        const unsigned char* const var4 = data_020f008d;
        int var5 = var1 - 'a';
        arg0[0] = var4[0];
        arg0[1] = var4[1] + var5;
        return;
    }
    if (var1 >= '0' && var1 <= '9') {
        const unsigned char* const var6 = data_020f0090;
        int var7 = var1 - '0';
        arg0[0] = var6[0];
        arg0[1] = var6[1] + var7;
        return;
    }

    var0 = data_020e848c;
    for (;;) {
        if (var0->unknown_0_ == 0) break;
        if (var1 == var0->unknown_0_) {
            arg1 = var0->unknown_4_;
            break;
        }
        ++var0;
    }
    arg0[0] = arg1[0];
    arg0[1] = arg1[1];
}
#endif
