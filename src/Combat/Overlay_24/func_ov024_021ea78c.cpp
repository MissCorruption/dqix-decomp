#include <globaldefs.h>
#include "GameState/GameState.h"

GameObject* GetCombatantByID(int unused, int id);

struct Struct_ov024_021e4604;
extern "C" int func_ov024_021e47dc(struct Struct_ov024_021e4604* arg0);

extern short data_ov024_021fe6e0[];

struct Struct_ov024_021dd028_7 {
    char unknown_0_[0x10];
    int unknown_10_;
};

struct Struct_ov024_021dd028_6 {
    char unknown_0_[0x4];
    int unknown_4_;
};

// USA: func_ov024_021ea78c
extern "C" ARM int func_ov024_021ea78c(struct Struct_ov024_021dd028_7* arg0, int arg1, struct Struct_ov024_021dd028_6* arg2) {
    GameObject* var0 = GetCombatantByID(arg0->unknown_10_, arg1);
    if (!var0) return 0;
    if (!func_ov024_021e47dc((struct Struct_ov024_021e4604*)var0)) return 0;
    int var1 = 0;
    short var2;
    goto test;
body:
    if (var2 == (int)((unsigned int)(arg2->unknown_4_ << 20) >> 20)) return 1;
    var1++;
test:
    var2 = data_ov024_021fe6e0[var1];
    if (var2 != -1) goto body;
    return 0;
}
