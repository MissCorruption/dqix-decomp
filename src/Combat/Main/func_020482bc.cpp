#include <globaldefs.h>

struct Struct_020482bc_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

struct Struct_020482bc {
    char unknown_0_[0x32];
    unsigned short unknown_32_;
};

struct Struct_02010604_3 {
    char unknown_0_[0x130];
    struct Struct_020482bc_2* unknown_130_;
    struct Struct_020482bc* unknown_134_;
};

// USA: func_020482bc
extern "C" ARM int func_020482bc(struct Struct_02010604_3* arg0) {
    struct Struct_020482bc_2* var0 = arg0->unknown_130_;
    struct Struct_020482bc* var1 = arg0->unknown_134_;
    unsigned short var2 = var0->unknown_6_;
    unsigned short var3 = var1->unknown_32_;
    if (var3 - var2 <= 0) {
        return 0;
    }
    var0->unknown_6_ = var3;
    return var3 - var2;
}
