#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021dd534 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_ov024_021dd534_2 {
    char unknown_0_[0x20];
    struct Struct_ov024_021dd534 unknown_20_;
    struct Struct_ov024_021dd534 unknown_24_;
    char unknown_28_[8];
    short unknown_30_;
};

struct Struct_ov024_021dd534_3 { unsigned short unknown_0_0_ : 6; unsigned short unknown_0_6_ : 3; unsigned short unknown_1_1_ : 7; };

struct Struct_ov024_021dd534_4 {
    char unknown_0_[0x14];
    int unknown_14_;
    char unknown_18_[0xa];
    struct Struct_ov024_021dd534_3 unknown_22_;
};

struct Struct_ov024_021dd534_5 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };

struct Struct_ov024_021dd534_6 {
    char unknown_0_[0xc];
    void* unknown_c_;
    void* unknown_10_;
    char unknown_14_[0x61];
    unsigned char unknown_75_;
};

extern "C" int func_02088840(unsigned char* arg0);
extern "C" void func_02088854(unsigned char* arg0);
extern "C" int func_ov024_021e9198(struct Struct_ov024_021dd534_6* arg0, int arg1, short arg2, int arg3);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" int func_ov024_021eb4b0(int arg0, int arg1, int arg2);
extern "C" void func_ov000_02159eac(void* arg0, unsigned long long* arg1, int arg2);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov024_021e8bf0(struct Struct_ov024_021dd534_6* arg0, void* arg1, unsigned short* arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, GameObject* arg2, int arg3, unsigned long long arg4, int arg5);

// USA: func_ov024_021dd534
extern "C" ARM void* func_ov024_021dd534(struct Struct_ov024_021dd534_6* arg0, int arg1, int arg2, struct Struct_ov024_021dd534_2* arg3, int arg4, int arg5, unsigned char arg6) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    unsigned short var1 = 0;
    unsigned long long var2 = 0;
    int var3 = arg3->unknown_30_;
    if (func_02088840((unsigned char*)var0->currentStats_) && arg6) {
        var1 = func_ov024_021e9198(arg0, arg2, var3, 1);
        if (var1 == 0) {
            var1 = func_ov024_021da644(arg2, arg3->unknown_20_.unknown_2_4_, arg3->unknown_24_.unknown_0_0_);
        }
        if (func_ov024_021eb4b0((int)arg0, ((struct Struct_ov024_021dd534_4*)var0->currentStats_)->unknown_14_, 0x40)) {
            func_ov000_02159eac(arg0->unknown_10_, &var2, 0x2b);
        }
        func_02088854((unsigned char*)var0->currentStats_);
        ((struct Struct_ov024_021dd534_4*)var0->currentStats_)->unknown_22_.unknown_0_6_ = (unsigned char)var3;
    } else {
        var1 = func_ov024_021e9198(arg0, arg2, var3, 0);
        if (var1 == 0) {
            var1 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
        }
        arg0->unknown_75_ = 0;
    }
    void* var4 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var4) return 0;
    func_ov024_021e8bf0(arg0, arg0->unknown_c_, &var1);
    func_ov000_0215a88c(arg0->unknown_10_, var4, var1);
    struct Struct_ov024_021dd534_5* var5 = (struct Struct_ov024_021dd534_5*)((char*)arg0->unknown_c_ + 0x1c);
    func_ov000_0215cd44(arg0->unknown_10_, var4, var0, 0, var2, var5->unknown_0_7_ != 0);
    return var4;
}
