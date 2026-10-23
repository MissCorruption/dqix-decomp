#include <globaldefs.h>

struct Struct_02081ee4_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
};

struct Struct_02081ee4 {
    struct Struct_02081ee4_2 *unknown_0_;
    unsigned short unknown_4_;
    signed char unknown_6_;
    signed char unknown_7_;
    signed char unknown_8_;
};

// USA: func_02081ee4
extern "C" ARM void func_02081ee4(struct Struct_02081ee4 *arg0, struct Struct_02081ee4_2 *arg1) {
    arg0->unknown_0_ = 0;
    if (arg1 != NULL) {
        arg0->unknown_0_ = arg1;
        arg1->unknown_0_ = 0;
        arg1->unknown_2_ = 0;
    }
    arg0->unknown_4_ = 0;
    arg0->unknown_6_ = 20;
    arg0->unknown_7_ = 10;
    arg0->unknown_8_ = arg0->unknown_6_;
}
