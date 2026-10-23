#include <globaldefs.h>
extern "C" struct Struct_0207214c* func_0207218c(struct Struct_0207214c_2*, int);

struct Struct_0207214c {
    unsigned char unknown_0_[0x18];
    short unknown_18_;
    unsigned char unknown_1a_[2];
    struct Struct_0207214c* unknown_1c_;
};

struct Struct_02071ffc_2 {
    struct Struct_0207214c* unknown_0_;
};


// USA: func_0207214c
extern "C" ARM void func_0207214c(struct Struct_02071ffc_2* arg0) {
    struct Struct_0207214c* var0;
    arg0->unknown_0_ = func_0207218c((struct Struct_0207214c_2*)(arg0), (int)(-1));
    if (arg0->unknown_0_ == NULL) return;
    var0 = arg0->unknown_0_;
    while (var0 != NULL) {
        struct Struct_0207214c* var1 = func_0207218c((struct Struct_0207214c_2*)(arg0), (int)(var0->unknown_18_));
        var0->unknown_1c_ = var1;
        var0 = var1;
    }
}
