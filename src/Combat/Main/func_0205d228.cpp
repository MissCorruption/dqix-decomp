#include <globaldefs.h>
extern "C" void func_0204c8f0(struct Struct_0204c8f0*);


struct Struct_0204c8f0_2 { char unknown_0_[0xe0]; };

struct Struct_0205d228 {
    char unknown_0_[0x98];
    void* unknown_98_;
    Struct_0204c8f0_2* unknown_9c_;
    char unknown_a0_[0x13];
    unsigned char unknown_b3_;
};

// USA: func_0205d228
extern "C" ARM void func_0205d228(Struct_0205d228* arg0) {
    unsigned char var0;
    if (arg0->unknown_98_ == NULL || arg0->unknown_9c_ == NULL) return;
    for (var0 = 0; var0 < arg0->unknown_b3_; var0++) {
        func_0204c8f0((struct Struct_0204c8f0*)(&arg0->unknown_9c_[var0]));
    }
}
