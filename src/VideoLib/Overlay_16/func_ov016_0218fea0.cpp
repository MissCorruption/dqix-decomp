#include <globaldefs.h>

struct Struct_ov016_0218fea0_2 {
    unsigned char unknown_0_;
    short unknown_2_;
};

struct Struct_ov016_0218fea0 {
    int unknown_0_;
    int unknown_4_;
};

// USA: func_ov016_0218fea0
extern "C" ARM Struct_ov016_0218fea0* func_ov016_0218fea0(Struct_ov016_0218fea0* arg0, const Struct_ov016_0218fea0_2* arg1) {
    arg0->unknown_4_ = arg1->unknown_0_;
    arg0->unknown_0_ = arg1->unknown_2_;
    return arg0;
}
