#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0200fb8c(int* arg0);
struct GameResources;
int IsSubBrightnessTransitionActive(GameResources*);
int IsMainBrightnessTransitionActive(GameResources*);

struct Struct_ov023_021dd59c { char unknown_0_[
#if defined(jpn)
0x6f8
#else
0x77c
#endif
]; signed char unknown_77c_; };

// USA: func_ov023_021ddbf8
extern "C" ARM int func_ov023_021ddbf8(Struct_ov023_021dd59c* arg0) {
    int* var0 = (int*)func_0200fb8c((int*)GameState::GetInstance());
    int var1;
    if (arg0->unknown_77c_ == 1) {
        var1 = IsSubBrightnessTransitionActive((GameResources*)var0);
    } else {
        var1 = IsMainBrightnessTransitionActive((GameResources*)var0);
    }
    return var1 != 0;
}
