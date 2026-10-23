#include <globaldefs.h>

extern "C" void* func_0200d9e4(void* arg0, int* arg1);

struct Struct_0200f1fc_2 {
    char unknown_0_[4];
    unsigned char* unknown_4_;
};

struct Struct_0200f1fc {
    char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    char unknown_1c_[0x38 - 0x1c];
    int unknown_38_;
    char unknown_3c_[0x48 - 0x3c];
    int unknown_48_;
    char unknown_4c_[0x60 - 0x4c];
    int unknown_60_;
    int unknown_64_;
    unsigned short unknown_68_;
    unsigned char unknown_6a_;
    unsigned char unknown_6b_;
    unsigned char unknown_6c_;
};

// USA: func_0200f1fc
extern "C" ARM void func_0200f1fc(Struct_0200f1fc* arg0, Struct_0200f1fc_2* arg1) {
    unsigned char* var0 = arg1->unknown_4_;
    unsigned char var1 = var0[0];
    int var2 = var1 & 0x40;
    arg0->unknown_6b_ = var2 ? 1 : 0;
    arg0->unknown_6a_ = (var1 & 0x20) ? 1 : 0;
    int var3 = var1 & 0x80;
    arg0->unknown_6c_ = var3 ? 1 : 0;
    unsigned char var4 = var0[1];
    unsigned char* var5 = var0 + 2;
    arg0->unknown_68_ = var4 << 4;
    arg0->unknown_68_ = arg0->unknown_68_ | 0x4000;
    var5 = (unsigned char*)func_0200d9e4(var5, &arg0->unknown_60_);
    if (var2 != 0) {
        func_0200d9e4(var5, &arg0->unknown_64_);
    }
    if (var2 != 0) {
        if (var3 != 0) {
            arg0->unknown_18_ = arg0->unknown_38_;
        } else {
            arg0->unknown_18_ = arg0->unknown_48_;
        }
    } else {
        arg0->unknown_18_ = arg0->unknown_14_;
    }
}
