#include <globaldefs.h>

struct Struct_020d76fc {
    unsigned char unknown_0_[0xa24];
    unsigned short unknown_a24_;
    unsigned short unknown_a26_;
};

// USA: func_020d76fc
extern "C" ARM void func_020d76fc(struct Struct_020d76fc* arg0) {
    arg0->unknown_a26_ |= (unsigned short)(arg0->unknown_a24_ & 0xf);
}
