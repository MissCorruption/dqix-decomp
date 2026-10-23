#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" unsigned char func_0200fb9c(char* arg0);
void SetBrightness(GameResources*, int, int);
struct Struct_02109bf4_4;
extern "C" void func_0209c678(struct Struct_02109bf4_4* arg0, int arg1);
extern int data_02109bf4;
extern "C" int _s32_div_f(int a, int b);

// USA: func_ov004_0216da58
extern "C" ARM int func_ov004_0216da58() {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    int var2 = _s32_div_f(1000, 0x22);
    if (func_0200fb9c((char*)var0) == 8) {
        SetBrightness(var1, 0x10, var2);
    } else {
        SetBrightness(var1, -16, var2);
    }
    if (func_0200fb9c((char*)var0) != 2) {
        func_0209c678((struct Struct_02109bf4_4*)&data_02109bf4, 0x10);
    }
    return 0;
}
