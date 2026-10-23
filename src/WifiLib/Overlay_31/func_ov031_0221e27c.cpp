#include <globaldefs.h>

struct Struct_ov031_0221e1ec {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned char* unknown_8_;
    unsigned int unknown_c_;
};

// USA: func_ov031_0221e27c
extern "C" THUMB unsigned char func_ov031_0221e27c(Struct_ov031_0221e1ec* arg0) {
    unsigned int var0 = arg0->unknown_c_;
    unsigned char* var1 = arg0->unknown_8_;
    unsigned char var2 = (arg0->unknown_0_ + 1) % var0;
    unsigned char var3 = var1[var2];
    unsigned char var4 = (var3 + arg0->unknown_4_) % var0;
    unsigned char var5 = var1[var4];
    arg0->unknown_0_ = var2;
    arg0->unknown_4_ = var4;
    var1[var4] = var3;
    var1[var2] = var5;
    return var1[(var3 + var5) % arg0->unknown_c_];
}
