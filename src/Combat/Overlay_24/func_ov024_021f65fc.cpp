#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_0215eb1c(int arg0, short* arg1, int arg2, int arg3);
extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);

struct Struct_ov024_021f65fc { int unknown_0_; };
struct Struct_ov024_021fef8c { short unknown_0_[8]; };
extern struct Struct_ov024_021fef8c data_ov024_021fef8c;

// USA: func_ov024_021f65fc
extern "C" ARM int func_ov024_021f65fc(struct Struct_ov024_021f65fc* arg0, short arg1, int arg2, int* arg3, short* arg4) {
    struct Struct_ov024_021fef8c var0 = data_ov024_021fef8c;
    int var1 = func_ov000_0215eb1c(arg0->unknown_0_, var0.unknown_0_, 8, 1);
    if (var1 <= 0) return 0;
    *arg3 = 0;
    for (int var2 = 0; var2 < var1; var2++) {
        GameObject* var3 = func_ov000_021536f8(arg0->unknown_0_, var0.unknown_0_[var2]);
        if (var3 && var3->obj3D_.unknown_2_ == 0xb4) {
            (*arg3)++;
        }
    }
    int var4;
    if (*arg3 > 0) {
        var4 = 0;
    } else {
        var4 = 1;
        *arg3 = 1;
        *arg4 = arg1;
    }
    return var4;
}
