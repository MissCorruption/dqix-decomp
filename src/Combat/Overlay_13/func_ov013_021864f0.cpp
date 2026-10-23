#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define func_ov013_021864f0 func_ov013_02187820
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

extern "C" int func_020421a0();
extern "C" void func_02043204(char* arg0);

extern "C" void func_ov013_02186c64(void* arg0, int arg1, int arg2);
extern "C" void func_ov013_02185cc0(void* arg0);

// USA: func_ov013_021864f0
extern "C" ARM void func_ov013_021864f0(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    var0[LOW_REGION(0x644, 0x6bc)] &= ~1;
    if (var0[LOW_REGION(0x5cb, 0x63f)] != 0) var0[LOW_REGION(0x5c5, 0x639)] = 1;

    int var1 = func_020421a0();
    unsigned char* var2 = (unsigned char*)var1;
    var2[0x1000 + LOW_REGION(0x7ee, 0x9be)] = 1;

    if (!g_keyManager.TestKeysPressed(0x613) && !g_touchInput.IsPressed()) {
        return;
    }

    var0[LOW_REGION(0x5c8, 0x63c)] = 1;
    g_keyManager.CancelCurrentKeyRepeat();
    func_02043204((char*)var2);
    var0[LOW_REGION(0x5c5, 0x639)] = 0;
    func_ov013_02186c64(arg0, 0, 0);
    func_ov013_02185cc0(arg0);
}
