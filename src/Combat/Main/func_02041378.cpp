#include <globaldefs.h>

#include "Graphics/Vector.h"
#include "World/Object3D.h"

extern "C" void func_0203db34(unsigned char *arg0, int arg1, int arg2, int arg3);

struct Struct_02041378 {
    Object3D unknown_0_;
    unsigned short unknown_ac_;
    unsigned short unknown_ae_;
    fix32_t unknown_b0_;
};

// USA: func_02041378
extern "C" ARM void func_02041378(void *arg0) {
    Struct_02041378 *var0 = (Struct_02041378 *) arg0;
    fix32_t var1                     = var0->unknown_b0_;
    fix32_t var2                    = var0->unknown_0_.rotation_.y;
    if (var2 == var1) {
        return;
    }

    fix32_t var3;
    if (var2 < var1) {
        var3 = var1 - var2;
        if (var3 > 0x3244) {
            var3 -= FIX_2PI;
        }
    } else if (var1 < var2) {
        var3 = -(var2 - var1);
        if (var3 < -0x3244) {
            var3 += FIX_2PI;
        }
    }

    int var4 = 0;
    if (var3 > 0) {
        if (var3 < 0x333) {
            var3 = var1;
        } else {
            var3 = fix32ReduceAngle0To2Pi(var2 + 0x333);
        }
        var0->unknown_ac_ |= 2;
        var4 = 1;
    } else if (var3 < 0) {
        if (-var3 < 0x333) {
            var3 = var1;
        } else {
            var3 = fix32ReduceAngle0To2Pi(var2 - 0x333);
        }
        var0->unknown_ac_ |= 2;
        var4 = 1;
    }

    if (!var4) {
        var0->unknown_ac_ &= ~2;
    }
    func_0203db34((unsigned char *) arg0, var0->unknown_0_.rotation_.x, var3, var0->unknown_0_.rotation_.z);
}
