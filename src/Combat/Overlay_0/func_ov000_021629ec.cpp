#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x218
#else
#define REGION_OFFSET_0 0x29c
#endif

#include "GameState/GameState.h"

struct Struct_02048c90;
extern "C" void func_02048c90(struct Struct_02048c90* arg0);
extern "C" void func_02049ae4(unsigned char* arg0);
extern "C" void func_02049458(unsigned char* arg0, unsigned char arg1);
extern "C" void func_0204947c(unsigned char* arg0, unsigned char arg1);
extern "C" void func_020493dc(unsigned char* arg0, unsigned char arg1);
extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215ec1c(int arg0, short* arg1, int arg2, int arg3);

struct Struct_ov000_021629ec {
    char unknown_0_[REGION_OFFSET_0];
    int unknown_29c_;
};

// USA: func_ov000_021629ec
extern "C" ARM void func_ov000_021629ec(struct Struct_ov000_021629ec* arg0) {
    GameState* var0 = GameState::GetInstance();
    short var1[12];
    int var2 = 0;
    var2 = var2 + func_ov000_0215e9fc(arg0->unknown_29c_, var1, 0xc, var2);
    var2 = var2 + func_ov000_0215ec1c(arg0->unknown_29c_, var1 + var2, 0xc - var2, 0);
    for (int var3 = 0; var3 < var2; var3++) {
        GameObject* var4 = var0->GetCombatantByIndex(var1[var3]);
        if (var4) {
            func_02048c90((struct Struct_02048c90*)var4);
            func_02049ae4((unsigned char*)var4);
            func_02049458((unsigned char*)var4, 0xff);
            func_0204947c((unsigned char*)var4, 0xff);
            func_020493dc((unsigned char*)var4, 0xff);
        }
    }
}
