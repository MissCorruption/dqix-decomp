#include <globaldefs.h>
#include "Input/Input.h"

extern "C" void func_02012de8(void);
extern "C" void func_020e123c(void);
extern "C" void func_02012538(void*);

extern int data_02114e54;

// USA: func_02012efc
ARM void InitCombatSubsystems02012efc(void) {
    func_02012de8();
    func_020e123c();
    g_keyManager.RefreshKeys();
    func_02012538(&data_02114e54);
}
