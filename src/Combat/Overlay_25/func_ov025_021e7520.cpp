#include <globaldefs.h>
#include "GameState/GameState.h"
struct Struct_02032e58;

extern "C" void func_02033fec(Struct_02032e58* arg0);
extern "C" void func_0203400c(Struct_02032e58* arg0);
extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);

struct Struct_ov025_021e7520 {
    char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    int unknown_c_;
};

// USA: func_ov025_021e7520
extern "C" ARM int func_ov025_021e7520(struct Struct_ov025_021e7520* arg0, int arg1, int arg2, void* arg3) {
    GameState* var0 = GameState::GetInstance();
    int var1[8];
    int var2 = func_ov000_021820bc(arg3, arg1, arg0->unknown_8_, (int)&var1[0]);
    for (int var3 = 0; var3 < var2; var3++) {
        GameObject* var4 = var0->GetMaybeWanderingMonsterByIndex(var1[var3]);
        if (var4) {
            if (arg0->unknown_c_ != 0) {
                func_02033fec((Struct_02032e58*)var4);
            } else {
                func_0203400c((Struct_02032e58*)var4);
            }
        }
    }
    return 1;
}
