#include <globaldefs.h>
#include "Resource/Script.h"
#include "GameState/GameState.h"

struct Struct_ov017_021ab6b0_2 {
    unsigned char unknown_0_[0x566];
    unsigned short unknown_566_;
};
extern "C" Struct_ov017_021ab6b0_2* func_02053c6c(unsigned char* arg0);

struct Struct_ov017_021ab6b0 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 15;
};

struct Struct_ov017_021d83b0 {
    Struct_ov017_021ab6b0* unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    short unknown_18_;
};
extern Struct_ov017_021d83b0 data_ov017_021d83b0;

// USA: func_ov017_021ab6b0
extern "C" ARM int func_ov017_021ab6b0(Script::Parameter* arg0, int arg1) {
    unsigned short var0 = (arg0++)->ToInt();
    if (data_ov017_021d83b0.unknown_0_->unknown_2_0_ != var0) {
        return 0;
    }
    if (var0 == data_ov017_021d83b0.unknown_4_ && data_ov017_021d83b0.unknown_6_ != 0) {
        return 0;
    }
    unsigned short var1 = (arg0++)->ToInt();
    if (var1 != 0 && var1 != data_ov017_021d83b0.unknown_0_->unknown_0_) {
        return 0;
    }
    int var2 = (arg1 - 2) / 5;
    if (var2 == 0) {
        if (data_ov017_021d83b0.unknown_0_->unknown_0_ == var1) {
            data_ov017_021d83b0.unknown_8_ = 0;
        }
        return 0;
    }
    Struct_ov017_021ab6b0_2* var3 = func_02053c6c((unsigned char*)GameState::GetInstance()->GetProtagonist());
    unsigned short var4;
    float var5, var6, var7, var8;
    for (int var9 = 0; var9 < var2; var9++) {
        var4 = (arg0++)->ToInt();
        var5 = (arg0++)->ToFloat();
        var6 = (arg0++)->ToFloat();
        var7 = (arg0++)->ToFloat();
        var8 = (arg0++)->ToFloat();
        if (var4 == var3->unknown_566_) {
            break;
        }
    }
    data_ov017_021d83b0.unknown_4_ = var0;
    data_ov017_021d83b0.unknown_6_ = var1;
    data_ov017_021d83b0.unknown_8_ = var4;
    data_ov017_021d83b0.unknown_18_ = 4096.0f * var5;
    data_ov017_021d83b0.unknown_c_ = 4096.0f * var6;
    data_ov017_021d83b0.unknown_10_ = 4096.0f * var7;
    data_ov017_021d83b0.unknown_14_ = 4096.0f * var8;
    return 1;
}
