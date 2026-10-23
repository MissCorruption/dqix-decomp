#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
struct Struct_ov001_0215cdf8;
struct Struct_ov001_0215cd50;
struct Object3D;

struct Struct_ov025_021e7324 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    char unknown_a_[2];
    char* unknown_c_;
};

struct Struct_ov025_021e7324_2 {
    int unknown_0_;
    char unknown_4_[0x2c];
};

// USA: func_ov025_021e7324
extern "C" ARM int func_ov025_021e7324(struct Struct_ov025_021e7324* arg0, int arg1, int arg2, void* arg3) {
    struct Struct_ov025_021e7324_2 var0;
    struct Struct_ov025_021e7324_2 var1;
    int var2 = func_ov000_021820bc(arg3, arg1, arg0->unknown_8_, (int)&var0.unknown_0_);
    int var3 = func_ov000_021820bc(arg3, arg1, arg0->unknown_9_, (int)&var1.unknown_0_);
    if (!var2 || !var3) {
        return 1;
    }
    GameState* var4 = GameState::GetInstance();
    GameObject* var5 = var4->GetGameObjectByIndex(var0.unknown_0_);
    GameObject* var6 = var4->GetGameObjectByIndex(var1.unknown_0_);
    if (!var5 || !var6) {
        return 1;
    }
    ((Object3D*)((struct Struct_ov001_0215cdf8*)var5))->Detach();
    ((Object3D*)((struct Struct_ov001_0215cd50*)var5))->Attach(&var6->obj3D_, arg0->unknown_c_);
    return 1;
}
