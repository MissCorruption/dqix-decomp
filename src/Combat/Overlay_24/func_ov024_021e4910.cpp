#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"

struct Struct_ov024_021e4910_3 {
    unsigned char unknown_0_[0x8e02];
    unsigned char unknown_8e02_;
};
struct Struct_ov024_021e4910 {
    unsigned char unknown_0_[0xc];
    void* unknown_c_;
    Struct_ov024_021e4910_3* unknown_10_;
};
struct Struct_ov024_021e4910_2 {
    unsigned char unknown_0_[0x32];
    short unknown_32_;
};
struct Struct_02087860;
struct Struct_02087954;
extern "C" int func_02087860(Struct_02087860*, unsigned char);
extern "C" int func_02087954(Struct_02087954*, int);
extern "C" int func_020878b4(ModifiableCombatStats*, int);
extern "C" int func_020879a8(ModifiableCombatStats*, int);
void UpdateCombatantDefense(int, int);
void UpdateCombatantAgility(int, int);
extern "C" void* func_ov000_0215e958(void*);
extern "C" int func_ov024_021e95d4(Struct_ov024_021e4910*, int, Struct_ov024_021e4910_2*, unsigned char, signed char, unsigned char, unsigned char);
extern "C" int func_ov024_021e96e4(Struct_ov024_021e4910*, int, Struct_ov024_021e4910_2*, unsigned char, signed char, unsigned char, unsigned char);
extern "C" void func_ov000_0215a88c(void*, void*, int);
extern "C" void func_ov000_02159eac(void*, void*, int);
extern "C" void func_ov000_0215cd44(void*, void*, GameObject*, int, int, int, int);
extern "C" void func_ov000_0215ffc4(void*, void*, int);

// USA: func_ov024_021e4910
extern "C" ARM unsigned long long func_ov024_021e4910(Struct_ov024_021e4910* arg0, int arg1, short arg2, Struct_ov024_021e4910_2* arg3) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    int var1 = arg3->unknown_32_;
    if (var1 < -2) var1 = -2;
    if (var1 > 2) var1 = 2;
    int var2 = 0;
    if (var1 < 0) var2 = 1;
    int var3 = 0;
    int var4 = 0;
    void* var5 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var5) return 0;
    if (func_02087860((Struct_02087860*)var0->currentStats_, var2)) {
        var4 = func_020878b4(var0->currentStats_, (signed char)var1);
        UpdateCombatantDefense((int)arg0->unknown_10_, arg2);
        var3 = 1;
    }
    if (var3) {
        int var6 = func_ov024_021e95d4(arg0, arg2, arg3, (unsigned char)var2, (signed char)var4, 1, 1);
        func_ov000_0215a88c(arg0->unknown_10_, var5, var6);
    }
    int var7 = 0;
    if (func_02087954((Struct_02087954*)var0->currentStats_, var2 & 0xff)) {
        var4 = func_020879a8(var0->currentStats_, (signed char)var1);
        UpdateCombatantAgility((int)arg0->unknown_10_, arg2);
        var7 = 1;
    }
    if (var7) {
        int var8 = func_ov024_021e96e4(arg0, arg2, arg3, (unsigned char)var2, (signed char)var4, 1, 1);
        func_ov000_0215a88c(arg0->unknown_10_, var5, var8);
    }
    union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var9;
    var9.unknown_0_ = 0;
    var9.unknown_4_ = 0;
    if (var3 || var7) {
        func_ov000_02159eac(arg0->unknown_10_, &var9, 0x1e);
        func_ov000_02159eac(arg0->unknown_10_, &var9, 0x1f);
        func_ov000_0215cd44(arg0->unknown_10_, var5, var0, 0, 0, 0, 0);
        func_ov000_0215ffc4(arg0->unknown_c_, var5, 1);
        arg0->unknown_10_->unknown_8e02_++;
    }
    return var9.unknown1_0_;
}
