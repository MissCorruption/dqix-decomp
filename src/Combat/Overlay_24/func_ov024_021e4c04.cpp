#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov024_021e4c04_336 = 0x144 };
#else
enum { Enum_ov024_021e4c04_336 = 0x150 };
#endif

#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_ov024_021e4c04_3 {
    unsigned char unknown_0_[0x8e02];
    unsigned char unknown_8e02_;
};
struct Struct_ov024_021e4c04_4 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x18 - 0x8];
    unsigned char unknown_18_;
    unsigned char unknown_19_;
    char unknown_1a_[0x1c - 0x1a];
    unsigned char unknown_1c_0_ : 7;
    unsigned char unknown_1c_7_ : 1;
};
struct Struct_ov024_021e4c04_5 {
    char unknown_0_[0xc];
    Struct_ov024_021e4c04_4* unknown_c_;
    Struct_ov024_021e4c04_3* unknown_10_;
};
struct Struct_ov024_021e4c04_6 {
    char unknown_0_[0x10];
    unsigned int unknown_10_;
};
struct Struct_ov024_021e4c04_7 {
    unsigned short unknown_0_;
    char unknown_2_[0x22 - 0x2];
    unsigned short unknown_22_0_ : 2;
    unsigned short unknown_22_2_ : 4;
    unsigned short unknown_22_6_ : 3;
    unsigned short unknown_23_1_ : 7;
    unsigned char unknown_24_;
    char unknown_25_[0x46 - 0x25];
    unsigned char unknown_46_;
    unsigned char unknown_47_;
    unsigned char unknown_48_;
    unsigned char unknown_49_;
    unsigned char unknown_4a_;
    unsigned char unknown_4b_;
    unsigned char unknown_4c_;
    unsigned char unknown_4d_;
    unsigned char unknown_4e_;
    unsigned char unknown_4f_;
    unsigned char unknown_50_;
};
struct Struct_ov024_021e4c04 {
    char unknown_0_[Enum_ov024_021e4c04_336];
    unsigned char* unknown_150_;
};
union Struct_ov024_021e4c04_2 { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; };

struct Struct_ov024_021da670_6;
struct Struct_ov024_021dd028_5;
struct Struct_ov024_021e4604;
struct Struct_ov024_021dced0_2;
struct Struct_02088418;
struct Struct_02087860;
struct Struct_ov024_021dbd84_6;
struct Struct_ov024_021dd828;
struct Struct_ov024_021dbaf4_4;
struct Struct_ov024_021ddc80_4;

