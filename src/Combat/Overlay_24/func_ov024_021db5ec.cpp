#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_0208776c(void* arg0, int arg1);
struct Struct_020877c0;
extern "C" int func_020877c0(struct Struct_020877c0* arg0, int arg1);
void UpdateCombatantAttack(int unused, int combatantId);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);

struct Struct_ov024_021db5ec {
    char unknown_0_[0x30];
    short unknown_30_;
};
struct Struct_ov024_021db5ec_2 { char unknown_0_[0x1c]; unsigned char unknown_1c_0_ : 7; unsigned char unknown_1c_7_ : 1; };
struct Struct_ov024_021db5ec_3 {
    char unknown_0_[0xc];
    struct Struct_ov024_021db5ec_2* unknown_c_;
    void* unknown_10_;
    char unknown_14_[0x72 - 0x14];
    unsigned char unknown_72_;
    char unknown_73_[2];
    unsigned char unknown_75_;
};

extern "C" unsigned long long func_ov024_021e4b14(struct Struct_ov024_021db5ec_3* arg0, short arg1, int arg2, struct Struct_ov024_021db5ec* arg3, int arg4);
extern "C" int func_ov024_021e94c4(struct Struct_ov024_021db5ec_3* arg0, int arg1, struct Struct_ov024_021db5ec* arg2, unsigned char arg3, signed char arg4, unsigned char arg5, unsigned char arg6);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov024_021e8bf0(struct Struct_ov024_021db5ec_3* arg0, struct Struct_ov024_021db5ec_2* arg1, unsigned short* arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, GameObject* arg2, int arg3, unsigned long long arg4, unsigned char arg5);

// USA: func_ov024_021db5ec
extern "C" ARM void* func_ov024_021db5ec(struct Struct_ov024_021db5ec_3* arg0, short arg1, int arg2, struct Struct_ov024_021db5ec* arg3, int arg4, int arg5, unsigned char arg6) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    unsigned long long var1 = 0;
    bool var2 = false;
    int var3 = 0;
    int var4 = arg3->unknown_30_;
    int var5 = 0;
    if (var4 < -2) var4 = -2;
    if (var4 > 2) var4 = 2;
    if (var4 < 0) var3 = 1;
    if (arg6 != 0) {
        var1 = func_ov024_021e4b14(arg0, arg1, arg2, arg3, 1);
        if (func_0208776c(var0->currentStats_, (unsigned char)var3)) {
            var5 = func_020877c0((struct Struct_020877c0*)var0->currentStats_, (signed char)var4);
            UpdateCombatantAttack((int)arg0->unknown_10_, arg2);
            var2 = true;
        } else {
            arg0->unknown_75_ = 0;
        }
    } else {
        arg0->unknown_75_ = 0;
    }
    void* var6 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var6) return 0;
    unsigned short var7 = func_ov024_021e94c4(arg0, arg2, arg3, var3, (signed char)var5, var2, arg6);
    if (var1 != 0 && !var2) {
        var7 = 0;
    }
    int var8 = (arg2 >= 0 && arg2 <= 3);
    if (var8 && var2) {
        if (var3 == 0) arg0->unknown_72_ = 1;
    }
    func_ov024_021e8bf0(arg0, arg0->unknown_c_, &var7);
    func_ov000_0215a88c(arg0->unknown_10_, var6, var7);
    func_ov000_0215cd44(arg0->unknown_10_, var6, var0, 0, var1, arg0->unknown_c_->unknown_1c_7_ != 0);
    return var6;
}
