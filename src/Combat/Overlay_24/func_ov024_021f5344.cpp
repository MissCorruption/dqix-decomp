#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" int func_ov000_0215ec80(int arg0, short* arg1, int arg2, int arg3, int arg4);
extern "C" int func_020882f8(unsigned char* arg0);

struct Struct_ov024_021f5344 { int unknown_0_; };
struct Struct_ov024_021fee4c { short unknown_0_[8]; };
extern struct Struct_ov024_021fee4c data_ov024_021fee4c;

// USA: func_ov024_021f5344
extern "C" ARM int func_ov024_021f5344(struct Struct_ov024_021f5344* arg0, short arg1, int arg2, int* arg3, short* arg4) {
    GameObject* var0 = func_ov000_021536f8(arg0->unknown_0_, arg1);
    if (!var0) return 0;
    int var1 = *((unsigned char*)var0 + 0x17c);
    if (var1 >= 3) return 0;
    struct Struct_ov024_021fee4c var2 = data_ov024_021fee4c;
    int var3 = func_ov000_0215ec80(arg0->unknown_0_, var2.unknown_0_, 8, var1 & 0xff, 1);
    int var4 = 0;
    for (int var5 = 0; var5 < var3; var5++) {
        GameObject* var6 = GetCombatantByID(arg0->unknown_0_, var2.unknown_0_[var5]);
        if (!var6) continue;
        if (!func_020882f8((unsigned char*)var6->currentStats_)) var4++;
    }
    if (var4 != 8) return 0;
    *arg3 = 1;
    *arg4 = arg1;
    return 1;
}
