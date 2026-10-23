#include <globaldefs.h>

struct Struct_ov000_02169b04_2 {
    int unknown_0_;
    struct Struct_ov000_02169b04_2* unknown_4_;
};
struct Struct_ov000_02169b04 {
    char unknown_0_[8];
    struct Struct_ov000_02169b04_2* unknown_8_;
};

// USA: func_ov000_02169b04
extern "C" ARM struct Struct_ov000_02169b04_2* func_ov000_02169b04(struct Struct_ov000_02169b04* arg0, int arg1) {
    struct Struct_ov000_02169b04_2* var0 = arg0->unknown_8_;
    while (var0) {
        if (var0->unknown_0_ == arg1) return var0;
        var0 = var0->unknown_4_;
    }
    return NULL;
}
