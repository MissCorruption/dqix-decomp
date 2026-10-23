#include <globaldefs.h>

#if defined(jpn)
#define data_020f1f14 data_020f2080
#endif

struct Struct_020f1f14_4 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x10];
};

extern struct Struct_020f1f14_4 data_020f1f14[];

// USA: func_020bb700
extern "C" ARM void func_020bb700(int* arg0) {
    int var0 = 0;
    struct Struct_020f1f14_4* var1 = data_020f1f14;
    int var2 = 0;
    do {
        arg0[var2] = var1->unknown_0_;
        (arg0 + var2)[1] = var1->unknown_4_;
        var1 = var1 + 1;
        var2 = var2 + 2;
        var0 = var0 + 1;
    } while (var0 < 5);
}
