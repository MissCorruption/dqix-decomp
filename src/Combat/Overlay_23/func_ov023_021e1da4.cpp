#include <globaldefs.h>

struct Struct_ov004_021549e4 {
    void* unknown_0_;
};

struct Struct_ov023_021e1da4 {
    struct Struct_ov023_021e1da4* unknown_0_;
    char unknown_4_[4];
    short unknown_8_;
};

// USA: func_ov023_021e1da4
extern "C" ARM short func_ov023_021e1da4(struct Struct_ov004_021549e4* arg0, int arg1) {
    struct Struct_ov023_021e1da4* var0 = (struct Struct_ov023_021e1da4*)arg0->unknown_0_;
    short var1;
    if (var0 == NULL) {
        return -1;
    }
    var1 = 0;
    while (var0 != NULL) {
        if (var0->unknown_8_ == arg1) {
            return var1;
        }
        var1 = var1 + 1;
        var0 = var0->unknown_0_;
    }
    return -1;
}
