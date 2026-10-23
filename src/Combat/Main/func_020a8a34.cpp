#include <globaldefs.h>

struct Struct_0202c1a4 {
    char unknown_0_[0x1038];
    signed char unknown_1038_[16];
};
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void* func_0202ae18(void);
extern "C" void func_ov017_021d1874(unsigned char arg0, unsigned char arg1, unsigned char arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_020a8a34 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
};

// USA: func_020a8a34
extern "C" ARM void func_020a8a34(struct Struct_020a8a34* arg0, int arg1, int arg2, unsigned char arg3) {
    if (arg1 == 0) {
        arg0->unknown_5_ &= ~(1 << arg2);
        arg0->unknown_7_ = arg3;
    } else if (arg1 == 1) {
        arg0->unknown_5_ |= (1 << arg2);
        arg0->unknown_7_ = arg3;
    } else if (arg1 == 2) {
        signed char var0 = func_0202c1a4((struct Struct_0202c1a4*)func_0202ae18());
        func_ov017_021d1874(arg0->unknown_0_, arg0->unknown_1_, arg0->unknown_2_, arg0->unknown_4_, (unsigned char)var0, 1, 0);
    }
}
