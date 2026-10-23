#include <globaldefs.h>

struct Struct_ov031_0221e1ec {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned char* unknown_8_;
    unsigned int unknown_c_;
};

// USA: func_ov031_0221e1ec
extern "C" THUMB void func_ov031_0221e1ec(Struct_ov031_0221e1ec* arg0, const unsigned char* arg1, unsigned int arg2, unsigned int arg3) {
    unsigned char* var0 = arg0->unknown_8_;
    unsigned int var1;
    unsigned int var2;
    unsigned int var3;
    arg0->unknown_0_ = arg0->unknown_4_ = 0;
    arg0->unknown_c_ = arg3;
    for (var1 = 0; var1 < arg3; var1++) {
        var0[var1] = var1;
    }
    var2 = 0;
    var3 = 0;
    for (var1 = 0; var1 < arg3; var1++) {
        unsigned char var4 = var0[var1];
        unsigned char var5;
        var2 = (var2 + arg1[var3] + var4) % arg0->unknown_c_;
        var5 = var0[var2];
        var0[var2] = var4;
        var0[var1] = var5;
        var3++;
        if (var3 >= arg2) {
            var3 = 0;
        }
    }
}
