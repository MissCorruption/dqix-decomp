#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020339c8_24 = 0x14 };
#else
enum { Enum_020339c8_24 = 0x18 };
#endif
#include "World/Object3D.h"

struct Struct_02028430_2 {
    unsigned char unknown_0_, unknown_1_, unknown_2_, unknown_3_;
    Vector3s unknown_4_; unsigned short unknown_a_;
    Struct_02028430_2** unknown_c_;
};
struct Struct_02028430 { unsigned char unknown_0_[4]; Struct_02028430_2* unknown_4_; };
struct Struct_020283fc;
struct Struct_020fdd44 {
    unsigned short unknown_0_; char unknown_2_[Enum_020339c8_24 - 2];
    Struct_02028430 unknown_18_; char unknown_20_[0x34 - 0x20];
    int unknown_34_; char unknown_38_[0x318 - 0x38];
};
struct Struct_020339c8 : Object3D {
    char unknown_ac_[0xb8 - 0xac]; unsigned short unknown_b8_;
    char unknown_ba_[8]; unsigned char unknown_c2_0_ : 6; unsigned char unknown_c2_6_ : 1;
};
extern "C" Struct_020fdd44* func_02027ca4();
extern "C" Struct_020fdd44* func_02028bd0(Struct_020fdd44*, int);
extern "C" Struct_02028430_2* func_02028430(Struct_02028430*, int);
extern "C" int func_020283fc(Struct_020283fc*, int);
extern "C" Vector3fix func_02034104(void*);
extern "C" int func_02028524(Struct_02028430*, const Vector3fix&);

// USA: func_020339c8
extern "C" ARM void func_020339c8(Struct_020339c8* arg0) {
    if (!arg0->unknown_c2_6_) return;
    Struct_020fdd44* var0 = func_02027ca4();
    Struct_020fdd44* var1 = func_02028bd0(var0, arg0->GetField06());
    if (!var1 || !var1->unknown_34_) return;
    Struct_02028430_2* var2 = func_02028430(&var1->unknown_18_, arg0->unknown_b8_);
    if (!var2) return;
    if (arg0->unknown_0_ & 0x1200) {
        int var3 = func_02028524(&var1->unknown_18_, func_02034104(arg0));
        if (var3 > -1) arg0->unknown_b8_ = var3;
    } else if (var2->unknown_2_) {
        Vector3fix var4 = func_02034104(arg0);
        Vector3fix var5;
        var5.x = var2->unknown_4_.x << 12;
        var5.y = var2->unknown_4_.y << 12;
        var5.z = var2->unknown_4_.z << 12;
        int var6 = Vector3fix_Distance(&var4, &var5);
        int var7 = -1;
        for (int var8 = 0; var8 < var2->unknown_2_; ++var8) {
            Vector3fix var9;
            var9.x = var2->unknown_c_[var8]->unknown_4_.x << 12;
            var9.y = var2->unknown_c_[var8]->unknown_4_.y << 12;
            var9.z = var2->unknown_c_[var8]->unknown_4_.z << 12;
            if (Vector3fix_Distance(&var9, &var4) < var6) var7 = var2->unknown_c_[var8]->unknown_0_;
        }
        if (var7 >= 0) {
            int var10 = func_020283fc((Struct_020283fc*)&var1->unknown_18_, var7);
            if (var10 > -1) arg0->unknown_b8_ = var10;
        }
    }
}
