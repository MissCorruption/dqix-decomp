#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov023_021f7784_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

class Struct_ov023_021f7784 {
public:
    virtual void inline_ov023_021f7784_14(); virtual void inline_ov023_021f7784_15(); virtual void inline_ov023_021f7784_16(); virtual void inline_ov023_021f7784_17();
    virtual void inline_ov023_021f7784_18(); virtual void inline_ov023_021f7784_19(); virtual void inline_ov023_021f7784_20();
    virtual void inline_ov023_021f7784_21(Struct_ov023_021f7784_2* arg0);
    virtual Struct_ov023_021f7784_2 inline_ov023_021f7784_22();
    virtual void inline_ov023_021f7784_23(); virtual void inline_ov023_021f7784_24(); virtual void inline_ov023_021f7784_25(); virtual void inline_ov023_021f7784_26();
    virtual void inline_ov023_021f7784_27(); virtual void inline_ov023_021f7784_28(); virtual void inline_ov023_021f7784_29(); virtual void inline_ov023_021f7784_30();
    virtual void inline_ov023_021f7784_31(); virtual void inline_ov023_021f7784_32(); virtual void inline_ov023_021f7784_33(); virtual void inline_ov023_021f7784_34();
    virtual void inline_ov023_021f7784_35(); virtual void inline_ov023_021f7784_36(); virtual void inline_ov023_021f7784_37(); virtual void inline_ov023_021f7784_38();
    virtual void inline_ov023_021f7784_39(); virtual void inline_ov023_021f7784_40(); virtual void inline_ov023_021f7784_41(); virtual void inline_ov023_021f7784_42();
    virtual void inline_ov023_021f7784_43(); virtual void inline_ov023_021f7784_44(); virtual void inline_ov023_021f7784_45(); virtual void inline_ov023_021f7784_46();
    virtual void inline_ov023_021f7784_47(); virtual void inline_ov023_021f7784_48(); virtual void inline_ov023_021f7784_49(); virtual void inline_ov023_021f7784_50();
    virtual void inline_ov023_021f7784(); virtual void inline_ov023_021f7784_2(); virtual void inline_ov023_021f7784_3(); virtual void inline_ov023_021f7784_4();
    virtual void inline_ov023_021f7784_5(); virtual void inline_ov023_021f7784_6(); virtual void inline_ov023_021f7784_7(); virtual void inline_ov023_021f7784_8();
    virtual void inline_ov023_021f7784_9(); virtual void inline_ov023_021f7784_10(); virtual void inline_ov023_021f7784_11(); virtual void inline_ov023_021f7784_12();
    virtual void inline_ov023_021f7784_13(unsigned char arg0, unsigned char arg1, unsigned char arg2);

    char unknown_4_[0xc - 0x4];
    unsigned char unknown_c_;
    char unknown_d_[0x1c - 0xd];
    int unknown_1c_;
#if defined(jpn)
    char unknown_20_[0x44 - 0x20];
#else
    char unknown1_20_[0x48 - 0x20];
#endif
    void* unknown_48_;
    unsigned char unknown_4c_;
    unsigned char unknown_4d_;
    unsigned char unknown_4e_;
};


// USA: func_ov023_021f7784
extern "C" ARM int func_ov023_021f7784(Struct_ov023_021f7784* arg0) {
    if (arg0->unknown_c_ & 0x80) {
        int var0 = GameState::GetInstance()->GetTickCount();
        int var1 = (unsigned short)var0;
        Struct_ov023_021f7784_2 var2 = arg0->inline_ov023_021f7784_22();
        int var3 = var2.unknown_0_ - (var1 << 11);
        var2.unknown_4_ += var1 << 11;
        var2.unknown_0_ = var3;
        if (var2.unknown_0_ < -0x100000) var2.unknown_0_ += 0x100000;
        if (var2.unknown_4_ > 0x100000) var2.unknown_4_ -= 0x100000;
        arg0->inline_ov023_021f7784_21(&var2);
    }

    if (arg0->unknown_c_ & 0x1) {
        return arg0->unknown_1c_;
    }

    if (arg0->unknown_48_ != 0) {
        arg0->inline_ov023_021f7784_13(arg0->unknown_4c_, arg0->unknown_4d_, arg0->unknown_4e_);
    }

    return arg0->unknown_1c_;
}
