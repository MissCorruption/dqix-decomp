#include <globaldefs.h>

struct Struct_020878b4 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int : 3;
    int unknown_58_3_ : 3;
};

extern "C" void func_0208792c(void* arg0);

// USA: func_020878b4
extern "C" ARM int func_020878b4(struct Struct_020878b4* arg0, int arg1) {
    int var0 = arg0->unknown_58_3_ + arg1;
    if (var0 > 2) var0 = 2;
    if (var0 < -2) var0 = -2;
    if (var0 == 0) {
        func_0208792c(arg0);
        return 0;
    }
    arg0->unknown_58_3_ = var0;
    *((unsigned char*)arg0 + 0x6f) = 6;
    *((unsigned char*)arg0 + 0x92) = 0;
    arg0->unknown_14_ |= 0x800;
    return arg0->unknown_58_3_;
}
