#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02073d58_24 = 0x14 };
#else
enum { Enum_02073d58_24 = 0x18 };
#endif
#include "GameState/GameState.h"

struct Struct_02028430;
struct Struct_02028430_2;
extern "C" Struct_02028430_2* func_02028430(Struct_02028430* arg0, int arg1);

struct Struct_02073d58 {
    unsigned short unknown_0_0_ : 2;
    unsigned short unknown_0_2_ : 14;
};

// USA: func_02073d58
extern "C" ARM int func_02073d58(int arg0, void* arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    for (var1 = 0; var1 < 0xc; var1++) {
        int var2 = ((struct Struct_02073d58*)((char*)arg1 + 2))->unknown_0_0_;
        int var3 = var2 * 12 + 0x70;
        int var4 = var1 + var3;
        if (arg2 != -1 && var4 == arg2) continue;
        GameObject* var5 = var0->GetMaybeWanderingMonsterByIndex(var4);
        if (!var5) continue;
        if (!var5->obj3D_.IsVisible()) continue;
        unsigned short var6 = var5->unknown_ac_.unknown_b8_;
        Struct_02028430_2* var7 = func_02028430((Struct_02028430*)((char*)arg1 + Enum_02073d58_24), var6);
        if (!var7) continue;
        if (*(unsigned char*)var7 == arg0) return 1;
    }
    return 0;
}
