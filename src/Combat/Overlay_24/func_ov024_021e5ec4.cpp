#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_020881c4(unsigned char* arg0);
extern "C" void func_02088150(void* arg0);
extern "C" void func_02088220(void*, int);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);
extern "C" void func_ov000_0215fe84(void* arg0, void* arg1, int arg2);

struct Struct_ov024_021e5ec4 { char unknown_0_[0x2d]; unsigned char unknown_2d_; };
struct Struct_ov024_021e5ec4_2 { char unknown_0_[8]; struct Struct_ov024_021e5ec4* unknown_8_; char unknown_c_[4]; unsigned char* unknown_10_; };
struct Struct_ov024_021e5ec4_3 { char unknown_0_[0x24]; unsigned char unknown_24_; };

// USA: func_ov024_021e5ec4
extern "C" ARM void func_ov024_021e5ec4(struct Struct_ov024_021e5ec4_2* arg0, int arg1) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg1);
    if (!var0) return;
    if (!func_020881c4((unsigned char*)var0->currentStats_)) return;

    int var1;
    int var2 = 0;
    var1 = ((struct Struct_ov024_021e5ec4_3*)var0->currentStats_)->unknown_24_;
    switch (var1 + 1) {
    case 1: var2 = 0x31; break;
    case 2: var2 = 0x32; break;
    case 3: var2 = 0x33; break;
    case 4: var2 = 0x34; break;
    }

    void* var3 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var3) return;
    union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var4;
    var4.unknown_0_ = 0;
    var4.unknown_4_ = 0;
    if (var1 + 1 >= 4) {
        func_02088150(var0->currentStats_);
        func_ov000_02159eac(arg0->unknown_10_, &var4, 7);
        func_ov000_0215cd44(arg0->unknown_10_, var3, var0, 0, var4.unknown1_0_, 0);
        func_ov000_0215fe84(arg0->unknown_8_, var3, 2);
        arg0->unknown_10_[0x8e02]++;
        arg0->unknown_8_->unknown_2d_ = 1;
    } else {
        func_02088220(var0->currentStats_, var1 + 1);
        func_ov000_02159eac(arg0->unknown_10_, &var4, 0x23);
        func_ov000_0215cd44(arg0->unknown_10_, var3, var0, (short)(var1 + 1), var4.unknown1_0_, 0);
        func_ov000_0215fe84(arg0->unknown_8_, var3, 2);
        arg0->unknown_10_[0x8e02]++;
    }
    func_ov000_0215a88c(arg0->unknown_10_, var3, (unsigned short)var2);
}
