#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0202a9f4 {
    unsigned char unknown_0_[0x40];
    int unknown_40_;
};

// USA: func_0202a9f4
extern "C" ARM int func_0202a9f4(struct Struct_0202a9f4* arg0) {
    switch (arg0->unknown_40_) {
    case 0:
        if (g_keyManager.TestKeysHeld(0x40)) return 1;
    case 1:
        if (g_keyManager.TestKeysHeld(0x40)) {
            if (g_keyManager.TestKeysHeld(0x400)) return 1;
        }
    case 2:
        if (g_keyManager.TestKeysHeld(0x40)) {
            if (g_keyManager.TestKeysHeld(0x800)) return 1;
        }
    }
    return 0;
}
