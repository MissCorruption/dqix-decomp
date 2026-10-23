#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02088e80;
struct Struct_020a0608;
struct Struct_020a0294;

struct Struct_02000c9c_31 {
    char unknown_0_[0x48];
};

struct Struct_ov000_0215a004 {
    char unknown_0_[0x68];
    struct Struct_02000c9c_31 unknown_68_;
};

extern "C" void func_ov000_021554f4(void* arg0, int arg1, void* arg2, int arg3, unsigned char arg4, int arg5);
extern "C" void func_ov000_02155184(void* arg0, int arg1, int arg2);
extern "C" void func_02088e80(Struct_02088e80*, int);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_020ac4c0(void*);
extern "C" void func_020a0608(Struct_020a0608*, unsigned int);
extern "C" void func_020a0294(Struct_020a0294*, unsigned int);
extern "C" void func_020ac494(void*);

// USA: func_ov000_0215a004
extern "C" ARM short func_ov000_0215a004(void* arg0, void* arg1, int arg2, int arg3, unsigned long long* arg4,
                                          int arg5, unsigned char arg6, int arg7) {
    int var0;
    GameObject* var1 = GameState::GetInstance()->GetCombatantByIndex(arg2);
    if (var1 == 0) {
        return 0;
    }
    var0 = var1->currentStats_->primaryStats.currHP - arg3;
    if (var0 <= 0) {
        var0 = 0;
        *arg4 = 0;
        *arg4 |= 4;
        func_ov000_021554f4(arg0, arg2, arg1, arg5, arg6, arg7);
        func_02088e80((Struct_02088e80*)var1->currentStats_, (signed char)var1->obj3D_.unknown_4_);
        func_ov000_02155184(arg0, arg2, arg7);
        if (arg2 == func_020100a8(GameState::GetInstance())) {
            struct Struct_ov000_0215a004 var2;
            func_020ac4c0(&var2);
            func_020a0608((Struct_020a0608*)&var2, 1);
            func_020a0294((Struct_020a0294*)&var2.unknown_68_, 1);
            func_020ac494(&var2);
        }
    }
    if (arg3 > 0) {
        *arg4 |= 2;
    }
    var1->currentStats_->primaryStats.currHP = var0;
    return (short)var0;
}
