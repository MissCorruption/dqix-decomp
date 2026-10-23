#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02049b54_2;
struct Struct_02033834;

struct Struct_ov009_0218aa28 {
    fix32_t unknown_0_[3];
};

extern "C" void* func_ov000_02160130();
extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_02049f28(unsigned char* arg0);
extern "C" int func_0200fb8c(int* arg0);
extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern "C" void func_02049b54(struct Struct_ov009_0218aa28* arg0, struct Struct_02049b54_2* arg1);
extern "C" void func_02033874(struct Struct_02033834* arg0, int arg1);
extern "C" void func_02049bac(unsigned char* arg0, int* arg1);
extern "C" void func_ov000_02161c0c(void* arg0, int arg1);
extern "C" void func_ov000_02167fb0(void* arg0, GameObject* arg1);
extern "C" void func_ov000_021677fc(void* arg0);
extern "C" void* func_ov000_02160f14(void* arg0);
extern "C" int func_ov000_0215eb1c(void* arg0, short* arg1, int arg2, int arg3);
extern "C" void __clear(void* arg0, int arg1);

extern char data_ov025_021ef802[];

struct Struct_ov025_021e604c {
    char unknown_0_[0x240];
    struct Struct_ov009_0218aa28 unknown_240_;
};

// USA: func_ov025_021e604c
extern "C" ARM int func_ov025_021e604c(void* arg0, int arg1, int arg2, void* arg3) {
    int var0[8];
    struct Struct_ov009_0218aa28 var1;
    Vector3fix var2;
    Vector3fix var3;
    struct Struct_ov009_0218aa28 var4;
    Vector3fix var5;
    struct Struct_ov009_0218aa28 var6;
    short var7[8];
    int var8;
    int var9;
    int var10;
    GameState* var11;
    GameState* var12 = GameState::GetInstance();
    void* var13 = func_ov000_02160130();
    if (var13 == NULL) {
        return 1;
    }
    int var14 = func_ov000_021820bc(arg3, arg1, 0x18, (int)var0);
    for (int var15 = 0; var15 < var14; var15++) {
        GameObject* var16 = var12->GetCombatantByIndex(var0[var15]);
        if (var16 != NULL) {
            func_ov000_02161c0c(var13, var0[var15]);
            func_02049f28((unsigned char*)var16);
            func_ov000_02167fb0(var13, var16);
            var16->obj3D_.MaybeSetRegularAnimation(data_ov025_021ef802, 1);
        }
    }
    func_ov000_021677fc(var13);
    struct Struct_ov025_021e604c* var17 = (struct Struct_ov025_021e604c*)func_ov000_02160f14(var13);
    var11 = GameState::GetInstance();
    func_0200fb8c((int*)var11);
    var10 = func_ov000_0215eb1c(arg3, var7, 8, 0);
    var6 = var17->unknown_240_;
    var9 = var6.unknown_0_[2];
    for (var8 = 0; var8 < var10; var8++) {
        GameObject* var18 = func_0200fea4(var11, var7[var8]);
        if (var18 != NULL) {
            __clear(&var5, 0xc);
            var5.z = var9;
            func_02049b54(&var1, (struct Struct_02049b54_2*)var18);
            var4 = var1;
            var4.unknown_0_[1] = 0;
            Vector3fix_Subtract(&var5, (Vector3fix*)&var4, &var3);
            var3.y = 0;
            Vector3fix_Normalize(&var3, &var3);
            int var19 = fix32_Atan2(var3.x, var3.z);
            func_02033874((struct Struct_02033834*)var18, var19);
            __clear(&var2, 0xc);
            var2.y = var19;
            func_02049bac((unsigned char*)var18, (int*)&var2);
        }
    }
    return 1;
}
