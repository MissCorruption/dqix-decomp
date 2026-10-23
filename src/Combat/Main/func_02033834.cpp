#include <globaldefs.h>

struct Struct_02033834;

struct Struct_02033834_2 {
    char unknown_0_[0xae];
    short unknown_ae_;
    char unknown_b0_[0x0e];
    unsigned char unknown_be_;
    char unknown_bf_[0x05];
    unsigned short unknown_c4_;
};

short fix32ReduceAngle0To2Pi(int);
extern "C" void func_02033874(struct Struct_02033834* arg0, int arg1);

// USA: func_02033834
extern "C" ARM void func_02033834(struct Struct_02033834_2* arg0, int arg1) {
    if (arg0->unknown_be_ == 4 || arg0->unknown_be_ == 3) {
        func_02033874((struct Struct_02033834*)arg0, arg1);
    } else {
        arg0->unknown_ae_ = fix32ReduceAngle0To2Pi(arg1);
    }
    arg0->unknown_c4_ &= ~0x8000;
}
