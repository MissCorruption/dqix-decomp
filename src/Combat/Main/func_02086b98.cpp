#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0201bdac_4 {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

// USA: func_02086b98
extern "C" ARM int func_02086b98(struct Struct_0201bdac_4* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    for (var1 = 0; var1 < arg0->unknown_f7c_; var1++) {
        GameObject* var2 = func_0200ff1c(var0, arg0->unknown_f78_[var1]);
        if (var2 != NULL) {
            int* var3 = *(int**)((char*)var2 + 0x130);
            if ((*var3 & 1) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
