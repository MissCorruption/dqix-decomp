#include <globaldefs.h>
#include "World/ZoneChest.h"
#include "Graphics/Vector.h"

struct Struct_020fdd44 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    char unknown_6_[0x318 - 6];
};
extern "C" Struct_020fdd44* func_02027ca4();
extern "C" Struct_020fdd44* func_02028bd0(Struct_020fdd44*, int);

// USA: func_02018918
extern "C" ARM void func_02018918(Zone3D* arg0, Struct_020134e0::Struct_02018300* arg1) {
    Struct_02016874_2* var0 = func_02018b34(arg0, arg1);
    if (var0) {
        var0->unknown_2_ &= ~1;
        var0->unknown_2_ &= ~4;
        for (int var1 = 0; var1 < arg0->unknown_82c_; ++var1) {
            Struct_02016874_2* var2 = arg0->unknown_824_[var1];
            if (var2->unknown_28_ == var0) {
                var2->unknown_2_ &= ~1;
                break;
            }
        }
        if (arg1->unknown_2c_.unknown1_0_.unknown_2_4_ & 0x20) {
            short var3 = fix32ReduceAngle0To2Pi((short)(arg1->unknown_20_ + 0x1922));
            int var4 = fix32cos(var3);
            Vector3fix var5;
            var5.x = fix32sin(var3);
            var5.y = 0;
            var5.z = var4;
            Vector3fix_Normalize(&var5, &var5);
            Vector3fixMultiplyScalar(&var5, -arg1->unknown_2c_.unknown1_0_.unknown_40_, &var5);
            Vector3fix var6;
            Vector3fix_Normalize(&var5, &var6);
            var0->unknown_48_ = var6;
            Vector3fix var7;
            Vector3fix_Add(&var0->unknown_8_, &var5, &var7);
            var0->unknown_8_ = var7;
        }
        arg1->unknown_2c_.unknown1_0_.unknown_2_4_ &= ~1;
        arg0->unk_830[0] = 15;
        if (!(arg1->unknown_2c_.unknown1_0_.unknown_2_4_ & 8)) {
            int var8 = func_02018bc4(arg0, arg1);
            Struct_020fdd44* var9 = func_02028bd0(func_02027ca4(), arg0->currentZoneID_);
            if (var9) var9->unknown_4_ &= ~(1 << var8);
        }
    }
}
