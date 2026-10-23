#include <globaldefs.h>

struct Struct_02033f6c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

// USA: func_02033f7c
extern "C" ARM void func_02033f7c(struct Struct_02033f6c* arg0, struct Struct_02033f6c* arg1) {
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_2_ = arg1->unknown_2_;
    arg0->unknown_4_ = arg1->unknown_4_;
    arg0->unknown_6_ = arg1->unknown_6_;
}
