#include <globaldefs.h>
#include "Resource/MessageSystem.h"
#include "Input/Input.h"

// USA: func_02045740
ARM void MessageSystem::func_02045740() {
    int poll = w94c[3];
    w94c[3] = (poll + 1) & 0x1f;
    if (g_keyManager.TestKeysPressed(0x40)) {
        int c = w94c[2] - 1;
        w94c[2] = c;
        if (c < 0) {
            w94c[2] = w9a4 - 1;
        }
        w994 = w94c[2];
        w94c[3] = 0;
        return;
    }
    if (!g_keyManager.TestKeysPressed(0x80)) {
        return;
    }
    w94c[2] = w94c[2] + 1;
    if (w94c[2] >= w9a4) {
        w94c[2] = 0;
    }
    w994 = w94c[2];
    w94c[3] = 0;
}
