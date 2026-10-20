#include <globaldefs.h>
#include "Input/Input.h"

unsigned long long GetCurrentTimestamp(void);

struct Ctx02153628 { void* field0; unsigned int field4; unsigned int field8; };
extern Ctx02153628 data_02153628;

// USA: func_020e1154
ARM void InitContext020e1154(void* obj) {
    unsigned long long result = GetCurrentTimestamp();
    data_02153628.field4 = (unsigned int)result;
    data_02153628.field8 = (unsigned int)(result >> 32);
    data_02153628.field0 = obj;
    g_keyManager.SetInputEnabled(false);
    g_keyManager.Clear();
    g_touchInput.SetInputEnabled(false);
    g_touchInput.ClearCurrentInput();
}
