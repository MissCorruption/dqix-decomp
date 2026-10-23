#include <globaldefs.h>

struct Struct_020deb08 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};

// USA: func_020deb08
extern "C" ARM short func_020deb08(struct Struct_020deb08* arg0) {
    int var0 = arg0->unknown_0_;
    int var1 = arg0->unknown_4_;
    return var0 > var1 ? var0 : var1;
}
