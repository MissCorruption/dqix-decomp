#include <globaldefs.h>

struct Struct_020a99d0_4 { unsigned short unknown_0_[70]; };
struct Struct_020a99d0_5 { unsigned char unknown_0_[564]; };
struct Struct_020a99d0 { unsigned short unknown_0_[6]; };
struct Struct_020a99d0_2 { unsigned char unknown_0_[102]; };

struct Struct_020a99d0_3 {
    struct Struct_020a99d0_4 unknown_0_;
    struct Struct_020a99d0_5 unknown_8c_;
    struct Struct_020a99d0 unknown_2c0_;
    struct Struct_020a99d0_2 unknown_2cc_;
    unsigned char unknown_332_;
};

// USA: func_020a99d0
extern "C" ARM void func_020a99d0(struct Struct_020a99d0_3* arg0, struct Struct_020a99d0_3* arg1) {
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_8c_ = arg1->unknown_8c_;
    arg0->unknown_2c0_ = arg1->unknown_2c0_;
    arg0->unknown_2cc_ = arg1->unknown_2cc_;
    arg0->unknown_332_ = arg1->unknown_332_;
}
