#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "std_library_functions.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_020882f8(unsigned char* arg0);

struct Struct_ov024_021f0748 { int unknown_0_; };
struct Struct_ov024_021feb54 { short unknown_0_[4]; };
extern struct Struct_ov024_021feb54 data_ov024_021feb54;

// USA: func_ov024_021f0748
extern "C" ARM int func_ov024_021f0748(struct Struct_ov024_021f0748* arg0, int arg1, int arg2, int* arg3, void* arg4) {
    struct Struct_ov024_021feb54 var0 = data_ov024_021feb54;
    int var1 = func_ov000_0215e9fc(arg0->unknown_0_, var0.unknown_0_, 4, 1);
    if (var1 <= 0) return 0;
    int var2 = 0;
    for (int var3 = 0; var3 < var1; var3++) {
        GameObject* var4 = GetCombatantByID(arg0->unknown_0_, var0.unknown_0_[var3]);
        if (var4 && !func_020882f8((unsigned char*)var4->currentStats_)) {
            var2 = 1;
            break;
        }
    }
    if (!var2) return 0;
    *arg3 = var1;
    memcpy(arg4, var0.unknown_0_, 8);
    return 1;
}
