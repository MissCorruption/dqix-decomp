#include <globaldefs.h>

struct Struct_020a1180_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
};

struct Struct_020a1568 {
    struct Struct_020a1180_2* unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

// USA: func_020a1568
extern "C" ARM void func_020a1568(struct Struct_020a1568* arg0, struct Struct_020a1180_2* arg1) {
    unsigned short var0;
    struct Struct_020a1180_2* var1;
    if (arg1 == NULL) {
        return;
    }
    var0 = arg0->unknown_6_;
    if (arg0->unknown_4_ <= var0) {
        return;
    }
    var1 = &arg0->unknown_0_[var0];
    var1->unknown_0_ = arg1->unknown_0_;
    var1->unknown_4_ = arg1->unknown_4_;
    var1->unknown_8_ = arg1->unknown_8_;
    arg0->unknown_6_++;
}
