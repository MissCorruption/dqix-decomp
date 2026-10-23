#include <globaldefs.h>

struct Struct_02094d14 { unsigned int unknown_0_[3]; };
struct Struct_0201afd0_7 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    struct Struct_02094d14 unknown_8_;
};
struct Struct_0201afd0_6 { struct Struct_0201afd0_7* unknown_0_; };

// USA: func_02094d14
extern "C" ARM void func_02094d14(struct Struct_0201afd0_6* arg0, struct Struct_0201afd0_7* arg1, int arg2) {
    struct Struct_0201afd0_7* var0 = &arg0->unknown_0_[arg2];
    var0->unknown_0_ = arg1->unknown_0_;
    var0->unknown_2_ = arg1->unknown_2_;
    var0->unknown_4_ = arg1->unknown_4_;
    var0->unknown_6_ = arg1->unknown_6_;
    var0->unknown_8_ = arg1->unknown_8_;
}
