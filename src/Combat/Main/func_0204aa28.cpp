#include <globaldefs.h>

struct Struct_0204aa28 {
    unsigned int unknown_0_;
    short unknown_4_;
    char unknown_6_[4];
    unsigned char unknown_a_;
};

// USA: func_0204aa28
extern "C" ARM unsigned int func_0204aa28(struct Struct_0204aa28* arg0) {
    int var0 = 5;
    if (arg0->unknown_a_) {
        var0 = 6;
    }
    return arg0->unknown_0_ + (arg0->unknown_4_ << var0);
}
