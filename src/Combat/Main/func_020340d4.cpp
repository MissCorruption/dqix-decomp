#include <globaldefs.h>

struct Struct_020340d4 {
    char unknown_0_[0xc2];
    unsigned char unknown_c2_0_ : 7;
    unsigned char unknown_c2_7_ : 1;
};

// USA: func_020340d4
extern "C" ARM int func_020340d4(struct Struct_020340d4* arg0) {
    return arg0->unknown_c2_7_;
}
