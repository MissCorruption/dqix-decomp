#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/CombatantRecovery.h"

struct Struct_0202c1a4;
struct Struct_ov017_021c9f18 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned char unknown_4_0_ : 3;
    unsigned char unknown_4_3_ : 1;
    unsigned char unknown_4_4_ : 1;
    unsigned char unknown_4_5_ : 1;
    unsigned char unknown_4_6_ : 2;
    unsigned char unknown_5_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned short unknown_e_;
    unsigned int unknown_10_;
};
struct Struct_ov017_021c9f18_2 {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_;
};
extern "C" void* func_02053c6c(unsigned char*);
extern "C" void func_02083e28(void*, int);
extern "C" unsigned short func_ov017_021b8480(void*);
extern "C" void func_02054224(void*);
extern "C" void func_02054234(void*);
extern "C" void func_ov017_0218b5f8(int);
extern "C" void func_02026f08(unsigned char*, int, int);
extern "C" void func_02026f20(int, int);
extern "C" int func_020546a8(void*);
extern "C" int func_020100b0(GameState*);
extern "C" signed char func_0202c1a4(Struct_0202c1a4*);
extern "C" void func_ov017_021907dc(int, int, int, int, int);
extern "C" void func_ov017_02191108(void*, int, int, int, int);

// USA: func_ov017_021c9f18
extern "C" ARM void func_ov017_021c9f18(void* arg0, const Struct_ov017_021c9f18* arg1, GameState* arg2, GameResources* arg3, Struct_0202c1a4* arg4) {
    int var0;
    Struct_020236dc_2* var1;
    int var2;
    int var3;
    int var4 = arg1->unknown_4_0_;
    int var5 = var4 >= 0 && var4 <= 3;
    if (var5 == 0) return;
    var1 = static_cast<Struct_020236dc_2*>(arg2->GetPartyMemberByIndex(var4));
    if (var1 == NULL) return;
    void* var6 = func_02053c6c((unsigned char*)var1);
    if (var6 == NULL) return;
    var2 = 0;
    int var7 = var1->unknown_ac_.unknown_84_->unknown_0_ & 1;
    if ((var7 != 0 && (arg1->unknown_10_ & 1) == 0) || (var7 == 0 && (arg1->unknown_10_ & 1) != 0)) var2 = 1;
    unsigned short var8 = var1->unknown_ac_.unknown_84_->unknown_4_;
    unsigned short var9 = var1->unknown_ac_.unknown_84_->unknown_6_;
    var1->unknown_ac_.unknown_84_->unknown_4_ = arg1->unknown_6_;
    var1->unknown_ac_.unknown_84_->unknown_6_ = arg1->unknown_a_;
    var1->baseStats_->primaryStats.maxHP = arg1->unknown_8_;
    var1->baseStats_->primaryStats.maxMP = arg1->unknown_c_;
    var1->unknown_ac_.unknown_84_->unknown_0_ = arg1->unknown_10_ & 0xffff;
    var1->unknown_ac_.unknown_84_->unknown_8_ = arg1->unknown_5_;
    if (arg1->unknown_4_4_ != 0) func_02083e28(var6, 0);
    Struct_ov017_021c9f18_2* var10 = static_cast<Struct_ov017_021c9f18_2*>(arg3->unknown_ptr_3718);
    var3 = 1;
    if (var10->unknown_2_ != 0 && func_ov017_021b8480(var10) == 0) var3 = 0;
    if (arg1->unknown_4_3_ != 0) {
        if (var3 != 0) {
            if (arg1->unknown_6_ == 0) var1->unknown_18c_ |= 1;
            else var1->unknown_18c_ &= ~1;
        } else {
            if (arg1->unknown_6_ == 0) func_02054224(var1);
            else func_02054234(var1);
        }
    }
    if (arg1->unknown_4_5_ != 0) func_ov017_0218b5f8(-1);
    Struct_02020554* var11 = arg3->unknown_ptr_36d0;
    if (var11 != NULL) {
        func_02026f08((unsigned char*)var11, (unsigned char)var4, arg1->unknown_4_5_);
        if (arg1->unknown_4_5_ != 0 && (var8 != arg1->unknown_6_ || var9 != arg1->unknown_a_)) func_02026f20((int)var11, var4 & 0xff);
    }
    if (var2 == 0) return;
    var0 = var4;
    if ((var1->obj3D_.unknown_0_ & 0x1000) != 0) var0 = func_020546a8(var1);
    func_020100b0(arg2);
    if (var0 != func_0202c1a4(arg4)) func_ov017_021907dc((int)arg3, var0, 1, 1, 1);
    else func_ov017_02191108(arg3, 1, 1, 1, 1);
}
