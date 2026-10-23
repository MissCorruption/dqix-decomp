#include <globaldefs.h>

struct Struct_0208dc84_2 {
    short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
    int unknown_8_;
#if defined(jpn)
    int unknown_c_;
#endif
};

// USA: func_0208e000
extern "C" ARM void func_0208e000(struct Struct_0208dc84_2* arg0, struct Struct_0208dc84_2* arg1) {
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_2_ = arg1->unknown_2_;
    arg0->unknown_4_ = arg1->unknown_4_;
    arg0->unknown_8_ = arg1->unknown_8_;
#if defined(jpn)
    arg0->unknown_c_ = arg1->unknown_c_;
#endif
}
