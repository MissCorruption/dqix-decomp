#include <globaldefs.h>
extern "C" void func_020d2680(unsigned int);

extern "C" void func_020d1f0c(void*, int, int, int);
extern "C" void func_020d24c4(int);
extern "C" int func_020d26ec(void);

struct Struct_020bcde0 {
    char unknown_0_[0x24];
    int unknown_24_0_ : 1;
    int unknown_24_1_ : 1;
    int unknown_24_2_ : 30;
    char unknown_28_[0x40 - 0x28];
    int unknown_40_;
    void* unknown_44_;
};

// USA: func_020bcde0
extern "C" ARM void func_020bcde0(struct Struct_020bcde0* arg0) {
    if (!arg0->unknown_24_1_) return;
    func_020d1f0c(arg0->unknown_44_, 0, 1 << arg0->unknown_40_, 0);
    int var0 = func_020d26ec();
    func_020d24c4(1);
    func_020d2680((unsigned int)(var0));
}
