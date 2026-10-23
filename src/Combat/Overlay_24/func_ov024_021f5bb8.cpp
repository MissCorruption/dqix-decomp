#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "std_library_functions.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);

struct Struct_ov024_021f5bb8 { int unknown_0_; };
struct Struct_ov024_021febac { short unknown_0_[4]; };
extern struct Struct_ov024_021febac data_ov024_021febac;

// USA: func_ov024_021f5bb8
extern "C" ARM int func_ov024_021f5bb8(struct Struct_ov024_021f5bb8* arg0, int arg1, int arg2, int* arg3, void* arg4) {
    struct Struct_ov024_021febac var0 = data_ov024_021febac;
    int var1 = func_ov000_0215e9fc(arg0->unknown_0_, var0.unknown_0_, 4, 1);
    if (var1 <= 0) return 0;
    int var2 = 0;
    for (int var3 = 0; var3 < var1; var3++) {
        GameObject* var4 = GetCombatantByID(arg0->unknown_0_, var0.unknown_0_[var3]);
        if (var4 && !(*(int*)((char*)var4->currentStats_ + 0x18) & 0x10)) {
            var2 = 1;
            break;
        }
    }
    if (!var2) return 0;
    *arg3 = var1;
    memcpy(arg4, var0.unknown_0_, 8);
    return 1;
}