extern "C" int func_020851ac(unsigned char*);
extern "C" int func_02085644(unsigned char*);
extern "C" int func_02085670(unsigned char*);
extern "C" int func_0208569c(unsigned char*);
extern "C" int func_020856c8(unsigned char*);
extern "C" int func_020856f4(unsigned char*);
extern "C" int func_02085720(unsigned char*);
extern "C" int func_02085768(unsigned char*);
extern "C" int func_02085794(unsigned char*);
extern "C" int func_020857c0(unsigned char*);
extern "C" int func_020857ec(unsigned char*);
extern "C" short func_ov024_021da998(Struct_ov024_021da670_6*);
extern "C" int func_ov024_021dd260(Struct_ov024_021dd028_5*);
extern "C" int func_ov024_021e47dc(Struct_ov024_021e4604*);
extern "C" int func_ov024_021dd010(Struct_ov024_021dced0_2*);
extern "C" void func_02087704(void*);
extern "C" void func_ov000_0215a88c(void*, void*, int);
extern "C" int func_02088840(unsigned char*);
extern "C" int func_0208830c(unsigned char*);
extern "C" int func_020883ac(unsigned char*);
extern "C" int func_02088540(unsigned char*);
extern "C" int func_0208824c(unsigned char*);
extern "C" void func_02088854(unsigned char*);
extern "C" void func_02088338(unsigned char*);
extern "C" void func_02088b34(unsigned char*);
extern "C" void func_020883cc(unsigned char*);
extern "C" void func_020888a4(unsigned char*);
extern "C" int func_02088418(Struct_02088418*, int, int);
extern "C" void func_02088474(void*, int, int);
extern "C" void func_02088560(unsigned char*);
extern "C" void func_0208826c(unsigned char*);
extern "C" int func_0208776c(void*, int);
extern "C" int func_02087860(Struct_02087860*, unsigned char);
void UpdateCombatantAttack(int, int);
void UpdateCombatantDefense(int, int);
extern "C" int func_ov024_021e929c(Struct_ov024_021dbd84_6*, int, int);
extern "C" int func_ov024_021e9320(Struct_ov024_021dd828*, int, int);
extern "C" int func_ov024_021e939c(Struct_ov024_021dbaf4_4*, int, int, int);
extern "C" int func_ov024_021e9464(Struct_ov024_021ddc80_4*, int, int);
extern "C" void func_ov000_0215ffc4(void*, void*, int);
struct Struct_ov024_021da9e0_4;
extern "C" void func_ov024_021eb4e4(Struct_ov024_021da9e0_4*, int);
extern "C" void* func_ov000_0215e958(void*);
extern "C" void func_ov000_02159eac(void*, void*, int);
extern "C" int func_ov000_02156068(void*, int, int, int);
extern "C" void func_ov000_0215a004(void*, int, int, int, void*, Struct_ov024_021e4c04_6*, int, int);
extern "C" void func_ov000_0215cd44(void*, void*, GameObject*, int, unsigned long long, int);
extern "C" int func_ov024_021e9198(Struct_ov024_021e4c04_5*, int, int, int);
extern "C" int func_020877c0(void*, int);
extern "C" int func_020878b4(void*, int);
extern "C" int func_ov024_021e94c4(Struct_ov024_021e4c04_5*, int, Struct_ov024_021e4c04_6*, int, signed char, unsigned char, unsigned char);
extern "C" int func_ov024_021e95d4(Struct_ov024_021e4c04_5*, int, Struct_ov024_021e4c04_6*, int, signed char, unsigned char, unsigned char);

