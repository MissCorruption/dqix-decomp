#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_02153628_3 { unsigned int unknown_0_; unsigned int unknown_4_; unsigned int unknown_8_; };
extern struct Struct_02153628_3 data_02153628;

// USA: func_020e11a4
extern "C" ARM void func_020e11a4(void) {
    data_02153628.unknown_4_ = 0;
    data_02153628.unknown_8_ = 0;
    data_02153628.unknown_0_ = 0;
    g_keyManager.SetInputEnabled(true);
    g_touchInput.SetInputEnabled(true);
}
