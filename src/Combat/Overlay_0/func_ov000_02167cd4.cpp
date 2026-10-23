#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" int func_0200fb8c(int* arg0);
extern "C" int func_ov000_0215eb1c(struct Random* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_020493a4(unsigned char* arg0);
extern "C" void func_02049390(unsigned char* arg0, unsigned char arg1);
extern "C" void func_02049bd4(unsigned char* arg0, int* arg1);
extern "C" void func_02049c60(unsigned char* arg0, int* arg1);
extern "C" void __clear(void* arg0, int arg1);

struct Struct_02048cf0 { int unknown_0_; int unknown_4_; };
extern "C" struct Struct_02048cf0 func_ov000_0216f74c(int* arg0);

extern unsigned char data_ov000_02183118[][8];
struct Struct_ov000_021830cc { unsigned int unknown_0_[3]; };
extern struct Struct_ov000_021830cc data_ov000_021830cc;

// USA: func_ov000_02167cd4
extern "C" ARM void func_ov000_02167cd4(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    func_0200fb8c((int*)var0);
#if defined(jpn)
    struct Random* var1 = *(struct Random**)(arg0 + 0x218);
#else
    struct Random* var1 = *(struct Random**)(arg0 + 0x29c);
#endif
    short var2[8];
    int var3 = func_ov000_0215eb1c(var1, var2, 8, 0);
    int var4 = 0;
    while (var4 < var3) {
        GameObject* var5 = var0->GetCombatantByIndex(var2[var4]);
        if (var5 != 0) {
            int var6 = data_ov000_02183118[var3 - 1][var4];
            if (func_020493a4((unsigned char*)var5) != 0xff) {
                var6 = func_020493a4((unsigned char*)var5);
            }
            struct Struct_02048cf0 var7 = func_ov000_0216f74c(&var6);
            struct Struct_ov000_021830cc var8 = data_ov000_021830cc;
            var8.unknown_0_[0] = var7.unknown_0_;
            var8.unknown_0_[2] = var7.unknown_4_;
            int var9[3];
            __clear(var9, 0xc);
            func_02049390((unsigned char*)var5, (unsigned char)(var6 & 0xff));
            func_02049bd4((unsigned char*)var5, (int*)&var8);
            func_02049c60((unsigned char*)var5, var9);
        }
        var4++;
    }
}
