#include <globaldefs.h>

struct Struct_020e52a0_2 {
    char unknown_0_[0xc];
    unsigned short unknown_c_;
    char unknown_e_[2];
};

struct Struct_020e52a0 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    struct Struct_020e52a0_2* unknown_4_;
};

extern "C" unsigned short func_020e51fc(unsigned char* arg0);

// USA: func_020e52a0
extern "C" ARM void* func_020e52a0(void* arg0, int arg1) {
    struct Struct_020e52a0_2* var0;
    struct Struct_020e52a0_2* var1;
    int var2, var3, var4, var5, var6;
    if (arg0 == 0) {
        return 0;
    }
    var0 = ((struct Struct_020e52a0*)arg0)->unknown_4_;
    if (var0 == 0 || (void*)func_020e51fc == 0) {
        var1 = 0;
        goto found;
    }
    var2 = ((struct Struct_020e52a0*)arg0)->unknown_0_0_;
    if (var2 == 0) {
        var1 = 0;
        goto found;
    }
    var5 = 0;
    var4 = var2 - 1;
    while (var5 <= var4) {
        var3 = var5 + ((var4 - var5 + 1) >> 1);
        var1 = &var0[var3];
        var6 = func_020e51fc((unsigned char*)var1);
        if (var6 == arg1) {
            goto found;
        }
        if (var6 > arg1) {
            var4 = var3 - 1;
        } else {
            var5 = var3 + 1;
        }
    }
    var1 = 0;
found:
    return var1 ? var1 : 0;
}
