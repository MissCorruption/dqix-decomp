#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "GameState/GameState.h"

extern "C" unsigned char func_02039d7c(char* arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" int func_020100f8(char* arg0);
extern "C" int func_020a277c(void* arg0);
extern "C" void func_020a2770(void* arg0, short arg1);
typedef void (*Type_ov017_02191108)(void* obj, int value);
extern "C" void func_0202c3e0(void* arg0);

struct Struct_ov017_02191108 { int unknown_0_[4]; };
extern "C" void func_ov017_02190884(int arg0, struct Struct_ov017_02191108* arg1, int* arg2, int arg3, int arg4, int arg5);
extern "C" void* func_0202ae18(void* arg0);

extern "C" void func_020a2be8(void* arg0);

// USA: func_ov017_02191108
extern "C" ARM void func_ov017_02191108(void* arg0, int arg1, int arg2, int arg3, int arg4) {
    GameState* var0 = GameState::GetInstance();
    if (var0->GetProtagonist() == 0) return;

    GameObject* var1 = var0->GetUnknownGameObject();
    if (var1 != 0 && func_02039d7c((char*)var1) != 0) {
        Struct_02037d10* var2 = func_020399a8(var1);
        var2->unknown_52_ = 1;
        return;
    }

    int var3 = 0;
    int var4 = func_020100a8(var0);
    struct Struct_ov017_02191108 var5;
    func_ov017_02190884(var4, &var5, &var3, arg1, arg2, arg3);
    int var6 = var5.unknown_0_[0];

    GameObject* var7 = var0->GetGameObjectByIndex(var6);
    if (var7 != 0) {
        ((Object3D*)((unsigned char*)var7))->DisableFlag(0x80);
    }

    void* var8 = (void*)func_020100f8((char*)var0);
    if (var8 != 0) {
        int var9 = func_020a277c(var8);
        if (var9 != 0xc9 && var9 != 0xca) {
            ((Type_ov017_02191108)func_020a2770)(var8, var6);
            if (arg4 != 0 && var9 != var6) {
                func_020a2be8(var8);
            }
        }
    }

    unsigned char* var10 = (unsigned char*)func_02010828(var0);
    int var11;
    for (var11 = 0; var11 < var3; var11++) {
        unsigned char* var12 = var10 + var11;
        var12[0xf78] = (unsigned char)var5.unknown_0_[var11];
    }
    var10[0xf7c] = (unsigned char)var3;
    func_0202c3e0(func_0202ae18(var10));
}
