#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov025_021e56e8 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    char unknown_a_[2];
    int unknown_c_;
};

extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov025_021e4448(int* arg0, int arg1, int arg2, int arg3);
extern "C" void* func_ov000_02160130(void);
extern "C" void* func_ov000_02160f14(void* arg0);
extern "C" int func_0202e800(void* arg0);

extern Vector3fix data_ov025_021eef24;

// USA: func_ov025_021e56e8
extern "C" ARM int func_ov025_021e56e8(struct Struct_ov025_021e56e8* arg0, int arg1, int arg2, void* arg3) {
    GameState* var0 = GameState::GetInstance();
    int var1[8];
    int var2 = func_ov000_021820bc(arg3, arg1, arg0->unknown_8_, (int)var1);
    Vector3fix var3 = data_ov025_021eef24;
    if (arg0->unknown_9_ == 0) {
        func_ov025_021e4448((int*)&var3, 0x10a, 0x10a, 0x10a);
    } else if (arg0->unknown_9_ == 2) {
        void* var4 = func_ov000_02160f14(func_ov000_02160130());
        float var5 = 0.065f;
        float var6 = 0.08f;
        float var7 = 6.5f;
        float var8 = 7.0f;
        float var9 = func_0202e800(var4) / 4096.0f;
        float var10 = var9 * ((var6 - var5) / (var8 - var7)) + (var8 * var5 - var7 * var6) / (var8 - var7);
        if (var10 < 0.065f) {
            var10 = 0.065f;
        }
        int var11 = 4096.0f * var10;
        func_ov025_021e4448((int*)&var3, var11, var11, var11);
    } else if (arg0->unknown_9_ == 3) {
        func_ov025_021e4448((int*)&var3, arg0->unknown_c_, arg0->unknown_c_, arg0->unknown_c_);
    }
    for (int var12 = 0; var12 < var2; var12++) {
        GameObject* var13 = var0->GetGameObjectByIndex(var1[0]);
        if (var13 != NULL) {
            var13->obj3D_.SetScale(&var3);
        }
    }
    return 1;
}
