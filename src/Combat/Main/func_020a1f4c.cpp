#include <globaldefs.h>

extern "C" void func_020a1940(int);
struct Struct_02109da4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    signed char unknown_2_[8];
    signed char unknown_a_[8];
};
extern Struct_02109da4 data_02109da4;
extern signed char data_020f1977[];

static inline int inline_020a1f4c(const Struct_02109da4* arg0) { return arg0->unknown_1_; }

// USA: func_020a1f4c
extern "C" ARM void func_020a1f4c(int arg0) {
    if (inline_020a1f4c(&data_02109da4) == 0) return;
    data_02109da4.unknown_1_--;
    if (arg0 == 0 || inline_020a1f4c(&data_02109da4) == 0) return;
    signed char var0 = data_02109da4.unknown_2_[data_02109da4.unknown_1_ - 1];
    func_020a1940(data_020f1977[var0]);
}
