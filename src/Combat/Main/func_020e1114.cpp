#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_02153628 { unsigned int unknown_0_; unsigned int unknown_4_; unsigned int unknown_8_; };
extern struct Struct_02153628 data_02153628;

// USA: func_020e1114
extern "C" ARM void func_020e1114(void) {
    data_02153628.unknown_4_ = 0;
    data_02153628.unknown_8_ = 0;
    data_02153628.unknown_0_ = 0;
    g_keyManager.SetInputEnabled(true);
    g_touchInput.SetInputEnabled(true);
}
