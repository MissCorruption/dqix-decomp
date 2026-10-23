#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_0208830c(unsigned char* arg0);
extern "C" void func_02088338(unsigned char* arg0);
struct Struct_ov024_021dbd84_6;
extern "C" int func_ov024_021e929c(struct Struct_ov024_021dbd84_6* arg0, int arg1, int arg2);
struct Struct_ov024_021da670_6;
extern "C" int func_ov024_021da998(struct Struct_ov024_021da670_6* arg0);
extern "C" int func_ov024_021eb4b0(int arg0, int arg1, int arg2);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" void* func_ov024_021e8cfc(void* arg0, void* arg1, int arg2, int arg3);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov024_021e8bf0(void* arg0, void* arg1, unsigned short* arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);

struct Struct_ov024_021dbd84_7 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};
struct Struct_ov024_021dbd84 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021dbd84_2 {
    char unknown_0_[0xc];
    void* unknown_c_;
    void* unknown_10_;
    int unknown_14_;
    char unknown_18_[0x75 - 0x18];
    unsigned char unknown_75_;
};
struct Struct_ov024_021dbd84_3 { unsigned int unknown_0_0_ : 12; unsigned int unknown_1_4_ : 20; };
struct Struct_ov024_021dbd84_4 {
    char unknown_0_[4];
    struct Struct_ov024_021dbd84_3 unknown_4_;
    char unknown_8_[0x20 - 8];
    struct Struct_ov024_021dbd84_7 unknown_20_;
    struct Struct_ov024_021dbd84_7 unknown_24_;
};
struct Struct_ov024_021dbd84_5 { char unknown_0_[0x14]; int unknown_14_; };

// USA: func_ov024_021dbd84
extern "C" ARM void* func_ov024_021dbd84(struct Struct_ov024_021dbd84_2* arg0, int arg1, int arg2, struct Struct_ov024_021dbd84_4* arg3, int arg4, int arg5, unsigned char arg6) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    int var1 = 0;
    union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var2;
    int var3 = func_0208830c((unsigned char*)var0->currentStats_);
    if (var3 && arg6) var1 = 1;
    var2.unknown_0_ = 0;
    var2.unknown_4_ = 0;
    unsigned short var4 = func_ov024_021e929c((struct Struct_ov024_021dbd84_6*)arg0, arg2, var1);
    int var5 = func_ov024_021da998((struct Struct_ov024_021da670_6*)var0);
    if (var1) {
        if (arg3->unknown_4_.unknown_0_0_ == 0x233) var4 = arg3->unknown_20_.unknown_2_4_;
        if (func_ov024_021eb4b0((int)arg0, ((struct Struct_ov024_021dbd84_5*)var0->currentStats_)->unknown_14_, 0x10)) {
            func_ov000_02159eac(arg0->unknown_10_, &var2, 0x2b);
        }
        func_02088338((unsigned char*)var0->currentStats_);
        func_ov000_02159eac(arg0->unknown_10_, &var2, 0xe);
        arg0->unknown_14_++;
        if (var5) func_ov024_021e8cfc(arg0, var0, 0, 0);
    } else {
        arg0->unknown_75_ = 0;
    }
    void* var6 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var6) return 0;
    func_ov024_021e8bf0(arg0, arg0->unknown_c_, &var4);
    func_ov000_0215a88c(arg0->unknown_10_, var6, var4);
    struct Struct_ov024_021dbd84* var7 = (struct Struct_ov024_021dbd84*)((char*)arg0->unknown_c_ + 0x1c);
    func_ov000_0215cd44(arg0->unknown_10_, var6, var0, 0, var2.unknown1_0_, var7->unknown_0_7_ != 0);
    return var6;
}
