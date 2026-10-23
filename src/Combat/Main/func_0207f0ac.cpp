#include <globaldefs.h>

struct Struct_0207f0ac_2 {
    char unknown_0_[8];
    short unknown_8_;
    char unknown_a_[0x18 - 0xa];
};

struct Struct_0207f0ac {
    struct Struct_0207f0ac_2* unknown_0_;
    short unknown_4_;
};

static inline struct Struct_0207f0ac_2* inline_0207f0ac(struct Struct_0207f0ac* arg0, unsigned int arg1) {
    return &arg0->unknown_0_[arg1];
}

// USA: func_0207f0ac
extern "C" ARM struct Struct_0207f0ac_2* func_0207f0ac(struct Struct_0207f0ac* arg0, int arg1) {
    short var0;
    struct Struct_0207f0ac_2* var1;
    if (arg1 < 0) {
        return NULL;
    }
    for (var0 = 0; var0 < arg0->unknown_4_; var0++) {
        var1 = inline_0207f0ac(arg0, var0);
        if (arg1 == var1->unknown_8_) {
            return var1;
        }
    }
    return NULL;
}
