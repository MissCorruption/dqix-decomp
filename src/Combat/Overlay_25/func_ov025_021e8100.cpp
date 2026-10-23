#include <globaldefs.h>
#include "GameState/GameState.h"

struct Param021e8100 {
    char pad[0x8];
    unsigned short duration;
    short strength;
};

extern "C" unsigned char* func_020100bc(GameState* gs);
extern "C" void func_0202ea10(unsigned char* obj, int a, int b);

// USA: func_ov025_021e8100
extern "C" ARM int func_ov025_021e8100(Param021e8100* p) {
    unsigned char* camera = func_020100bc(GameState::GetInstance());
    if (camera != 0) {
        func_0202ea10(camera, p->strength, p->duration);
    }
    return 1;
}
