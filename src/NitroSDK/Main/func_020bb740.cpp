#include <globaldefs.h>

#if defined(jpn)
#define data_020f1f14 data_020f2080
#endif

struct Struct_020f1f14_5 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x10];
};

extern struct Struct_020f1f14_5 data_020f1f14[];

// USA: func_020bb740
extern "C" ARM void func_020bb740(int* arg0) {
    int var0 = 0;
    int var1 = 0;
    struct Struct_020f1f14_5* var2 = data_020f1f14;
    do {
        var2->unknown_0_ = arg0[var1];
        var2->unknown_4_ = (arg0 + var1)[1];
        var1 = var1 + 2;
        var2 = var2 + 1;
        var0 = var0 + 1;
    } while (var0 < 5);
}
