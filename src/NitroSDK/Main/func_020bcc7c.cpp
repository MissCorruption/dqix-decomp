#include <globaldefs.h>

extern "C" void func_020d2680(unsigned int);
extern "C" void func_020d1f0c(void*, int, int, int);
extern "C" void func_020d24c4(int);
extern "C" int func_020d26ec(void);
extern "C" void func_020cef64(void* arg0);
extern "C" void func_020cef7c(void* arg0);

struct Struct_020bcc7c;
extern "C" void func_020bccf0(struct Struct_020bcc7c* arg0);

struct Struct_020bcbc4 {
    char unknown_0_[0x24];
    int unknown_24_0_ : 1;
    int unknown_24_1_ : 1;
    int unknown_24_2_ : 30;
    char unknown_28_[0x40 - 0x28];
    int unknown_40_;
    void* unknown_44_;
};

// USA: func_020bcc7c
extern "C" ARM void func_020bcc7c(struct Struct_020bcbc4* arg0) {
    if (arg0->unknown_24_1_) {
        func_020d1f0c(arg0->unknown_44_, 0, 1 << arg0->unknown_40_, 0);
        func_020cef64((char*)arg0 + 0x8);
        func_020cef7c((char*)arg0 + 0x14);
        arg0->unknown_24_1_ = 0;
        int var0 = func_020d26ec();
        func_020d24c4(1);
        func_020d2680((unsigned int)var0);
    }
    func_020bccf0((struct Struct_020bcc7c*)arg0);
}
