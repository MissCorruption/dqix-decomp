#include <globaldefs.h>

struct Struct_02081ce8 {
    float unknown_0_;
    char unknown_4_[0x6 - 0x4];
    short unknown_6_;
    short unknown_8_;
    char unknown_a_;
    char unknown_b_;
    char unknown_c_;
    char unknown_d_[0x13 - 0xd];
    unsigned char unknown_13_0_ : 4;
    unsigned char unknown_13_4_ : 4;
    char unknown_14_[0x28 - 0x14];
    short unknown_28_;
    unsigned char unknown_2a_;
};

extern "C" void __clear(void* arg0, int arg1);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" int func_020420e8(void* arg0, void* arg1);
extern "C" void func_0204f41c(int arg0, short arg1, short arg2, void* arg3, int arg4, int arg5, void* arg6, void* arg7, int arg8);
extern char data_020f0ff2;

// USA: func_02081ce8
extern "C" ARM void func_02081ce8(void* arg0, int arg1, struct Struct_02081ce8* arg2, int arg3) {
    int var0 = arg2->unknown_13_4_;
    if (arg2->unknown_2a_ & 4) {
        var0 = 5;
    }
    char var1[0x40];
    __clear(var1, 0x40);
    sprintf(var1, &data_020f0ff2, (double)arg2->unknown_0_);
    int var2 = func_020420e8(var1, 0);
    int var3 = arg2->unknown_13_0_;
    short var4 = (short)((arg2->unknown_6_ + arg2->unknown_28_) - var2);
    func_0204f41c(arg1, var4, arg2->unknown_8_, var1, var3, var0, &arg2->unknown_a_, &arg2->unknown_c_, 0);
}
