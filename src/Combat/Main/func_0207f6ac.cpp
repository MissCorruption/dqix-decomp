#include <globaldefs.h>

struct Struct_0207f6ac {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0x30 - 0x6];
};

struct Struct_0207f524 {
    struct Struct_0207f6ac* unknown_0_;
    short unknown_4_;
};

static inline struct Struct_0207f6ac* inline_0207f6ac(struct Struct_0207f524* arg0, unsigned int arg1) {
    return &arg0->unknown_0_[arg1];
}

// USA: func_0207f6ac
extern "C" ARM struct Struct_0207f6ac* func_0207f6ac(struct Struct_0207f524* arg0, int arg1) {
    short var0;
    struct Struct_0207f6ac* var1;
    if (arg1 < 0) {
        return NULL;
    }
    for (var0 = 0; var0 < arg0->unknown_4_; var0++) {
        var1 = inline_0207f6ac(arg0, var0);
        if (arg1 == var1->unknown_4_) {
            return var1;
        }
    }
    return NULL;
}
