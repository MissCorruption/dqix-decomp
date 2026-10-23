#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"


struct Struct_020e4bf4 {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
};

extern "C" void func_020e4b34(void* arg0, struct BaseCombatStats* arg1, struct BaseCombatStats* arg2,
    int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11);

// USA: func_020e4bf4
extern "C" ARM void func_020e4bf4(void* arg0, int arg1) {
    memset(arg0, 0, 0xc);
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetPartyMemberByIndex(arg1);
    if (var1 != NULL) {
        struct Struct_020e4bf4* var2 = *(struct Struct_020e4bf4**)((char*)var1 + 0x150);
        func_020e4b34(arg0, var1->baseStats_, var1->baseStats_, 0, 0, 0, 0, var2->unknown_49c_0_, 0, 1, 0, 1);
    }
}
