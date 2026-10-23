#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_02191fec(int arg0, int arg1);

// USA: func_ov017_021c1264
extern "C" ARM void func_ov017_021c1264(void) {
    GameState* var0 = GameState::GetInstance();
    int var1 = ((int)GetGameResources());
    for (int var2 = 0; var2 < 4; var2++) {
        if (var0->GetPartyMemberByIndex(var2) != NULL) {
            func_ov017_02191fec(var1, var2);
        }
    }
}
