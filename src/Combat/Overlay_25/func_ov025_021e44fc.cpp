#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_02160094 {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
    char unknown_22_[2];
    unsigned short unknown_24_;
};
struct Struct_ov000_0215440c_2;

struct Struct_ov000_021537b8_6 {
    char unknown_0_[0xe];
    short unknown_e_;
};

struct Struct_ov025_021e44fc {
    struct Struct_ov000_021537b8_6 unknown_0_;
    char unknown_10_[0x4c - 0x10];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

struct Struct_ov025_021e44fc_2 {
    char unknown_0_[0x958];
    struct Struct_ov025_021e44fc unknown_958_[4];
};

struct Struct_ov025_021e44fc_3 {
    char unknown_0_[6];
    unsigned short unknown_6_;
};

struct Struct_ov025_021e44fc_4 {
    char unknown_0_[0x130];
    struct Struct_ov025_021e44fc_3* unknown_130_;
};

extern "C" struct Struct_ov000_02160094* func_ov000_02160094(struct Struct_ov000_0215440c_2* arg0, int arg1);
extern "C" void* func_ov000_02160130(void);
extern "C" void* func_ov000_02160f08(void* arg0);
extern "C" void func_ov000_02176150(struct Struct_ov000_021537b8_6* arg0, unsigned short arg1);

static inline int inline_ov000_02156cc4_2(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov025_021e44fc
extern "C" ARM int func_ov025_021e44fc(void* arg0, struct Struct_ov000_0215440c_2* arg1) {
    struct Struct_ov000_02160094* var0 = func_ov000_02160094(arg1, 0);
    GameState* var1 = GameState::GetInstance();
    struct Struct_ov025_021e44fc_2* var2 = (struct Struct_ov025_021e44fc_2*)func_ov000_02160f08(func_ov000_02160130());
    struct Struct_ov025_021e44fc* var3;
    if (inline_ov000_02156cc4_2(var0->unknown_20_)) {
        for (int var4 = 0; var4 < 4; var4++) {
            if (var0->unknown_20_ == var2->unknown_958_[var4].unknown_4c_) {
                var3 = &var2->unknown_958_[var4];
                goto found;
            }
        }
    }
    var3 = 0;
found:
    struct Struct_ov025_021e44fc_4* var5 = (struct Struct_ov025_021e44fc_4*)var1->GetCombatantByIndex(var0->unknown_20_);
    if (var3 != 0) {
        unsigned short var6 = var0->unknown_24_;
        func_ov000_02176150(&var3->unknown_0_, var6);
        var3->unknown_0_.unknown_e_ = var6;
    }
    if (var5 != 0) {
        var5->unknown_130_->unknown_6_ = var0->unknown_24_;
    }
    return 1;
}
