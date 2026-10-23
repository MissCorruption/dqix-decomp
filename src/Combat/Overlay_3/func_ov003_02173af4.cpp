#include <globaldefs.h>
#include "Resource/GameResources.h"
#if defined(jpn)
enum { Enum_ov003_02173af4_237 = 0xe9 };
#else
enum { Enum_ov003_02173af4_237 = 0xed };
#endif

struct Struct_ov003_02173af4 {
    char unknown_0_[Enum_ov003_02173af4_237];
    unsigned char unknown_ed_;
    unsigned char unknown_ee_;
    unsigned char unknown_ef_;
};

struct GameResources;
void SetSubBrightness(GameResources*, int, int);
int IsSubBrightnessTransitionActive(GameResources*);

// USA: func_ov003_02173af4
extern "C" ARM void func_ov003_02173af4(struct Struct_ov003_02173af4* arg0) {
    GameResources* var0 = GetGameResources();
    if (arg0->unknown_ef_ == 0) {
        SetSubBrightness(var0, -16, 0x18);
        arg0->unknown_ef_ = 1;
        return;
    }
    if (arg0->unknown_ef_ != 1) return;
    if (!IsSubBrightnessTransitionActive(var0)) {
        arg0->unknown_ed_ = 6;
        arg0->unknown_ef_ = 0;
    }
}
