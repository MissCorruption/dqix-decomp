#include <globaldefs.h>

struct Struct_ov023_021f67ec_2 {
    virtual void inline_ov023_021f67ec_6();
    virtual void inline_ov023_021f67ec_7();
    virtual void inline_ov023_021f67ec();
    virtual void inline_ov023_021f67ec_2();
    virtual void inline_ov023_021f67ec_3();
    virtual void inline_ov023_021f67ec_4();
    virtual void inline_ov023_021f67ec_5(void* arg0);
    char unknown_4_[0x14 - 4];
    struct Struct_ov023_021f67ec_2* unknown_14_;
    struct Struct_ov023_021f67ec_2* unknown_18_;
};

struct Struct_ov023_021f67ec {
    struct Struct_ov023_021f67ec_2* unknown_0_;
};

// USA: func_ov023_021f67ec
extern "C" ARM void func_ov023_021f67ec(struct Struct_ov023_021f67ec* arg0, struct Struct_ov023_021f67ec_2* arg1) {
    if (!arg1) return;
    struct Struct_ov023_021f67ec_2* var0 = arg1->unknown_14_;
    struct Struct_ov023_021f67ec_2* var1 = arg1->unknown_18_;
    if (var0) var0->unknown_18_ = var1;
    if (var1) var1->unknown_14_ = var0;
    if (arg0->unknown_0_ == arg1) arg0->unknown_0_ = var1;
    arg1->unknown_14_ = 0;
    arg1->unknown_18_ = 0;
    arg1->inline_ov023_021f67ec_5(arg0);
}
