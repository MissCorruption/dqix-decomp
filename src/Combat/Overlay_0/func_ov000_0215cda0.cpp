#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

struct Struct_02049b54_2;
extern "C" int func_ov000_0215eb1c(void* arg0, short* arg1, int arg2, int arg3);
extern "C" Vector3i func_02049b54(struct Struct_02049b54_2* arg0);

struct Struct_ov000_02182c34 { short unknown_0_[8]; };
extern struct Struct_ov000_02182c34 data_ov000_02182c34;

// USA: func_ov000_0215cda0
extern "C" ARM int func_ov000_0215cda0(void* arg0) {
    struct Struct_ov000_02182c34 var0 = data_ov000_02182c34;
    int var1 = -1;
    int var2 = func_ov000_0215eb1c(arg0, var0.unknown_0_, 8, 1);
    Vector3i var3;
    for (int var4 = 0; var4 < var2; var4++) {
        short var5 = var0.unknown_0_[var4];
        GameState* var6 = GameState::GetInstance();
        GameObject* var7 = var6->GetCombatantByIndex(var5);
        if (var7 != NULL) {
            Vector3i var8 = func_02049b54((struct Struct_02049b54_2*)var7);
            if (var1 > 0) {
                if (var8.x < var3.x) {
                    var3 = var8;
                    var1 = var0.unknown_0_[var4];
                }
            } else {
                var1 = var0.unknown_0_[var4];
                var3 = var8;
            }
        }
    }
    return var1;
}
