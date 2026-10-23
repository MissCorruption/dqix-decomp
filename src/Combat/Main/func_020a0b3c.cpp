#include <globaldefs.h>

struct Struct_0207cf30_3 {
    short* unknown_0_;
    signed char* unknown_4_;
    short unknown_8_;
};

// USA: func_020a0b3c
extern "C" ARM signed char func_020a0b3c(struct Struct_0207cf30_3* arg0, int arg1) {
    short* var0 = arg0->unknown_0_;
    signed char* var1 = arg0->unknown_4_;
    int var2 = arg0->unknown_8_;
    short var3;
    if (arg1 < 0) {
        return 0;
    }
    for (var3 = 0; var3 < var2; var3++) {
        if (arg1 == var0[var3]) {
            return var1[var3];
        }
    }
    return 0;
}
