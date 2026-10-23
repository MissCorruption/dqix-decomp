#include <globaldefs.h>

struct Struct_ov006_021537c8 {
    char unknown_0_[0x4];
    short** unknown_4_;
    unsigned char** unknown_8_;
    unsigned short* unknown_c_;
};

// USA: func_ov006_021537c8
extern "C" ARM void func_ov006_021537c8(Struct_ov006_021537c8* arg0, short** arg1, unsigned char** arg2, unsigned short* arg3) {
    arg0->unknown_4_ = arg1;
    arg0->unknown_8_ = arg2;
    arg0->unknown_c_ = arg3;
}
