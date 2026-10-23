#include <globaldefs.h>
#include "Input/Input.h"

extern "C" void func_02012de8(void);
extern "C" void func_020e123c(void);

// USA: func_02012efc
extern "C" ARM void func_02012efc(void) {
    func_02012de8();
    func_020e123c();
    g_keyManager.RefreshKeys();
    g_touchInput.RefreshState();
}
