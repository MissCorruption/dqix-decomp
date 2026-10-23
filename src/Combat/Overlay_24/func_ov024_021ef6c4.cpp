#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "std_library_functions.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021eda60(GameObject* arg0);

struct Struct_ov024_021ef6c4 { int unknown_0_; };
struct Struct_ov024_021feab4 { short unknown_0_[4]; };
extern struct Struct_ov024_021feab4 data_ov024_021feab4;

struct Struct_ov024_021ef6c4_2 { signed int unknown_0_0_ : 3; signed int unknown_0_3_ : 3; signed int unknown_0_6_ : 26; };

// USA: func_ov024_021ef6c4
extern "C" ARM int func_ov024_021ef6c4(struct Struct_ov024_021ef6c4* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    struct Struct_ov024_021feab4 var0 = data_ov024_021feab4;

    int var1 = func_ov000_0215e9fc(arg0->unknown_0_, var0.unknown_0_, 4, 1);
    if (var1 <= 0) return 0;

    int var2 = 0;
    for (int var3 = 0; var3 < var1; var3++) {
        GameObject* var4 = GetCombatantByID(arg0->unknown_0_, var0.unknown_0_[var3]);
        if (!var4) continue;
        if (*(unsigned short*)((char*)var4->currentStats_ + 0xa) == 0) continue;
        struct Struct_ov024_021ef6c4_2* var5 = (struct Struct_ov024_021ef6c4_2*)((char*)var4->currentStats_ + 0x58);
        if (var5->unknown_0_3_ <= -2) continue;
        if (func_ov024_021eda60(var4)) continue;
        int var6 = *(unsigned char*)((char*)var4->currentStats_ + 0x50);
        if (var6 > 0) var2++;
    }

    if (var2 * 3 < var1 * 2) return 0;

    *arg3 = var1;
    memcpy(arg4, var0.unknown_0_, 8);
    return 1;
}
