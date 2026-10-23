#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020fdd44 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 2;
    unsigned short : 14;
};
extern "C" struct Struct_020fdd44* func_02027cb0(void);
extern "C" GameObject* func_ov017_021a2738(void* arg0, int arg1);
struct Struct_02072adc;
extern "C" void func_02072adc(struct Struct_02072adc* arg0, struct Struct_02072adc* arg1);
struct Struct_02010604;
extern "C" int func_02033b88(struct Struct_02010604* arg0, int arg1);

// USA: func_ov017_021a2b1c
extern "C" ARM void func_ov017_021a2b1c(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_020fdd44* var1 = func_02027cb0();
    if (!var1) return;

    int var2;
    for (var2 = 0; var2 < 0xc; var2++) {
        int var3 = var1->unknown_2_0_ * 0xc;
        var3 = var3 + 0x70;
        int var4 = var2 + var3;
        GameObject* var5 = var0->GetMaybeFieldMonsterByIndex(var4);
        if (!var5) continue;
        GameObject* var6 = func_ov017_021a2738(arg0, var5->obj3D_.unknown_2_);
        if (!var6) continue;
        func_02072adc((struct Struct_02072adc*)var6, (struct Struct_02072adc*)var5);
        switch (*(int*)((char*)var5 + 0x130)) {
            case 0:
                func_02033b88((struct Struct_02010604*)var5, 5);
                break;
            case 2: case 4: case 5: case 6:
                func_02033b88((struct Struct_02010604*)var5, 1);
                break;
            case 9:
                func_02033b88((struct Struct_02010604*)var5, 2);
                break;
            default:
                func_02033b88((struct Struct_02010604*)var5, 0);
                break;
        }
    }
}
