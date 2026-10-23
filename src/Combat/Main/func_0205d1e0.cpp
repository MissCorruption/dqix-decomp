#include <globaldefs.h>

struct Struct_0204b010 { char unknown_0_[0x20]; };
extern "C" void func_0204b010(Struct_0204b010*, void*);

struct Struct_0205d1e0 {
    char unknown_0_[0x98];
    Struct_0204b010* unknown_98_;
    char unknown_9c_[0x16];
    unsigned char unknown_b2_;
};

// USA: func_0205d1e0
extern "C" ARM void func_0205d1e0(Struct_0205d1e0* arg0) {
    unsigned char var0;
    if (arg0->unknown_98_ == NULL) return;
    for (var0 = 0; var0 < arg0->unknown_b2_; var0++) {
        func_0204b010(&arg0->unknown_98_[var0], NULL);
    }
}
