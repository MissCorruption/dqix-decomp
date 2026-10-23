#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);

struct Struct_ov017_021d00c8 {
    int unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    short unknown_6_[6];
};

// USA: func_ov017_021d00c8
extern "C" ARM void func_ov017_021d00c8(int arg0, char* arg1, GameState* arg2) {
    struct Struct_ov017_021d00c8* var0 = (struct Struct_ov017_021d00c8*)(arg1 + 4);
    int var1 = var0->unknown_0_;
    unsigned char* var2 = (unsigned char*)func_02010828(arg2);
    int var3;
    for (var3 = 0; var3 < var2[0xf7c]; var3++) {
        unsigned char* var4 = var2 + var3;
        if (var1 == var4[0xf78]) return;
    }

    GameObject* var5 = func_0200ff1c(arg2, var1);
    if (!var5) return;
    int var6 = func_02053c6c((unsigned char*)var5);
    if (!var6) return;

    char* var7 = (char*)var6 + 0x454;
    unsigned char var8 = var0->unknown_4_;
    unsigned char var9 = var0->unknown_5_;
    for (int var10 = 0; var10 < var9; var10++) {
        *(short*)(var7 + (var8 + var10) * 2) = var0->unknown_6_[var10];
    }
}
