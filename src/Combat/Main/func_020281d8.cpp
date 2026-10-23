#include <globaldefs.h>

struct Struct_0201a300 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_0201a300_12 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    int unknown_4_;
    struct Struct_0201a300* unknown_8_;
};

// USA: func_020281d8
extern "C" ARM void func_020281d8(struct Struct_0201a300_12* arg0, struct Struct_0201a300* arg1) {
    struct Struct_0201a300* var0;
    if (arg0->unknown_1_ <= arg0->unknown_3_) {
        return;
    }
    var0 = &arg0->unknown_8_[arg0->unknown_3_];
    var0->unknown_0_ = arg1->unknown_0_;
    var0->unknown_4_ = arg1->unknown_4_;
    arg0->unknown_3_++;
}
