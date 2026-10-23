#include <globaldefs.h>

struct Struct_02048284_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

struct Struct_02048284_2 {
    char unknown_0_[0x32];
    unsigned short unknown_32_;
};

struct Struct_02048284 {
    char unknown_0_[0x130];
    struct Struct_02048284_3* unknown_130_;
    struct Struct_02048284_2* unknown_134_;
};

// USA: func_02048284
extern "C" ARM int func_02048284(struct Struct_02048284* arg0, int arg1) {
    struct Struct_02048284_3* var0 = arg0->unknown_130_;
    struct Struct_02048284_2* var1 = arg0->unknown_134_;
    int var2 = var1->unknown_32_ - var0->unknown_6_;
    if (var2 <= 0) {
        return 0;
    }
    if (var2 <= arg1) {
        var0->unknown_6_ = var1->unknown_32_;
        return var2;
    }
    var0->unknown_6_ = var0->unknown_6_ + arg1;
    return arg1;
}
