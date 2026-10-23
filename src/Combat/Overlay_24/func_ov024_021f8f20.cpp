#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Main/BattleList.h"

extern "C" void* func_02053c6c(unsigned char* arg0);

struct Struct_ov024_021f8f20;
typedef void (Struct_ov024_021f8f20::*Type_ov024_021f8f20)(unsigned short id, GameObject* combatant, unsigned short* state);
struct Struct_ov024_021ff054 { Type_ov024_021f8f20 unknown_0_[6]; };

struct Struct_ov024_021f8f20 {
    int unknown_0_;
    short unknown_4_;
    unsigned char unknown_6_;
    char unknown_7_[0x124 - 0x7];
    float unknown_124_;
};

extern "C" void func_ov024_021f8628(Struct_ov024_021f8f20* arg0, unsigned short arg1, GameObject* arg2, unsigned short* arg3);
extern "C" void func_ov024_021f7478(Struct_ov024_021f8f20* arg0);

extern Struct_ov024_021ff054 data_ov024_021ff054;
extern Type_ov024_021f8f20 data_020e6d5c;

// USA: func_ov024_021f8f20
extern "C" ARM void func_ov024_021f8f20(Struct_ov024_021f8f20* arg0, int arg1, int arg2, unsigned short* arg3) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg2);
    void* var1 = func_02053c6c((unsigned char*)var0);
    if (*arg3 != 1) {
        return;
    }
    arg0->unknown_0_ = arg1;
    arg0->unknown_4_ = arg2;
#if defined(jpn)
    unsigned char var2 = (signed char)*(int*)((char*)var1 + 0x8b4);
#else
    unsigned char var2 = (signed char)*(int*)((char*)var1 + 0x94c);
#endif
    if (var2 == 5) {
        return;
    }
    if (var2 > 5) {
        func_ov024_021f8628(arg0, arg2, var0, arg3);
        return;
    }
    arg0->unknown_124_ = 0.5f;
    arg0->unknown_6_ = var2;
    func_ov024_021f7478(arg0);
    Struct_ov024_021ff054 var3 = data_ov024_021ff054;
    var3.unknown_0_[5] = data_020e6d5c;
    Type_ov024_021f8f20 var4 = var3.unknown_0_[var2];
    if (var4 != 0) {
        (arg0->*var4)(arg2, var0, arg3);
    }
}
