#include <globaldefs.h>
#include "Input/Input.h"

struct Obj0202a9f4 {
    unsigned char pad[0x40];
    int state;
};

// USA: func_0202a9f4  (semantic: CheckFlagStateGroupA_0202a9f4)
extern "C" ARM int func_0202a9f4(struct Obj0202a9f4* obj) {
    switch (obj->state) {
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
