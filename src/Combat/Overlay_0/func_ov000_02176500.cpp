#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Main/BattleList.h"

struct Struct_0201099c_3;

extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02041e70(char* arg0, int arg1);
extern "C" int func_02041a28(char* arg0, int arg1);
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02042058(char* arg0, const char* arg1);

struct Struct_ov000_02176500 {
    char unknown_0_[0x3b];
    unsigned char unknown_3b_0_ : 1;
    unsigned char unknown_3b_1_ : 1;
    unsigned char unknown_3b_2_ : 1;
    unsigned char unknown_3b_3_ : 1;
};

struct Struct_ov000_02176500_2 {
    char unknown_0_[0x138];
    struct Struct_ov000_02176500* unknown_138_;
};

struct Struct_ov000_02176500_3 {
    char unknown_0_[4];
    struct Struct_0201099c_3* unknown_4_;
    char unknown_8_[0x1c - 0x8];
    signed char unknown_1c_;
    char unknown_1d_[0x4c - 0x1d];
    int unknown_4c_;
};

extern int data_ov000_021834f8[6];

// USA: func_ov000_02176500
extern "C" ARM void func_ov000_02176500(struct Struct_ov000_02176500_3* arg0, char* arg1, int arg2) {
    if (arg1 == NULL || arg0->unknown_4_ == NULL) {
        return;
    }
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg0->unknown_4c_);
    if (var0 == NULL) {
        return;
    }
    int var1 = 0;
    if (((struct Struct_ov000_02176500_2*)var0)->unknown_138_->unknown_3b_3_) {
        var1 = 1;
    }
    int var2 = arg0->unknown_1c_;
    if (arg2) {
        func_02041c08(arg1, var2, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var2);
    for (int var3 = 0; var3 < 6; var3++) {
        int var4 = data_ov000_021834f8[var3];
        if (var1 == 0 && var4 == 5) {
            func_02041e70(arg1, 3);
        }
        func_02041b70(arg1, var4, (const char*)func_020e0434(arg0->unknown_4_, (short)(var4 + 0x7534)));
        if (var3 == 5) {
            return;
        }
        if (var3 & 1) {
            func_02042058(arg1, (const char*)func_020e0434(arg0->unknown_4_, 0));
        } else {
            func_02041a28(arg1, 0x45);
        }
        func_02041e70(arg1, 0xf);
    }
}