static inline int inline_ov000_02169850(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

static inline Struct_ov024_021e4c04_7* inline_ov000_0215a908_5(GameObject* arg0) {
    return (Struct_ov024_021e4c04_7*)arg0->currentStats_;
}

static inline unsigned short inline_ov000_0215a908_2(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return inline_ov000_0215a908_5(arg0)->unknown_0_; }

// USA: func_ov024_021e4c04
extern "C" ARM void func_ov024_021e4c04(Struct_ov024_021e4c04_5* arg0, int arg1, int arg2, Struct_ov024_021e4c04_6* arg3, int arg4) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var1) return;
    void* var2 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var2) return;
    short var3;
    float var4;
    int var5;
    int var6 = 0;
    int var7 = 0;
    Struct_ov024_021e4c04_2 var8;
    var8.unknown_0_ = 0;
    var8.unknown_4_ = 0;
    var3 = 0;
    int var9 = NextRandomMax((Random*)arg0->unknown_10_, 100);
    if (arg3->unknown_10_ & 0x80000) {
        if (!inline_ov000_02169850(arg1)) return;
        Struct_ov024_021e4c04* var10 = (Struct_ov024_021e4c04*)func_0200ff1c(var0, arg1);
        if (!var10) return;

        if (func_020851ac(var10->unknown_150_)
            && (func_ov024_021da998((Struct_ov024_021da670_6*)var1) || func_ov024_021dd260((Struct_ov024_021dd028_5*)var1))) {
            func_02087704(var1->currentStats_);
            var5 = inline_ov000_0215a908_5(var1)->unknown_24_;
            switch (var5) {
            case 0: var7 = 0x17f; break;
            case 1: var7 = 0x180; break;
            case 2: var7 = 0x181; break;
            case 3: var7 = 0x259; break;
            }
            func_ov000_02159eac(arg0->unknown_10_, &var8, 0x1d);
            if (var5 == 3) func_ov000_02159eac(arg0->unknown_10_, &var8, 8);
            func_ov000_0215a88c(arg0->unknown_10_, var2, var7);
            var6 = 1;
        }

        if (func_02085644(var10->unknown_150_)
            && func_02088840((unsigned char*)var1->currentStats_)
            && (int)inline_ov000_0215a908_5(var1)->unknown_46_ > 0) {
            if ((float)var9 < (arg0->unknown_c_->unknown_1c_7_ ? 100.0f : 20.0f)) {
                int var11 = func_ov024_021e9198(arg0, arg2, 1, 1);
                if (!var11) var11 = 0x25;
                func_ov000_0215a88c(arg0->unknown_10_, var2, var11);
                var6 = 1;
                func_02088854((unsigned char*)var1->currentStats_);
                inline_ov000_0215a908_5(var1)->unknown_22_6_ = 1;
            }
        }

        if (func_02085670(var10->unknown_150_)
            && func_0208830c((unsigned char*)var1->currentStats_)
            && (int)inline_ov000_0215a908_5(var1)->unknown_47_ > 0) {
            if ((float)var9 < (arg0->unknown_c_->unknown_1c_7_ ? 100.0f : 20.5f)) {
                var3 = func_ov024_021da998((Struct_ov024_021da670_6*)var1);
                int var12 = func_ov024_021e929c((Struct_ov024_021dbd84_6*)arg0, arg2, 1);
                func_ov000_0215a88c(arg0->unknown_10_, var2, var12);
                var6 = 1;
                func_02088338((unsigned char*)var1->currentStats_);
            }
        }

        if (func_0208569c(var10->unknown_150_)) {
            var4 = 10.5f;
            if (func_ov000_02156068(arg0->unknown_10_, arg2, 0, 1) == 0 && inline_ov000_0215a908_5(var1)->unknown_48_ == 0) var4 = 0.0f;
            if ((float)var9 < var4) {
                GameObject* var13 = GetCombatantByID((int)arg0->unknown_10_, arg2);
                if (func_ov024_021e47dc((Struct_ov024_021e4604*)var13)) {
                    func_ov000_02159eac(arg0->unknown_10_, &var8, 0x29);
                    func_02088b34((unsigned char*)var13->currentStats_);
                    func_ov000_0215a004(arg0->unknown_10_, arg1, arg2, inline_ov000_0215a908_2(var13) - 1, &var8, arg3, arg0->unknown_c_->unknown_1c_7_ != 0, 0);
                    func_ov000_0215a88c(arg0->unknown_10_, var2, 200);
                } else {
                    func_ov000_0215a004(arg0->unknown_10_, arg1, arg2, 0xffff, &var8, arg3, arg0->unknown_c_->unknown_1c_7_ != 0, 8);
                    var8.unknown_0_ = 0;
                    var8.unknown_4_ = 0;
                    func_ov000_02159eac(arg0->unknown_10_, &var8, 0xd);
                    func_ov000_0215a88c(arg0->unknown_10_, var2, 0x257);
                }
                arg0->unknown_c_->unknown_0_ = 0;
                arg0->unknown_c_->unknown_18_ = 0;
                arg0->unknown_c_->unknown_4_ = 0;
                arg0->unknown_c_->unknown_19_ = 0;
                var6 = 1;
            }
        }

        if (func_020856c8(var10->unknown_150_)
            && func_020883ac((unsigned char*)var1->currentStats_)
            && inline_ov000_0215a908_5(var1)->unknown_4a_ != 0) {
            if ((float)var9 < (arg0->unknown_c_->unknown_1c_7_ ? 100.0f : 10.5f)) {
                int var14 = func_ov024_021e9320((Struct_ov024_021dd828*)arg0, arg2, 1);
                func_ov000_0215a88c(arg0->unknown_10_, var2, var14);
                var6 = 1;
                func_020883cc((unsigned char*)var1->currentStats_);
            }
        }

        if (func_020856f4(var10->unknown_150_)
            && func_ov024_021dd010((Struct_ov024_021dced0_2*)var1)
            && inline_ov000_0215a908_5(var1)->unknown_4b_ != 0) {
            if ((float)var9 < (arg0->unknown_c_->unknown_1c_7_ ? 100.0f : 25.0f)) {
                int var15 = 0x18;
                if (func_ov024_021dd010((Struct_ov024_021dced0_2*)var1)) var15 = 0x1a;
                func_ov000_0215a88c(arg0->unknown_10_, var2, var15);
                var6 = 1;
                func_020888a4((unsigned char*)var1->currentStats_);
            }
        }

        if (func_02085720(var10->unknown_150_)
            && func_02088418((Struct_02088418*)var1->currentStats_, 5, 0)
            && inline_ov000_0215a908_5(var1)->unknown_4c_ != 0) {
            if ((float)var9 < (arg0->unknown_c_->unknown_1c_7_ ? 100.0f : 12.5f)) {
                var3 = func_ov024_021da998((Struct_ov024_021da670_6*)var1);
                int var16 = 0x5e;
                if (inline_ov000_0215a908_5(var1)->unknown_22_2_ == 5) var16 = 0x60;
                func_ov000_0215a88c(arg0->unknown_10_, var2, var16);
                var6 = 1;
                func_02088474(var1->currentStats_, 5, 0);
            }
        }

        if (func_02085768(var10->unknown_150_)
            && func_02088540((unsigned char*)var1->currentStats_)
            && inline_ov000_0215a908_5(var1)->unknown_4d_ != 0) {
            if ((float)var9 < (arg0->unknown_c_->unknown_1c_7_ ? 100.0f : 12.5f)) {
                int var17 = func_ov024_021e939c((Struct_ov024_021dbaf4_4*)arg0, arg2, 1, 1);
                func_ov000_0215a88c(arg0->unknown_10_, var2, var17);
                var6 = 1;
                func_02088560((unsigned char*)var1->currentStats_);
            }
        }

        if (func_02085794(var10->unknown_150_)
            && func_0208824c((unsigned char*)var1->currentStats_)
            && inline_ov000_0215a908_5(var1)->unknown_4e_ != 0) {
            if ((float)var9 < (arg0->unknown_c_->unknown_1c_7_ ? 100.0f : 10.0f)) {
                var3 = func_ov024_021da998((Struct_ov024_021da670_6*)var1);
                int var18 = func_ov024_021e9464((Struct_ov024_021ddc80_4*)arg0, arg2, 1);
                func_ov000_0215a88c(arg0->unknown_10_, var2, var18);
                var6 = 1;
                func_0208826c((unsigned char*)var1->currentStats_);
            }
        }

        if (func_020857c0(var10->unknown_150_)
            && func_0208776c(var1->currentStats_, 1)
            && inline_ov000_0215a908_5(var1)->unknown_4f_ != 0) {
            var4 = 20.0f;
            if ((float)var9 < var4) {
                int var19 = func_020877c0(var1->currentStats_, -1);
                UpdateCombatantAttack((int)arg0->unknown_10_, arg2);
                int var20 = func_ov024_021e94c4(arg0, arg2, arg3, 1, (signed char)var19, 1, 1);
                func_ov000_0215a88c(arg0->unknown_10_, var2, var20);
                var6 = 1;
            }
        }

        if (func_020857ec(var10->unknown_150_)
            && func_02087860((Struct_02087860*)var1->currentStats_, 1)
            && inline_ov000_0215a908_5(var1)->unknown_50_ != 0) {
            var4 = 20.0f;
            if ((float)var9 < var4) {
                int var21 = func_020878b4(var1->currentStats_, -1);
                UpdateCombatantDefense((int)arg0->unknown_10_, arg2);
                int var22 = func_ov024_021e95d4(arg0, arg2, arg3, 1, (signed char)var21, 1, 1);
                func_ov000_0215a88c(arg0->unknown_10_, var2, var22);
                var6 = 1;
            }
        }
    }
    if (var6) {
        func_ov000_0215cd44(arg0->unknown_10_, var2, var1, 0, var8.unknown1_0_, 0);
        func_ov000_0215ffc4(arg0->unknown_c_, var2, 2);
        arg0->unknown_10_->unknown_8e02_++;
        func_ov024_021eb4e4((Struct_ov024_021da9e0_4*)arg0, (int)arg0->unknown_c_);
    }
    if (var3) {
        void* var23 = func_ov000_0215e958(arg0->unknown_10_);
        if (!var23) return;
        func_ov000_0215a88c(arg0->unknown_10_, var23, 0x25c);
        func_ov000_0215ffc4(arg0->unknown_c_, var23, 2);
        arg0->unknown_10_->unknown_8e02_++;
        func_ov000_0215cd44(arg0->unknown_10_, var23, var1, 0, 0, 0);
    }
}
