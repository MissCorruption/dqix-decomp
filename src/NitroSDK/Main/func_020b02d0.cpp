#include <globaldefs.h>

struct Struct_020b0094 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned int *unknown_4_;
};

// USA: func_020b02d0
extern "C" ARM void func_020b02d0(struct Struct_020b0094 *arg0) {
    unsigned short var0 = 0;
    arg0->unknown_4_ = (unsigned int *)((unsigned int)arg0->unknown_4_ + (unsigned int)arg0);
    if (arg0->unknown_0_ > var0) {
        do {
            arg0->unknown_4_[var0] = (unsigned int)((unsigned char *)arg0 + arg0->unknown_4_[var0]);
            var0++;
        } while (arg0->unknown_0_ > var0);
    }
}
