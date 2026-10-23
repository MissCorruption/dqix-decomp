#include <globaldefs.h>

struct Struct_020b0074;
extern "C" unsigned char* func_020b0074(Struct_020b0074* arg0);
struct Struct_0205a658_2;
extern "C" unsigned char* func_020b00e0(Struct_0205a658_2* arg0, unsigned int arg1);
extern "C" void func_020b0094(char* arg0);

struct Struct_020b0108 {
    char unknown_0_[4];
    int unknown_4_;
};

struct Struct_020b0108_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char* unknown_4_;
    char unknown_8_[0xc - 0x8];
    Struct_020b0108* unknown_c_;
    char unknown_10_[0x14 - 0x10];
    char* unknown_14_;
};

// USA: func_020b0108
extern "C" ARM void func_020b0108(Struct_020b0108_2* arg0) {
    arg0->unknown_4_ = arg0->unknown_4_ + (unsigned int)arg0;
    unsigned char* var0 = func_020b0074((Struct_020b0074*)arg0);
    unsigned short var1 = 0;
    if (var1 < arg0->unknown_0_) {
        do {
            Struct_020b0108* var2 = (Struct_020b0108*)func_020b00e0((Struct_0205a658_2*)arg0, var1);
            var2->unknown_4_ = var2->unknown_4_ + (int)var0;
            var1 = var1 + 1;
        } while (var1 < arg0->unknown_0_);
    }
    if (arg0->unknown_c_ != 0) {
        Struct_020b0108* var3 = (Struct_020b0108*)((char*)arg0->unknown_c_ + (unsigned int)arg0);
        arg0->unknown_c_ = var3;
        var3->unknown_4_ = var3->unknown_4_ + (int)var3;
        arg0->unknown_c_ = var3;
    }
    if (arg0->unknown_14_ != 0) {
        arg0->unknown_14_ = arg0->unknown_14_ + (unsigned int)arg0;
        func_020b0094(arg0->unknown_14_);
    }
}
