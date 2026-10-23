#include <globaldefs.h>

struct Struct_ov031_022140cc {
    unsigned char unknown_0_0_ : 2;
    unsigned char unknown_0_2_ : 2;
    unsigned char unknown_0_4_ : 4;
};
struct Struct_ov031_02213dd8_2 { unsigned char unknown_0_[0xd0b]; struct Struct_ov031_022140cc unknown_d0b_; };

// USA: func_ov031_022140cc
extern "C" ARM unsigned int func_ov031_022140cc(struct Struct_ov031_02213dd8_2* arg0) {
    return arg0->unknown_d0b_.unknown_0_2_ == 1 ? 0xc0000 : 0x80000;
}
