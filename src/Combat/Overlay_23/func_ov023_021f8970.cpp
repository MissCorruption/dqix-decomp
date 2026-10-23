#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_ov023_021f8970 {
    char unknown_0_[0xc8];
    short unknown_c8_;
    short unknown_ca_;
    short unknown_cc_;
    short unknown_ce_;
};

// USA: func_ov023_021f8970
extern "C" ARM int func_ov023_021f8970(struct Struct_ov023_021f8970* arg0) {
    short var0 = arg0->unknown_cc_;
    short var1 = arg0->unknown_ce_;
    short var2 = arg0->unknown_c8_;
    short var3 = arg0->unknown_ca_;
    int var4, var5;
    g_touchInput.GetTouchPoint(&var4, &var5);
    if ((short)(var0 << 3) > var4) goto fail;
    short var6 = (short)(var0 << 3);
    short var7 = (short)(var2 << 3);
    int var8 = var6 + var7;
    if (var4 >= var8) goto fail;
    if ((short)(var1 << 3) > var5) goto fail;
    short var9 = (short)(var1 << 3);
    short var10 = (short)(var3 << 3);
    int var11 = var9 + var10;
    if (var5 < var11) return 1;
fail:
    return 0;
}
