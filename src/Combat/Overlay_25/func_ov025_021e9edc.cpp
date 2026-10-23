#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_02176134;

struct Struct_ov025_021e9edc_5 {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
    unsigned short unknown_22_;
    char unknown_24_[0xc];
    Struct_ov025_021e9edc_5* unknown_30_;
};

struct Struct_ov025_021e9edc {
    char unknown_0_[0x10];
    Struct_ov025_021e9edc_5* unknown_10_;
};

struct Struct_ov025_021e9edc_2 {
    char unknown_0_[0xc];
    unsigned short unknown_c_;
};

struct Struct_ov025_021e9edc_3 {
    char unknown_0_[4];
    unsigned short unknown_4_;
};

struct Struct_ov025_021e9edc_4 {
    char unknown_0_[0x130];
    Struct_ov025_021e9edc_3* unknown_130_;
};

extern "C" void* func_ov000_02160130(void);
extern "C" Struct_ov025_021e9edc* func_ov000_02160f20(void* arg0);
extern "C" int func_ov025_021def24(void* arg0);
extern "C" char* func_ov000_02160f08(void* arg0);
extern "C" Struct_ov025_021e9edc_2* func_ov025_021dafd0(char* arg0, int arg1);
extern "C" void func_ov000_02176134(Struct_ov000_02176134* arg0, unsigned short arg1);

static inline int inline_ov000_02169850(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov025_021e9edc
extern "C" ARM void func_ov025_021e9edc(void* arg0) {
    void* var0 = func_ov000_02160130();
    Struct_ov025_021e9edc* var1 = func_ov000_02160f20(var0);
    if (func_ov025_021def24(var0) != 0) {
        return;
    }
    GameState* var2 = GameState::GetInstance();
    char* var3 = func_ov000_02160f08(func_ov000_02160130());
    for (Struct_ov025_021e9edc_5* var4 = var1->unknown_10_; var4 != 0; var4 = var4->unknown_30_) {
        int var5 = var4->unknown_20_;
        unsigned short var6 = var4->unknown_22_;
        Struct_ov025_021e9edc_2* var7 = func_ov025_021dafd0(var3, var5);
        Struct_ov025_021e9edc_4* var8 = (Struct_ov025_021e9edc_4*)var2->GetCombatantByIndex(var5);
        if (var8 == 0) {
            continue;
        }
        if (inline_ov000_02169850(var5)) {
            var6 = var4->unknown_22_;
            var7 = func_ov025_021dafd0(var3, var5);
            var8 = (Struct_ov025_021e9edc_4*)var2->GetCombatantByIndex(var5);
        }
        if (var7 != 0 && var8 != 0) {
            func_ov000_02176134((Struct_ov000_02176134*)var7, var6);
            var7->unknown_c_ = var6;
            var8->unknown_130_->unknown_4_ = var6;
        }
    }
}
