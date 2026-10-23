#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" void func_02087628(char* arg0);

extern "C" unsigned char func_02011494(char* arg0, void* arg1);

extern "C" int func_020100a8(GameState* arg0);

extern "C" void __clear(void* arg0, int arg1);

extern "C" void* func_02053c6c(unsigned char* arg0);

extern "C" signed char func_ov017_021b6c2c(int arg0, int arg1);

struct Struct_02087510;
extern "C" int func_02087510(Struct_02087510* arg0, char arg1, void* arg2);

#define GetCombatantAtField0x3ac _Z24GetCombatantAtField0x3acP9GameState

struct Struct_02018300_3;
extern "C" void func_020397cc(Struct_02018300_3* arg0, int arg1);

// USA: func_ov017_021b6c78
extern "C" ARM void func_ov017_021b6c78(void) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02010828(var0);
    func_02087628((char*)var1);

    if (*((unsigned char*)var1 + 0xf7c) <= 1) {
        return;
    }

    char var2[4];
    char var3[0x10];
    unsigned char var4 = func_02011494((char*)var0, var2);

    for (unsigned char var5 = 0; var5 < var4; var5 = (unsigned char)(var5 + 1)) {
        char var6 = var2[var5];
        if (var6 != func_020100a8(var0)) {
            __clear(var3, 0x10);
            GameObject* var7 = func_0200ff1c(var0, var6);
            if (var7) {
                unsigned char* var8 = (unsigned char*)func_02053c6c((unsigned char*)var7);
                memcpy(var3, var8 + 0x54 + 0x400, 0x10);
            }
            signed char var9 = func_ov017_021b6c2c(var6, 1);
            if (var9 >= 0) {
                func_02087510((Struct_02087510*)var1, var9, var3);
            }
        }
    }

    GameObject* var10 = var0->GetProtagonist();
    if (var10) {
        func_020397cc((Struct_02018300_3*)var10, 1);
    }
}
