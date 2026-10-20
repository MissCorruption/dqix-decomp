#include <globaldefs.h>
#include "Input/Input.h"

struct Obj0217c74c {
    char pad0[0x140];
    unsigned char f140;
    unsigned char f141;
};

// USA: func_ov003_0217c74c
ARM void SetPendingFlags0217c74c(struct Obj0217c74c* obj) {
    if (!g_keyManager.TestKeysPressed(0xc0f)) {
        if (g_touchInput.isRepeatValid_ == 0) return;
        if (g_touchInput.currentReading_.isHeld == 0) return;
    }
    obj->f140 = 4;
    obj->f141 = 0;
}
