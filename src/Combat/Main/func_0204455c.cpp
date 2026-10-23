#include <globaldefs.h>

struct Struct_0204455c {
    char unknown_0_[0xa8];
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
};

// USA: func_0204455c
extern "C" ARM void func_0204455c(void* arg0, short* arg1, short* arg2) {
    if (arg0 == 0) return;
    struct Struct_0204455c* var0 = (struct Struct_0204455c*)arg0;
    short var1 = var0->unknown_a8_;
    short var2 = var0->unknown_ac_;
    short var3 = var0->unknown_aa_;
    var1 <<= 3;
    var2 <<= 3;
    var3 <<= 3;
    *arg1 = var2 + (var1 >> 1);
    *arg2 = var3 - 10;
}
