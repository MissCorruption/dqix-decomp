#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int func_0205bd78(void* arg0, int arg1, int arg2);

// USA: func_0205bea0
extern "C" ARM int func_0205bea0(void* arg0) {
    if (g_touchInput.pressed_ != 0) {
        int var0;
        int var1;
        g_touchInput.GetTouchPoint(&var0, &var1);
        return (func_0205bd78(arg0, var0, var1) >= 0) ? 1 : 0;
    }
    return 0;
}
