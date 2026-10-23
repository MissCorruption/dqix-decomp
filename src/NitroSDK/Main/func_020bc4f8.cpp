#include <globaldefs.h>

extern "C" int func_020d1e08(int arg0, int arg1, int arg2, int arg3);
extern "C" int func_020d1ebc(int arg0, int arg1, int arg2);
struct Struct_020bc4f8;
extern "C" void func_020bc610(Struct_020bc4f8* arg0);
extern "C" int func_020d26ec(void);

struct Struct_020bc4f8_2 { unsigned char unknown_0_[0x1c]; int unknown_1c_; };

struct Struct_020bc4f8_3 {
    unsigned char unknown_0_[4];
    Struct_020bc4f8_2* unknown_4_;
    unsigned char unknown_8_[0x24];
    unsigned char unknown_2c_;
    unsigned char unknown_2d_[2];
    unsigned char unknown_2f_;
    int unknown_30_;
    unsigned char unknown_34_[8];
    unsigned char unknown_3c_;
};

// USA: func_020bc4f8
extern "C" ARM void func_020bc4f8(Struct_020bc4f8_3* arg0, int arg1, int arg2, int arg3) {
    Struct_020bc4f8_2* var0 = arg0->unknown_4_;
    func_020d1e08(arg0->unknown_3c_, arg1, arg2, arg3);
    if (var0->unknown_1c_ != 0) {
        func_020d1ebc(arg0->unknown_3c_, 0xffff, var0->unknown_1c_);
    }
    func_020bc610((Struct_020bc4f8*)arg0);
    arg0->unknown_30_ = func_020d26ec();
    arg0->unknown_2f_ = 1;
    arg0->unknown_2c_ = 1;
}
