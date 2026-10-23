#include <globaldefs.h>
#include "World/ZoneChest.h"
#include <Graphics/Vector.h>

struct Struct_020fdd44 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};
extern "C" Struct_020fdd44* func_02027ca4();
extern "C" Struct_020fdd44* func_02028bd0(Struct_020fdd44*, int);

// USA: func_0201874c
extern "C" ARM void func_0201874c(Zone3D* arg0, Struct_020134e0::Struct_02018300* arg1) {
    Struct_02016874_2* var0 = func_02018b34(arg0, arg1);
    if (!var0) return;
    var0->unknown_2_ &= ~1;
    var0->unknown_2_ &= ~4;
    for (int var1 = 0; var1 < arg0->unknown_82c_; var1++) {
        Struct_02016874_2* var2 = arg0->unknown_824_[var1];
        if (var2->unknown_28_ == var0) {
            var2->unknown_2_ &= ~1;
            break;
        }
    }
    if (arg1->unknown_2c_.unknown1_0_.unknown_2_4_ & 0x20) {
        Vector3fix var3;
        Vector3fix var4;
        Vector3fixMultiplyScalar(&var0->unknown_48_, arg1->unknown_2c_.unknown1_0_.unknown_40_, &var4);
        Vector3fix_Add(&var0->unknown_8_, &var4, &var3);
        var0->unknown_48_.x = -var0->unknown_48_.x;
        var0->unknown_48_.y = -var0->unknown_48_.y;
        var0->unknown_48_.z = -var0->unknown_48_.z;
        var0->unknown_3c_ = var3;
        var0->unknown_3a_ = 0x266;
    } else {
        if (arg1->unknown_2c_.unknown1_0_.unknown_2_4_ & 2) var0->unknown_34_ = 128.68f + var0->unknown_6_;
        else var0->unknown_34_ = var0->unknown_6_ - 128.68f;
        var0->unknown_36_ = 0x199;
        var0->unknown_4_0_ = 0x1f;
        var0->unknown_2_ |= 0x80;
    }
    arg1->unknown_2c_.unknown1_0_.unknown_2_4_ &= ~1;
    arg0->unk_830[0] = 0xf;
    if (!(arg1->unknown_2c_.unknown1_0_.unknown_2_4_ & 8)) {
        int var5 = func_02018bc4(arg0, arg1);
        Struct_020fdd44* var6 = func_02027ca4();
        Struct_020fdd44* var7 = func_02028bd0(var6, arg0->currentZoneID_);
        if (var7) var7->unknown_4_ &= ~(1 << var5);
    }
}
