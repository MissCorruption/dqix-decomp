#include <globaldefs.h>
#include "Input/Input.h"

extern "C" ARM int func_ov015_021925a8(void* arg0);

struct Struct_ov015_02190c98 {
    char unknown_0_[0x350];
    unsigned char unknown_350_;
};

// USA: func_ov015_02190c98
extern "C" ARM int func_ov015_02190c98(struct Struct_ov015_02190c98* arg0) {
    if (arg0->unknown_350_ != 0) return 1;
    if (!func_ov015_021925a8(arg0)) {
        if (g_keyManager.TestKeysHeld(0xc0)) return 1;
    }
    if (!func_ov015_021925a8(arg0)) {
        if (g_keyManager.TestKeysReleased(0xc0)) return 1;
    }
    return 0;
}
