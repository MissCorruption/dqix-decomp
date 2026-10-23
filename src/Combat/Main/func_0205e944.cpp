#include <globaldefs.h>

extern "C" void func_020bbf34(int arg0, int arg1);
extern float data_020e7dd4[];

struct Struct_0205e944 {
    unsigned char unknown_0_[0xc8];
    int unknown_c8_;
    unsigned char unknown_cc_;
};

// USA: func_0205e944
extern "C" ARM void func_0205e944(Struct_0205e944* arg0, int arg1) {
    float var0;
    int var1;
    arg0->unknown_c8_ = arg1;
    var0 = (float)arg1;
    var0 = var0 * data_020e7dd4[arg0->unknown_cc_ - 1];
    var1 = (int)var0;
    func_020bbf34(0xa, var1);
    func_020bbf34(0xb, var1);
    func_020bbf34(0xc, var1);
    func_020bbf34(0xd, var1);
    func_020bbf34(0xe, var1);
    func_020bbf34(0xf, var1);
    func_020bbf34(0xa, var1);
    func_020bbf34(0xc, var1);
    func_020bbf34(0xd, var1);
    func_020bbf34(0x10, var1);
}
