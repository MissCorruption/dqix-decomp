#include <globaldefs.h>

struct Struct_ov023_021f8b78_2 { int unknown_0_; int unknown_4_; int unknown_8_; };

class Struct_ov023_021f8b78_3 {
public:
    virtual void inline_ov023_021f8b78(); virtual void inline_ov023_021f8b78_2(); virtual void inline_ov023_021f8b78_3(); virtual void inline_ov023_021f8b78_4();
    virtual void inline_ov023_021f8b78_5(); virtual void inline_ov023_021f8b78_6(); virtual void inline_ov023_021f8b78_7(); virtual void inline_ov023_021f8b78_8();
    virtual Struct_ov023_021f8b78_2 inline_ov023_021f8b78_9();
};

struct Struct_ov023_021f8b78 {
    char unknown_0_[0x34];
    unsigned short unknown_34_;
    char unknown_36_[0x3a - 0x36];
    unsigned short unknown_3a_;
    unsigned short unknown_3c_;
};

extern "C" void __clear(void* arg0, int arg1);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" Struct_ov023_021f8b78_3* func_ov023_021f6880(void* arg0, int arg1);

// USA: func_ov023_021f8b78
extern "C" ARM Struct_ov023_021f8b78_2 func_ov023_021f8b78(struct Struct_ov023_021f8b78* arg0, void* arg1) {
    Struct_ov023_021f8b78_2 var0;
    __clear(&var0, 0xc);
    var0.unknown_0_ = arg0->unknown_3a_ << 12;
    var0.unknown_4_ = arg0->unknown_3c_ << 12;

    void* var1 = func_ov011_021849c8(arg1);
    Struct_ov023_021f8b78_3* var2 = func_ov023_021f6880(var1, arg0->unknown_34_);
    if (var2 != NULL) {
        Struct_ov023_021f8b78_2 var3 = var2->inline_ov023_021f8b78_9();
        var0.unknown_0_ = var0.unknown_0_ + var3.unknown_0_;
        var0.unknown_4_ = var0.unknown_4_ + var3.unknown_4_;
    }
    return var0;
}
