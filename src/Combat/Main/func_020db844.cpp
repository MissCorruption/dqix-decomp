#include <globaldefs.h>
#include "Resource/GameResources.h"

struct GameResources;
void SetMainBrightness(GameResources*, int, int);
void SetSubBrightness(GameResources*, int, int);

struct Struct_020db3f4_3 {
    unsigned char unknown_0_[0x6c];
    unsigned char unknown_6c_;
};

// USA: func_020db844
extern "C" ARM void func_020db844(struct Struct_020db3f4_3* arg0, int arg1, int arg2, int arg3) {
    int var0 = (int)GetGameResources();
    if (var0 == 0) return;
    arg0->unknown_6c_ = 0;
    if (arg1 == 0) SetMainBrightness((GameResources*)var0, arg2, arg3);
    else SetSubBrightness((GameResources*)var0, arg2, arg3);
    arg0->unknown_6c_ = 1;
}
