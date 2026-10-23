#include <globaldefs.h>

struct Struct_020577cc_3 {
    unsigned char unknown_0_[0x2c];
    unsigned char unknown_2c_;
    unsigned char unknown_2d_[0x148 - 0x2c - 1];
    struct Struct_020577cc_3* unknown_148_;
};

struct Struct_020577cc {
    unsigned char unknown_0_[0x34];
    struct Struct_020577cc_3* unknown_34_;
};

struct Struct_020577cc_2;
extern "C" void func_02059c90(struct Struct_020577cc_2* arg0, unsigned short* arg1, unsigned short* arg2);

// USA: func_020577cc
extern "C" ARM void func_020577cc(struct Struct_020577cc* arg0, unsigned short* arg1, unsigned short* arg2) {
    unsigned short var0 = 0, var1 = 0;
    struct Struct_020577cc_3* var2 = arg0->unknown_34_;
    while (var2 != NULL) {
        if (var2->unknown_2c_ == 0) {
            var2 = var2->unknown_148_;
            continue;
        }
        unsigned short var3 = 0, var4 = 0;
        func_02059c90((struct Struct_020577cc_2*)var2, &var3, &var4);
        var2 = var2->unknown_148_;
        var0 = var0 + var3;
        var1 = var1 + var4;
    }
    *arg1 = var0;
    *arg2 = var1;
}
