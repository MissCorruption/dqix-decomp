#include <globaldefs.h>
#include "Resource/GameResources.h"

struct GameResources;
int SetMainBrightnessWithDurationMs(GameResources*, int, unsigned int);

struct Struct_ov025_021e58b4 { char unknown_0_[8]; unsigned short unknown_8_; signed char unknown_a_; };

// USA: func_ov025_021e58b4
extern "C" ARM int func_ov025_021e58b4(struct Struct_ov025_021e58b4* arg0) {
    GameResources* var0 = GetGameResources();
    SetMainBrightnessWithDurationMs(var0, arg0->unknown_a_, arg0->unknown_8_);
    return 1;
}
