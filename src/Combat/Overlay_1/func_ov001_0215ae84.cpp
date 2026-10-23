#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void func_ov017_021d6134(void* arg0, unsigned int arg1);

// USA: func_ov001_0215ae84
extern "C" ARM int func_ov001_0215ae84(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    unsigned short var1 = (unsigned short)var0;
    int var2 = g_keyManager.TestKeysPressed(var1);
    func_ov017_021d6134((char*)arg0 + 8, var2);
    return 1;
}
