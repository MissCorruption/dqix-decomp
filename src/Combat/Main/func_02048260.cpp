#include <globaldefs.h>

struct Struct_02048260_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};

struct Struct_02048260 {
    char unknown_0_[0x30];
    unsigned short unknown_30_;
};

struct Struct_02048260_2 {
    char unknown_0_[0x130];
    struct Struct_02048260_3* unknown_130_;
    struct Struct_02048260* unknown_134_;
};

// USA: func_02048260
extern "C" ARM int func_02048260(struct Struct_02048260_2* arg0) {
    struct Struct_02048260_3* var0 = arg0->unknown_130_;
    struct Struct_02048260* var1 = arg0->unknown_134_;
    unsigned short var2 = var0->unknown_4_;
    unsigned short var3 = var1->unknown_30_;
    if (var3 - var2 <= 0) {
        return 0;
    }
    var0->unknown_4_ = var3;
    return var3 - var2;
}
