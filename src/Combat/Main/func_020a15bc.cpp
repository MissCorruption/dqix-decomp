#include <globaldefs.h>

struct Struct_020a15bc_2 {
    unsigned int unknown_0_0_ : 9;
    unsigned int unknown_1_1_ : 23;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
};

struct Struct_020a15bc {
    struct Struct_020a15bc_2* unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

// USA: func_020a15bc
extern "C" ARM struct Struct_020a15bc_2* func_020a15bc(struct Struct_020a15bc* arg0, int arg1) {
    unsigned short var0;
    int var1;
    if (arg1 <= 0) {
        return NULL;
    }
    var0 = (unsigned short)arg1;
    for (var1 = 0; var1 < arg0->unknown_6_; var1++) {
        if (var0 == arg0->unknown_0_[var1].unknown_0_0_) {
            return &arg0->unknown_0_[var1];
        }
    }
    return NULL;
}
