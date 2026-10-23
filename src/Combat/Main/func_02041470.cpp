#include <globaldefs.h>
#include "NitroSDK/Matrix.h"
#include "World/Object3D.h"

ARM void Vector3fixMultiplyScalar(Vector3i const*, int, Vector3i*);

int fix32ReduceAngle0To2Pi(int angle);

extern char data_020efe6c;
extern char data_020efe71;

struct Struct_02041470 : Object3D {
    unsigned short unknown_ac_;
    int unknown_b0_;
    Vector3i unknown_b4_;
    char unknown_c0_[0xd0 - 0xc0];
    int unknown_d0_;
    unsigned char unknown_d4_0_ : 1;
    unsigned char unknown_d4_1_ : 1;
    unsigned char unknown_d4_2_ : 6;
};

// USA: func_02041470
extern "C" ARM void func_02041470(struct Struct_02041470* arg0, Vector3i* arg1) {
    int var0 = Vector3fix_Distance(arg1, &arg0->position_);
    if (var0 == 0) {
        return;
    }
    arg0->unknown_b4_ = *arg1;
    arg0->unknown_ac_ |= 1;
    int var1 = arg0->unknown_d0_;
    if (!arg0->unknown_d4_1_) {
        arg0->MaybeSetRegularAnimation(&data_020efe6c, var1);
    } else {
        arg0->MaybeSetRegularAnimation(&data_020efe71, var1);
    }
    if (!(arg0->unknown_ac_ & 4)) {
        Vector3i var2;
        Vector3fix_Subtract(&arg0->unknown_b4_, &arg0->position_, &var2);
        int var3 = fix32_Divide(0x1000, var0);
        Vector3fixMultiplyScalar(&var2, var3, &var2);
        int var4 = fix32_Atan2(var2.x, var2.z);
        arg0->unknown_b0_ = fix32ReduceAngle0To2Pi(var4);
    }
}
