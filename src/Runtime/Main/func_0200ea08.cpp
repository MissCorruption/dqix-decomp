#include <globaldefs.h>

struct Struct_0200ea08_2 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    long unknown_10_;
    void* unknown_14_;
};

struct Struct_0200ea08 {
    unsigned char* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    Struct_0200ea08_2* unknown_c_;
    char* unknown_10_;
    char* unknown_14_;
    char* unknown_18_;
};

struct Struct_0200ea08_3 {
    char* unknown_0_;
    char* unknown_4_;
    char* unknown_8_;
    void* unknown_c_;
    void* unknown_10_;
    int unknown_14_;
};

struct Struct_0200ea08_4 {
    unsigned long unknown_0_;
    unsigned long unknown_4_;
    long unknown_8_;
    char* unknown_c_;
};

extern "C" void func_0200df80(Struct_0200ea08* arg0, Struct_0200ea08_3* arg1, char* arg2);
extern "C" void func_0200f2ec(Struct_0200ea08* context, Struct_0200ea08_3* info, char* address);

// USA: func_0200ea08
extern "C" ARM void func_0200ea08(Struct_0200ea08* arg0, Struct_0200ea08_3* arg1,
                                  Struct_0200ea08_4* arg2, char* arg3) {
    Struct_0200ea08_2* var0;

#pragma exception_terminate

    func_0200df80(arg0, arg1, arg3);

    var0 = (Struct_0200ea08_2*)(arg0->unknown_18_ + arg2->unknown_8_);
    var0->unknown_0_ = arg0->unknown_4_;
    var0->unknown_4_ = arg0->unknown_0_;
    var0->unknown_8_ = arg0->unknown_8_;
    var0->unknown_14_ = arg3;

    func_0200f2ec(arg0, arg1, arg1->unknown_0_ + arg2->unknown_4_);
}
