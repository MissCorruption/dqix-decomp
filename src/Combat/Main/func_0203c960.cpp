#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_ov001_021592bc { int unknown_0_; int unknown_4_; int unknown_8_; };
ARM void Vector3fixMultiplyScalar(Vector3i const*, int, Vector3i*);

struct Struct_0203fc5c {
    char unknown_0_[0x40];
    float unknown_40_;
};
extern "C" ARM int func_0203fc5c(struct Struct_0203fc5c* arg0, float arg1);

extern "C" double _dflt(int);

struct Struct_0203c818 {
    char unknown_0_[4];
    Vector3i unknown_4_;
    char unknown_10_[0x4c];
    int unknown_5c_;
    char unknown_60_[0x18];
    Vector3i unknown_78_;
    char unknown_84_[8];
    int unknown_8c_;
};

// USA: func_0203c960
extern "C" ARM void func_0203c960(struct Struct_0203c818* arg0) {
    Vector3i var0;
    Vector3fix_Subtract(&arg0->unknown_78_, &arg0->unknown_4_, &var0);
    int var1 = Vector3fix_Length(&var0);
    if (arg0->unknown_8c_ < var1) {
        int var2 = fix32_Divide(arg0->unknown_8c_, var1);
        Vector3fixMultiplyScalar(&var0, var2, &var0);
        Vector3i var3;
        Vector3fix_Add(&arg0->unknown_4_, &var0, &var3);
        arg0->unknown_4_ = var3;
        double var4 = _dflt(arg0->unknown_8c_);
        float var5 = (float)(var4 / 0.03 / 4096.0);
        func_0203fc5c((struct Struct_0203fc5c*)arg0, var5);
        return;
    }
    arg0->unknown_4_ = arg0->unknown_78_;
    arg0->unknown_5c_ &= ~1;
}
