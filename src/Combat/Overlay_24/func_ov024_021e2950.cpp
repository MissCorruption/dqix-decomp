#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov000_021584e8;
struct Struct_ov024_021e2950_4 { int unknown_0_; int unknown_4_; };

struct Struct_ov024_021da670_7;
extern "C" int func_ov024_021da9b0(struct Struct_ov024_021da670_7* arg0);
extern "C" void func_020882dc(void* arg0);
struct Struct_020885b4;
extern "C" int func_020885b4(struct Struct_020885b4* arg0);
struct Struct_02088514;
extern "C" int func_02088514(struct Struct_02088514* arg0);
struct Struct_02088644;
extern "C" void func_02088644(struct Struct_02088644* arg0);
extern "C" short func_ov000_0215a16c(void* arg0, int arg1, int arg2, short* arg3);
extern "C" struct Struct_ov000_021584e8* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_02159eac(void* arg0, struct Struct_ov024_021e2950_4* arg1, int arg2);
extern "C" void func_ov000_0215ccbc(
    int arg0, struct Struct_ov000_021584e8* arg1, GameObject* arg2, short arg3, short arg4, short arg5,
    struct Struct_ov024_021e2950_4 arg6, unsigned char arg7);

struct Struct_ov024_021e2950 { char unknown_0_[0x1c]; unsigned char unknown_1c_0_ : 7; unsigned char unknown_1c_7_ : 1; };
struct Struct_ov024_021e2950_2 {
    char unknown_0_[0xc];
    struct Struct_ov024_021e2950* unknown_c_;
    void* unknown_10_;
    int unknown_14_;
};
struct Struct_ov024_021e2950_3 { unsigned char unknown_0_0_ : 1; unsigned char unknown_0_1_ : 7; };

static inline unsigned short inline_ov024_021dc700(GameObject* arg0) { return arg0->currentStats_->primaryStats.maxHP; }

extern "C" int func_020882f8(unsigned char*);
extern "C" void func_02088390(void*);
struct Struct_ov024_021de124;
extern "C" int func_ov024_021de25c(Struct_ov024_021de124*);
extern "C" void func_020883fc(void*);
// USA: func_ov024_021e2950
extern "C" ARM struct Struct_ov000_021584e8* func_ov024_021e2950(struct Struct_ov024_021e2950_2* arg0, int arg1, int arg2, int arg3, int arg4) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    struct Struct_ov000_021584e8* var1 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var1) return 0;
    struct Struct_ov024_021e2950_4 var2;
    var2.unknown_0_ = 0;
    var2.unknown_4_ = 0;
    short var3 = var0->currentStats_->primaryStats.currHP;
    short var4 = 0;
    unsigned short var5 = inline_ov024_021dc700(var0);
    if (var0->currentStats_->primaryStats.currHP < var5) {
        var3 = func_ov000_0215a16c(arg0->unknown_10_, arg2, arg4, &var4);
        func_ov000_02159eac(arg0->unknown_10_, &var2, 0x25);
        func_ov000_0215a88c(arg0->unknown_10_, var1, 0x16);
        arg0->unknown_14_++;
    }
    if (func_020882f8((unsigned char*)var0->currentStats_)) {
        func_02088390(var0->currentStats_);
        ((struct Struct_ov024_021e2950_3*)((char*)var0->currentStats_ + 0x3b))->unknown_0_0_ = 1;
        func_ov000_02159eac(arg0->unknown_10_, &var2, 0x10);
        func_ov000_0215a88c(arg0->unknown_10_, var1, 0x40);
        arg0->unknown_14_++;
    }
    if (func_ov024_021da9b0((struct Struct_ov024_021da670_7*)var0)) {
        func_020882dc(var0->currentStats_);
        ((struct Struct_ov024_021e2950_3*)((char*)var0->currentStats_ + 0x3b))->unknown_0_0_ = 1;
        func_ov000_02159eac(arg0->unknown_10_, &var2, 0x1a);
        func_ov000_0215a88c(arg0->unknown_10_, var1, 0x1f9);
        arg0->unknown_14_++;
    }
    if (func_ov024_021de25c((Struct_ov024_021de124*)var0)) {
        func_020883fc(var0->currentStats_);
        ((struct Struct_ov024_021e2950_3*)((char*)var0->currentStats_ + 0x3b))->unknown_0_0_ = 1;
        func_ov000_02159eac(arg0->unknown_10_, &var2, 0x19);
        func_ov000_0215a88c(arg0->unknown_10_, var1, 0x16f);
        arg0->unknown_14_++;
    }
    if (func_020885b4((struct Struct_020885b4*)var0->currentStats_) || func_02088514((struct Struct_02088514*)var0->currentStats_)) {
        func_02088644((struct Struct_02088644*)var0->currentStats_);
        func_ov000_02159eac(arg0->unknown_10_, &var2, 0x11);
        func_ov000_0215a88c(arg0->unknown_10_, var1, 0x54);
        arg0->unknown_14_++;
    }
    unsigned short var6 = var0->currentStats_->primaryStats.currMP;
    unsigned char var7;
    if (arg0->unknown_c_->unknown_1c_7_) var7 = 1; else var7 = 0;
    func_ov000_0215ccbc((int)arg0->unknown_10_, var1, var0, -var4,
        var3, var6, var2, var7);
    return var1;
}
