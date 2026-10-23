#include <globaldefs.h>

struct Struct_0209c2e0_2;
extern "C" void func_020bc180(Struct_0209c2e0_2*, int, int);
extern "C" void func_020bbf34(int, int);

extern float data_020e8ec4[];

struct Struct_0209c2e0 {
    char unknown_0_[0xc8];
    unsigned char unknown_c8_0_ : 1;
    unsigned char unknown_c8_1_ : 1;
    unsigned char unknown_c8_2_ : 6;
    char unknown_c9_[3];
    unsigned char unknown_cc_;
    unsigned char unknown_cd_;
};

// USA: func_0209c2e0
extern "C" ARM void func_0209c2e0(Struct_0209c2e0* arg0, int arg1, int arg2) {
    arg0->unknown_cd_ = (unsigned char)arg1;
    int var0 = arg0->unknown_cc_;
    float var1 = ((float)var0 - 1.0f) / 4.0f;
    int var2 = (int)((float)arg0->unknown_cd_ * var1);
    if (arg0->unknown_c8_1_) {
        var2 = var2 / 2;
    }
    func_020bc180((Struct_0209c2e0_2*)((char*)arg0 + 0xbc), var2, arg2);
    func_020bc180((Struct_0209c2e0_2*)((char*)arg0 + 0xc0), var2, arg2);
    int var3 = (int)((float)arg0->unknown_cd_ * data_020e8ec4[arg0->unknown_cc_ - 1]);
    func_020bbf34(5, var3);
    func_020bbf34(7, var3);
    func_020bbf34(6, var3);
}
