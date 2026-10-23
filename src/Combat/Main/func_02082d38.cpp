#include <globaldefs.h>

struct Struct_02082d38 {
    unsigned char unknown_0_[0x16];
};

struct Struct_02082828 {
    unsigned char unknown_0_[0x16];
    unsigned char unknown_16_;
    unsigned char unknown_17_;
};

// USA: func_02082d38
extern "C" ARM void func_02082d38(struct Struct_02082828 *arg0, struct Struct_02082828 *arg1) {
    *(struct Struct_02082d38*)arg0->unknown_0_ = *(struct Struct_02082d38*)arg1->unknown_0_;
    arg0->unknown_16_ = arg1->unknown_16_;
    arg0->unknown_17_ = arg1->unknown_17_;
}
