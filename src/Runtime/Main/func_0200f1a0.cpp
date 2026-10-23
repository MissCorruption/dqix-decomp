#include <globaldefs.h>

struct Struct_0200f1a0_2 {
    unsigned long unknown_0_[16];
    char* unknown_40_;
    unsigned long unknown_44_;
    unsigned long unknown_48_;
    unsigned short unknown_4c_;
    bool unknown_4e_;
    bool unknown_4f_;
    bool unknown_50_;
};

struct Struct_0200f1a0 {
    unsigned char* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    char* unknown_10_;
    char* unknown_14_;
    char* unknown_18_;
    Struct_0200f1a0_2 unknown_1c_;
};

struct Struct_0200f1a0_3;

// USA: func_0200f1a0
extern "C" ARM char* func_0200f1a0(Struct_0200f1a0* arg0, Struct_0200f1a0_3* arg1) {
    unsigned long var0, var1, *var2;
    int var3;

    var0 = arg0->unknown_1c_.unknown_44_;
    var1 = arg0->unknown_1c_.unknown_4e_ ? 16 : 0;

    var2 = (unsigned long*)(arg0->unknown_18_ + var0 - var1);
    for (var3 = 15; var3 >= 0; var3--) {
        if (arg0->unknown_1c_.unknown_4c_ & (1 << var3))
            arg0->unknown_1c_.unknown_0_[var3] = *--var2;
    }

    arg0->unknown_14_ = arg0->unknown_18_ + var0;

    return (char*)arg0->unknown_1c_.unknown_0_[14];
}
