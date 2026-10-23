#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" unsigned char func_02039d7c(char* arg0);

// USA: func_0208ae00
extern "C" ARM int func_0208ae00(char* arg0, int arg1) {
    unsigned int* var0 = ((unsigned int*)GetGameResources());
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = func_0200ff1c(var1, arg1);
    GameObject* var3 = func_0200ff1c(var1, arg1);
    if (var2 == NULL || (**(int**)((char*)var2 + 0x130) & 1)) {
        return 0;
    }
    int* var4 = *(int**)((char*)var3 + 0x130);
    if (!(*var4 & 2)) {
        return 0;
    }
    if (TestFlags04((GameResources*)var0, 0x10) != 0) {
        return 0;
    }
    if (*(int*)(arg0 + 0x1c) != 0) {
        return 0;
    }
    GameObject* var5 = var1->GetUnknownGameObject();
    if (*(short*)((char*)var5 + 0xb2) == 0) {
        return 0;
    }
    return func_02039d7c((char*)var5) == 0 ? 1 : 0;
}
