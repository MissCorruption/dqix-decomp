#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

int RoundUp(float);
extern "C" short func_ov000_0215a16c(void*, int, int, short*);
extern "C" void* func_ov000_0215e958(void*);
extern "C" void func_ov000_02159eac(void*, void*, int);
extern "C" void func_ov000_0215a88c(void*, void*, int);
extern "C" int func_ov024_021eae14(void*, int);
extern "C" void func_ov000_0215ccbc(void*, void*, GameObject*, short, short, short, unsigned long long, unsigned char);
struct Struct_ov024_021e13e0 { char unknown_0_[0x1c]; unsigned char unknown_1c_0_:7; unsigned char unknown_1c_7_:1; };
struct Struct_ov024_021e13e0_2 { char unknown_0_[0xc]; Struct_ov024_021e13e0* unknown_c_; void* unknown_10_; };

// USA: func_ov024_021e13e0
extern "C" ARM void* func_ov024_021e13e0(Struct_ov024_021e13e0_2* arg0, int arg1, int arg2) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    int var1 = RoundUp(0.4f * (float)(unsigned int)var0->currentStats_->primaryStats.maxHP);
    if (var1 < 75) var1 = 75;
    union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var2;
    var2.unknown_0_ = 0;
    var2.unknown_4_ = 0;
    short var3 = 0;
    short var4 = func_ov000_0215a16c(arg0->unknown_10_, arg2, var1, &var3);
    void* var5 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var5) return 0;
    int var6 = 0;
    if (var3 > 0) {
        func_ov000_02159eac(arg0->unknown_10_, &var2, 0x25);
        func_ov000_0215a88c(arg0->unknown_10_, var5, 0x1ba);
        func_ov000_0215a88c(arg0->unknown_10_, var5, 0x16);
        var6 = 1;
    }
    if (func_ov024_021eae14(arg0, arg2) > 0) {
        if (!var6) {
            func_ov000_0215a88c(arg0->unknown_10_, var5, 0x1ba);
            var6 = 1;
        }
        func_ov000_0215a88c(arg0->unknown_10_, var5, 0x1bb);
    }
    if (!var6) func_ov000_0215a88c(arg0->unknown_10_, var5, 0x1f);
    unsigned short var7 = var0->currentStats_->primaryStats.currMP;
    unsigned char var8;
    if (arg0->unknown_c_->unknown_1c_7_) var8 = 1; else var8 = 0;
    func_ov000_0215ccbc(arg0->unknown_10_, var5, var0, -var3, var4, var7, var2.unknown1_0_, var8);
    return var5;
}
