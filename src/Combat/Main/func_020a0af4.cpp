#include <globaldefs.h>

struct Struct_020a095c {
    short* unknown_0_;
    signed char* unknown_4_;
    short unknown_8_;
};

// USA: func_020a0af4
extern "C" ARM int func_020a0af4(struct Struct_020a095c* arg0, int arg1) {
    short* var0 = arg0->unknown_0_;
    short var1 = arg0->unknown_8_;
    short var2;
    if (arg1 < 0) {
        return -1;
    }
    for (var2 = 0; var2 < var1; var2++) {
        if (arg1 == var0[var2]) {
            return var2;
        }
    }
    return -1;
}
