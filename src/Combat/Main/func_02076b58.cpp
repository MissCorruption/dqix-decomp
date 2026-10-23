#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/FieldActorState.h"

typedef void (Struct_02076a8c_2::*Type_02000c9c_10)();

extern Type_02000c9c_10 data_020e892c[];

extern "C" void func_020332ac(void* arg0);
extern "C" void func_020790ac(void* arg0);

// USA: func_02076b58
extern "C" ARM void func_02076b58(Struct_02076a8c_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    func_020332ac(arg0);
    arg0->unknown_14c_ += var0->GetEffectiveDeltaTime();
    if (arg0->unknown_130_ != 0) {
        arg0->unknown_154_ += var0->GetEffectiveDeltaTime();
    }
    arg0->unknown_150_ += 1;
    func_020790ac(arg0);
    (arg0->*data_020e892c[arg0->unknown_130_])();
}
