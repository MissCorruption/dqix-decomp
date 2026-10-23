#include <globaldefs.h>

struct Struct_020b0074 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char *unknown_4_;
};

// USA: func_020b0074
extern "C" ARM unsigned char *func_020b0074(struct Struct_020b0074 *arg0) {
    if (arg0->unknown_2_ & 1) {
        return arg0->unknown_4_ + (arg0->unknown_0_ << 4);
    }
    return arg0->unknown_4_ + (arg0->unknown_0_ << 3);
}
