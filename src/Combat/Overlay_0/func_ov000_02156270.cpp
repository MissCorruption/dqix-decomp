#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_0215fc60(char* arg0);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" float func_02084f58(void* arg0);
extern "C" int func_02085c08(unsigned char* arg0);
extern "C" int func_02083b00(unsigned char* arg0, int arg1);
extern "C" float func_ov000_02155a04(GameObject* arg0);
extern "C" GameObject* func_0200ff94(GameState* arg0, int arg1);
extern "C" int func_ov000_021563ec(GameObject* arg0);
extern "C" int func_ov000_02156404(GameObject* arg0);

struct Struct_02070b6c_4 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 13;
    unsigned int unknown_11_5_ : 3;
};
struct Struct_02070b6c_3;
extern "C" struct Struct_02070b6c_4* func_02070fd0(struct Struct_02070b6c_3* arg0, int arg1);
extern "C" float func_02074988(int arg0);

struct Struct_ov000_02156270 {
    char unknown_0_[0x8e18];
    char* unknown_8e18_;
};

// USA: func_ov000_02156270
extern "C" ARM float func_ov000_02156270(struct Struct_ov000_02156270* arg0, int arg1) {
    float var0;
    if (func_ov000_0215fc60((char*)arg0) != 0) {
        return 0.0f;
    }
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = GameState::GetInstance()->GetCombatantByIndex(arg1);
    if (var2 == NULL) {
        return 0.0f;
    }
    int var3 = (arg1 >= 0 && arg1 <= 3) ? 1 : 0;
    if (var3) {
        GameObject* var4 = func_0200ff1c(var1, arg1);
        if (var4 == NULL) {
            return 0.0f;
        }
        unsigned char* var5 = (unsigned char*)func_02053c6c((unsigned char*)var4);
        if (var5 == NULL) {
            return 0.0f;
        }
        float var6 = 2.0f;
        float var7 = func_02084f58(var5);
        float var8 = func_02085c08(var5);
        var0 = var8 + (var6 + var7);
        if (func_02083b00(var5, 0xa6) && func_ov000_02155a04(var2) < 0.08f) {
            var0 = var0 * var6;
        }
    } else {
        GameObject* var9 = func_0200ff94(var1, arg1);
        if (var9 == NULL) {
            return 0.0f;
        }
        struct Struct_02070b6c_4* var10 = func_02070fd0(
            (struct Struct_02070b6c_3*)(arg0->unknown_8e18_ + 0x684), var9->obj3D_.unknown_2_);
        var0 = func_02074988((signed char)var10->unknown_11_5_);
    }
    if (func_ov000_021563ec(var2)) {
        var0 = 2.0f * var0;
    }
    if (func_ov000_02156404(var2)) {
        return 50.0f;
    }
    return var0;
}
