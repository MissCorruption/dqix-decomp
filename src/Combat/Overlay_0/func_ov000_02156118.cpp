#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02070b6c_3;

struct Struct_ov000_02156118 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 16;
    unsigned int unknown_12_0_ : 3;
};

struct Struct_ov017_021d82e0 {
    char unknown_0_[0x8e18];
    char* unknown_8e18_;
};

extern "C" int func_ov000_0215fc60(char* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" GameObject* func_0200ff94(GameState* arg0, int arg1);
extern "C" unsigned char* func_02053c6c(unsigned char* arg0);
extern "C" float func_02084ee8(void* arg0);
extern "C" int func_02085b88(unsigned char* arg0);
extern "C" Struct_ov000_02156118* func_02070fd0(Struct_02070b6c_3* arg0, int arg1);
extern "C" float func_02074988(int arg0);
extern "C" int func_ov000_02156258(GameObject* arg0);

// USA: func_ov000_02156118
extern "C" ARM float func_ov000_02156118(Struct_ov017_021d82e0* arg0, int arg1) {
    if (func_ov000_0215fc60((char*)arg0) != 0) {
        return 0;
    }
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = GameState::GetInstance()->GetCombatantByIndex(arg1);
    if (var1 == 0) {
        return 0;
    }
    float var2;
    int var3 = (arg1 >= 0 && arg1 <= 3) ? 1 : 0;
    if (var3) {
        GameObject* var4 = func_0200ff1c(var0, arg1);
        if (var4 == 0) {
            return 0;
        }
        unsigned char* var5 = func_02053c6c((unsigned char*)var4);
        if (var5 == 0) {
            return 0;
        }
        if (*(short*)(var5 + 0x2cc) <= 0) {
            return 0;
        }
        float var6 = 0.0f;
        float var7 = func_02084ee8(var5);
        int var8 = func_02085b88(var5);
        var2 = var8 + (var6 + var7);
    } else {
        GameObject* var9 = func_0200ff94(var0, arg1);
        if (var9 == 0) {
            return 0;
        }
        Struct_ov000_02156118* var10 = func_02070fd0((Struct_02070b6c_3*)(arg0->unknown_8e18_ + 0x684), var9->obj3D_.unknown_2_);
        signed char var11 = var10->unknown_12_0_;
        var2 = func_02074988(var11);
    }
    if (func_ov000_02156258(var1) != 0) {
        var2 = 2.0f * var2;
    }
    return var2;
}
