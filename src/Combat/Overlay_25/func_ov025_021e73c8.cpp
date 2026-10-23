#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_0215440c_2;
struct Struct_ov000_02160094;
struct Struct_ov001_0215cdf8;

extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
extern "C" struct Struct_ov000_02160094* func_ov000_02160094(struct Struct_ov000_0215440c_2* arg0, int arg1);
extern "C" int func_ov017_021917f0(int arg0, int arg1);

struct Struct_ov025_021e73c8 {
    char unknown_0_[8];
    unsigned char unknown_8_;
};

// USA: func_ov025_021e73c8
extern "C" ARM int func_ov025_021e73c8(struct Struct_ov025_021e73c8* arg0, int arg1, int arg2, void* arg3) {
    int var0[12];
    GameState* var1;
    GameObject* var2;

    if (func_ov000_021820bc(arg3, arg1, arg0->unknown_8_, (int)&var0[0]) == 0) {
        return 1;
    }
    var1 = GameState::GetInstance();
    var2 = var1->GetGameObjectByIndex(var0[0]);
    if (var2 == NULL) {
        return 1;
    }
    ((Object3D*)((struct Struct_ov001_0215cdf8*)var2))->Detach();
    if (arg0->unknown_8_ >= 0x22 && arg0->unknown_8_ <= 0x25) {
        struct Struct_ov000_02160094* var3 = func_ov000_02160094((struct Struct_ov000_0215440c_2*)arg1, arg0->unknown_8_ - 0x22);
        if (var3 != NULL) {
            func_ov017_021917f0(*(unsigned short*)((char*)var3 + 0x20), 1);
        }
    }
    return 1;
}
