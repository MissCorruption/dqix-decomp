#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020dcc20_452 = 0x1b8 };
#else
enum { Enum_020dcc20_452 = 0x1c4 };
#endif
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);

// USA: func_020dcc20
extern "C" ARM int func_020dcc20(int arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    unsigned char var1 = 0;
    for (signed char var2 = 0; var2 < 4; var2++) {
        GameObject* var3 = var0->GetPartyMemberByIndex(var2);
        if (var3 != NULL) {
            if (!(arg1 != 0 && *(int*)((char*)var3 + Enum_020dcc20_452) != 0)) {
                if (func_02053c6c((unsigned char*)var3) != 0) {
                    var1 = var1 + 1;
                }
            }
        }
    }
    return var1 == arg0;
}
