#include <globaldefs.h>

struct Struct_02048228_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};

struct Struct_02048228_2 {
    char unknown_0_[0x30];
    unsigned short unknown_30_;
};

struct Struct_02048228 {
    char unknown_0_[0x130];
    struct Struct_02048228_3* unknown_130_;
    struct Struct_02048228_2* unknown_134_;
};

// USA: func_02048228
extern "C" ARM int func_02048228(struct Struct_02048228* arg0, int arg1) {
    struct Struct_02048228_3* var0 = arg0->unknown_130_;
    struct Struct_02048228_2* var1 = arg0->unknown_134_;
    int var2 = var1->unknown_30_ - var0->unknown_4_;
    if (var2 <= 0) {
        return 0;
    }
    if (var2 <= arg1) {
        var0->unknown_4_ = var1->unknown_30_;
        return var2;
    }
    var0->unknown_4_ = var0->unknown_4_ + arg1;
    return arg1;
}
