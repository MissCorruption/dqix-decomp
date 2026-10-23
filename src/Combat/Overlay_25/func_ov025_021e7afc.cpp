#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);

struct Struct_02032fd0;
extern "C" void func_02032fd0(Struct_02032fd0*, short, unsigned short);

struct Struct_ov025_021e7afc { char unknown_0_[8]; unsigned short unknown_8_; short unknown_a_; unsigned short unknown_c_; };

// USA: func_ov025_021e7afc
extern "C" ARM int func_ov025_021e7afc(struct Struct_ov025_021e7afc* arg0, int arg1, int arg2, int arg3) {
    GameState* var0 = GameState::GetInstance();
    int var1[12];
    int var2 = func_ov000_021820bc((void*)arg3, arg1, arg0->unknown_8_, (int)var1);
    int var3;
    for (var3 = 0; var3 < var2; var3++) {
        GameObject* var4 = var0->GetMaybeWanderingMonsterByIndex(var1[var3]);
        if (var4) {
            func_02032fd0((struct Struct_02032fd0*)var4, arg0->unknown_a_, arg0->unknown_c_);
        }
    }
    return 1;
}
