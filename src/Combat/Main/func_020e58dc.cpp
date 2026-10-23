#include <globaldefs.h>

struct Struct_020e58dc_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};

struct Struct_020e58dc {
    struct Struct_020e58dc_2* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_020e58dc
extern "C" ARM struct Struct_020e58dc_2* func_020e58dc(struct Struct_020e58dc* arg0, int arg1) {
    struct Struct_020e58dc_2* var0 = arg0->unknown_0_;
    int var1;
    for (var1 = 0; var1 < arg0->unknown_8_; var1++) {
        if (var0->unknown_8_ <= arg1 && arg1 < var0->unknown_c_) {
            return var0;
        }
        var0++;
    }
    return NULL;
}
