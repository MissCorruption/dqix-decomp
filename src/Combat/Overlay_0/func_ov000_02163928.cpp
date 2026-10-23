#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov000_02163928_30524 = 0x792c, Enum_ov000_02163928_30528 = 0x7930 };
#else
enum { Enum_ov000_02163928_30524 = 0x773c, Enum_ov000_02163928_30528 = 0x7740 };
#endif
#include "GameState/GameState.h"

extern char data_ov000_021838df[];

// USA: func_ov000_02163928
extern "C" ARM void func_ov000_02163928(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    for (var1 = 0; var1 < 4; var1++) {
        signed char var2 = *(signed char*)(arg0 + Enum_ov000_02163928_30524 + var1);
        if (var2 < 0) continue;
        int var3 = *(unsigned char*)(arg0 + Enum_ov000_02163928_30528 + var1);
        var3--;
        if (var3 <= 0) {
            *(signed char*)(arg0 + Enum_ov000_02163928_30524 + var1) = -1;
            GameObject* var4 = func_0200ff1c(var0, var2);
            if (var4 != 0) {
                var4->obj3D_.MaybeSetRegularAnimation((char const*)data_ov000_021838df, 1);
            }
        } else {
            *(unsigned char*)(arg0 + Enum_ov000_02163928_30528 + var1) = var3;
        }
    }
}
