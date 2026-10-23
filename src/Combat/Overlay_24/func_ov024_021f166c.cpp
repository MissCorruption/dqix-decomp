#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "std_library_functions.h"

extern "C" int func_ov000_0215eb1c(int arg0, unsigned short* arg1, int arg2, int arg3);
struct Struct_ov024_021f1330;
extern "C" int func_ov024_021f1440(struct Struct_ov024_021f1330* arg0);
extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" int func_ov024_021eda60(GameObject* arg0);

struct Struct_ov024_021f166c { int unknown_0_; };

struct Struct_ov024_021f166c_2 {
    signed int unknown_0_0_ : 3;
    signed int unknown_0_3_ : 3;
    signed int unknown_0_6_ : 3;
    signed int unknown_1_1_ : 3;
    signed int unknown_1_4_ : 3;
    signed int unknown_1_7_ : 3;
    signed int unknown_2_2_ : 3;
    signed int unknown_2_5_ : 3;
};

extern unsigned short data_ov024_021fef6c;

// USA: func_ov024_021f166c
extern "C" ARM int func_ov024_021f166c(struct Struct_ov024_021f166c* arg0, short arg1, int arg2, int* arg3, void* arg4) {
    GameObject* var0 = func_ov000_021536f8(arg0->unknown_0_, arg1);
    if (!var0) return 0;
    if (!func_ov024_021f1440((struct Struct_ov024_021f1330*)var0)) return 0;

    unsigned short var1[8];
    unsigned short* var2 = var1;
    unsigned short* var3 = &data_ov024_021fef6c;
    int var4 = 8;
    do {
        unsigned short* var5 = var2++;
        *var5 = *var3++;
    } while (--var4);

    int var6 = func_ov000_0215eb1c(arg0->unknown_0_, var1, 8, 1);
    if (var6 <= 0) return 0;

    for (int var7 = 0; var7 < var6; var7++) {
        GameObject* var8 = GetCombatantByID(arg0->unknown_0_, *(short*)&var1[var7]);
        if (!var8) continue;
        if (func_ov024_021eda60(var8)) continue;
        struct Struct_ov024_021f166c_2* var9 = (struct Struct_ov024_021f166c_2*)((char*)var8->currentStats_ + 0x58);
        if (var9->unknown_2_5_ < 2) break;
    }
    if (*arg3 <= 0) return 0;

    *arg3 = var6;
    memcpy(arg4, var1, 0x10);
    return 1;
}
