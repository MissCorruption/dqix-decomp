#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_02088418;

struct Struct_ov000_0215704c {
    char unknown_0_[0x22];
    unsigned short unknown_22_0_ : 12;
    unsigned short unknown_23_4_ : 2;
    char unknown_24_[0x28 - 0x24];
    short unknown_28_;
    char unknown_2a_[0x4a - 0x2a];
    unsigned char unknown_4a_;
    char unknown_4b_[0x4e - 0x4b];
    unsigned char unknown_4e_;
    char unknown_4f_[0x53 - 0x4f];
    unsigned char unknown_53_;
};

struct Struct_ov000_0215704c_2 {
    char unknown_0_[0x138];
    struct Struct_ov000_0215704c* unknown_138_;
};

struct Struct_ov000_02182a64 {
    short unknown_0_[4];
};

struct Struct_ov000_0215704c_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};

struct Struct_ov000_02182aa0 {
    struct Struct_ov000_0215704c_3 unknown_0_[3];
};

extern struct Struct_ov000_02182a64 data_ov000_02182a64;
extern struct Struct_ov000_02182aa0 data_ov000_02182aa0;

extern "C" int func_ov000_0215e9fc(struct Random* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_02155f9c(struct Random* arg0, int arg1, int arg2);
extern "C" float func_ov000_0215641c(struct Random* arg0, int arg1);
int NextRandomMax(struct Random* random, int maximum);
extern "C" int func_02088418(struct Struct_02088418* arg0, int arg1, int arg2);
extern "C" int func_0208824c(unsigned char* arg0);
extern "C" int func_020883ac(unsigned char* arg0);

static inline int inline_ov000_02156cc4_2(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov000_0215704c
extern "C" ARM int func_ov000_0215704c(struct Random* arg0, int arg1) {
    int var0;
    GameState* var1;
    if (inline_ov000_02156cc4_2(arg1)) {
        return 0;
    }
    struct Struct_ov000_02182a64 var2 = data_ov000_02182a64;
    var0 = func_ov000_0215e9fc(arg0, var2.unknown_0_, 4, 1);
    struct Struct_ov000_0215704c_2* var3 = (struct Struct_ov000_0215704c_2*)GameState::GetInstance()->GetCombatantByIndex(arg1);
    if (var3 == NULL) {
        return 0;
    }
    if (func_ov000_02155f9c(arg0, arg1, 0)) {
        return 0;
    }
    if (var3->unknown_138_->unknown_53_ == 0) {
        return 0;
    }
    var1 = GameState::GetInstance();
    for (int var4 = 0; var4 < var0; var4++) {
        if (func_0200ff1c(var1, var2.unknown_0_[var4]) == NULL) {
            continue;
        }
        float var5 = func_ov000_0215641c(arg0, var2.unknown_0_[var4]);
        var5 *= var3->unknown_138_->unknown_53_ / 100.0f;
        if (var5 > NextRandomMax(arg0, 100)) {
            struct Struct_ov000_02182aa0 var6 = data_ov000_02182aa0;
            var6.unknown_0_[0].unknown_3_ = func_02088418((struct Struct_02088418*)var3->unknown_138_, 10, 0);
            var6.unknown_0_[1].unknown_1_ = var3->unknown_138_->unknown_4e_;
            var6.unknown_0_[1].unknown_3_ = func_0208824c((unsigned char*)var3->unknown_138_);
            var6.unknown_0_[2].unknown_1_ = var3->unknown_138_->unknown_4a_;
            var6.unknown_0_[2].unknown_3_ = func_020883ac((unsigned char*)var3->unknown_138_);
            int var7 = NextRandomMax(arg0, 100);
            for (int var8 = 0; var8 < 3; var8++) {
                if (var6.unknown_0_[var8].unknown_0_ > var7) {
                    if (var6.unknown_0_[var8].unknown_1_ && var6.unknown_0_[var8].unknown_3_) {
                        var3->unknown_138_->unknown_23_4_ = var6.unknown_0_[var8].unknown_2_;
                        var3->unknown_138_->unknown_28_ = var2.unknown_0_[var4];
                        return 1;
                    }
                }
                var7 -= var6.unknown_0_[var8].unknown_0_;
            }
        }
    }
    return 0;
}
