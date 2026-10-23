#include <globaldefs.h>

struct Struct_ov025_021e110c_2 {
    char unknown_0_[0x10];
    unsigned int unknown_10_;
};

struct Struct_ov025_021e110c {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[6];
    unsigned char* unknown_8_;
};

extern "C" int func_020493a4(unsigned char*);
extern "C" int func_020493c8(unsigned char*);
extern "C" int func_020493ec(unsigned char*);
extern "C" void func_ov025_021e12f8(unsigned char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);

static inline void inline_ov025_021e110c(unsigned char* arg0, unsigned int arg1, unsigned char arg2) {
    if (arg1 < 0x51) {
        arg0[arg1] = arg2;
    }
}

// USA: func_ov025_021e110c
extern "C" ARM void func_ov025_021e110c(unsigned char* arg0, Struct_ov025_021e110c* arg1, int arg2) {
    for (int var0 = 0; var0 < 0x51; var0++) {
        if (arg0[var0] < 0xff) {
            arg0[var0] = 0;
        }
    }
    for (int var1 = 0; var1 < arg2; var1++) {
        unsigned int var2 = func_020493c8(arg1[var1].unknown_8_);
        if (var2 >= 0x51) {
            var2 = func_020493a4(arg1[var1].unknown_8_);
        }
        if (var2 < 0x51) {
            inline_ov025_021e110c(arg0, var2, arg1[var1].unknown_1_);
        }
        unsigned char* var3 = arg1[var1].unknown_8_;
        Struct_ov025_021e110c_2* var4;
        if ((*(unsigned short*)var3 & 0x400) && (var4 = *(Struct_ov025_021e110c_2**)(var3 + 0x148)) != 0) {
            unsigned int var5 = (var4->unknown_10_ << 1) >> 0x1e;
            if (var5 != 0) {
                func_ov025_021e12f8(arg0, var2, arg1[var1].unknown_1_, var5 & 0xff, 0, 0);
            }
        }
        unsigned int var6 = func_020493ec(arg1[var1].unknown_8_);
        if (var6 < 0x51) {
            inline_ov025_021e110c(arg0, var6, arg1[var1].unknown_1_);
        }
    }
}
