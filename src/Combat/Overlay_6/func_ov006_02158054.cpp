#include <globaldefs.h>

extern "C" void func_0205ac40(void* arg0, void* arg1);

struct Struct_ov006_02158054 {
    unsigned char unknown_0_[0x14];
    int unknown_14_;
    unsigned char unknown_18_[0x18 - 0x18];
    int unknown1_18_;
    unsigned char unknown_1c_[0x22 - 0x1c];
    unsigned char unknown_22_;
    unsigned char unknown_23_[0x26 - 0x23];
    unsigned char unknown_26_;
};

// USA: func_ov006_02158054
extern "C" ARM void func_ov006_02158054(void* arg0, struct Struct_ov006_02158054* arg1, int arg2, int arg3, unsigned char arg4, unsigned char arg5) {
    arg1->unknown_14_ = arg2 << 0xc;
    arg1->unknown1_18_ = arg3 << 0xc;
    arg1->unknown_22_ = arg4;
    arg1->unknown_26_ = arg5;
    func_0205ac40(arg0, arg1);
}
