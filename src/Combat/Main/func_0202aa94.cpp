#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0202aa94 {
    unsigned char unknown_0_[0x40];
    int unknown_40_;
};

// USA: func_0202aa94
extern "C" ARM int func_0202aa94(struct Struct_0202aa94* arg0) {
    switch (arg0->unknown_40_) {
    case 0:
        if (g_keyManager.TestKeysHeld(0x80)) return 1;
    case 1:
        if (g_keyManager.TestKeysHeld(0x80)) {
            if (g_keyManager.TestKeysHeld(0x400)) return 1;
        }
    case 2:
        if (g_keyManager.TestKeysHeld(0x80)) {
            if (g_keyManager.TestKeysHeld(0x800)) return 1;
        }
    }
    return 0;
}
