#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" void* func_02010828(GameState* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" void* func_02053c6c(unsigned char* arg0);
extern "C" int func_02032370(int arg0);

struct Struct_ov017_021970a0 {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

struct Struct_ov017_021970a0_2 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 22;
};

// USA: func_ov017_021970a0
extern "C" ARM int func_ov017_021970a0(int arg0) {
    GameState* var0 = GameState::GetInstance();
    GetBTRandom();
    struct Struct_ov017_021970a0* var1 = (struct Struct_ov017_021970a0*)func_02010828(var0);

    int var2 = 0;
    for (int var3 = 0; var3 < var1->unknown_f7c_; var3++) {
        GameObject* var4 = func_0200ff1c(var0, var1->unknown_f78_[var3]);
        if (var4 == NULL) continue;
        int* var5 = *(int**)((char*)var4 + 0x130);
        if (*var5 & 1) continue;
        void* var6 = func_02053c6c((unsigned char*)var4);
        if (var6 == NULL) continue;
        unsigned int var7 = ((struct Struct_ov017_021970a0_2*)((char*)var6 + 4))->unknown_0_0_;
        if (var2 < var7) var2 = var7;
    }

    if (arg0 != 2) {
        float var8 = (arg0 == 1) ? 10.0f : 0.0f;
        float var9 = 2.0f + 0.05f * (float)var2 + var8;
        int var10 = (int)var9;
        if (func_02032370(100) < var10) return 1;
    }
    if (arg0 == 1) goto ret0;

    {
        float var11 = (arg0 == 2) ? 10.0f : 0.0f;
        float var12 = 2.0f + var11;
        int var13 = (int)var12;
        if (func_02032370(100) < var13) return 2;
    }
ret0:
    return 0;
}
