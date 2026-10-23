#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_ov023_021fd420;
extern "C" void func_ov023_021fd420(struct Struct_ov023_021fd420*, unsigned short*, unsigned short*, unsigned short*, unsigned short*);

// USA: func_ov023_021fd46c
extern "C" ARM int func_ov023_021fd46c(struct Struct_ov023_021fd420* arg0) {
    if (*((unsigned char*)arg0 + 0xc) & 0x10) return 0;
    unsigned short var0, var1, var2, var3;
    func_ov023_021fd420(arg0, &var0, &var1, &var2, &var3);
    int var4, var5;
    g_touchInput.GetTouchPoint(&var4, &var5);
    if (var0 <= var4 && var4 < var2 && var1 <= var5 && var5 < var3) return 1;
    return 0;
}
