#include <globaldefs.h>

extern "C" unsigned int _u32_div_f(unsigned int arg0, unsigned int arg1);

extern int data_0210fcf4;
extern int data_0210fcb4;

struct Struct_020bcd30 {
    char unknown_0_[0x20];
    int unknown_20_;
    char unknown_24_[4];
    int unknown_28_;
    int unknown_2c_;
    int unknown_30_;
    int unknown_34_;
    int unknown_38_;
    char unknown_3c_[0x48 - 0x3c];
    int unknown_48_;
    unsigned char unknown_4c_[1];
};

struct Struct_020bcd30_2 {
    int unknown_0_;
    int unknown_4_;
};

typedef int (*Type_020bcd30)(void*, int, int*, unsigned int, int, int);

// USA: func_020bcd30
extern "C" ARM void func_020bcd30(Struct_020bcd30* arg0, void* arg1) {
    unsigned int var0 = _u32_div_f(arg0->unknown_28_, arg0->unknown_2c_);
    int var1 = var0 * arg0->unknown_38_;
    int var2 = 0;
    if (arg0->unknown_48_ > 0) {
        do {
            unsigned char var3 = arg0->unknown_4c_[var2];
            int var4 = ((Struct_020bcd30_2*)&data_0210fcf4)[var3].unknown_0_;
            ((int*)&data_0210fcb4)[var2] = var4 + var1;
            var2++;
        } while (var2 < arg0->unknown_48_);
    }
    Type_020bcd30 var5 = (Type_020bcd30)arg0->unknown_30_;
    var5(arg1, arg0->unknown_48_, (int*)&data_0210fcb4, var0, arg0->unknown_20_, arg0->unknown_34_);

    int var6 = arg0->unknown_38_ + 1;
    arg0->unknown_38_ = var6;
    if (var6 >= arg0->unknown_2c_) {
        arg0->unknown_38_ = 0;
    }
}
