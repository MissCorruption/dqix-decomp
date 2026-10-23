#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov025_021dfbfc_4 {
#if defined(jpn)
    char unknown_0_[0x8b4];
#else
    char unknown1_0_[0x94c];
#endif
    int unknown_94c_;
};

extern "C" struct Struct_ov025_021dfbfc_4* func_02053c6c(unsigned char* arg0);
extern "C" void func_02049458(unsigned char* arg0, unsigned char arg1);

struct Struct_ov025_021dfbfc {
    char unknown_0_[0xe];
    short unknown_e_;
};

struct Struct_ov025_021dfbfc_2 {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
    char unknown_22_[0xe];
    struct Struct_ov025_021dfbfc_2* unknown_30_;
};

struct Struct_ov025_021dfbfc_3 {
    char unknown_0_[0x10];
    struct Struct_ov025_021dfbfc_2* unknown_10_;
    struct Struct_ov025_021dfbfc* unknown_14_;
    char unknown_18_[0x10];
};

struct Struct_ov025_021dfbfc_5 {
    char unknown_0_[0x821c];
    struct Struct_ov025_021dfbfc_3 unknown_821c_[77];
    int unknown_8e24_;
};

struct Struct_ov025_021dfbfc_6 {
#if defined(jpn)
    char unknown_0_[0x218];
#else
    char unknown1_0_[0x29c];
#endif
    struct Struct_ov025_021dfbfc_5* unknown_29c_;
};

static inline int inline_ov025_021dfbfc(int arg0) {
    return arg0 >= 0xc0 && arg0 <= 0xc7;
}

// USA: func_ov025_021dfbfc
extern "C" ARM void func_ov025_021dfbfc(Struct_ov025_021dfbfc_6* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov025_021dfbfc_5* var1 = arg0->unknown_29c_;
    for (int var2 = 0; var2 < var1->unknown_8e24_; var2++) {
        struct Struct_ov025_021dfbfc_3* var3 = &var1->unknown_821c_[var2];
        for (struct Struct_ov025_021dfbfc_2* var4 = var3->unknown_10_; var4 != 0; var4 = var4->unknown_30_) {
            int var5 = var4->unknown_20_;
            int var6 = 0;
            if (inline_ov025_021dfbfc(var5)) {
                var6 = 1;
            } else {
                GameObject* var7 = func_0200ff1c(var0, var5);
                if (var7 != 0) {
                    struct Struct_ov025_021dfbfc_4* var8 = func_02053c6c((unsigned char*)var7);
                    if (var8 != 0 && (signed char)var8->unknown_94c_ != 5) {
                        var6 = 1;
                    }
                }
            }
            if (var6) {
                GameObject* var9 = var0->GetCombatantByIndex(var5);
                if (var9 != 0 && var3->unknown_14_ != 0) {
                    func_02049458((unsigned char*)var9, var3->unknown_14_->unknown_e_);
                }
            }
        }
    }
}
