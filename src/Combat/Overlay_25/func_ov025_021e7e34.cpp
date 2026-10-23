#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);

struct Struct_02033fdc;
struct Struct_02033fcc;
extern "C" void func_02033fdc(struct Struct_02033fdc* arg0);
extern "C" void func_02033fcc(struct Struct_02033fcc* arg0);

struct Struct_ov025_021e7e34 {
    char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    int unknown_c_;
};

// USA: func_ov025_021e7e34
extern "C" ARM int func_ov025_021e7e34(struct Struct_ov025_021e7e34* arg0, int arg1, int arg2, void* arg3) {
    GameState* var0 = GameState::GetInstance();
    int var1[12];
    int var2 = func_ov000_021820bc(arg3, arg1, arg0->unknown_8_, (int)&var1[0]);
    for (int var3 = 0; var3 < var2; var3++) {
        GameObject* var4 = var0->GetMaybeWanderingMonsterByIndex(var1[var3]);
        if (var4) {
            if (arg0->unknown_c_ != 0) {
                func_02033fdc((struct Struct_02033fdc*)var4);
            } else {
                func_02033fcc((struct Struct_02033fcc*)var4);
            }
        }
    }
    return 1;
}
