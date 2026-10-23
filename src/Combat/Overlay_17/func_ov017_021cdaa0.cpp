#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cdaa0 {
    float unknown_0_;
};

struct Struct_ov017_021cdaa0_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021cdaa0 unknown_4_;
    unsigned char unknown_8_[12];
};

// USA: func_ov017_021cdaa0
extern "C" ARM void func_ov017_021cdaa0(void) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov017_021cdaa0_2 var1;
    void* var2 = func_0202ae24();
    var1.unknown_0_ = 0x93;
    Struct_ov017_021cdaa0* var3 = &var1.unknown_4_;
    var3->unknown_0_ = var0->GetDayTimer();
    func_0205e330(var2, &var1, 0);
}
