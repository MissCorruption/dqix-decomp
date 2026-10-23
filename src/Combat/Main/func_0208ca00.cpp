#include <globaldefs.h>

extern "C" double func_02009424(double arg0);

struct Struct_0208bb78 {
    char unknown_0_[0xc8];
    float unknown_c8_;
    char unknown_cc_[0xd7 - 0xcc];
    unsigned char unknown_d7_;
    char unknown_d8_[0xda - 0xd8];
    unsigned short unknown_da_;
};

// USA: func_0208ca00
extern "C" ARM int func_0208ca00(struct Struct_0208bb78* arg0, int arg1) {
    unsigned short var0 = arg0->unknown_da_;
    if (!(var0 & 0x80)) goto ret_zero;
    if (arg0->unknown_d7_ > 10) {
        arg0->unknown_da_ = var0 & ~0x80;
        *(volatile int*)0x4001010 = 0;
        arg0->unknown_d7_ = 0;
        goto ret_zero;
    }
    {
        float var1 = 5.0f - 0.3f * (float)(unsigned int)arg0->unknown_d7_;
        arg0->unknown_c8_ = arg0->unknown_c8_ + 1.8f * (float)arg1;
        arg0->unknown_d7_ = arg0->unknown_d7_ + arg1;
        if (3.14f < arg0->unknown_c8_) {
            arg0->unknown_c8_ = arg0->unknown_c8_ - 6.28f;
        }
        int var2 = (int)(var1 * (float)func_02009424((double)(arg0->unknown_c8_)));
        *(volatile int*)0x4001010 = var2 & 0x1ff;
        return var2;
    }
ret_zero:
    return 0;
}
