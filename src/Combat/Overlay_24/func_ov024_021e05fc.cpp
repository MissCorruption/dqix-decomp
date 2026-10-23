#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_02088f68;

struct Struct_ov024_021e05fc {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_ov024_021e05fc_2 {
    char unknown_0_[0x24];
    struct Struct_ov024_021e05fc unknown_24_;
};

struct Struct_ov024_021e05fc_3 {
    char unknown_0_[0xc];
    int unknown_c_;
};

struct Struct_ov024_021e05fc_4 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };

struct Struct_ov024_021e05fc_5 {
    char unknown_0_[0xc];
    void* unknown_c_;
    void* unknown_10_;
};

extern "C" signed char func_ov000_02159e60(void* arg0, int arg1);
extern "C" void func_ov000_021554f4(void* arg0, int arg1, int arg2, struct Struct_ov024_021e05fc_2* arg3, int arg4, int arg5);
extern "C" void func_02088f68(struct Struct_02088f68* arg0);
extern "C" void func_ov000_02159eac(void* arg0, unsigned long long* arg1, int arg2);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, GameObject* arg2, int arg3, unsigned long long arg4, int arg5);

// USA: func_ov024_021e05fc
extern "C" ARM void* func_ov024_021e05fc(struct Struct_ov024_021e05fc_5* arg0, int arg1, int arg2, struct Struct_ov024_021e05fc_2* arg3) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    GameState::GetInstance();
    int var1 = func_ov000_02159e60(arg0->unknown_10_, arg2);
    int var2 = func_ov000_02159e60(arg0->unknown_10_, arg1);
    int var3 = 0;
    if (var2 > var1) {
        if (var2 - var1 >= 7) var3 = 1;
    }
    struct Struct_ov024_021e05fc_3* var4 = *(struct Struct_ov024_021e05fc_3**)((char*)arg0->unknown_10_ + 0x8e18);
    if (var4) {
        if (var4->unknown_c_ >= 0) var3 = 0;
    }
    int var5 = *(unsigned char*)((char*)var0->currentStats_ + 0x48);
    unsigned short var6 = 0;
    unsigned long long var7 = 0;
    if (var5 >= 1 && var3) {
        GameObject* var8 = GetCombatantByID((int)arg0->unknown_10_, arg2);
        if (var8) {
            var6 = arg3->unknown_24_.unknown_0_0_;
            func_ov000_021554f4(arg0->unknown_10_, arg2, arg1, arg3, 0, 4);
            var8->currentStats_->primaryStats.currHP = 0;
            func_02088f68((struct Struct_02088f68*)var8->currentStats_);
            func_ov000_02159eac(arg0->unknown_10_, &var7, 0x24);
            ((unsigned char*)arg0->unknown_10_)[0x8e15]++;
        }
    } else {
        var6 = arg3->unknown_24_.unknown_2_4_;
    }
    void* var9 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var9) return 0;
    func_ov000_0215a88c(arg0->unknown_10_, var9, var6);
    struct Struct_ov024_021e05fc_4* var10 = (struct Struct_ov024_021e05fc_4*)((char*)arg0->unknown_c_ + 0x1c);
    func_ov000_0215cd44(arg0->unknown_10_, var9, var0, 0, var7, var10->unknown_0_7_ != 0);
    return var9;
}
