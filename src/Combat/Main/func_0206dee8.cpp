#include <globaldefs.h>

struct Struct_0206dee8 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    char unknown_3_[0x19];
};

// USA: func_0206dee8
extern "C" ARM void func_0206dee8(Struct_0206dee8* arg0, unsigned char arg1, unsigned char* arg2, unsigned char* arg3, unsigned char* arg4) {
    *arg2 = arg0[arg1].unknown_0_;
    *arg3 = arg0[arg1].unknown_1_;
    *arg4 = arg0[arg1].unknown_2_;
}
