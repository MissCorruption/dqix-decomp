#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "std_library_functions.h"

extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
struct Struct_ov024_021dd028_5;
extern "C" int func_ov024_021dd260(struct Struct_ov024_021dd028_5* arg0);

struct Struct_ov024_021f5ce4 { int unknown_0_; };
struct Struct_ov024_021fed9c { short unknown_0_[8]; };
extern struct Struct_ov024_021fed9c data_ov024_021fed9c;

// USA: func_ov024_021f5ce4
extern "C" ARM int func_ov024_021f5ce4(struct Struct_ov024_021f5ce4* arg0, int arg1, int arg2, int* arg3, void* arg4) {
    struct Struct_ov024_021fed9c var0 = data_ov024_021fed9c;
    int var1 = func_ov000_0215eb1c(arg0->unknown_0_, var0.unknown_0_, 8, 1);
    if (var1 <= 0) return 0;
    *arg3 = 0;
    for (int var2 = 0; var2 < var1; var2++) {
        GameObject* var3 = GetCombatantByID(arg0->unknown_0_, var0.unknown_0_[var2]);
        if (var3 && !func_ov024_021dd260((struct Struct_ov024_021dd028_5*)var3)) {
            (*arg3)++;
        }
    }
    if (*arg3 <= 0) return 0;
    *arg3 = var1;
    memcpy(arg4, var0.unknown_0_, 0x10);
    return 1;
}
