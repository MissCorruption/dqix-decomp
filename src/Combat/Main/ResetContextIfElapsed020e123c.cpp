#include <globaldefs.h>
#include "Input/Input.h"

int IsElapsedTicksBelowThreshold_020e11e4(void);

struct Ctx02153628 { void* field0; unsigned int field4; unsigned int field8; };
extern Ctx02153628 data_02153628;

// USA: func_020e123c  (semantic: ResetContextIfElapsed020e123c)
extern "C" ARM void func_020e123c(void) {
    if (IsElapsedTicksBelowThreshold_020e11e4()) {
        return;
    }
    data_02153628.field4 = 0;
    data_02153628.field8 = 0;
    data_02153628.field0 = 0;
    g_keyManager.SetInputEnabled(true);
    g_touchInput.SetInputEnabled(true);
}
