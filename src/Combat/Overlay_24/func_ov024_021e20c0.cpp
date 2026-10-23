#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" void* func_ov000_02160130(void);
extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
extern "C" unsigned short func_0202053c(void* arg0);
extern "C" void func_ov000_021620f0(void* arg0, int arg1, int arg2);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021fe728 { short unknown_0_[8]; };
extern struct Struct_ov024_021fe728 data_ov024_021fe728;
extern unsigned char data_ov024_021fe758[4][4];

struct Struct_ov024_021e20c0 {
    unsigned char unknown_0_0_ : 7;
    unsigned char unknown_0_7_ : 1;
};

struct Struct_ov024_021e20c0_2 {
    char unknown_0_[0x1a];
    short unknown_1a_;
};

struct Struct_ov024_021e20c0_3 {
    char unknown_0_[4];
    struct Struct_ov024_021e20c0_2* unknown_4_;
    char unknown_8_[0xc - 8];
    void* unknown_c_;
    void* unknown_10_;
    char unknown_14_[0x6e - 0x14];
    unsigned char unknown_6e_;
};

// USA: func_ov024_021e20c0
extern "C" ARM void* func_ov024_021e20c0(struct Struct_ov024_021e20c0_3* arg0, int arg1, int arg2) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    void* var1 = func_ov000_02160130();
    struct Struct_ov024_021fe728 var2 = data_ov024_021fe728;
    int var3 = func_ov000_0215e9fc((int)arg0->unknown_10_, var2.unknown_0_, 4, 0);
    if (var3 <= 0) return 0;
    GameState* var4 = GameState::GetInstance();
    unsigned short var5 = 0;
    for (int var6 = 0; var6 < var3; var6++) {
        GameObject* var7 = func_0200ff1c(var4, var2.unknown_0_[var6]);
        if (var7) {
            var5 += func_0202053c(var7);
        }
    }
    int var8 = 0;
    if (var5 >= 0xc9) {
        var8 = 3;
    } else if (var5 >= 0x79) {
        var8 = 2;
    } else if (var5 >= 0x3d) {
        var8 = 1;
    }
    unsigned char var9 = NextRandomMax((struct Random*)arg0->unknown_10_, 100);
    unsigned char* var10 = data_ov024_021fe758[var8];
    unsigned char var11;
    for (var11 = 0; var11 < 4; var11++) {
        if (var10[var11] > var9) break;
        var9 -= var10[var11];
    }
    if (var11 >= 4) var11 = 3;
    int var12 = func_ov000_0215eb1c((int)arg0->unknown_10_, var2.unknown_0_, 8, 1);
    func_ov000_021620f0(var1, var11, 1);
    if (var12 > 0) {
        if (var12 > 1) {
            arg0->unknown_4_->unknown_1a_ = 0x221;
        } else {
            arg0->unknown_4_->unknown_1a_ = 0x220;
        }
        arg0->unknown_6e_ = 1;
    }
    void* var13 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var13) return 0;
    struct Struct_ov024_021e20c0* var14 = (struct Struct_ov024_021e20c0*)((char*)arg0->unknown_c_ + 0x1c);
    func_ov000_0215cd44(arg0->unknown_10_, var13, var0, 0, 0, 0, var14->unknown_0_7_ != 0);
    return var13;
}
