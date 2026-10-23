#include <globaldefs.h>

struct Struct_0201e690 {
    unsigned short unknown_0_;
    char unknown_2_[0x72];
};

struct Struct_0201afd0_4 {
    char unknown_0_[0x24];
    struct Struct_0201e690* unknown_24_;
    int unknown_28_;
};

// USA: func_0201e690
extern "C" ARM struct Struct_0201e690* func_0201e690(struct Struct_0201afd0_4* arg0, int arg1) {
    struct Struct_0201e690* var0;
    int var1;
    if (arg1 < 0) {
        return 0;
    }
    var0 = arg0->unknown_24_;
    for (var1 = 0; var1 < arg0->unknown_28_; var1++, var0++) {
        if (var0->unknown_0_ == arg1) {
            return var0;
        }
    }
    return 0;
}
