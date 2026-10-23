#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov000_021584e8;
struct Struct_ov024_021e0bf4 { int unknown_0_; int unknown_4_; };

extern "C" short func_ov000_0215a124(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_02159eac(void* arg0, struct Struct_ov024_021e0bf4* arg1, int arg2);
extern "C" struct Struct_ov000_021584e8* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215ccbc(
    int arg0, struct Struct_ov000_021584e8* arg1, GameObject* arg2, short arg3, short arg4, short arg5,
    struct Struct_ov024_021e0bf4 arg6, unsigned char arg7);

struct Struct_ov024_021e0bf4_2 { char unknown_0_[0x1c]; unsigned char unknown_1c_0_ : 7; unsigned char unknown_1c_7_ : 1; };
struct Struct_ov024_021e0bf4_3 {
    char unknown_0_[0xc];
    struct Struct_ov024_021e0bf4_2* unknown_c_;
    void* unknown_10_;
    int unknown_14_;
};

// USA: func_ov024_021e0bf4
extern "C" ARM struct Struct_ov000_021584e8* func_ov024_021e0bf4(struct Struct_ov024_021e0bf4_3* arg0, int arg1, int arg2, int arg3, int arg4) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    if (var0->currentStats_->primaryStats.currMP < arg4) arg4 = var0->currentStats_->primaryStats.currMP;
    short var1 = func_ov000_0215a124(arg0->unknown_10_, arg2, arg4);
    struct Struct_ov024_021e0bf4 var2;
    var2.unknown_0_ = 0;
    var2.unknown_4_ = 0;
    if (arg4 > 0) {
        func_ov000_02159eac(arg0->unknown_10_, &var2, 1);
        func_ov000_02159eac(arg0->unknown_10_, &var2, 0x2a);
    }
    if (arg4 > 0) arg0->unknown_14_++;
    struct Struct_ov000_021584e8* var3 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var3) return 0;
    unsigned short var4 = var0->currentStats_->primaryStats.currHP;
    unsigned char var5;
    if (arg0->unknown_c_->unknown_1c_7_) var5 = 1; else var5 = 0;
    func_ov000_0215ccbc((int)arg0->unknown_10_, var3, var0, arg4, var4, var1, var2, var5);
    return var3;
}
