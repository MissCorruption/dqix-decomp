#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov000_021584e8;
struct Struct_ov024_021ddf5c_4 { int unknown_0_; int unknown_4_; };

extern "C" short func_ov000_0215a1d4(void* arg0, int arg1, int arg2, short* arg3);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" struct Struct_ov000_021584e8* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_02159eac(void* arg0, struct Struct_ov024_021ddf5c_4* arg1, int arg2);
extern "C" void func_ov000_0215ccbc(
    int arg0, struct Struct_ov000_021584e8* arg1, GameObject* arg2, short arg3, short arg4, short arg5,
    struct Struct_ov024_021ddf5c_4 arg6, unsigned char arg7);

struct Struct_ov024_021ddf5c_5 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};
struct Struct_ov024_021ddf5c_6 { unsigned int unknown_0_0_ : 12; unsigned int unknown_1_4_ : 20; };
struct Struct_ov024_021ddf5c { char unknown_0_[0x1c]; unsigned char unknown_1c_0_ : 7; unsigned char unknown_1c_7_ : 1; };
struct Struct_ov024_021ddf5c_2 {
    char unknown_0_[0xc];
    struct Struct_ov024_021ddf5c* unknown_c_;
    void* unknown_10_;
    int unknown_14_;
};
struct Struct_ov024_021ddf5c_3 {
    char unknown_0_[4];
    struct Struct_ov024_021ddf5c_6 unknown_4_;
    char unknown_8_[0x18];
    struct Struct_ov024_021ddf5c_5 unknown_20_;
    struct Struct_ov024_021ddf5c_5 unknown_24_;
};

static inline int inline_ov024_021ddf5c(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov024_021ddf5c
extern "C" ARM struct Struct_ov000_021584e8* func_ov024_021ddf5c(struct Struct_ov024_021ddf5c_2* arg0, int arg1, int arg2, struct Struct_ov024_021ddf5c_3* arg3, int arg4) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    unsigned short var1 = arg3->unknown_4_.unknown_0_0_;
    if (var1 == 0x19b || var1 == 0x22e) arg4 = var0->currentStats_->primaryStats.maxMP;
    short var2 = 0;
    short var3 = func_ov000_0215a1d4(arg0->unknown_10_, arg2, arg4, &var2);
    int var4 = 0;
    if (!inline_ov024_021ddf5c(arg2) && var0->currentStats_->primaryStats.currMP >= 0xff) var4 = 1;
    unsigned short var5;
    if (var2 > 0 || var4) {
        var5 = func_ov024_021da644(arg2, arg3->unknown_20_.unknown_2_4_, arg3->unknown_24_.unknown_0_0_);
        arg0->unknown_14_++;
    } else {
        var5 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
    }
    struct Struct_ov000_021584e8* var6 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var6) return 0;
    func_ov000_0215a88c(arg0->unknown_10_, var6, var5);
    struct Struct_ov024_021ddf5c_4 var7;
    var7.unknown_0_ = 0;
    var7.unknown_4_ = 0;
    func_ov000_02159eac(arg0->unknown_10_, &var7, 0x22);
    unsigned short var8 = var0->currentStats_->primaryStats.currHP;
    unsigned char var9;
    if (arg0->unknown_c_->unknown_1c_7_) var9 = 1; else var9 = 0;
    func_ov000_0215ccbc((int)arg0->unknown_10_, var6, var0, -var2, var8, var3, var7, var9);
    return var6;
}
