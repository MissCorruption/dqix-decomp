#include <globaldefs.h>
#include "Resource/GameResources.h"

struct GameResources;
void Stub(GameResources*);
void UpdateBrightnessTransitions(GameResources*);
void ApplyBrightness(GameResources*);

struct Struct_020db814 {
    char unknown_0_[0x28];
    unsigned char unknown_28_;
};

// USA: func_020db814
extern "C" ARM void func_020db814(void*) {
    struct Struct_020db814* var0 = (struct Struct_020db814*)GetGameResources();
    if (var0 == NULL) {
        return;
    }
    var0->unknown_28_ = 1;
    Stub((GameResources*)var0);
    UpdateBrightnessTransitions((GameResources*)var0);
    ApplyBrightness((GameResources*)var0);
}
