#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02052df8;
extern "C" int func_02052df8(Struct_02052df8*, int);
extern "C" int func_020100a8(GameState*);
extern "C" int func_020dd200(int, int);
extern "C" int func_020dd154(int, int);
struct Struct_020dd4c4_2 {
    unsigned int : 7;
    unsigned int unknown_0_7_ : 4;
    unsigned int : 18;
    unsigned int unknown_3_5_ : 1;
    unsigned int unknown_3_6_ : 2;
    unsigned int unknown_4_0_ : 12;
    unsigned int : 15;
    unsigned int unknown_7_3_ : 1;
    unsigned int unknown_7_4_ : 1;
    unsigned int unknown_7_5_ : 1;
    unsigned int : 2;
};
struct Struct_020dd4c4_3 {
    Struct_020dd4c4_2* unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 4;
    unsigned int : 28;
    char unknown_c_[0xc];
    short unknown_18_;
};
struct Struct_020dd4c4_4 {
    char unknown_0_[0x186];
    unsigned char unknown_186_[13];
    char unknown_193_[0x49c - 0x193];
    unsigned char unknown_49c_0_ : 1;
    unsigned char : 7;
#if defined(jpn)
    char unknown_49d_[0x8b8 - 0x49d];
#else
    char unknown1_49d_[0x950 - 0x49d];
#endif
    int unknown_950_;
    unsigned short inline_020dd4c4(int arg0) const {
        return unknown_186_[arg0];
    }
};
struct Struct_020dd4c4 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    Struct_020dd4c4_4* unknown_150_;
};
static inline Struct_020dd4c4* inline_020dd4c4_2(int arg0) {
    return (Struct_020dd4c4*)func_0200ff1c(GameState::GetInstance(), arg0);
}

// USA: func_020dd4c4
extern "C" ARM int func_020dd4c4(int arg0, Struct_020dd4c4_3* arg1) {
    if (!arg1) return 0x200;
    if (arg1->unknown_18_ <= 0) return 0x200;
    Struct_020dd4c4* var0 = inline_020dd4c4_2(arg0);
    if (!var0) return 0x20;
    if (!var0->unknown_150_->unknown_950_) return 0;
    int var1 = arg1->unknown_8_0_ <= 7;
    if (!var1) return 8;
    if (!arg1->unknown_0_) return 8;
    int var2 = 0;
    GameState* var3 = GameState::GetInstance();
    var2 |= (arg1->unknown_0_->unknown_3_5_ && arg0 != func_020100a8(var3)) ? 0x100 : 0;
    int var4;
    if (arg1->unknown_8_0_ != 0 && arg1->unknown_8_0_ != 1) var4 = 0;
    else if (func_020dd200(arg0 & 0xff, arg1->unknown_0_->unknown_0_7_ & 0xff)) var4 = 0;
    else {
        if (func_020dd154(arg0, arg1->unknown_0_->unknown_0_7_ & 0xff)) var4 = 0;
        else var4 = 1;
    }
    var2 |= var4;
    int var5;
    if (arg1->unknown_8_0_ == 0) var5 = 0;
    else if (arg1->unknown_8_0_ == 1) var5 = 0;
    else {
        int var6 = inline_020dd4c4_2(arg0)->unknown_150_->unknown_950_;
        if (var6 == 0) var5 = 2;
        else {
            int var7 = 1 << (var6 - 1);
            var5 = (arg1->unknown_0_->unknown_4_0_ & var7) ? 0 : 2;
        }
    }
    var2 |= var5;
    Struct_020dd4c4_4* var8 = inline_020dd4c4_2(arg0)->unknown_150_;
    int var9 = var8->inline_020dd4c4(var8->unknown_950_);
    var2 |= arg1->unknown_0_->unknown_3_6_ <= (unsigned short)var9 ? 0 : 0x10;
    var0 = inline_020dd4c4_2(arg0);
    Struct_020dd4c4_2* var10 = arg1->unknown_0_;
    unsigned int var11 = var0->unknown_150_->unknown_49c_0_;
    int var12;
    if (func_02052df8((Struct_02052df8*)var0, 9) == 0x4680 && !var10->unknown_7_5_) var12 = 0;
    else {
        unsigned int var13[2] = { var10->unknown_7_3_, var10->unknown_7_4_ };
        var12 = var13[var11] ? 0 : 0x80;
    }
    var2 |= var12;
    return var2;
}
