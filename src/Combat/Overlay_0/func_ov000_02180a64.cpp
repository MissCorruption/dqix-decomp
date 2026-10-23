#include <globaldefs.h>

extern "C" int func_ov000_021719f8(int* arg0);

struct Struct_ov000_02180a64_3 {
    char unknown_0_[0x10];
    signed char unknown_10_[8];
    signed char unknown_18_;
    char unknown_19_[0x1c - 0x19];
    signed char unknown_1c_;
    char unknown_1d_[0x4c - 0x1d];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

struct Struct_ov000_02180a64 {
    unsigned short unknown_0_0_ : 1;
    unsigned short unknown_0_1_ : 1;
    unsigned short unknown_0_2_ : 1;
    unsigned short unknown_0_3_ : 1;
    unsigned short unknown_0_4_ : 1;
    unsigned short unknown_0_5_ : 1;
    unsigned short unknown_0_6_ : 10;
};

struct Struct_ov000_02180a64_2 {
    char unknown_0_[0x6c];
    signed char unknown_6c_[4];
    char unknown_70_[0x910 - 0x70];
    int unknown_910_;
    int unknown_914_;
    int unknown_918_;
    int unknown_91c_;
    int unknown_920_;
    int unknown_924_;
    int unknown_928_;
    char unknown_92c_[0x958 - 0x92c];
    Struct_ov000_02180a64_3 unknown_958_[4];
#if defined(jpn)
    char unknown_1b78_[0x1faa - 0x1b78];
#else
    char unknown_1a78_[0x1d72 - 0x1a78];
#endif
    Struct_ov000_02180a64 unknown_1d72_;
};

// USA: func_ov000_02180a64
extern "C" ARM void func_ov000_02180a64(Struct_ov000_02180a64_2* arg0) {
    int var0;
    int var1;
    Struct_ov000_02180a64_3* var2;
    int var3;
    var0 = 0;
    var1 = 0;
    for (var3 = 0; var3 < 4; var3++) {
        var2 = &arg0->unknown_958_[arg0->unknown_6c_[var3]];
        if (var2->unknown_4c_ < 0) continue;
        if (func_ov000_021719f8((int*)var2)) continue;
        var0++;
        if (var2->unknown_10_[var2->unknown_18_] < 100) continue;
        if (var2->unknown_1c_ == 6) var1++;
    }
    if (var0 != var1) return;
    arg0->unknown_920_ = 0x100;
    arg0->unknown_924_ = 0x100;
    arg0->unknown_928_ = 0x100;
    arg0->unknown_910_ = 0;
    arg0->unknown_914_ = 0;
    arg0->unknown_918_ = 0;
    arg0->unknown_91c_ = 0;
    arg0->unknown_1d72_.unknown_0_3_ = 0;
    arg0->unknown_1d72_.unknown_0_4_ = 0;
    arg0->unknown_1d72_.unknown_0_5_ = 1;
}
