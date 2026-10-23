#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_02087b3c;
extern "C" int func_02087b3c(struct Struct_02087b3c* arg0, int arg1);
struct Struct_02087b90;
extern "C" int func_02087b90(struct Struct_02087b90* arg0, int arg1);
void UpdateCombatantMagicalMight(int unused, int combatantId);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);

struct Struct_ov024_021df284 {
    char unknown_0_[0x24];
    unsigned int : 10;
    unsigned int unknown_25_2_ : 10;
    unsigned int unknown_26_4_ : 10;
    unsigned int : 2;
    char unknown_28_[0x8];
    short unknown_30_;
};
struct Struct_ov024_021df284_2 { char unknown_0_[0x1c]; unsigned char unknown_1c_0_ : 7; unsigned char unknown_1c_7_ : 1; };
struct Struct_ov024_021df284_3 {
    char unknown_0_[0xc];
    struct Struct_ov024_021df284_2* unknown_c_;
    void* unknown_10_;
    int unknown_14_;
};

extern "C" unsigned long long func_ov024_021e4b14(struct Struct_ov024_021df284_3* arg0, short arg1, int arg2, struct Struct_ov024_021df284* arg3, int arg4);
extern "C" int func_ov024_021e9904(struct Struct_ov024_021df284_3* arg0, int arg1, struct Struct_ov024_021df284* arg2, unsigned char arg3, signed char arg4);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov024_021e8bf0(struct Struct_ov024_021df284_3* arg0, struct Struct_ov024_021df284_2* arg1, unsigned short* arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

// USA: func_ov024_021df284
extern "C" ARM void* func_ov024_021df284(struct Struct_ov024_021df284_3* arg0, short arg1, int arg2, struct Struct_ov024_021df284* arg3, int arg4, int arg5, unsigned char arg6) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    bool var1 = false;
    int var2 = 0;
    unsigned long long var3 = 0;
    unsigned short var4 = 0;
    if (arg6 != 0) {
        var3 = func_ov024_021e4b14(arg0, arg1, arg2, arg3, 1);
        int var5 = arg3->unknown_30_;
        if (var5 < -2) var5 = -2;
        if (var5 > 2) var5 = 2;
        if (var5 < 0) var2 = 1;
        if (func_02087b3c((struct Struct_02087b3c*)var0->currentStats_, (unsigned char)var2)) {
            int var6 = func_02087b90((struct Struct_02087b90*)var0->currentStats_, (signed char)var5);
            UpdateCombatantMagicalMight((int)arg0->unknown_10_, arg2);
            var1 = true;
            var4 = func_ov024_021e9904(arg0, arg2, arg3, var2, (signed char)var6);
            arg0->unknown_14_++;
        }
    }
    if (!var1 && var3 == 0) {
        var4 = func_ov024_021da644(arg2, arg3->unknown_25_2_, arg3->unknown_26_4_);
    }
    if (var3 != 0 && !var1) {
        var4 = 0;
    }
    void* var7 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var7) return 0;
    func_ov024_021e8bf0(arg0, arg0->unknown_c_, &var4);
    func_ov000_0215a88c(arg0->unknown_10_, var7, var4);
    func_ov000_0215cd44(arg0->unknown_10_, var7, var0, 0, 0, 0, arg0->unknown_c_->unknown_1c_7_ != 0);
    return var7;
}
