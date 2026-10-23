#include <globaldefs.h>

struct Struct_020a0b8c {
    short* unknown_0_;
    signed char* unknown_4_;
    short unknown_8_;
};

// USA: func_020a0b8c
extern "C" ARM int func_020a0b8c(struct Struct_020a0b8c* arg0) {
    signed char* var0 = arg0->unknown_4_;
    short var1 = arg0->unknown_8_;
    short var2 = 0;
    short var3;
    for (var3 = 0; var3 < var1; var3++) {
        if (var0[var3] != 0) {
            var2++;
        }
    }
    return var2;
}
