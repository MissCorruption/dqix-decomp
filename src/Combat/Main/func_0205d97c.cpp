#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0205d81c {
    char unknown_0_[0xb0];
    unsigned char unknown_b0_;
};
struct Struct_0205d0e0 {
    char unknown_0_[0xa8];
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
};
extern "C" Struct_0205d0e0* func_0205d81c(Struct_0205d81c*, int);

// USA: func_0205d97c
extern "C" ARM int func_0205d97c(Struct_0205d81c* arg0) {
    if (!g_touchInput.pressed_) return -1;
    Struct_0205d0e0* var0;
    int var1;
    int var2;
    var0 = func_0205d81c(arg0, arg0->unknown_b0_);
    if (var0 == NULL) return 0;
    g_touchInput.GetTouchPoint(&var1, &var2);
    if (var1 == 0 || var2 == 0) return 0;
    int var3 = var0->unknown_ac_;
    int var4 = var0->unknown_ae_;
    int var5 = var0->unknown_a8_;
    int var6 = var0->unknown_aa_;
    var3 = (short)(var3 << 3);
    var4 = (short)(var4 << 3);
    var5 = (short)(var5 << 3);
    var6 = (short)(var6 << 3);
    int var7 = var3 + var5;
    int var8 = var4 + var6;
    if (var3 <= var1 && var1 < var7 && var4 <= var2 && var2 < var8) return 1;
    return 2;
}
