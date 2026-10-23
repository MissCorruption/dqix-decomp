#include <globaldefs.h>

struct Struct_0201a300_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};

struct Struct_0201a300_9 {
    char unknown_0_[0x24];
    unsigned char unknown_24_;
    unsigned char unknown_25_;
    char unknown_26_[2];
    struct Struct_0201a300_2* unknown_28_;
};

// USA: func_02028378
extern "C" ARM void func_02028378(struct Struct_0201a300_9* arg0, struct Struct_0201a300_2* arg1) {
    struct Struct_0201a300_2* var0 = arg0->unknown_28_;
    struct Struct_0201a300_2* var1;
    if (var0 == 0) {
        return;
    }
    if (arg0->unknown_24_ <= arg0->unknown_25_) {
        return;
    }
    var1 = &var0[arg0->unknown_25_];
    var1->unknown_0_ = arg1->unknown_0_;
    var1->unknown_2_ = arg1->unknown_2_;
    arg0->unknown_25_++;
}
