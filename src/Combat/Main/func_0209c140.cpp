#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0201bdac_4;
extern "C" int func_02086b98(struct Struct_0201bdac_4*);

// USA: func_0209c140
extern "C" ARM int func_0209c140() {
    GameState* var0 = GameState::GetInstance();
    if (var0 != NULL) {
        struct Struct_0201bdac_4* var1 = (struct Struct_0201bdac_4*)func_02010828((GameState*)(var0));
        if (var1 != NULL) {
            if (func_02086b98(var1) != 0) {
                return 1;
            }
        }
    }
    return 0;
}
