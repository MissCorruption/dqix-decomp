#include "GameState/GameState.h"
#include "World/Object3D.h"
#include <globaldefs.h>

extern "C" GameObject *func_0200ff1c(GameState *arg0, int arg1);

// USA: func_ov002_02154a6c
extern "C" ARM int func_ov002_02154a6c(void *arg0, int arg1, int arg2) {
    GameState *var0 = GameState::GetInstance();
    GameObject *var1 = func_0200ff1c(var0, arg1);
    if (var1 == NULL) return 0;
    GameObject *var2 = func_0200ff1c(var0, arg2);
    if (var2 == NULL) return 0;

    if (var1->obj3D_.GetField06() == var2->obj3D_.GetField06()) return 1;

    if ((var1->obj3D_.GetField06() == 10000 && var2->obj3D_.GetField06() == 5900) ||
        (var1->obj3D_.GetField06() == 5900 && var2->obj3D_.GetField06() == 10000))
    {
        return 1;
    }

    if ((var1->obj3D_.GetField06() == 10100 && var2->obj3D_.GetField06() == 6401) ||
        (var1->obj3D_.GetField06() == 6401 && var2->obj3D_.GetField06() == 10100))
    {
        return 1;
    }

    return 0;
}
