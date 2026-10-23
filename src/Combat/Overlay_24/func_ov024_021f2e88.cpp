#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_02156068(int arg0, int arg1, int arg2, int arg3);
extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" int func_ov024_021edbf0(GameObject* arg0);

struct Struct_ov024_021f2e88 { int unknown_0_; };
struct Struct_ov024_021feb9c { short unknown_0_[4]; };
extern struct Struct_ov024_021feb9c data_ov024_021feb9c;

// USA: func_ov024_021f2e88
extern "C" ARM int func_ov024_021f2e88(struct Struct_ov024_021f2e88* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    struct Struct_ov024_021feb9c var0 = data_ov024_021feb9c;

    int var1 = func_ov000_0215e9fc(arg0->unknown_0_, var0.unknown_0_, 4, 1);
    if (var1 <= 0) return 0;

    *arg3 = 0;
    for (int var2 = 0; var2 < var1; var2++) {
        int var3 = func_ov000_02156068(arg0->unknown_0_, var0.unknown_0_[var2], 8, 0);
        if (var3) {
            *arg3 = *arg3 + 1;
        }
    }

    if (*arg3 <= 0) return 0;

    GameObject* var4 = func_ov000_021536f8(arg0->unknown_0_, arg1);
    if (!var4) return 0;

    int var5 = func_ov024_021edbf0(var4);
    int var6;
    if (var5) {
        var6 = 0;
    } else {
        *arg4 = arg1;
        *arg3 = 1;
        var6 = 1;
    }
    return var6;
}
