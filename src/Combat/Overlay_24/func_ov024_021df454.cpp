#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"

struct Struct_020885b4;
struct Struct_02088644;
struct Struct_02088514;
struct Struct_ov024_021df454_2;
struct Struct_ov024_021dced0_2;
struct Struct_ov024_021df454_7;
extern "C" int func_020885b4(Struct_020885b4*);
extern "C" void func_02088644(Struct_02088644*);
extern "C" int func_02088514(Struct_02088514*);
extern "C" void func_02088598(unsigned char*);
extern "C" int func_ov024_021df6ec(Struct_ov024_021df454_2*);
extern "C" int func_ov024_021dd010(Struct_ov024_021dced0_2*);
extern "C" int func_ov024_021df704(Struct_ov024_021df454_7*);
extern "C" void func_02088874(unsigned char*);
extern "C" void func_020888c4(unsigned char*);
extern "C" void func_02088d4c(unsigned char*);
extern "C" void func_02087838(void*);
extern "C" void func_0208792c(void*);
extern "C" void func_02087a20(void*);
extern "C" void func_02087b14(void*);
extern "C" void func_02087c08(void*);
extern "C" void func_02087cfc(void*);
extern "C" void func_02087df0(void*);
extern "C" void func_02087efc(unsigned char*);
extern "C" void func_02087ff0(void*);
extern "C" void func_020880e4(void*);
extern "C" int func_ov024_021da644(int, int, int);
void ApplyCombatantBuffs(int, int);
extern "C" void func_ov000_0215a88c(void*, void*, int);
extern "C" void* func_ov000_0215e958(void*);
extern "C" void func_ov000_0215cd44(void*, void*, GameObject*, int, int, int, int);

struct Struct_ov024_021df454 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 7;
    unsigned char unknown_1c_7_ : 1;
};
struct Struct_ov024_021df454_3 {
    char unknown_0_[0xc];
    Struct_ov024_021df454* unknown_c_;
    void* unknown_10_;
};
struct Struct_ov024_021df454_4 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};
struct Struct_ov024_021df454_5 {
    char unknown_0_[0x20];
    Struct_ov024_021df454_4 unknown_20_;
    Struct_ov024_021df454_4 unknown_24_;
};
struct Struct_ov024_021df454_6 {
    char unknown_0_[0x58];
    unsigned int unknown_58_0_ : 21;
    int unknown_5a_5_ : 3;
    int unknown_5b_0_ : 3;
    int unknown_5b_3_ : 3;
};

// USA: func_ov024_021df454
extern "C" ARM void* func_ov024_021df454(Struct_ov024_021df454_3* arg0, int arg1, int arg2, Struct_ov024_021df454_5* arg3) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    int var1 = 0;
    if (func_020885b4((Struct_020885b4*)var0->currentStats_)) {
        func_02088644((Struct_02088644*)var0->currentStats_);
        ++var1;
    }
    if (func_02088514((Struct_02088514*)var0->currentStats_)) {
        func_02088598((unsigned char*)var0->currentStats_);
        ++var1;
    }
    if (func_ov024_021df6ec((Struct_ov024_021df454_2*)var0)) {
        func_02088874((unsigned char*)var0->currentStats_);
        ++var1;
    }
    if (func_ov024_021dd010((Struct_ov024_021dced0_2*)var0)) {
        func_020888c4((unsigned char*)var0->currentStats_);
        ++var1;
    }
    if (func_ov024_021df704((Struct_ov024_021df454_7*)var0)) {
        func_02088d4c((unsigned char*)var0->currentStats_);
        ++var1;
    }
    if (var0->currentStats_->attackBuff < 0) {
        func_02087838(var0->currentStats_);
        ++var1;
    }
    if (var0->currentStats_->defenseBuff < 0) {
        func_0208792c(var0->currentStats_);
        ++var1;
    }
    if (var0->currentStats_->agilityBuff < 0) {
        func_02087a20(var0->currentStats_);
        ++var1;
    }
    if (var0->currentStats_->charmBuff < 0) {
        func_02087b14(var0->currentStats_);
        ++var1;
    }
    if (var0->currentStats_->magicalMightBuff < 0) {
        func_02087c08(var0->currentStats_);
        ++var1;
    }
    if (var0->currentStats_->magicalMendingBuff < 0) {
        func_02087cfc(var0->currentStats_);
        ++var1;
    }
    if (var0->currentStats_->unknown_5a_2_ < 0) {
        func_02087df0(var0->currentStats_);
        ++var1;
    }
    if (((Struct_ov024_021df454_6*)var0->currentStats_)->unknown_5a_5_ < 0) {
        func_02087efc((unsigned char*)var0->currentStats_);
        ++var1;
    }
    if (((Struct_ov024_021df454_6*)var0->currentStats_)->unknown_5b_3_ < 0) {
        func_02087ff0(var0->currentStats_);
        ++var1;
    }
    if (((Struct_ov024_021df454_6*)var0->currentStats_)->unknown_5b_0_ < 0) {
        func_020880e4(var0->currentStats_);
        ++var1;
    }
    int var2;
    if (var1 > 0) var2 = func_ov024_021da644(arg2, arg3->unknown_20_.unknown_2_4_, arg3->unknown_24_.unknown_0_0_);
    else var2 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
    ApplyCombatantBuffs((int)arg0->unknown_10_, arg2);
    void* var3 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var3) return 0;
    func_ov000_0215a88c(arg0->unknown_10_, var3, (unsigned short)var2);
    func_ov000_0215cd44(arg0->unknown_10_, var3, var0, 0, 0, 0, arg0->unknown_c_->unknown_1c_7_ != 0);
    return var3;
}
