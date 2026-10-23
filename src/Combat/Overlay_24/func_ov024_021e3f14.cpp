#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov000_021584e8;
struct Struct_ov024_021e3f14_3 { int unknown_0_; int unknown_4_; };

struct Struct_ov024_021e04e0;
struct Struct_ov024_021da670_6;
struct Struct_ov024_021dd028_5;
extern "C" int func_ov024_021e05e4(struct Struct_ov024_021e04e0* arg0);
extern "C" int func_ov024_021da998(struct Struct_ov024_021da670_6* arg0);
extern "C" int func_ov024_021dd260(struct Struct_ov024_021dd028_5* arg0);
extern "C" void func_020488cc(unsigned char* arg0, int arg1);
extern "C" void func_02088e64(unsigned char* arg0);
extern "C" void func_02087704(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215ffc4(void* arg0, void* arg1, int arg2);
extern "C" struct Struct_ov000_021584e8* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_02159eac(void* arg0, struct Struct_ov024_021e3f14_3* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, struct Struct_ov000_021584e8* arg1, GameObject* arg2, int arg3,
    struct Struct_ov024_021e3f14_3 arg4, int arg5);

struct Struct_ov024_021e3f14 { char unknown_0_[0x24]; unsigned char unknown_24_; };
struct Struct_ov024_021e3f14_2 {
    char unknown_0_[0xc];
    void* unknown_c_;
    void* unknown_10_;
};

static inline int inline_ov024_021ddf5c(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov024_021e3f14
extern "C" ARM unsigned long long func_ov024_021e3f14(struct Struct_ov024_021e3f14_2* arg0, int arg1, int arg2, int arg3, int arg4) {
    if (arg4 <= 0) return 0;
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    struct Struct_ov000_021584e8* var1 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var1) return 0;
    int var2 = 0;
    if (func_ov024_021e05e4((struct Struct_ov024_021e04e0*)var0)) {
        if (!inline_ov024_021ddf5c(arg2)) func_020488cc((unsigned char*)var0, 1);
        func_02088e64((unsigned char*)var0->currentStats_);
        func_ov000_0215a88c(arg0->unknown_10_, var1, 0x164);
        var2 = 1;
    }
    struct Struct_ov024_021e3f14_3 var3;
    var3.unknown_0_ = 0;
    var3.unknown_4_ = 0;
    if (func_ov024_021da998((struct Struct_ov024_021da670_6*)var0) || func_ov024_021dd260((struct Struct_ov024_021dd028_5*)var0)) {
        func_02087704(var0->currentStats_);
        int var4 = 0;
        unsigned char var5 = ((struct Struct_ov024_021e3f14*)var0->currentStats_)->unknown_24_;
        switch (var5) {
        case 0: var4 = 0x17f; break;
        case 1: var4 = 0x180; break;
        case 2: var4 = 0x181; break;
        case 3: var4 = 0x259; break;
        }
        if (var5 == 3) func_ov000_02159eac(arg0->unknown_10_, &var3, 8);
        func_ov000_0215a88c(arg0->unknown_10_, var1, var4);
        var2 = 1;
    }
    if (var2) {
        func_ov000_0215cd44(arg0->unknown_10_, var1, var0, 0, var3, 0);
        func_ov000_0215ffc4(arg0->unknown_c_, var1, 1);
        ((unsigned char*)arg0->unknown_10_)[0x8e02]++;
    }
    return 0;
}
