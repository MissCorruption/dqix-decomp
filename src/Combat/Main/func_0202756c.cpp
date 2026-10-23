#include <globaldefs.h>

struct Struct_0202756c {
    char unknown_0_[0xc];
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    char unknown_1c_[4];
    unsigned short unknown_20_;
    unsigned char unknown_22_;
    char unknown_23_[3];
    unsigned char unknown_26_;
};

extern "C" void func_0205afb0(int arg0, void* arg1, int arg2);
extern "C" void func_0205ac40(void* arg0, void* arg1);

// USA: func_0202756c
extern "C" ARM void func_0202756c(void* arg0, int arg1, int arg2, int arg3,
        unsigned char arg4, unsigned char arg5, unsigned short arg6, unsigned char arg7, int arg8, int arg9) {
    struct Struct_0202756c* var0 = (struct Struct_0202756c*)((char*)arg0 + 0xe8 + arg3 * 0x28);
    var0->unknown_14_ = arg1;
    var0->unknown_18_ = arg2;
    var0->unknown_22_ = arg4 & 0x7f;
    var0->unknown_26_ = arg5 & 0x3;
    if (arg6 < 0xf) {
        func_0205afb0((int)((char*)arg0 + 0x94), var0, arg6);
    }
    if (arg7 < 0x40) {
        var0->unknown_20_ = arg7;
    }
    var0->unknown_c_ = arg8;
    var0->unknown_10_ = arg9;
    func_0205ac40((char*)arg0 + 0x94, var0);
}
