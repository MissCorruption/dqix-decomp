#include <globaldefs.h>
#include "Input/Input.h"

unsigned long long GetCurrentTimestamp(void);

struct Struct_02153628_2 { void* unknown_0_; unsigned int unknown_4_; unsigned int unknown_8_; };
extern Struct_02153628_2 data_02153628;

// USA: func_020e1154
extern "C" ARM void func_020e1154(void* arg0) {
    unsigned long long var0 = GetCurrentTimestamp();
    data_02153628.unknown_4_ = (unsigned int)var0;
    data_02153628.unknown_8_ = (unsigned int)(var0 >> 32);
    data_02153628.unknown_0_ = arg0;
    g_keyManager.SetInputEnabled(false);
    g_keyManager.Clear();
    g_touchInput.SetInputEnabled(false);
    g_touchInput.ClearCurrentInput();
}
