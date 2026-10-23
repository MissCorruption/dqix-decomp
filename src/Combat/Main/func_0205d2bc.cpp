#include <globaldefs.h>

struct Struct_0204b088_2 { unsigned char unknown_0_[0x20]; };

struct Struct_0205d2bc {
    char unknown_0_[0x98];
    struct Struct_0204b088_2* unknown_98_;   // 0x98
    char unknown_9c_[0xb2 - 0x9c];
    unsigned char unknown_b2_;           // 0xb2
};

extern "C" void func_0204b088(struct Struct_0204b088_2*, int);

// USA: func_0205d2bc
extern "C" ARM void func_0205d2bc(struct Struct_0205d2bc* arg0) {
    unsigned char var0;
    if (arg0->unknown_98_ == 0) return;
    for (var0 = 0; var0 < arg0->unknown_b2_; var0++) {
        func_0204b088(&arg0->unknown_98_[var0], 0);
    }
}
