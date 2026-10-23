#include <globaldefs.h>

struct Struct_0200eca0_2 {
    const char* unknown_0_;
    void* unknown_4_;
    unsigned int unknown_8_;
    void* unknown_c_;
    unsigned int unknown_10_;
    void* unknown_14_;
    void* unknown_18_;
};

struct Struct_0200eca0 {
    unsigned int unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    void* unknown_10_;
    unsigned int unknown_14_;
};

struct Struct_0200eca0_3 {
    int unknown_0_;
    const char* unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

extern "C" void* func_0200dad4(unsigned int, Struct_0200eca0*);
extern "C" void func_0200efb8();
extern "C" void func_0200f1fc(Struct_0200eca0_2*, Struct_0200eca0*);
extern "C" void* func_0200e830(Struct_0200eca0_2*, Struct_0200eca0*);
extern "C" unsigned char* func_0200ea68(Struct_0200eca0_2*, Struct_0200eca0*, Struct_0200eca0_3*);
extern "C" void* func_0200d9e4(void*, int*);
extern "C" void* func_0200d958(void*, int*);
extern "C" void func_0200df80(Struct_0200eca0_2*, Struct_0200eca0*, unsigned char*);
extern "C" void func_0200ec44(Struct_0200eca0_2*, int, int);
extern "C" void func_0200f2ec(Struct_0200eca0_2*, Struct_0200eca0*, unsigned int);

// USA: func_0200eca0
// KEEP-NAME
extern "C" ARM void func_0200eca0(Struct_0200eca0_2* arg0) {
    Struct_0200eca0 var0;
    Struct_0200eca0_3 var1;
    func_0200dad4(arg0->unknown_10_, &var0);
    if (!var0.unknown_4_) func_0200efb8();
    func_0200f1fc(arg0, &var0);
    if (arg0->unknown_0_) arg0->unknown_c_ = 0;
    else {
        arg0->unknown_c_ = func_0200e830(arg0, &var0);
        if (!arg0->unknown_c_) func_0200efb8();
    }
    unsigned char* var2 = func_0200ea68(arg0, &var0, &var1);
    var1.unknown_4_ = (const char*)(var2[1] | var2[2] << 8 | var2[3] << 16 | var2[4] << 24);
    void* var3 = func_0200d9e4(var2 + 5, &var1.unknown_8_);
    func_0200d958(var3, &var1.unknown_c_);
    func_0200df80(arg0, &var0, var2);
    func_0200ec44(arg0, var1.unknown_c_, var1.unknown_0_);
    func_0200f2ec(arg0, &var0, var0.unknown_0_ + var1.unknown_8_);
}
