#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_02154e58 func_ov006_021565b0
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov006_0215951c {
    char unknown_0_[R(0x48, 0x50)];
    unsigned short* unknown_50_;
    char unknown_54_[0x362 - R(0x4c, 0x54)];
    short unknown_362_;
    char unknown_364_[0x388 - 0x364];
    unsigned char unknown_388_;
    unsigned char unknown_389_;
};

// USA: func_ov006_0215951c
extern "C" ARM void func_ov006_0215951c(struct Struct_ov006_0215951c* arg0) {
    int var0;
    short var1;
    arg0->unknown_388_ = 0;
    var1 = arg0->unknown_362_ - 0x5b;
    var0 = (arg0->unknown_50_[var1] + 7) / 8;
    arg0->unknown_389_ = var0;
    if ((var0 & 0xff) == 0) {
        arg0->unknown_389_ = 1;
    }
}
