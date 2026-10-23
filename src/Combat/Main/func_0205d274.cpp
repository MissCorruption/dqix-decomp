#include <globaldefs.h>

extern "C" void func_0204b04c(void* arg0, int arg1);

struct Struct_0204b04c_2 { char unknown_0_[0x20]; };

struct Struct_0205d274 {
    char unknown_0_[0x98];
    Struct_0204b04c_2* unknown_98_;
    char unknown_9c_[0x16];
    unsigned char unknown_b2_;
};

// USA: func_0205d274
extern "C" ARM void func_0205d274(Struct_0205d274* arg0) {
    unsigned char var0;
    if (arg0->unknown_98_ == NULL) return;
    for (var0 = 0; var0 < arg0->unknown_b2_; var0++) {
        func_0204b04c(&arg0->unknown_98_[var0], 0);
    }
}
