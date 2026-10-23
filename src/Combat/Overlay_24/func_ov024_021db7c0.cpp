#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_02087860;
struct Struct_020878b4;
struct Struct_ov024_021db7c0_2;
struct Struct_ov024_021db7c0_3;

extern "C" unsigned long long func_ov024_021e4b14(struct Struct_ov024_021db7c0_2* arg0, int arg1, int arg2, struct Struct_ov024_021db7c0_3* arg3, int arg4);
extern "C" int func_02087860(Struct_02087860*, unsigned char);
extern "C" int func_020878b4(struct Struct_020878b4* arg0, int arg1);
void UpdateCombatantDefense(int unused, int combatantId);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" unsigned short func_ov024_021e95d4(struct Struct_ov024_021db7c0_2* arg0, int arg1, struct Struct_ov024_021db7c0_3* arg2, unsigned char arg3, signed char arg4, int arg5, unsigned char arg6);
extern "C" void func_ov024_021e8bf0(void* arg0, void* arg1, unsigned short* arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);

struct Struct_ov024_021db7c0 {
    unsigned char unknown_0_0_ : 7;
    unsigned char unknown_0_7_ : 1;
};

struct Struct_ov024_021db7c0_2 {
    char unknown_0_[0xc];
    void* unknown_c_;
    void* unknown_10_;
    char unknown_14_[0x73 - 0x14];
    unsigned char unknown_73_;
    char unknown_74_;
    unsigned char unknown_75_;
};

struct Struct_ov024_021db7c0_3 {
    char unknown_0_[0x30];
    short unknown_30_;
};

static inline int inline_ov000_02169850(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov024_021db7c0
extern "C" ARM void* func_ov024_021db7c0(struct Struct_ov024_021db7c0_2* arg0, short arg1, int arg2, struct Struct_ov024_021db7c0_3* arg3, int arg4, int arg5, unsigned char arg6) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    unsigned long long var1 = 0;
    int var2 = 0;
    int var3 = 0;
    int var4 = arg3->unknown_30_;
    int var5 = 0;
    if (var4 < -2) var4 = -2;
    if (var4 > 2) var4 = 2;
    if (var4 < 0) var3 = 1;
    if (arg6) {
        var1 = func_ov024_021e4b14(arg0, arg1, arg2, arg3, 1);
        if (func_02087860((struct Struct_02087860*)var0->currentStats_, var3)) {
            var5 = func_020878b4((struct Struct_020878b4*)var0->currentStats_, (signed char)var4);
            UpdateCombatantDefense((int)arg0->unknown_10_, arg2);
            var2 = 1;
        } else {
            arg0->unknown_75_ = 0;
        }
    } else {
        arg0->unknown_75_ = 0;
    }
    void* var6 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var6) return 0;
    unsigned short var7 = func_ov024_021e95d4(arg0, arg2, arg3, var3, var5, var2, arg6);
    if (var1 != 0 && !var2) {
        var7 = 0;
    }
    if (inline_ov000_02169850(arg2) && var2) {
        if (!var3) arg0->unknown_73_ = 1;
    }
    func_ov024_021e8bf0(arg0, arg0->unknown_c_, &var7);
    func_ov000_0215a88c(arg0->unknown_10_, var6, var7);
    struct Struct_ov024_021db7c0* var8 = (struct Struct_ov024_021db7c0*)((char*)arg0->unknown_c_ + 0x1c);
    func_ov000_0215cd44(arg0->unknown_10_, var6, var0, 0, var1, var8->unknown_0_7_ != 0);
    return var6;
}
