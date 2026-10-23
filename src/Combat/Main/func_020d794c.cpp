#include <globaldefs.h>

struct Struct_020d794c_2 {
    short unknown_0_;
    short unknown_2_;
    int unknown_4_;
    struct Struct_020d794c_2* unknown_8_;
};

struct Struct_020d794c {
    struct Struct_020d794c_2* unknown_0_;
};

// USA: func_020d794c
extern "C" ARM int func_020d794c(struct Struct_020d794c* arg0, int arg1) {
    struct Struct_020d794c_2* var0 = arg0->unknown_0_;
    while (var0 != 0) {
        if (var0->unknown_2_ == arg1) {
            return var0->unknown_4_;
        }
        var0 = var0->unknown_8_;
    }
    return 0;
}
