#include <globaldefs.h>
#include "World/ZoneLifecycle.h"
extern "C" int func_0201b588(int);
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"

extern unsigned short data_020fb3f0;

// USA: func_0201bfd4
extern "C" ARM void func_0201bfd4(Zone3D* arg0) {
    GrottoStruct* var0 = GameState::GetInstance()->GetGrottoStruct();
    if (func_0201b588((int)(data_020fb3f0)) != 0) return;
    if (var0->unknown_0[4] != 0) {
        var0->unknown_0[3] = 0;
        var0->unknown_0[4] = 0;
    }
}
