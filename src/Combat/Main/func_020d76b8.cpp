#include <globaldefs.h>

struct Struct_020d76b8_2 {
    char unknown_0_[0x26];
    unsigned short unknown_26_;
};

struct Struct_020d76b8 {
    char unknown_0_[0xa00];
    struct Struct_020d76b8_2 unknown_a00_;
};

// USA: func_020d76b8
extern "C" ARM void func_020d76b8(struct Struct_020d76b8* arg0, int arg1) {
    if (arg1 >= 0xc0) {
        arg1 -= 0xbc;
    }
    arg0->unknown_a00_.unknown_26_ |= 1 << arg1;
}
