#include <globaldefs.h>

struct Struct_0203f008_2 {
    char unknown_0_[0x38];
    int unknown_38_;
};

struct Struct_02040468 {
    unsigned int unknown_0_;
    int unknown_4_;
    struct Struct_0203f008_2* unknown_8_;
};

// USA: func_02040468
extern "C" ARM struct Struct_0203f008_2* func_02040468(struct Struct_02040468* arg0, int arg1) {
    struct Struct_0203f008_2* var0 = arg0->unknown_8_;
    struct Struct_0203f008_2* var1;
    if (var0 == 0) {
        return 0;
    }
    if (arg1 < 0 || arg0->unknown_0_ <= (unsigned int)arg1) {
        return 0;
    }
    var1 = &var0[arg1];
    if (var1->unknown_38_ < 0) {
        var1 = 0;
    }
    return var1;
}
