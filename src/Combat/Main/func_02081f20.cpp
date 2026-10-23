#include <globaldefs.h>
#include "Input/Input.h"

extern unsigned short __attribute__((aligned(4))) data_020e8a84[];

struct Struct_02081f20 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
};

struct Struct_02081f20_2 {
    struct Struct_02081f20 *unknown_0_;
    unsigned short unknown_4_;
    signed char unknown_6_;
    signed char unknown_7_;
    signed char unknown_8_;
};

extern "C" void func_0208203c(struct Struct_02081f20_2* arg0);

// USA: func_02081f20
extern "C" ARM unsigned short func_02081f20(struct Struct_02081f20_2* arg0, int arg1) {
    if (arg0->unknown_0_ == NULL) return 0;
    arg0->unknown_0_->unknown_2_ = 0;
    if (arg0->unknown_0_->unknown_0_ == 0) {
        unsigned short var0[4];
        {
            const unsigned short* var1 = data_020e8a84;
            unsigned short* var2 = var0;
            int var3 = 4;
            do {
                *var2++ = *var1++;
            } while (--var3);
        }
        int var4;
        for (var4 = 0; var4 < 4; var4++) {
            unsigned short var5 = var0[var4];
            if (g_keyManager.TestKeysPressed(var5)) {
                arg0->unknown_0_->unknown_0_ = var5;
                arg0->unknown_8_ = arg0->unknown_6_;
                arg0->unknown_0_->unknown_2_ = 1;
                goto end;
            }
        }
        goto end;
    }
    if (arg0->unknown_0_->unknown_0_ != 0) {
        if (g_keyManager.TestKeysHeld(arg0->unknown_0_->unknown_0_)) {
            arg0->unknown_8_ -= (signed char)arg1;
            if (arg0->unknown_8_ < 0) {
                arg0->unknown_8_ += arg0->unknown_7_;
                arg0->unknown_0_->unknown_2_ = 2;
            }
            goto end;
        }
        func_0208203c(arg0);
    }
end:
    return arg0->unknown_0_->unknown_2_;
}
