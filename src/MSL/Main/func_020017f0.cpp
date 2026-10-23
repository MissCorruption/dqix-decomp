#include <globaldefs.h>

extern "C" void func_020017bc(int arg0, int* arg1);
extern "C" void func_020017c0(void* arg0);

struct Struct_020017f0 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 1;
};

struct Struct_020017f0_2 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x10];
    int unknown_18_;
    int unknown_1c_;
    char unknown_20_[0x4];
    int unknown_24_;
    int unknown_28_;
    char unknown_2c_[0x14];
    void* unknown_40_;
    char unknown_44_[0x4];
    int unknown_48_;
};

typedef int (*Type_020017f0)(int, int, int*, int);

// USA: func_020017f0
extern "C" ARM int func_020017f0(Struct_020017f0_2* arg0, int* arg1) {
    int var0 = arg0->unknown_24_ - arg0->unknown_1c_;
    if (var0 != 0) {
        arg0->unknown_28_ = var0;
        if (!((Struct_020017f0*)&arg0->unknown_4_)->unknown_1_4_) {
            func_020017bc(arg0->unknown_1c_, &arg0->unknown_28_);
        }
        Type_020017f0 var1 = (Type_020017f0)arg0->unknown_40_;
        int var2 = var1(arg0->unknown_0_, arg0->unknown_1c_, &arg0->unknown_28_, arg0->unknown_48_);
        if (arg1 != 0) *arg1 = arg0->unknown_28_;
        if (var2 != 0) return var2;
        arg0->unknown_18_ += arg0->unknown_28_;
    }
    func_020017c0(arg0);
    return 0;
}
