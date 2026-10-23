#include <globaldefs.h>
#include "GameState/GameState.h"


struct Struct_02000c9c_80 { unsigned int unknown_0_[4]; };

struct Struct_ov025_021eedb0 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    struct Struct_02000c9c_80 unknown_8_;
    struct Struct_ov025_021eedb0* unknown_18_;
};

struct Struct_ov025_021eedb0_2 {
    char unknown_0_[0xe0];
    struct Struct_ov025_021eedb0* unknown_e0_;
    struct Struct_ov025_021eedb0* unknown_e4_;
};

typedef int (*Type_02000c9c_4)(struct Struct_ov025_021eedb0*);
extern Type_02000c9c_4 data_ov025_021ef93c[];

// USA: func_ov025_021eedb0
extern "C" ARM void func_ov025_021eedb0(struct Struct_ov025_021eedb0_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned int var1 = var0->GetEffectiveDeltaTime();
    struct Struct_ov025_021eedb0* var2 = arg0->unknown_e0_;
    struct Struct_ov025_021eedb0* var3 = 0;
    while (var2 != 0) {
        if (var1 < var2->unknown_4_) {
            var2->unknown_4_ -= var1;
        } else {
            var2->unknown_4_ = 0;
            if (data_ov025_021ef93c[var2->unknown_0_](var2) != 0) {
                if (var3 != 0) var3->unknown_18_ = var2->unknown_18_;
                else arg0->unknown_e0_ = var2->unknown_18_;
                struct Struct_ov025_021eedb0* var4 = var2->unknown_18_;
                var2->unknown_18_ = arg0->unknown_e4_;
                arg0->unknown_e4_ = var2;
                var2 = var4;
                continue;
            }
        }
        var3 = var2;
        var2 = var2->unknown_18_;
    }
}
