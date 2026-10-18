#include <globaldefs.h>
#include "Resource/GameResources.h"
#if defined(jpn)
enum { kRegioned = 0xe9 };
#else
enum { kRegioned = 0xed };
#endif

struct Obj02173af4 {
    char pad0[kRegioned];
    unsigned char fed;
    unsigned char pad1;
    unsigned char fef;
};

struct GameResources;
void SetSubBrightness(GameResources*, int, int);
int IsSubBrightnessTransitionActive(GameResources*);

// USA: func_ov003_02173af4
ARM void UpdateFieldEdEf_02173af4(struct Obj02173af4* p) {
    GameResources* x = GetGameResources();
    if (p->fef == 0) {
        SetSubBrightness(x, -16, 0x18);
        p->fef = 1;
        return;
    }
    if (p->fef != 1) return;
    if (!IsSubBrightnessTransitionActive(x)) {
        p->fed = 6;
        p->fef = 0;
    }
}
