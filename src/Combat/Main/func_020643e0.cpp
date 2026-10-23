#include <globaldefs.h>

struct Struct_02061c04_24 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};

// USA: func_020643e0
extern "C" ARM void func_020643e0(struct Struct_02061c04_24* arg0, struct Struct_02061c04_24* arg1) {
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_2_ = arg1->unknown_2_;
    arg0->unknown_3_ = arg1->unknown_3_;
}
