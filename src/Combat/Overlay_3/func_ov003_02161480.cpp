#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_02039d24(unsigned char* arg0);

struct Struct_ov003_02161480 {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

// USA: func_ov003_02161480
extern "C" ARM void func_ov003_02161480(void) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov003_02161480* var1 = (struct Struct_ov003_02161480*)func_02010828(var0);
    unsigned char var2 = func_020100a8(var0);
    for (unsigned char var3 = 0; var3 < var1->unknown_f7c_; var3++) {
        if (var2 != var1->unknown_f78_[var3]) {
            GameObject* var4 = var0->GetPartyMemberByIndex(var1->unknown_f78_[var3]);
            if (var4 != NULL) {
                func_02039d24((unsigned char*)var4);
            }
        }
    }
}
