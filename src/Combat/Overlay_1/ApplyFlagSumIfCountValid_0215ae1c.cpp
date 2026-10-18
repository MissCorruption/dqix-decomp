#include <globaldefs.h>
#include "Input/Input.h"

extern "C" void func_ov017_021d6134(void* obj, int sum);

// USA: func_ov001_0215ae1c
ARM int ApplyFlagSumIfCountValid_0215ae1c(void* obj, int count) {
    if (count < 1) return 0;
    g_keyManager.RefreshKeys();
    int f800 = g_keyManager.IsYHeld();
    int f400 = g_keyManager.IsXHeld();
    int f1 = g_keyManager.IsAHeld();
    int f2 = g_keyManager.IsBHeld();
    func_ov017_021d6134(obj, f1 + f2 + f400 + f800);
    return 1;
}
