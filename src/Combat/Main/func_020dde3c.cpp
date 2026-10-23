#include <globaldefs.h>

struct Struct_020db3f4_2;
extern "C" ARM void func_020dde64(struct Struct_020db3f4_2* arg0);

struct Struct_020dafd4_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[4];
    int unknown_8_;
    int unknown_c_;
    unsigned char unknown_10_[0x10];
    int unknown_20_;
};

// USA: func_020dde3c
extern "C" ARM void func_020dde3c(struct Struct_020dafd4_3* arg0) {
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_0_ = 0;
    arg0->unknown_2_ = 0;
    arg0->unknown_20_ = 0x51;
    func_020dde64((struct Struct_020db3f4_2*)arg0);
}
