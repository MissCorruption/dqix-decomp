#include <globaldefs.h>

extern "C" void func_0203ac10(void*, void*, int);

struct Struct_02109bf4_4 {
    unsigned char unknown_0_[0xb0];
    int unknown_b0_;               // 0xb0
    unsigned char unknown_b4_[0x8]; // 0xb4
    void* unknown_bc_;           // 0xbc
    void* unknown_c0_;           // 0xc0
    unsigned char unknown_c4_[0x4]; // 0xc4
    unsigned char unknown_c8_0_ : 1;    // 0xc8 bit0
    unsigned char unknown_c8_1_ : 1;    // bit1
    unsigned char unknown_c8_2_ : 1;    // bit2
};

// USA: func_0209c678
extern "C" ARM void func_0209c678(struct Struct_02109bf4_4* arg0, int arg1) {
    if (arg0->unknown_c8_2_) return;
    if (arg0->unknown_b0_ == 1) {
        func_0203ac10(arg0, &arg0->unknown_bc_, arg1);
    } else if (arg0->unknown_b0_ == 2) {
        func_0203ac10(arg0, &arg0->unknown_c0_, arg1);
    }
}
