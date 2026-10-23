#include <globaldefs.h>

struct Struct_ov025_021e13e0_3 {
    char unknown_0_[0x10];
    unsigned int unknown_10_;
};

struct Struct_ov025_021e13e0 {
    unsigned short unknown_0_;
    char unknown_2_[0x146];
    Struct_ov025_021e13e0_3* unknown_148_;
};

struct Struct_ov025_021e13e0_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[6];
    Struct_ov025_021e13e0* unknown_8_;
};

extern "C" unsigned int func_020493a4(unsigned char*);
extern "C" unsigned int func_020493ec(unsigned char*);
extern "C" void func_ov025_021e12f8(unsigned char* arg0, int arg1, int arg2, unsigned char arg3, int arg4, int arg5);

static inline void inline_ov025_021e13e0(unsigned char* arg0, unsigned int arg1, unsigned char arg2) {
    if (arg1 < 0x51) {
        arg0[arg1] = arg2;
    }
}

// USA: func_ov025_021e13e0
extern "C" ARM void func_ov025_021e13e0(unsigned char* arg0, Struct_ov025_021e13e0_2* arg1) {
    if (arg1 == 0 || arg1->unknown_8_ == 0) {
        return;
    }
    unsigned int var0 = func_020493a4((unsigned char*)arg1->unknown_8_);
    if (var0 < 0x51) {
        inline_ov025_021e13e0(arg0, var0, arg1->unknown_1_);
    }
    var0 = func_020493ec((unsigned char*)arg1->unknown_8_);
    if (var0 < 0x51) {
        inline_ov025_021e13e0(arg0, var0, arg1->unknown_1_);
    }
    Struct_ov025_021e13e0* var1 = arg1->unknown_8_;
    if (!(var1->unknown_0_ & 0x400) || var1->unknown_148_ == 0) {
        return;
    }
    unsigned int var2 = (var1->unknown_148_->unknown_10_ << 1) >> 30;
    if (var2 == 0) {
        return;
    }
    func_ov025_021e12f8(arg0, var0, arg1->unknown_1_, var2, 0, 0);
}
