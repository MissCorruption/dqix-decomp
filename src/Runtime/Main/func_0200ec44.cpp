#include <globaldefs.h>

struct Struct_0200ec44_2 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    long unknown_10_;
    void* unknown_14_;
};

struct Struct_0200ec44 {
    unsigned char* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    Struct_0200ec44_2* unknown_c_;
    char* unknown_10_;
    char* unknown_14_;
    char* unknown_18_;
};

// USA: func_0200ec44
extern "C" ARM void func_0200ec44(Struct_0200ec44* arg0, long arg1, long arg2) {
    Struct_0200ec44_2* var0 = (Struct_0200ec44_2*)(arg0->unknown_18_ + arg1);

    var0->unknown_0_ = arg0->unknown_4_;
    var0->unknown_4_ = arg0->unknown_0_;
    var0->unknown_8_ = arg0->unknown_8_;

    if (*arg0->unknown_0_ == '*') {
        var0->unknown_c_ = &var0->unknown_10_;
        var0->unknown_10_ = *(long*)arg0->unknown_4_ + arg2;
    } else {
        var0->unknown_c_ = (char*)arg0->unknown_4_ + arg2;
    }
}
