#include <globaldefs.h>

struct Struct_02097240;

extern "C" short func_02097240(struct Struct_02097240* arg0);

struct Struct_02097430 { char unknown_0_[0x20]; };

struct Struct_02097430_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    struct Struct_02097430* unknown_8_;
};

extern "C" {
// USA: func_02097430
extern "C" ARM struct Struct_02097430* func_02097430(struct Struct_02097430_2* arg0, int arg1) {
    int var0;
    struct Struct_02097430* var1;
    int var2;
    int var3;
    int var4;
    int var5;
    struct Struct_02097430* var6;
    if (arg0->unknown_8_ == NULL || (int)func_02097240 == 0) {
        var1 = NULL;
        goto out;
    }
    var0 = arg0->unknown_4_0_;
    if (var0 == 0) {
        var1 = NULL;
        goto out;
    }
    var4 = var0 - 1;
    var5 = 0;
    var6 = arg0->unknown_8_;
    while (var5 <= var4) {
        var2 = var5 + ((var4 - var5 + 1) >> 1);
        var1 = var6 + var2;
        var3 = func_02097240((struct Struct_02097240*)var1);
        if (var3 == arg1) goto out;
        if (var3 > arg1) var4 = var2 - 1;
        else var5 = var2 + 1;
    }
    var1 = NULL;
out:
    return var1;
}
}
