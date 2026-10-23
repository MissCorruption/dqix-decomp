#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a004(void* arg0, int arg1, int arg2, int arg3, void* arg4, int arg5, int arg6, int arg7);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);
extern "C" void func_ov000_0215fe84(void* arg0, void* arg1, int arg2);

struct Struct_ov024_021e5af8 { char unknown_0_[8]; void* unknown_8_; char unknown_c_[4]; void* unknown_10_; };

// USA: func_ov024_021e5af8
extern "C" ARM void func_ov024_021e5af8(struct Struct_ov024_021e5af8* arg0, int arg1, int arg2) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg1);
    if (!var0) return;
    void* var1 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var1) return;
    union { struct { int unknown1_0_; int unknown_4_; }; unsigned long long unknown_0_; } var2;
    var2.unknown1_0_ = 0;
    var2.unknown_4_ = 0;
    func_ov000_0215a004(arg0->unknown_10_, arg1, arg1, 0xffff, &var2, arg2, 0, 0x10);
    var2.unknown1_0_ = 0;
    var2.unknown_4_ = 0;
    func_ov000_02159eac(arg0->unknown_10_, &var2, 13);
    func_ov000_0215a88c(arg0->unknown_10_, var1, 0x117);
    func_ov000_0215cd44(arg0->unknown_10_, var1, var0, 0, var2.unknown_0_, 0);
    func_ov000_0215fe84(arg0->unknown_8_, var1, 2);
    ((unsigned char*)arg0->unknown_10_)[0x8e02]++;
}
