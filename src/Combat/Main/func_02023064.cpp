#include <globaldefs.h>

struct Struct_020200c0_3 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
};

extern "C" void func_02020520(struct Struct_020200c0_3* arg0);

// USA: func_02023064
extern "C" ARM void func_02023064(struct Struct_020200c0_3* arg0, unsigned int arg1, short* arg2, short* arg3, short* arg4, short* arg5) {
    int var0 = 0;
    unsigned int var1;
    for (var1 = 0; var1 < arg1; var1++) {
        struct Struct_020200c0_3* var2 = &arg0[var1];
        func_02020520(var2);
        var2->unknown_0_ = var0;
        var2->unknown_4_ = arg2[var1];
        var2->unknown_6_ = arg3[var1];
        var2->unknown_8_ = arg4[var1];
        var2->unknown_a_ = arg5[var1];
        var0 += (arg4[var1] * arg5[var1]) / 2;
    }
}
