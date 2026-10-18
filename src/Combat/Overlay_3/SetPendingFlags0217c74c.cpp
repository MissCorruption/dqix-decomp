#include <globaldefs.h>
#include "Input/Input.h"

struct Data02114e54 {
    char pad0[0x24];
    unsigned short half24;
    char pad1[0x5f - 0x26];
    unsigned char byte5f;
};
extern struct Data02114e54 data_02114e54;

struct Obj0217c74c {
    char pad0[0x140];
    unsigned char f140;
    unsigned char f141;
};

// USA: func_ov003_0217c74c
ARM void SetPendingFlags0217c74c(struct Obj0217c74c* obj) {
    if (!g_keyManager.TestKeysPressed(0xc0f)) {
        if (data_02114e54.byte5f == 0) return;
        if (data_02114e54.half24 == 0) return;
    }
    obj->f140 = 4;
    obj->f141 = 0;
}
