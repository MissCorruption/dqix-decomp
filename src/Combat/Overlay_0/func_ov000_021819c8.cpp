#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_02160094 {
    char unknown_0_[0x30];
    struct Struct_ov000_02160094* unknown_30_;
};

struct Struct_ov000_0215440c_2 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    char unknown_9_[7];
    struct Struct_ov000_02160094* unknown_10_;
};
extern "C" struct Struct_ov000_02160094* func_ov000_02160094(struct Struct_ov000_0215440c_2* arg0, int arg1);

// USA: func_ov000_021819c8
extern "C" ARM int func_ov000_021819c8(struct Struct_ov000_0215440c_2* arg0, int arg1, int* arg2, int arg3) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov000_02160094* var1 = func_ov000_02160094(arg0, arg1);
    if (var1 != NULL) {
        int var2 = 0;
        if (arg3 == 0) {
            var2 = *(unsigned short*)((char*)var1 + 0x20) * 0xc + 0x1c;
        } else if (arg3 == 1) {
            var2 = *(unsigned short*)((char*)var1 + 0x20) * 0xc + 0x1d;
        }

        GameObject* var3 = var0->GetGameObjectByIndex(var2);
        if (var3 != NULL) {
            if (var3->obj3D_.unknown_2_ > -1) {
                *arg2 = var2;
                return 1;
            }
        }
    }
    return 0;
}
