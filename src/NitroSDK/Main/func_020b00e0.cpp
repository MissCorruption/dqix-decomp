#include <globaldefs.h>

struct Struct_0205a658_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char *unknown_4_;
};

// USA: func_020b00e0
extern "C" ARM unsigned char *func_020b00e0(struct Struct_0205a658_2 *arg0, unsigned int arg1) {
    if (arg1 >= arg0->unknown_0_) {
        return NULL;
    }
    if (arg0->unknown_2_ & 1) {
        return arg0->unknown_4_ + (arg1 << 4);
    }
    return arg0->unknown_4_ + (arg1 << 3);
}
