#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" void func_ov000_0216d370(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0202e5c8(unsigned char* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0202e694(void* arg0, int* arg1);
extern "C" void func_ov000_0216d530(void* arg0, int arg1);

extern int data_ov000_021832a4[8];

// USA: func_ov000_0216d90c
extern "C" ARM void func_ov000_0216d90c(unsigned char* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetGameObjectByIndex(arg1);
    if (var1 == NULL) {
        return;
    }
    GameObject* var2 = var0->GetGameObjectByIndex(arg0[0x263]);
    if (var2 == NULL) {
        return;
    }
    fix32_t var3 = var1->obj3D_.GetHeight();
    fix32_t var4 = var2->obj3D_.GetHeight();
    int var5;
    if (var4 < var3 && 2.0f <= var3) {
        var5 = 1;
    } else {
        var5 = 0;
    }
    func_ov000_0216d370(arg0, 1, 1, 1);
    func_0202e5c8(arg0, 0, 0x1000, 0x1000);
    int var6 = NextRandomMax(*(struct Random**)(arg0 + 0x21c), 8);
    if (var5) {
        if (var6 == 2) {
            var6 = 7;
        } else if (var6 == 3) {
            var6 = 6;
        } else if (var6 == 4) {
            var6 = 1;
        } else if (var6 == 5) {
            var6 = 0;
        }
    }
    int var7[3];
    var7[0] = data_ov000_021832a4[var6];
    var7[1] = 0x3000;
    var7[2] = 0x8000;
    func_0202e694(arg0, var7);
    func_ov000_0216d530(arg0, arg1);
    *(int*)(arg0 + 0x23c) = -20;
}
