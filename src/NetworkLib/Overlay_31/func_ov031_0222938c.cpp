#include <globaldefs.h>

struct Struct_ov031_02248d8e { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_; };
struct Struct_ov031_02248e12 { unsigned short unknown_0_; unsigned short unknown_2_[3]; };
extern Struct_ov031_02248d8e data_ov031_02248dfa[3];
extern Struct_ov031_02248e12 data_ov031_02248e12[];
extern Struct_ov031_02248e12 data_ov031_02248e16[];
extern Struct_ov031_02248e12 data_ov031_02248e14[];
extern Struct_ov031_02248e12 data_ov031_02248e18[];
extern signed char data_ov031_02290c5c;
extern "C" int func_ov031_0223d49c(Struct_ov031_02248d8e*);
extern "C" void func_ov031_02222e20(int);
extern "C" int func_ov031_0223d354(int);
extern "C" int func_ov031_0223d394(int);
extern "C" void func_ov031_022296b8(int);
extern "C" void func_ov031_022237dc(int, int, int, int);

// USA: func_ov031_0222938c
extern "C" ARM void func_ov031_0222938c() {
    unsigned int var0 = 0;
    Struct_ov031_02248d8e* var1 = data_ov031_02248dfa;
    do {
        if (func_ov031_0223d49c(var1)) {
            func_ov031_02222e20(1);
            unsigned char var2 = var0;
            unsigned short var3 = data_ov031_02248e12[var2].unknown_0_;
            unsigned short var4 = data_ov031_02248e16[var2].unknown_0_;
            unsigned short var5 = data_ov031_02248e14[var2].unknown_0_;
            unsigned short var6 = data_ov031_02248e18[var2].unknown_0_;
            data_ov031_02290c5c = var0;
            func_ov031_022237dc(var3, var4, var5, var6);
            return;
        }
        ++var0;
        ++var1;
    } while (var0 < 3);
    if (func_ov031_0223d354(1)) {
        func_ov031_02222e20(1);
        return;
    }
    if (func_ov031_0223d354(2)) {
        func_ov031_02222e20(0);
        return;
    }
    if (func_ov031_0223d394(0x40)) {
        func_ov031_022296b8(1);
        return;
    }
    if (func_ov031_0223d394(0x80)) func_ov031_022296b8(3);
}
