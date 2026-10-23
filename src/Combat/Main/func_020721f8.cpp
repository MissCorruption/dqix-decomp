#include <globaldefs.h>
extern "C" struct Struct_020721f8* func_02072238(struct Struct_020721f8_2*, int);

struct Struct_020721f8 {
    unsigned char unknown_0_[0x1a];
    short unknown_1a_;
    struct Struct_020721f8* unknown_1c_;
};

struct Struct_02071ffc_3 {
    struct Struct_020721f8* unknown_0_;
};


// USA: func_020721f8
extern "C" ARM void func_020721f8(struct Struct_02071ffc_3* arg0) {
    struct Struct_020721f8* var0;
    arg0->unknown_0_ = func_02072238((struct Struct_020721f8_2*)(arg0), (int)(-1));
    if (arg0->unknown_0_ == NULL) return;
    var0 = arg0->unknown_0_;
    while (var0 != NULL) {
        struct Struct_020721f8* var1 = func_02072238((struct Struct_020721f8_2*)(arg0), (int)(var0->unknown_1a_));
        var0->unknown_1c_ = var1;
        var0 = var1;
    }
}
