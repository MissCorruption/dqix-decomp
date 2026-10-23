#include <globaldefs.h>

struct Struct_0208d594 {
    short unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

struct Struct_0208d594_2 {
    struct Struct_0208d594* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

// USA: func_0208d928
extern "C" ARM void func_0208d928(struct Struct_0208d594_2 *arg0, struct Struct_0208d594 *arg1) {
    struct Struct_0208d594 *var0 = arg0->unknown_0_;
    struct Struct_0208d594 *var1;
    if (var0 == NULL) return;
    if (arg0->unknown_6_ <= arg0->unknown_4_) return;
    var1 = &var0[arg0->unknown_4_];
    var1->unknown_0_ = arg1->unknown_0_;
    var1->unknown_4_ = arg1->unknown_4_;
    var1->unknown_8_ = arg1->unknown_8_;
    var1->unknown_c_ = arg1->unknown_c_;
    var1->unknown_10_ = arg1->unknown_10_;
    var1->unknown_14_ = arg1->unknown_14_;
    arg0->unknown_4_++;
}
