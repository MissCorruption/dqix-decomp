#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_020e1e4c;
extern "C" ARM int func_020e1eb0(struct Struct_020e1e4c* arg0, int arg1, int arg2);

// USA: func_020e1e4c
extern "C" ARM int func_020e1e4c(struct Struct_020e1e4c* arg0) {
    if (!g_touchInput.pressed_) {
        goto no_flag;
    }
    {
        int var0, var1;
        g_touchInput.GetTouchPoint(&var0, &var1);
        int var2 = func_020e1eb0(arg0, (short)var0, (short)var1);
        return (var2 < 0) ? -2 : var2;
    }
no_flag:
    return -1;
}
