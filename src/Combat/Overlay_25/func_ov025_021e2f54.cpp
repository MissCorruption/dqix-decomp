#include "Resource/ActionDataTables.h"
#include <globaldefs.h>

struct Struct_ov025_021e2f54_3 {
    char unknown_0_[0x1c4];
    unsigned int unknown_1c4_;
    char unknown_1c8_[0x22c - 0x1c8];
    char unknown_22c_[4];
};

struct Struct_ov025_021ef988_5 {
#if defined(jpn)
    char unknown_0_[4];
#else
    char unknown1_0_[0xc];
#endif
    struct Struct_ov025_021e2f54_3* unknown_c_;
};

struct Struct_ov025_021e2f54 {
    char unknown_0_[0x14];
    unsigned int : 28;
    unsigned int unknown_17_4_ : 4;
};

struct Struct_ov025_021e2f54_2 {
    char unknown_0_[0x26];
    unsigned short unknown_26_;
};

struct Struct_ov000_0215440c;

extern struct Struct_ov025_021ef988_5 data_ov025_021ef988;

extern "C" struct Struct_ov025_021e2f54* func_02079e2c(char* arg0, int arg1);
extern "C" void* func_ov000_021600f8(struct Struct_ov000_0215440c* arg0, int arg1);
extern "C" short func_ov000_0215ffa0(void* arg0);
extern "C" void func_ov025_021ecc54(void* arg0, struct Struct_ov025_021e2f54_2* arg1);
extern "C" int func_ov000_0215fc60(char* arg0);

static inline int inline_ov025_021e2f54(void* arg0) {
    return func_ov000_0215ffa0(arg0) >= 0xc0 && func_ov000_0215ffa0(arg0) <= 0xc7;
}

// USA: func_ov025_021e2f54
extern "C" ARM void func_ov025_021e2f54(struct Struct_ov025_021e2f54_2* arg0, short* arg1, char* arg2) {
    struct Struct_ov025_021e2f54_3* var0 = data_ov025_021ef988.unknown_c_;
    struct Struct_ov025_021e2f54* var1 = func_02079e2c((char*)func_020797dc(), *arg1);
    void* var2 = func_ov000_021600f8((struct Struct_ov000_0215440c*)arg1, 0);
    if (var1 != 0 && var2 != 0) {
        if (inline_ov025_021e2f54(var2) && var1->unknown_17_4_ == 4) {
            arg0->unknown_26_ |= 8;
            func_ov025_021ecc54(var0->unknown_22c_, arg0);
            arg0->unknown_26_ = 7;
            func_ov025_021ecc54(var0->unknown_22c_, arg0);
        } else {
            func_ov025_021ecc54(var0->unknown_22c_, arg0);
        }
    } else {
        func_ov025_021ecc54(var0->unknown_22c_, arg0);
    }
    if (func_ov000_0215fc60(arg2) != 0) {
        data_ov025_021ef988.unknown_c_->unknown_1c4_ |= 0x10;
    }
}
