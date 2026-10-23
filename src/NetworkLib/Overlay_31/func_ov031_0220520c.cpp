#include <globaldefs.h>

struct Struct_ov031_0224e204 {
    int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_;
    int unknown_10_; int unknown_14_; int unknown_18_; int unknown_1c_;
};

extern "C" ARM void func_020c7de4(Struct_ov031_0224e204* arg0, int arg1, int arg2);
extern "C" ARM int func_020c7ea0(void* arg0, int* arg1, int arg2);
extern "C" ARM int func_ov031_022051a8(void* arg0, void* arg1);

struct Struct_ov031_0220520c {
    unsigned char unknown_0_[8];
    void* unknown_8_;
    unsigned char unknown_c_[1];
    signed char unknown_d_;
};

// USA: func_ov031_0220520c
extern "C" ARM int func_ov031_0220520c(void* arg0, Struct_ov031_0220520c* arg1) {
    int var0;
    if (arg1->unknown_d_ == 1) {
        int var1;
        Struct_ov031_0224e204 var2;
        func_020c7de4(&var2, (int)&var1, 1);
        arg1->unknown_8_ = &var2;
        func_ov031_022051a8(arg0, arg1);
        func_020c7ea0(&var2, &var0, 1);
    } else {
        arg1->unknown_8_ = NULL;
        var0 = func_ov031_022051a8(arg0, arg1);
    }
    return var0;
}
