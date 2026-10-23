#include <globaldefs.h>

extern "C" void func_ov015_0218c538(void *arg0, int arg1);
extern "C" void func_ov015_0218c920(void *arg0, int arg1);

struct Struct_ov015_02190090 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_;
    char unknown_1d_[0x48 - 0x1c - 1];
    int unknown_48_;
};

// USA: func_ov015_02190090
extern "C" ARM void func_ov015_02190090(Struct_ov015_02190090 *arg0) {
    arg0->unknown_48_++;
    arg0->unknown_48_ %= 2;
    switch (arg0->unknown_1c_) {
    case 0:
        func_ov015_0218c538(arg0, 0);
        break;
    case 1:
        func_ov015_0218c920(arg0, 0);
        break;
    }
}
