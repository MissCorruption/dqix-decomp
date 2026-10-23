#include <globaldefs.h>

struct Struct_ov027_021e33e0_4 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned char* unknown_8_;
};

extern Struct_ov027_021e33e0_4 data_ov027_021e33e0;

typedef void (*Type_ov027_021dbd7c)(int, void*);

struct Struct_ov027_021dbd7c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};

// USA: func_ov027_021dbd7c
extern "C" ARM void func_ov027_021dbd7c(Struct_ov027_021dbd7c* arg0) {
    if (arg0->unknown_2_ != 0) return;
    switch (arg0->unknown_4_) {
    case 7:
    case 9:
        break;
    case 0x19:
    case 0x1a:
        break;
    case 0x15: {
        Type_ov027_021dbd7c var0 = *(Type_ov027_021dbd7c*)(data_ov027_021e33e0.unknown_8_ + 0x51c);
        var0(9, arg0);
        break;
    }
    default:
        break;
    }
}
