#include <globaldefs.h>

extern "C" int _s32_div_f(int a, int b);

// USA: func_ov000_02167b5c
extern "C" ARM int func_ov000_02167b5c(int arg0, int arg1) {
    int var0 = arg1 - 1;
    int var1 = 0xb33;
    int var2 = var0 * 0x199 + 0x4000;
    int var3 = var0 * 0xb33 + arg0;
    if (var3 >= var2) {
        if (var2 < arg0) {
            var1 = 0x199;
        } else if ((unsigned int)arg1 > 1) {
            var1 = _s32_div_f(var2 - arg0, var0);
        }
    }
    return var1;
}
