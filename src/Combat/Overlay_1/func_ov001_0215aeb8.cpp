#include <globaldefs.h>
#include "Input/Input.h"

extern "C" void func_ov017_021d6134(void* arg0, unsigned int arg1);

// USA: func_ov001_0215aeb8
extern "C" ARM int func_ov001_0215aeb8(void* arg0) {
    int var0 = (g_touchInput.released_ != 0 && (unsigned int)g_touchInput.prevTimeHeld_ < 10) ? 1 : 0;
    func_ov017_021d6134(arg0, var0);
    return 1;
}
