#include <globaldefs.h>
#include "Input/Input.h"

extern "C" void func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov001_0215ae1c
extern "C" ARM int func_ov001_0215ae1c(void* arg0, int arg1) {
    if (arg1 < 1) return 0;
    g_keyManager.RefreshKeys();
    int var0 = g_keyManager.IsYHeld();
    int var1 = g_keyManager.IsXHeld();
    int var2 = g_keyManager.IsAHeld();
    int var3 = g_keyManager.IsBHeld();
    func_ov017_021d6134(arg0, var2 + var3 + var1 + var0);
    return 1;
}
