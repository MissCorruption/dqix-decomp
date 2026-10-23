#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int func_ov008_02186b18(void* arg0, int arg1, int arg2);

struct Struct_0205bb04;
extern "C" void func_0205bb04(struct Struct_0205bb04*, int);
extern "C" int func_0205bf58(void*, void*);

// USA: func_ov008_02186a30
extern "C" ARM int func_ov008_02186a30(void* arg0, void* arg1) {
    int var0 = 0;
    int var1 = -1;
    int var2, var3;
    g_touchInput.GetTouchPoint(&var2, &var3);

    if (g_touchInput.pressed_ != 0) {
        var0 = 1;
        var1 = func_ov008_02186b18(arg0, var2, var3);
        if (var1 != -1) {
            func_0205bb04((struct Struct_0205bb04*)((char*)arg0 + 0x750), var1);
        }
    } else {
        if (g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0) {
            var0 = 1;
        } else if (g_touchInput.released_ != 0) {
            var0 = 1;
        }
    }

    if (var0 == 0) {
        func_0205bf58((char*)arg0 + 0x750, arg1);
    }
    if (var0 != 0) {
        if (var1 == -1) return 0;
        if (var1 == -2) return -2;
        if (var1 >= 0) return 1;
    }
    return 0;
}
