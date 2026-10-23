#include <globaldefs.h>

struct Struct_0208d994 {
    short unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

struct Struct_0208bf78_5 {
    struct Struct_0208d994* unknown_0_;
    short unknown_4_;
};

// USA: func_0208d994
extern "C" ARM struct Struct_0208d994* func_0208d994(struct Struct_0208bf78_5 *arg0, int arg1) {
    short var0;
    if (arg1 < 0) return NULL;
    for (var0 = 0; var0 < arg0->unknown_4_; var0++) {
        if (arg1 == arg0->unknown_0_[var0].unknown_0_) return &arg0->unknown_0_[var0];
    }
    return NULL;
}
