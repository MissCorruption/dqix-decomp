#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_0215f3d8 func_ov006_021607f8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_ov006_02158c28 {
    char unknown_0_[R(0x3c, 0x44)];
    short* unknown_44_;
    char unknown_48_[0x38f - R(0x40, 0x48)];
    unsigned char unknown_38f_;
    unsigned char unknown_390_;
};

// USA: func_ov006_02158c28
extern "C" ARM void func_ov006_02158c28(struct Struct_ov006_02158c28* arg0) {
    if (!g_keyManager.TestKeysPressed(0x800)) {
        return;
    }
    if (arg0->unknown_44_ != 0) {
        *arg0->unknown_44_ = -1;
    }
    arg0->unknown_44_ = 0;
    arg0->unknown_38f_ = 0xc;
    arg0->unknown_390_ = 0;
}
