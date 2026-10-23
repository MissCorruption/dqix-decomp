#include <globaldefs.h>
#include <GameState/GameState.h>
#include <Combat/Overlay_0/GetCombatantByID.h>
#include <Util/Random.h>

struct Struct_ov024_021e2bd0;
struct Struct_ov024_021dd028_5;
struct Struct_ov024_021da670_6;
struct Struct_ov024_021e2bd0_2;
struct Struct_02088418;
struct Struct_ov004_02159fcc { char unknown_0_[0x1c]; unsigned char unknown_1c_0_ : 7; unsigned char unknown_1c_7_ : 1; };
struct Struct_ov024_021e2bd0_3 { char unknown_0_[0xc]; Struct_ov004_02159fcc* unknown_c_; Random* unknown_10_; };
struct Struct_ov024_021e2bd0_4 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x34];
    unsigned char unknown_4c_;
};
struct Struct_ov024_021e2bd0_5 {
    char unknown_0_[4];
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    char unknown_8_[0xc];
    unsigned int unknown_14_0_ : 7;
    unsigned int unknown_14_7_ : 7;
    unsigned int unknown_15_6_ : 18;
    unsigned int unknown_18_0_ : 5;
    unsigned int unknown_18_5_ : 7;
    unsigned int unknown_19_4_ : 20;
    char unknown_1c_[0x16];
    short unknown_32_;
};
union Struct_ov024_021e2bd0_6 { struct { int unknown1_0_; int unknown_4_; }; unsigned long long unknown_0_; };

extern "C" int func_ov024_021e8fa4(struct Struct_ov024_021e2bd0_2*, int, int);
extern "C" void func_ov000_02159eac(void*, Struct_ov024_021e2bd0_6*, int);
extern "C" int func_02088418(Struct_02088418*, int, int);
extern "C" int func_ov024_021eb4b0(int, int, int);
extern "C" int func_ov024_021dd260(Struct_ov024_021dd028_5*);
extern "C" int func_ov024_021da998(Struct_ov024_021da670_6*);
extern "C" void func_02088474(void*, int, int);
extern "C" void* func_ov024_021e8ca0(Struct_ov024_021e2bd0*, int);
extern "C" void func_ov000_0215cd44(void*, void*, GameObject*, int, int, int, int);
extern "C" void func_ov024_021e8cfc(Struct_ov024_021e2bd0_3*, GameObject*, int, int);

// USA: func_ov024_021e2bd0
extern "C" ARM unsigned long long func_ov024_021e2bd0(Struct_ov024_021e2bd0_3* arg0, int arg1, int arg2, Struct_ov024_021e2bd0_5* arg3, int arg4) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    if (arg3->unknown_18_5_ != 10) {
        if (arg4 <= 0) return 0;
        if (((Struct_ov024_021e2bd0_4*)var0->currentStats_)->unknown_4c_ == 0) return 0;
        int var1 = NextRandomMax(arg0->unknown_10_, 100);
        float var2 = 100.0f;
        if (!arg0->unknown_c_->unknown_1c_7_) {
            int var3;
            if (arg1 >= 0 && arg1 <= 3) var3 = 1; else var3 = 0;
            if (var3) var2 = (float)arg3->unknown_14_7_;
            else var2 = (float)arg3->unknown_14_0_;
            if (arg3->unknown_4_0_ != 0x239 && arg3->unknown_4_0_ != 0x1fc)
                var2 *= (float)((Struct_ov024_021e2bd0_4*)var0->currentStats_)->unknown_4c_ / 100.0f;
        }
        if ((float)var1 >= var2) return 0;
    }
    int var4 = func_ov024_021e8fa4((Struct_ov024_021e2bd0_2*)arg0, arg2, arg3->unknown_32_);
    if (!var4) return 0;
    Struct_ov024_021e2bd0_6 var5;
    var5.unknown1_0_ = 0;
    var5.unknown_4_ = 0;
    func_ov000_02159eac(arg0->unknown_10_, &var5, (unsigned char)var4);
    if (!func_02088418((Struct_02088418*)var0->currentStats_, (unsigned char)arg3->unknown_32_, (unsigned short)arg3->unknown_4_0_)) return 0;
    if (func_ov024_021eb4b0((int)arg0, ((Struct_ov024_021e2bd0_4*)var0->currentStats_)->unknown_14_, 0x80000)) {
        if (var4 == 0x12 || var4 == 0x15 || var4 == 0x1b || var4 == 0x1c)
            func_ov000_02159eac(arg0->unknown_10_, &var5, 0x2b);
    }
    int var6 = func_ov024_021dd260((Struct_ov024_021dd028_5*)var0);
    int var7 = func_ov024_021da998((Struct_ov024_021da670_6*)var0);
    func_02088474(var0->currentStats_, (unsigned char)arg3->unknown_32_, (unsigned short)arg3->unknown_4_0_);
    if (arg3->unknown_18_5_ != 10) {
        int var8 = 0;
        switch (arg3->unknown_32_) {
        case 2: var8 = 0x150; break;
        case 5: var8 = 0x5e; break;
        }
        void* var9 = func_ov024_021e8ca0((Struct_ov024_021e2bd0*)arg0, var8);
        if (var9) func_ov000_0215cd44(arg0->unknown_10_, var9, var0, 0, 0, 0, 0);
    }
    if (var7) {
        func_ov024_021e8cfc(arg0, var0, 0, 0);
    } else if (var6) {
        if (!func_ov024_021dd260((Struct_ov024_021dd028_5*)var0))
            func_ov024_021e8cfc(arg0, var0, 8, 0);
    }
    return var5.unknown_0_;
}
