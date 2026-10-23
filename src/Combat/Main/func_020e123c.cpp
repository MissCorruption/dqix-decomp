#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int func_020e11e4(void);

struct Struct_02153628_2 { void* unknown_0_; unsigned int unknown_4_; unsigned int unknown_8_; };
extern Struct_02153628_2 data_02153628;

// USA: func_020e123c
extern "C" ARM void func_020e123c(void) {
    if (func_020e11e4()) {
        return;
    }
    data_02153628.unknown_4_ = 0;
    data_02153628.unknown_8_ = 0;
    data_02153628.unknown_0_ = 0;
    g_keyManager.SetInputEnabled(true);
    g_touchInput.SetInputEnabled(true);
}
