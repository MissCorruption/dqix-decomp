#include <globaldefs.h>

struct Struct_020de714_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 15;
    unsigned short unknown_3_7_ : 1;
};

// USA: func_020de7a4
extern "C" ARM int func_020de7a4(struct Struct_020de714_3* arg0) {
    int var0 = arg0->unknown_2_0_;
    int var1 = arg0->unknown_0_;
    int var2 = arg0->unknown_3_7_ ? 0x58 : 0;
    return var2 + var0 * 32 + var1 * 32;
}
