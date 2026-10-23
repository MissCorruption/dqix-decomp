#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov000_021584e8;
struct Struct_ov024_021e56c0 { int unknown_0_; int unknown_4_; };

extern "C" short func_ov000_0215a1d4(void* arg0, int arg1, int arg2, short* arg3);
extern "C" struct Struct_ov000_021584e8* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_02159eac(void* arg0, struct Struct_ov024_021e56c0* arg1, int arg2);
extern "C" void func_ov000_0215ccbc(
    int arg0, struct Struct_ov000_021584e8* arg1, GameObject* arg2, short arg3, short arg4, short arg5,
    struct Struct_ov024_021e56c0 arg6, unsigned char arg7);
extern "C" void func_ov000_0215fe84(void* arg0, void* arg1, int arg2);

struct Struct_ov024_021e56c0_2 { char unknown_0_[0x24]; short unknown_24_; };
struct Struct_ov024_021e56c0_3 {
    char unknown_0_[8];
    struct Struct_ov024_021e56c0_2* unknown_8_;
    char unknown_c_[4];
    void* unknown_10_;
};

// USA: func_ov024_021e56c0
extern "C" ARM void func_ov024_021e56c0(struct Struct_ov024_021e56c0_3* arg0, int arg1, int arg2, int arg3) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg1);
    if (!var0) return;
    int var1 = arg3 >> 3;
    if (var1 <= 0) return;
    short var2 = 0;
    short var3 = func_ov000_0215a1d4(arg0->unknown_10_, arg1, var1, &var2);
    arg0->unknown_8_->unknown_24_ = var3;
    struct Struct_ov000_021584e8* var4 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var4) return;
    func_ov000_0215a88c(arg0->unknown_10_, var4, 0x214);
    struct Struct_ov024_021e56c0 var5;
    var5.unknown_0_ = 0;
    var5.unknown_4_ = 0;
    func_ov000_02159eac(arg0->unknown_10_, &var5, 0x22);
    func_ov000_0215ccbc((int)arg0->unknown_10_, var4, var0, -var1,
        var0->currentStats_->primaryStats.currHP, var3, var5, 0);
    func_ov000_0215fe84(arg0->unknown_8_, var4, 2);
    ((unsigned char*)arg0->unknown_10_)[0x8e02]++;
}
