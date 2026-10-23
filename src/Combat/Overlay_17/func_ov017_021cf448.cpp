#include <globaldefs.h>

extern "C" void func_ov017_021bff8c(int arg0, int arg1);

struct Struct_ov017_021cf448 {
    char unknown_0_[4];
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    unsigned short unknown_10_;
    struct {
        unsigned char unknown_0_0_ : 1;
        unsigned char unknown_0_1_ : 1;
    } unknown_12_;
    signed char unknown_13_;
};

// USA: func_ov017_021cf448
extern "C" ARM void func_ov017_021cf448(int arg0, Struct_ov017_021cf448* arg1, unsigned char* arg2, int arg3) {
#if defined(jpn)
 enum {Enum_ov017_021cf448_32636=0x7ca8, Enum_ov017_021cf448_32640=0x7cac, Enum_ov017_021cf448_32644=0x7cb0, Enum_ov017_021cf448_32648=0x7cb4, Enum_ov017_021cf448_32628=0x7ca0, Enum_ov017_021cf448_32629=0x7ca1};
#else
 enum {Enum_ov017_021cf448_32636=0x7f7c, Enum_ov017_021cf448_32640=0x7f80, Enum_ov017_021cf448_32644=0x7f84, Enum_ov017_021cf448_32648=0x7f88, Enum_ov017_021cf448_32628=0x7f74, Enum_ov017_021cf448_32629=0x7f75};
#endif
    *(int*)(arg2 + Enum_ov017_021cf448_32636) = arg1->unknown_4_;
    *(int*)(arg2 + Enum_ov017_021cf448_32640) = arg1->unknown_8_;
    *(int*)(arg2 + Enum_ov017_021cf448_32644) = arg1->unknown_c_;
    *(unsigned short*)(arg2 + Enum_ov017_021cf448_32648) = arg1->unknown_10_;
    arg2[Enum_ov017_021cf448_32628] = arg1->unknown_12_.unknown_0_0_;
    arg2[Enum_ov017_021cf448_32629] = arg1->unknown_12_.unknown_0_1_;
    if (arg2[Enum_ov017_021cf448_32628] != 0) {
        func_ov017_021bff8c(arg3, arg1->unknown_13_);
    }
}
