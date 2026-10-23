#if defined(jpn)
#define R(j,u) (j)
#define func_ov004_02167b78 func_ov004_02168074
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov004_02167f1c {
    unsigned char unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
    int unknown_8_;
};

extern "C" void func_ov004_0216794c(short* arg0, short* arg1, short* arg2, unsigned char* arg3, int* arg4);
extern "C" void func_ov004_02167b78(void* arg0, int arg1);
extern "C" void func_ov004_02167adc(void* arg0);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);

// USA: func_ov004_02167f1c
extern "C" ARM int func_ov004_02167f1c(void* arg0) {
    Struct_ov004_02167f1c var0;
    func_ov004_0216794c(&var0.unknown_6_, &var0.unknown_4_, &var0.unknown_2_, &var0.unknown_0_, &var0.unknown_8_);
    func_ov004_02167b78(arg0, 0);
    func_ov004_02167adc(arg0);
    if (var0.unknown_0_ != 0) {
        func_ov011_021848a0(arg0, 0x28);
    } else if (var0.unknown_8_ < 0) {
        func_ov011_021848a0(arg0, 0x3c);
    } else {
        func_ov004_02167b78(arg0, 0);
        func_ov011_021848a0(arg0, 0x32);
    }
    return 0;
}
