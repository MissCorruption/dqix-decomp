#include <globaldefs.h>


extern "C" void func_020ca3ec(int arg0, void* arg1, int arg2);

struct Struct_020d57f4 {
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
};

extern "C" void func_020d5684(int, int, int, int, unsigned short, struct Struct_020d57f4*);

// USA: func_020d57f4
extern "C" ARM void func_020d57f4(int arg0, int arg1, int arg2, int arg3, unsigned short arg4, unsigned short arg5, unsigned short arg6, int arg7, int arg8, int arg9, int arg10) {
    struct Struct_020d57f4 var0;
    func_020ca3ec(0, &var0, 0x10);
    var0.unknown_0_ = 0x1e03;
    var0.unknown_a_ = arg6;
    var0.unknown_c_ = arg7;
    var0.unknown_d_ = arg8;
    var0.unknown_e_ = arg10;
    var0.unknown_4_ = arg5;
    var0.unknown_6_ = arg5;
    if (arg9 != 0 && arg5 != 0) {
        var0.unknown_0_ |= 4;
        var0.unknown_8_ = arg5;
    }
    func_020d5684(arg0, arg1, arg2, arg3, arg4, &var0);
}
