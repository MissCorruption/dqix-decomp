#include <globaldefs.h>

struct Struct_ov023_021f5534_2 {
    unsigned int unknown_0_0_ : 26;
    unsigned int unknown_3_2_ : 6;
};

struct Struct_ov023_021f5534 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 20;
    struct Struct_ov023_021f5534_2* unknown_4_;
};

// USA: func_ov023_021f5534
extern "C" ARM struct Struct_ov023_021f5534_2* func_ov023_021f5534(struct Struct_ov023_021f5534* arg0, int arg1) {
    struct Struct_ov023_021f5534_2* var0 = arg0->unknown_4_;
    while (arg0->unknown_0_0_ != 0) {
        unsigned int var1 = var0->unknown_0_0_;
        if (var1 == 0 || arg1 <= (int)var1) return var0;
        var0 = var0 + 1;
    }
    return 0;
}
