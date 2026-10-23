#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0205df38 {
    char unknown_0_[0xa8];
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
};

struct Struct_0205d81c {
    char unknown_0_[0x98];
    void* unknown_98_;
    struct Struct_0205df38* unknown_9c_;
};

extern "C" struct Struct_0205df38* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);

// USA: func_0205df38
extern "C" ARM int func_0205df38(struct Struct_0205d81c* arg0, int arg1) {
    int var0, var1;
    struct Struct_0205df38* var2;
    short var3, var4, var5, var6;
    int var7, var8;

    if (arg0->unknown_98_ == 0) return 0;
    if (arg0->unknown_9c_ == 0) return 0;

    if (!g_touchInput.pressed_) goto zero;

    g_touchInput.GetTouchPoint(&var0, &var1);

    var2 = func_0205d81c(arg0, arg1);
    if (var2 == 0) goto zero;

    var3 = var2->unknown_ac_;
    var4 = var2->unknown_a8_;
    var5 = var2->unknown_ae_;
    var6 = var2->unknown_aa_;
    var7 = (short)(var3 + var4);
    var8 = (short)(var5 + var6);

    if (var0 > ((var3 << 0x13) >> 0x10)) {
        if (var0 < ((var7 << 0x13) >> 0x10)) {
            if (var1 > ((var5 << 0x13) >> 0x10)) {
                if (var1 < ((var8 << 0x13) >> 0x10)) {
                    return 1;
                }
            }
        }
    }
zero:
    return 0;
}
