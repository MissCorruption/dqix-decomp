#include <globaldefs.h>
#include <GameState/GameState.h>
#include <Combat/Overlay_0/GetCombatantByID.h>
#include <Util/Random.h>

struct Struct_ov024_021ddc80_4;
struct Struct_ov024_021e2bd0;
struct Struct_ov024_021da670_6;
struct Struct_ov004_02159fcc { char unknown_0_[0x1c]; unsigned char unknown_1c_0_ : 7; unsigned char unknown_1c_7_ : 1; };
struct Struct_ov024_021e2bd0_3 { char unknown_0_[0xc]; Struct_ov004_02159fcc* unknown_c_; Random* unknown_10_; };
struct Struct_ov024_021e2bd0_4 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x36];
    unsigned char unknown_4e_;
};
struct Struct_ov024_021e303c {
    int unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    char unknown_8_[0xc];
    unsigned int unknown_14_0_ : 7;
    unsigned int unknown_14_7_ : 7;
    unsigned int unknown_15_6_ : 18;
};
union Struct_ov024_021e2bd0_6 { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; };

extern "C" int func_ov000_02156068(void*, int, int, int);
extern "C" int func_0208824c(unsigned char*);
extern "C" int func_ov024_021e9464(Struct_ov024_021ddc80_4*, int, int);
extern "C" int func_ov024_021eb4b0(int, int, int);
extern "C" void func_ov000_02159eac(void*, Struct_ov024_021e2bd0_6*, int);
extern "C" int func_ov024_021da998(Struct_ov024_021da670_6*);
extern "C" void func_0208826c(unsigned char*);
extern "C" void* func_ov024_021e8ca0(Struct_ov024_021e2bd0*, int);
extern "C" void func_ov000_0215cd44(void*, void*, GameObject*, int, int, int, int);
extern "C" void func_ov024_021e8cfc(Struct_ov024_021e2bd0_3*, GameObject*, int, int);

// USA: func_ov024_021e3a34
extern "C" ARM unsigned long long func_ov024_021e3a34(Struct_ov024_021e2bd0_3* arg0, int arg1, int arg2, Struct_ov024_021e303c* arg3, int arg4) {
    if (arg4 <= 0) return 0;
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    if (arg3->unknown_4_0_ == 0x52) {
        if (!func_ov000_02156068(arg0->unknown_10_, arg2, 9, 0)) return 0;
    } else if (arg3->unknown_4_0_ == 0x58) {
        if (!func_ov000_02156068(arg0->unknown_10_, arg2, 0, 1)
            && ((Struct_ov024_021e2bd0_4*)var0->currentStats_)->unknown_4e_ == 0) return 0;
    } else if (((Struct_ov024_021e2bd0_4*)var0->currentStats_)->unknown_4e_ == 0) return 0;
    if (!func_0208824c((unsigned char*)var0->currentStats_)) return 0;
    int var1 = NextRandomMax(arg0->unknown_10_, 100);
    float var2 = 100.0f;
    if (!arg0->unknown_c_->unknown_1c_7_) {
        int var3;
        if (arg1 >= 0 && arg1 <= 3) var3 = 1; else var3 = 0;
        if (var3) var2 = (float)arg3->unknown_14_7_;
        else var2 = (float)arg3->unknown_14_0_;
        var2 *= (float)((Struct_ov024_021e2bd0_4*)var0->currentStats_)->unknown_4e_ / 100.0f;
        switch (arg3->unknown_4_0_) {
        case 0x52:
            var2 = 25.0f;
            break;
        case 0x58:
            if (func_ov000_02156068(arg0->unknown_10_, arg2, 0, 1)) var2 = 12.5f;
            break;
        }
    }
    if ((float)var1 >= var2) return 0;
    int var4 = func_ov024_021e9464((Struct_ov024_021ddc80_4*)arg0, arg2, 1);
    Struct_ov024_021e2bd0_6 var5;
    var5.unknown_0_ = 0;
    var5.unknown_4_ = 0;
    if (func_ov024_021eb4b0((int)arg0, ((Struct_ov024_021e2bd0_4*)var0->currentStats_)->unknown_14_, 8))
        func_ov000_02159eac(arg0->unknown_10_, &var5, 0x2b);
    int var6 = func_ov024_021da998((Struct_ov024_021da670_6*)var0);
    func_0208826c((unsigned char*)var0->currentStats_);
    func_ov000_02159eac(arg0->unknown_10_, &var5, 0x18);
    void* var7 = func_ov024_021e8ca0((Struct_ov024_021e2bd0*)arg0, var4);
    if (var7) func_ov000_0215cd44(arg0->unknown_10_, var7, var0, 0, 0, 0, 0);
    if (var6) func_ov024_021e8cfc(arg0, var0, 0, 0);
    return var5.unknown1_0_;
}
