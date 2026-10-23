#include <globaldefs.h>

#include "Combat/Main/CandidateFilter.h"
#include <std_library_functions.h>

struct Struct_0209e1cc {
    unsigned short unknown_0_0_ : 2;
    unsigned short unknown_0_2_ : 4;
    unsigned short unknown_0_6_ : 10;
};

struct Struct_0209e1cc_2 {
    unsigned char unknown_0_0_ : 4;
    unsigned char unknown_0_4_ : 4;
};

struct Struct_0209e1cc_3 {
    unsigned char unknown_0_[4];
};

struct Struct_0209e1cc_4 {
    unsigned int unknown_0_;
    unsigned char unknown_4_[4];
    unsigned int unknown_8_;
    unsigned char unknown_c_[12];
    Struct_0209e1cc unknown_18_;
    Struct_0209e1cc unknown_1a_;
    Struct_0209e1cc_2 unknown_1c_;
    Struct_0209e1cc_2 unknown_1d_;
    unsigned char unknown_1e_[10];
    Struct_0209e1cc_3 unknown_28_;
    Struct_0209e1cc_3 unknown_2c_;
};

// USA: func_0209e1cc
extern "C" ARM int func_0209e1cc(void *arg0, void *arg1, int arg2, int arg3) {
    unsigned int var0;
    Struct_0209e1cc_4 *var1;
    unsigned int var2;
    unsigned int var3;
    Struct_0209e1cc_3 var4;
    unsigned int var5;

    var0      = static_cast<unsigned int>(arg3);
    var1 = static_cast<Struct_0209e1cc_4 *>(arg1);

    if (arg2 == 0) {
        var2           = var1->unknown_18_.unknown_0_2_;
        var5          = var1->unknown_0_;
        var3 = var1->unknown_1c_.unknown_0_0_;
        memcpy(&var4, &var1->unknown_28_, sizeof(var4));
    } else {
        var2           = var1->unknown_1a_.unknown_0_2_;
        var3 = var1->unknown_1d_.unknown_0_0_;
        var5          = var1->unknown_8_;
        memcpy(&var4, &var1->unknown_2c_, sizeof(var4));
    }

    if ((var0 & 0x1) && (var5 & 0x80000) && var2 == 2) return 1;
    if ((var0 & 0x2) && (var5 & 0x80000) && var2 == 3) return 1;
    if ((var0 & 0x4) && (var5 & 0x80000) && var2 == 5) return 1;
    if ((var0 & 0x8) && (var5 & 0x80000) && var2 == 4) return 1;
    if ((var0 & 0x10) && (var5 & 0x80000) && var2 == 7) return 1;
    if ((var0 & 0x20) && (var5 & 0x80000) && var2 == 6) return 1;
    if ((var0 & 0x40) && (var5 & 0x80000) && var2 == 8) return 1;
    if ((var0 & 0x80) && (var5 & 0x80000) && var2 == 10) return 1;
    if ((var0 & 0x100) && (var5 & 0x80000) && var2 == 9) return 1;
    if ((var0 & 0x200) && (var5 & 0x80000) && var2 == 1) return 1;
    if ((var0 & 0x400) && var3 == 1) return 1;
    if ((var0 & 0x800) && var3 == 2) return 1;
    if ((var0 & 0x1000) && var3 == 4) return 1;
    if ((var0 & 0x2000) && var3 == 5) return 1;
    if ((var0 & 0x4000) && var3 == 6) return 1;
    if ((var0 & 0x8000) && var3 == 7) return 1;
    if ((var0 & 0x10000) && var3 == 8) return 1;
    return 0;
}
